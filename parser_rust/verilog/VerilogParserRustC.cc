// ***************************************************************************************
// Copyright (c) 2023-2025 Peng Cheng Laboratory
// Copyright (c) 2023-2025 Institute of Computing Technology, Chinese Academy of Sciences 
// Copyright (c) 2023-2025 Beijing Institute of Open Source Chip
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
 * @file VerilogParserRustC.hh
 * @author shy long (longshy@pcl.ac.cn)
 * @brief The VerilogParser Rust C API.
 * @version 0.1
 * @date 2023-10-30
 *
 */
#include "VerilogParserRustC.hh"

#include "log/Log.hh"

namespace ieda {

/**
 * @brief Read the verilog file use rust parser.
 *
 * @return unsigned
 */

unsigned RustVerilogReader::readVerilog(const char* verilog_file) {
  unsigned is_ok = 1;
  LOG_INFO << "load verilog file " << verilog_file;
  // generate1
  auto* verilog_result = rust_parse_verilog(verilog_file);

  return is_ok;
}

}  // namespace ieda