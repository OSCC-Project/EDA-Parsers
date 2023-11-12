// ***************************************************************************************
// Copyright (c) 2023-2025 Peng Cheng Laboratory
// Copyright (c) 2023-2025 Institute of Computing Technology, Chinese Academy of Sciences
// Copyright (c) 2023-2025 Beijing Institute of Open Source Chip
//
// iMAP-FPGA is licensed under Mulan PSL v2.
// You can use this software according to the terms and conditions of the Mulan PSL v2.
// You may obtain a copy of Mulan PSL v2 at:
// http://license.coscl.org.cn/MulanPSL2
//
// THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
// EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
// MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
//
// See the Mulan PSL v2 for more details.
// ***************************************************************************************
mod liberty_parser;

fn main() {
    let lib_file_str =
        "/home/taosimin/iEDA/src/database/manager/parser/liberty/lib-rust/liberty-parser/example/example1_slow.lib";
    let lib_file = liberty_parser::parse_lib_file(lib_file_str);
    if let liberty_parser::liberty_data::LibertyParserData::GroupStmt(liberty_group) = lib_file.unwrap() {
        println!("parse lib {} {} success.", liberty_group.get_group_name(), liberty_group.get_attri_name());
    } else {
        println!("parse file failed.");
    }
}
