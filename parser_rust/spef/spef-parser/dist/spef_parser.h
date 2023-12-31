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
/*
Gutengerg Post Parser, the C bindings.

Warning, this file is autogenerated by `cbindgen`.
Do not modify this manually.

*/

#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct SpefConnEntry SpefConnEntry;

/**
 * Spef Exchange data structure with cpp
 */
typedef struct SpefExchange SpefExchange;

/**
 * Store everthing about a net
 * Conn entry example: 3 *1:2 0.000520945
 * name: "1:2"
 * direction: ConnectionType::INPUT
 * coordinate: (633.84, 0.242)
 * driving_cell: "sky130_fd_sc_hd__dfxtp_1"
 */
typedef struct SpefNet SpefNet;

typedef struct SpefResCap SpefResCap;

void free_c_char(char *s);

void *rust_parser_spef(const char *spef_path);

void *rust_covert_spef_file(struct SpefExchange *c_spef_data);

void *rust_convert_spef_net(struct SpefNet *c_spef_net);

void *rust_convert_spef_conn(struct SpefConnEntry *c_spef_net);

void *rust_convert_spef_net_cap_res(struct SpefResCap *c_spef_net_cap_res);

char *rust_expand_name(struct SpefExchange *c_spef_data, uintptr_t index);

void rust_expand_all_name(struct SpefExchange *c_spef_data);

char *rust_get_spef_cap_unit(struct SpefExchange *c_spef_data);

char *rust_get_spef_res_unit(struct SpefExchange *c_spef_data);
