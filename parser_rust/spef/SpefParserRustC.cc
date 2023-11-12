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
#include "SpefParserRustC.hh"

#include <cstring>
#include <iostream>

namespace ieda {

/**
 * @brief read spef file.
 *
 * @param file_path
 * @return true
 * @return false
 */
bool RustSpefReader::read(std::string file_path) {
  _rust_spef_file = rust_parser_spef(file_path.c_str());
  _spef_file =
      static_cast<RustSpefFile*>(rust_covert_spef_file(_rust_spef_file));
  return true;
}

}  // namespace ieda