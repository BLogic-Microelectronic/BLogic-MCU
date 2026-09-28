// SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
// SPDX-License-Identifier: GPL-3.0-only
// Licensed under the GNU General Public License version 3 only.
// See the LICENSE file in the repository root for the full license text.

// ============================================
// Ostim BLogic Mikroelektronik
// sram_macro_bank.sv  -  sky130 SRAM makro bankasi (1rw1r, 32-bit)
// ============================================
// axi_sram_wrapper'in ASIC yolunda kullanilir. WORDS 512'nin kati olmalidir
// (256 ozel durumu tek 32x256 makroyla karsilanir).
//
// Makro arayuzu (OpenRAM / sky130_sram_*_1rw1r_*):
//   Port0 (RW): clk0 csb0 web0 wmask0 addr0 din0 dout0
//   Port1 (R):  clk1 csb1 addr1 dout1
//   csb/web aktif-dusuk. Okuma senkron: addr T aninda -> dout T+1'de.
`timescale 1ns / 1ps

module sram_macro_bank #(
    parameter int unsigned WORDS = 2048
)(
    input  logic                        clk_i,
    // yazma portu (port0)
    input  logic                        we_i,
    input  logic [$clog2(WORDS)-1:0]    waddr_i,
    input  logic [3:0]                  wmask_i,
    input  logic [31:0]                 wdata_i,
    // okuma portu (port1) - dout bir cevrim sonra gecerli
    input  logic                        re_i,
    input  logic [$clog2(WORDS)-1:0]    raddr_i,
    output logic [31:0]                 rdata_o
);

    localparam int unsigned BANK_WORDS = (WORDS >= 512) ? 512 : 256;
    localparam int unsigned NUM_BANKS  = WORDS / BANK_WORDS;
    localparam int unsigned BANK_AW    = $clog2(BANK_WORDS);
    localparam int unsigned SEL_W      = (NUM_BANKS > 1) ? $clog2(NUM_BANKS) : 1;

    // synthesis translate_off
    initial begin
        if (WORDS % BANK_WORDS != 0)
            $error("sram_macro_bank: WORDS=%0d banka boyutuna (%0d) tam bolunmuyor",
                   WORDS, BANK_WORDS);
    end
    // synthesis translate_on

    logic [SEL_W-1:0]    wsel, rsel;
    logic [BANK_AW-1:0]  woff, roff;

    if (NUM_BANKS > 1) begin : gen_sel
        assign wsel = waddr_i[BANK_AW+SEL_W-1:BANK_AW];
        assign rsel = raddr_i[BANK_AW+SEL_W-1:BANK_AW];
    end else begin : gen_nosel
        assign wsel = '0;
        assign rsel = '0;
    end
    assign woff = waddr_i[BANK_AW-1:0];
    assign roff = raddr_i[BANK_AW-1:0];

    // Okuma verisi bir cevrim sonra geldigi icin banka secimi de kaydedilir.
    logic [SEL_W-1:0] rsel_q;
    always_ff @(posedge clk_i) begin
        if (re_i) rsel_q <= rsel;
    end

    logic [31:0] dout [NUM_BANKS];

    for (genvar b = 0; b < NUM_BANKS; b++) begin : gen_bank
        logic csb0, web0, csb1;
        assign csb0 = !(we_i && (wsel == SEL_W'(b)));   // aktif-dusuk
        assign web0 = 1'b0;                             // port0 yalniz yazma icin secilir
        assign csb1 = !(re_i && (rsel == SEL_W'(b)));

        if (BANK_WORDS == 512) begin : gen_512
            sky130_sram_2kbyte_1rw1r_32x512_8 u_macro (
                .clk0 (clk_i), .csb0 (csb0), .web0 (web0),
                .wmask0(wmask_i), .addr0(woff), .din0(wdata_i), .dout0(),
                .clk1 (clk_i), .csb1 (csb1), .addr1(roff), .dout1(dout[b])
            );
        end else begin : gen_256
            sky130_sram_1kbyte_1rw1r_32x256_8 u_macro (
                .clk0 (clk_i), .csb0 (csb0), .web0 (web0),
                .wmask0(wmask_i), .addr0(woff), .din0(wdata_i), .dout0(),
                .clk1 (clk_i), .csb1 (csb1), .addr1(roff), .dout1(dout[b])
            );
        end
    end

    assign rdata_o = dout[rsel_q];

endmodule
