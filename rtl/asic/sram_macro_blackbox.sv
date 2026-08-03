// ============================================
// Ostim BLogic Mikroelektronik
// sram_macro_blackbox.sv  -  sky130 SRAM makro blackbox tanimlari
// ============================================
// PDK'daki davranissal modeller Verilog-95 tarzidir (mem tanimdan once
// kullanilir) ve slang bunlari reddeder. Sentez/PnR icin icerik gerekmez:
// zamanlama .lib'ten, fiziksel gorunum .lef/.gds'ten gelir. Bu dosya yalnizca
// port sozlesmesini tanimlar. Simulasyon davranissal SRAM yolunu kullanir
// (ASIC_SRAM_MACRO tanimsizken), bu nedenle model dosyalarina ihtiyac yoktur.
`timescale 1ns / 1ps

(* blackbox *)
module sky130_sram_2kbyte_1rw1r_32x512_8 (
    input  logic        clk0,
    input  logic        csb0,      // aktif-dusuk chip select
    input  logic        web0,      // aktif-dusuk write enable
    input  logic [3:0]  wmask0,
    input  logic [8:0]  addr0,
    input  logic [31:0] din0,
    output logic [31:0] dout0,
    input  logic        clk1,
    input  logic        csb1,
    input  logic [8:0]  addr1,
    output logic [31:0] dout1
);
endmodule

(* blackbox *)
module sky130_sram_1kbyte_1rw1r_32x256_8 (
    input  logic        clk0,
    input  logic        csb0,
    input  logic        web0,
    input  logic [3:0]  wmask0,
    input  logic [7:0]  addr0,
    input  logic [31:0] din0,
    output logic [31:0] dout0,
    input  logic        clk1,
    input  logic        csb1,
    input  logic [7:0]  addr1,
    output logic [31:0] dout1
);
endmodule

// 7 koseli varyant (FF/SS/TT 1p7-1p9V, 0-100C) - conv_w_mem icin secildi
(* blackbox *)
module sram_1rw1r_32_256_8_sky130 (
    input  logic        clk0,
    input  logic        csb0,
    input  logic        web0,
    input  logic [3:0]  wmask0,
    input  logic [7:0]  addr0,
    input  logic [31:0] din0,
    output logic [31:0] dout0,
    input  logic        clk1,
    input  logic        csb1,
    input  logic [7:0]  addr1,
    output logic [31:0] dout1
);
endmodule
