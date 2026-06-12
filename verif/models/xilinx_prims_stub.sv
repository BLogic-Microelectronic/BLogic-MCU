`timescale 1ns / 1ps
// ============================================================
// Xilinx 7-Serisi Primitive Stub'ları (yalnız LINT/SIM amaçlı)
// ============================================================
// fpga_top.sv'yi Verilator ile lint/simüle edebilmek için davranışsal
// taklitler. SENTEZDE KULLANILMAZ — Vivado gerçek primitive'leri
// unisim'den alır. soc_files.f'e EKLENMEZ; yalnız fpga_top lint
// komutunda elle verilir:
//   $ verilator --lint-only rtl/fpga_top.sv \
//         verif/models/xilinx_prims_stub.sv -f soc_files.f --top-module fpga_top
// ============================================================

module IBUFDS (
    input  wire I,
    input  wire IB,
    output wire O
);
    assign O = I;
    wire unused = IB;
endmodule

module BUFG (
    input  wire I,
    output wire O
);
    assign O = I;
endmodule

module MMCME2_BASE #(
    parameter        BANDWIDTH          = "OPTIMIZED",
    parameter real   CLKIN1_PERIOD      = 0.0,
    parameter int    DIVCLK_DIVIDE      = 1,
    parameter real   CLKFBOUT_MULT_F    = 5.0,
    parameter real   CLKFBOUT_PHASE     = 0.0,
    parameter real   CLKOUT0_DIVIDE_F   = 1.0,
    parameter real   CLKOUT0_DUTY_CYCLE = 0.5,
    parameter real   CLKOUT0_PHASE      = 0.0,
    parameter real   REF_JITTER1        = 0.0,
    parameter        STARTUP_WAIT       = "FALSE"
)(
    input  wire CLKIN1,
    input  wire CLKFBIN,
    output wire CLKFBOUT,
    output wire CLKFBOUTB,
    output wire CLKOUT0,
    output wire CLKOUT0B,
    output wire CLKOUT1,
    output wire CLKOUT1B,
    output wire CLKOUT2,
    output wire CLKOUT2B,
    output wire CLKOUT3,
    output wire CLKOUT3B,
    output wire CLKOUT4,
    output wire CLKOUT5,
    output wire CLKOUT6,
    output wire LOCKED,
    input  wire PWRDWN,
    input  wire RST
);
    // Davranışsal: giriş saatini aynen geçir (frekans bölme simüle edilmez),
    // LOCKED reset yokken '1'. CLKFBOUT sabit sürülür — gerçek donanımda
    // CLKFBOUT→CLKFBIN dışarıdan kısa devre edilir; stub'da aynısı yapılsa
    // kombinasyonel döngü (x=x) oluşurdu.
    assign CLKOUT0  = CLKIN1;
    assign CLKFBOUT = 1'b0;
    assign LOCKED   = ~RST & ~PWRDWN;
    wire   unused_fb = CLKFBIN;
    assign {CLKFBOUTB, CLKOUT0B, CLKOUT1, CLKOUT1B, CLKOUT2, CLKOUT2B,
            CLKOUT3, CLKOUT3B, CLKOUT4, CLKOUT5, CLKOUT6} = '0;
endmodule

module STARTUPE2 #(
    parameter      PROG_USR      = "FALSE",
    parameter real SIM_CCLK_FREQ = 0.0
)(
    output wire CFGCLK,
    output wire CFGMCLK,
    output wire EOS,
    output wire PREQ,
    input  wire CLK,
    input  wire GSR,
    input  wire GTS,
    input  wire KEYCLEARB,
    input  wire PACK,
    input  wire USRCCLKO,
    input  wire USRCCLKTS,
    input  wire USRDONEO,
    input  wire USRDONETS
);
    assign CFGCLK  = 1'b0;
    assign CFGMCLK = 1'b0;
    assign EOS     = 1'b1;
    assign PREQ    = 1'b0;
    wire unused = CLK & GSR & GTS & KEYCLEARB & PACK &
                  USRCCLKO & USRCCLKTS & USRDONEO & USRDONETS;
endmodule
