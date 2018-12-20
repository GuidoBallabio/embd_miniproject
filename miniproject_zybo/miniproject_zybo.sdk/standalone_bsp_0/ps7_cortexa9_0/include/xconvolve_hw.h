// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

// conv
// 0x0000 : Control signals
//          bit 0  - ap_start (Read/Write/COH)
//          bit 1  - ap_done (Read/COR)
//          bit 2  - ap_idle (Read)
//          bit 3  - ap_ready (Read)
//          bit 7  - auto_restart (Read/Write)
//          others - reserved
// 0x0004 : Global Interrupt Enable Register
//          bit 0  - Global Interrupt Enable (Read/Write)
//          others - reserved
// 0x0008 : IP Interrupt Enable Register (Read/Write)
//          bit 0  - Channel 0 (ap_done)
//          bit 1  - Channel 1 (ap_ready)
//          others - reserved
// 0x000c : IP Interrupt Status Register (Read/TOW)
//          bit 0  - Channel 0 (ap_done)
//          bit 1  - Channel 1 (ap_ready)
//          others - reserved
// 0x2000 ~
// 0x3fff : Memory 'in_r' (2500 * 16b)
//          Word n : bit [15: 0] - in_r[2n]
//                   bit [31:16] - in_r[2n+1]
// 0x4000 ~
// 0x5fff : Memory 'out_r' (2500 * 16b)
//          Word n : bit [15: 0] - out_r[2n]
//                   bit [31:16] - out_r[2n+1]
// 0x6000 ~
// 0x600f : Memory 'krnl' (9 * 8b)
//          Word n : bit [ 7: 0] - krnl[4n]
//                   bit [15: 8] - krnl[4n+1]
//                   bit [23:16] - krnl[4n+2]
//                   bit [31:24] - krnl[4n+3]
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XCONVOLVE_CONV_ADDR_AP_CTRL    0x0000
#define XCONVOLVE_CONV_ADDR_GIE        0x0004
#define XCONVOLVE_CONV_ADDR_IER        0x0008
#define XCONVOLVE_CONV_ADDR_ISR        0x000c
#define XCONVOLVE_CONV_ADDR_IN_R_BASE  0x2000
#define XCONVOLVE_CONV_ADDR_IN_R_HIGH  0x3fff
#define XCONVOLVE_CONV_WIDTH_IN_R      16
#define XCONVOLVE_CONV_DEPTH_IN_R      2500
#define XCONVOLVE_CONV_ADDR_OUT_R_BASE 0x4000
#define XCONVOLVE_CONV_ADDR_OUT_R_HIGH 0x5fff
#define XCONVOLVE_CONV_WIDTH_OUT_R     16
#define XCONVOLVE_CONV_DEPTH_OUT_R     2500
#define XCONVOLVE_CONV_ADDR_KRNL_BASE  0x6000
#define XCONVOLVE_CONV_ADDR_KRNL_HIGH  0x600f
#define XCONVOLVE_CONV_WIDTH_KRNL      8
#define XCONVOLVE_CONV_DEPTH_KRNL      9

