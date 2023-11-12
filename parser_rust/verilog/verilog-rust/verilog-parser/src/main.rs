// ***************************************************************************************
// Copyright (c) 2023-2025 Peng Cheng Laboratory
// Copyright (c) 2023-2025 Shanghai Anlogic Infotech Co.,Ltd.
// Copyright (c) 2023-2025 Peking University
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
mod verilog_parser;
use std::time::{Instant, Duration};

fn main() {
    let start_time = Instant::now();

    let verilog_file_str =
        // "/home/longshuaiying/iEDA/src/database/manager/parser/verilog/verilog-rust/verilog-parser/example/example1.v";
        // "/home/longshuaiying/iEDA/src/database/manager/parser/verilog/verilog-rust/verilog-parser/example/asic_top_DC_downsize.v";
        "/home/longshuaiying/iEDA/src/database/manager/parser/verilog/verilog-rust/verilog-parser/example/asic_top_flatten.v";
    let verilog_module = verilog_parser::parse_verilog_file(verilog_file_str);
    println!("{:#?}", verilog_module);

    let end_time = Instant::now();
    let elapsed_time = end_time.duration_since(start_time);
    let elapsed_s = elapsed_time.as_secs();

    println!("Program execution time (milliseconds): {} s", elapsed_s);

}
