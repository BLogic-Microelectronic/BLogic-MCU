// SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
// SPDX-License-Identifier: GPL-3.0-only
// Licensed under the GNU General Public License version 3 only.
// See the LICENSE file in the repository root for the full license text.

// ============================================
// Ostim BLogic Mikroelektronik
// ai_side_if.sv  -  YZ hizlandirici UVM yan kanal arayuzu
//
// AXI-Lite CSR trafigi axi_lite_if + ortak agent ile surulur. Hizlandiricinin
// AXI-Lite disindaki davranisi (irq_o, busy_o ve AXI4 master portunun bellege
// yaptigi erisimler) testlere bu arayuzle tasinir. Sinyalleri tb_ai_top'taki
// AXI4 slave bellek modeli ve DONE kenari denetcisi surer; UVM testi yalniz okur.
// ============================================
`timescale 1ns/1ns

interface ai_side_if (input logic clk);

    logic        irq;               // irq_o (= STATUS.DONE)
    logic        busy;              // busy_o (= STATUS.BUSY)

    // AXI4 master gozlemleri
    logic [31:0] last_wr_addr;      // DUT'un bellege son yazdigi adres
    logic [31:0] last_wr_data;      //   ve verisi (cikarim sonunda: sonuc sozcugu)
    int unsigned rd_beats;          // toplam okuma / yazma sozcugu
    int unsigned wr_beats;
    int unsigned axi4_errs;         // len/size/burst/wlast sozlesmesi ihlali
    int unsigned oob_errs;          // bellek modeli penceresi disina erisim

    // DONE yukselen kenarinda TB'nin yaptigi denetimler
    int unsigned done_count;        // tamamlanan cikarim sayisi
    int          conv_errors;       // conv_out (1000 sozcuk) altin model farki
    int unsigned expected_argmax;   // output_yes_real.hex'ten (TFLite INT8 referansi)

endinterface
