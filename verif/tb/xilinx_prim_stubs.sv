// SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
// SPDX-License-Identifier: GPL-3.0-only
// Licensed under the GNU General Public License version 3 only.
// See the LICENSE file in the repository root for the full license text.

// ============================================
// Ostim BLogic Mikroelektronik
// xilinx_prim_stubs.sv  -  Xilinx primitif kabuklari (YALNIZ LINT)
// ============================================
// JTAG debug altsistemi (teslim bitstream'inde ACIK), test boslugu G-13.
// `make lint-fpga` fpga_top'u teslim tanimlariyla (soc_files.f) Verilator
// lint'inden gecirir.
// fpga_top Vivado primitiflerini dogrudan ornekler (IBUFDS, MMCME2_BASE, BUFG,
// STARTUPE2) ve FPGA TAP'i (dmi_bscane_tap.sv) BSCANE2 kullanir. Verilator bu
// kutuphaneyi tanimadigi icin burada BOS kabuklar verilir: yalnizca port/
// parametre imzalari dogrudur, davranis YOKTUR.
//
// DIKKAT: Bu dosya hicbir sentez akisina (Vivado, LibreLane, yosys) girmez ve
// hicbir simulasyon hedefinde derlenmez; yalnizca lint-fpga komut satirinda
// gecer. Gercek primitifler Vivado kutuphanesinden gelir.
`timescale 1ns / 1ps

module IBUFDS (
    input  logic I,
    input  logic IB,
    output logic O
);
    assign O = I;
endmodule

module BUFG (
    input  logic I,
    output logic O
);
    assign O = I;
endmodule

module MMCME2_BASE #(
    parameter        BANDWIDTH          = "OPTIMIZED",
    parameter real   CLKIN1_PERIOD      = 0.000,
    parameter int    DIVCLK_DIVIDE      = 1,
    parameter real   CLKFBOUT_MULT_F    = 5.000,
    parameter real   CLKFBOUT_PHASE     = 0.0,
    parameter real   CLKOUT0_DIVIDE_F   = 1.000,
    parameter real   CLKOUT0_DUTY_CYCLE = 0.5,
    parameter real   CLKOUT0_PHASE      = 0.0,
    parameter real   REF_JITTER1        = 0.010,
    parameter        STARTUP_WAIT       = "FALSE"
)(
    input  logic CLKIN1,
    input  logic CLKFBIN,
    input  logic PWRDWN,
    input  logic RST,
    output logic CLKFBOUT,
    output logic CLKFBOUTB,
    output logic CLKOUT0,
    output logic CLKOUT0B,
    output logic CLKOUT1,
    output logic CLKOUT1B,
    output logic CLKOUT2,
    output logic CLKOUT2B,
    output logic CLKOUT3,
    output logic CLKOUT3B,
    output logic CLKOUT4,
    output logic CLKOUT5,
    output logic CLKOUT6,
    output logic LOCKED
);
    assign CLKFBOUT  = CLKIN1;
    assign CLKFBOUTB = ~CLKIN1;
    assign CLKOUT0   = CLKIN1;
    assign CLKOUT0B  = ~CLKIN1;
    assign CLKOUT1   = 1'b0;
    assign CLKOUT1B  = 1'b0;
    assign CLKOUT2   = 1'b0;
    assign CLKOUT2B  = 1'b0;
    assign CLKOUT3   = 1'b0;
    assign CLKOUT3B  = 1'b0;
    assign CLKOUT4   = 1'b0;
    assign CLKOUT5   = 1'b0;
    assign CLKOUT6   = 1'b0;
    assign LOCKED    = ~RST & ~PWRDWN & ~CLKFBIN | 1'b1;
endmodule

module STARTUPE2 #(
    parameter      PROG_USR      = "FALSE",
    parameter real SIM_CCLK_FREQ = 0.0
)(
    output logic CFGCLK,
    output logic CFGMCLK,
    output logic EOS,
    output logic PREQ,
    input  logic CLK,
    input  logic GSR,
    input  logic GTS,
    input  logic KEYCLEARB,
    input  logic PACK,
    input  logic USRCCLKO,
    input  logic USRCCLKTS,
    input  logic USRDONEO,
    input  logic USRDONETS
);
    assign CFGCLK  = 1'b0;
    assign CFGMCLK = 1'b0;
    assign EOS     = 1'b1;
    assign PREQ    = 1'b0;
endmodule

// FPGA TAP: dmi_bscane_tap.sv USER3 (dtmcs) ve USER4 (dmi) zincirlerini kullanir.
// Kabuk yalnizca imzayi saglar; SEL/SHIFT/UPDATE/CAPTURE hicbir zaman uyarilmaz.
module BSCANE2 #(
    parameter int JTAG_CHAIN = 1
)(
    output logic CAPTURE,
    output logic DRCK,
    output logic RESET,
    output logic RUNTEST,
    output logic SEL,
    output logic SHIFT,
    output logic TCK,
    output logic TDI,
    output logic TMS,
    output logic UPDATE,
    input  logic TDO
);
    assign CAPTURE = 1'b0;
    assign DRCK    = 1'b0;
    assign RESET   = 1'b0;
    assign RUNTEST = 1'b0;
    assign SEL     = 1'b0;
    assign SHIFT   = 1'b0;
    assign TCK     = 1'b0;
    assign TDI     = 1'b0;
    assign TMS     = 1'b0;
    assign UPDATE  = 1'b0;
endmodule
