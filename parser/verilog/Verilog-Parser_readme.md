

# Verilog-Parser

## C++ version

### 使用指南

#### 接口介绍

使用接口位于VerilogReader.hh中的VerilogReader类，面向用户的接口主要为4个：

```c++
// 读取.v文件，解析文件内容
bool read(const char* filename);
// 获取所有的verilog_modules
auto& get_verilog_modules() { return _verilog_modules; }
// 根据module_name获取指定的verilog_module
VerilogModule* findModule(const char* module_name);
// 根据顶层模块名top_module_name打平网表，得到平面化网表
VerilogModule* flattenModule(const char* top_module_name);
```

```c++
/**
 * @brief Verilog reader class.
 *
 */
class VerilogReader
{
 public:
  ...........................................................
  bool read(const char* filename);
  auto& get_verilog_modules() { return _verilog_modules; }
  VerilogModule* findModule(const char* module_name);
  VerilogModule* flattenModule(const char* module_name);
  ...........................................................

 private:
  std::vector<std::unique_ptr<VerilogModule>> _verilog_modules;
  std::map<std::string, VerilogModule*> _str2Module;

  std::string _file_name;    //!< The verilog file name.
  int _line_no = 1;          //!< The verilog file line no.
  std::string _string_buf;   //!< For flex record inner string.
  void* _scanner = nullptr;  //!< The flex scanner.
#ifdef ZLIB_FOUND
  gzFile _verilog_in = nullptr;  //!< The verilog file stream.
#endif
};
```

#### 接口使用示例

##### 1.读取.v文件，解析文件内容

```c++
const char* verilog_file = "example.v";
VerilogReader _verilog_reader;
_verilog_reader.read(verilog_file);
```

##### 2.打平网表，得到所有的verilog_modules

```c++
 _verilog_reader.flattenModule(top_cell_name);
 auto &verilog_modules = _verilog_reader.get_verilog_modules();
```

##### 3.在所有的verilog_modules获取顶层模块top_module

```c++
 _top_module = findModule(top_cell_name);
```

##### 4.从顶层模块top_module获取所有的module_stmts，遍历module_stmts，获取其内容，构建netlist

示例文件：example.v

```verilog
// module_stmts的类型是VerilogStmt(基类)，子类有VerilogModule(对应.v文件中的一个module)、
// VerilogDcls(对应一行port/wire的声明，即input in1, in2, clk1, clk2, clk3; 或者wire r1q, r2q, u1z, u2z;)
// VerilogInst(对应一行inst的声明，即DFF_X1 r2 (.D(in2), .CK(clk2), .Q(r2q));)
module top (in1, in2, clk1, clk2, clk3, out);
  input in1, in2, clk1, clk2, clk3;
  output [3:0] out;
  wire r1q, r2q, u1z, u2z;

  DFF_X1 r1 (.D(in1), .CK(clk1), .Q(r1q));
  DFF_X1 r2 (.D(in2), .CK(clk2), .Q(r2q));
  BUF_X1 u1 (.A(r2q), .Z(u1z));
  AND2_X1 u2 (.A1(r1q), .A2(u1z), .ZN(u2z));
  DFF_X1 r3 (.D(u2z), .CK(clk3), .Q(out[0]));
endmodule // top
```

从module_stmts获取其内容构建standard cell netlist过程如下：

```c++
auto &top_module_stmts = _top_module->get_module_stmts();
Netlist &design_netlist = _netlist;
design_netlist.set_name(_top_module->get_module_name());

for (auto &stmt : top_module_stmts) {
    if (stmt->isVerilogDclsStmt()) {
        auto *dcls_stmt = dynamic_cast<VerilogDcls *>(stmt.get());
        auto &dcls = dcls_stmt->get_verilog_dcls();
        for (auto &dcl_stmt : dcls) {
           // 根据dcl_stmt获取dcl_type(dcl_type的值包括：port(kInput,kOutput,kInout), wire(kWire)) 
           // (如“output [3:0] out;”中的"output")
           auto dcl_type = dcl_stmt->get_dcl_type();
           // 根据dcl_stmt获取dcl_name (如“output [3:0] out;”中的"out")
    	     const auto *dcl_name = dcl_stmt->get_dcl_name();
           // 根据dcl_stmt获取dcl_range (如“output [3:0] out;”中的"[3:0]")
           auto dcl_range = dcl_stmt->get_range();
      	}
    } else if (stmt->isModuleInstStmt()) {
      auto *inst_stmt = dynamic_cast<VerilogInst *>(stmt.get());
      // 根据inst_stmt获取std_cell_name
      // 如"DFF_X1 r1 (.D(in1), .CK(clk1), .Q(r1q));"中的"DFF_X1"
      const char *std_cell_name = inst_stmt->get_cell_name();
      // 根据inst_stmt获取inst_name
      // 如“DFF_X1 r1 (.D(in1), .CK(clk1), .Q(r1q));”中的"r1"
      const char *inst_name = inst_stmt->get_inst_name();
     
      auto &port_connections = inst_stmt->get_port_connections();
      // 遍历port_connections获取cell_port_name和net_name
      for (auto &port_connection : port_connections) {
          auto *cell_port_id = port_connection->get_port_id();
          auto *net_expr = port_connection->get_net_expr();
          
          // 根据cell_port_id获取cell_port_name
          // 如“DFF_X1 r1 (.D(in1), .CK(clk1), .Q(r1q));”中的"D"
          const char *cell_port_name = cell_port_id->getName();
          // 根据net_expr获取net_name
          // 如“DFF_X1 r1 (.D(in1), .CK(clk1), .Q(r1q));”中的"in1"
          auto *net_id = net_expr->get_verilog_id();
          std::string net_name = = net_id->getName();
      }
    }
    
}
```