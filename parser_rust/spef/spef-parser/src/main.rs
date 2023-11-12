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
mod spef_parser;

fn main() {
    let spef_file_str = "/home/taosimin/iEDA/src/database/manager/parser/spef/spef-parser/example/aes_simple.spef";
    // let spef_file_str = "/home/immelon/projects/iPD/src/database/manager/parser/spef/spef-parser/aes_simple.spef";
    // let spef_file_str = "/home/immelon/projects/scripts_test_ipd/nangate45_example.spef";
    // let spef_file_str = "/home/immelon/projects/scripts_test_ipd/skywater_aes_cipher_top.spef";
    spef_parser::parse_spef_file(spef_file_str);
    // match parse_result {
    //     Ok(spef_file) => {
    //         println!("Parsed {spef_file_str} successfully\n");
    //         println!("{spef_file:#?}");
    //     }
    //     Err(err) => {
    //         println!("Error when paring {spef_file_str}, {err}");
    //     },
    // }
}
