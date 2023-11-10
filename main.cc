// ***************************************************************************************
// Copyright (c) 2023-2025 Peng Cheng Laboratory
// Copyright (c) 2023-2025 Institute of Computing Technology, Chinese Academy of
// Sciences Copyright (c) 2023-2025 Beijing Institute of Open Source Chip
//
// iEDA is licensed under Mulan PSL v2.
// You can use this software according to the terms and conditions of the Mulan
// PSL v2. You may obtain a copy of Mulan PSL v2 at:
// http://license.coscl.org.cn/MulanPSL2
//
// THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY
// KIND, EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO
// NON-INFRINGEMENT, MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
//
// See the Mulan PSL v2 for more details.
// ***************************************************************************************
/**
 * @file main.cc
 * @author Xiaoze Lin (linxz@pcl.ac.cn)
 * @brief The main function of iEDA parsers.
 * @version 0.1
 * @date 2023-07-16
 */
#include <filesystem>
#include <iostream>
#include <string>

#ifndef USE_RUST
#include "liberty/Liberty.hh"
#include "spef/parser-spef.hpp"
#include "vcd/src/VCDFileParser.hpp"
#include "verilog/VerilogReader.hh"
#else
#include "liberty/Liberty.hh"
#include "spef/SpefParserRustC.hh"
#include "vcd/VcdParserRustC.hh"
#include "verilog/VerilogParserRustC.hh"

#endif  //  USE_RUST

using namespace ieda;

int main(int argc, char** argv) {
  Log::init(argv);

  std::cout << "\033[49;32mWELCOME TO iEDA-parser.\033[0m\n";

#ifndef USE_RUST

  std::string curr_path = std::filesystem::current_path();

  // parse verilog file
  VerilogReader verilog_reader;
  std::string verilog_file_path = curr_path + "/../testcase/netlist/s27_scan.v";
  LOG_INFO << "read verilog file start.";
  bool is_ok = verilog_reader.read(verilog_file_path.c_str());
  LOG_FATAL_IF(!is_ok) << "read verilog file " << verilog_file_path
                       << " failed.";
  LOG_INFO << "read verilog file end.";

  // parse vcd file
  VCDFileParser vcd_parser;
  std::string vcd_file_path = curr_path + "/../testcase/vcd/test.vcd";
  LOG_INFO << "read vcd file start.";
  auto* trace_file = vcd_parser.parse_file(vcd_file_path);
  LOG_FATAL_IF(!trace_file) << "read vcd file " << vcd_file_path << " failed.";
  LOG_INFO << "read vcd file end.";

  // parse liberty file
  Liberty lib_parser;
  std::string lib_file_path =
      curr_path +
      "/../testcase/lib/skywater130/sky130_fd_sc_hd__tt_025C_1v80.lib";
  LOG_INFO << "read liberty file start.";
  auto lib = lib_parser.loadLiberty(lib_file_path.c_str());
  LOG_FATAL_IF(!lib) << "read liberty file " << lib_file_path << " failed.";
  LOG_INFO << "read liberty file end.";

  // parse spef file
  Spef parser;
  std::string spef_file_path = curr_path + "/../testcase/spef/example.spef";
  LOG_INFO << "read spef file start.";
  is_ok = parser.read(spef_file_path);
  LOG_FATAL_IF(!is_ok) << "read spef file " << spef_file_path << " failed.";
  LOG_INFO << "read spef file end.";

#else
  std::string curr_path = std::filesystem::current_path();

  // parse vcd file
  RustVcdReader vcd_parser;
  std::string vcd_file_path = curr_path + "/../testcase/vcd/test.vcd";
  LOG_INFO << "read vcd file start.";
  auto* trace_file = vcd_parser.readVcdFile(vcd_file_path.c_str());
  LOG_FATAL_IF(!trace_file) << "read vcd file " << vcd_file_path << "failed.";
  LOG_INFO << " read vcd file end.";

  // parse liberty file
  Liberty lib_parser;
  std::string lib_file_path =
      curr_path +
      "/../testcase/lib/skywater130/sky130_fd_sc_hd__tt_025C_1v80.lib";
  LOG_INFO << "read liberty file start.";
  auto lib = lib_parser.loadLibertyWithRustParser(lib_file_path.c_str());
  LOG_FATAL_IF(!lib) << "read liberty file " << lib_file_path << " failed.";
  LOG_INFO << "read liberty file end.";

  // // parse spef file
  RustSpefReader parser;
  std::string spef_file_path = curr_path + "/../testcase/spef/example.spef";
  LOG_INFO << "read spef file start.";
  bool is_ok = parser.read(spef_file_path);
  LOG_FATAL_IF(!is_ok) << "read spef file " << spef_file_path << " failed.";
  LOG_INFO << "read spef file end.";

  // parse verilog file
  RustVerilogReader verilog_reader;
  std::string verilog_file_path = curr_path + "/../testcase/netlist/s27_scan.v";
  LOG_INFO << "read verilog file start.";
  is_ok = verilog_reader.readVerilog(verilog_file_path.c_str());
  LOG_FATAL_IF(!is_ok) << "read verilog file " << verilog_file_path
                       << " failed.";
  LOG_INFO << "read verilog file end.";

#endif

  Log::end();

  return 0;
}