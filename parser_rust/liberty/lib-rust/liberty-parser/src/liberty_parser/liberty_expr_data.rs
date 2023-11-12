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
use std::default::Default;

/// liberty expression operation.
#[repr(C)]
#[derive(Clone, Copy)]
pub enum LibertyExprOp {
    Buffer,
    Not,
    Or,
    And,
    Xor,
    One,
    Zero,
    Plus,
    Mult,
}

/// liberty expr.
#[repr(C)]
pub struct LibertyExpr {
    op: LibertyExprOp,
    left: Option<Box<LibertyExpr>>,
    right: Option<Box<LibertyExpr>>,
    port_name: Option<String>,
}

impl LibertyExpr {
    pub fn new(op: LibertyExprOp) -> Self {
        Self { op, left: Option::None, right: Option::None, port_name: Option::None }
    }

    pub fn get_op(&self) -> LibertyExprOp {
        self.op
    }

    pub fn set_port_name(&mut self, port_name: String) {
        self.port_name = Some(port_name);
    }
    pub fn get_port_name(&self) -> &Option<String> {
        return &self.port_name;
    }

    pub fn set_left(&mut self, left: Box<LibertyExpr>) {
        self.left = Some(left);
    }
    pub fn get_left(&self) -> &Option<Box<LibertyExpr>> {
        return &self.left;
    }

    pub fn set_right(&mut self, right: Box<LibertyExpr>) {
        self.right = Some(right);
    }
    pub fn get_right(&self) -> &Option<Box<LibertyExpr>> {
        return &self.right;
    }
}
