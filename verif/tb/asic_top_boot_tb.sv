// SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
// SPDX-License-Identifier: GPL-3.0-only
// Licensed under the GNU General Public License version 3 only.
// See the LICENSE file in the repository root for the full license text.

// ============================================
// Ostim BLogic Mikroelektronik
// asic_top_boot_tb.sv  -  GDS ust modulunun (asic_top) boot+YZ dogrulamasi
// ============================================
// boot_flow_test_tb'nin asic_top varyanti: DUT, GDS'e giden GERCEK ust
// modul olan asic_top'tur (soc_top degil). asic-top-sim hedefiyle
// ASIC_SRAM_MACRO + teslim edilen OpenRAM modelleri altinda kosturulur;
// boylece asic_top port baglantilari da yurutulerek dogrulanmis olur
// (LVS baglantiyi kanitlar ama davranisi kanitlamaz).
// Firmware conv_out bolgesini altin vektorle sagtoplam-karsilastirir VE
// (CHECK_ARGMAX; make asic-top-sim bunu her zaman tanimlar) FC argmax==2 ile
// sonuc word'unu dogrular: teslim RTL'inde FC1_FIX acik oldugundan FC de
// makro modelinin dout-X sozlesmesine uyar; bu PASS, FC-1 erratasinin
// duzeltildiginin kanitidir (negatif kontrol 6 Eylul 2026: FC1_FIX'siz
// RTL'de "AI ARGMAX BA" ile FAIL). CHECK_ARGMAX tanimsiz derlemede yalniz
// conv sagtoplami kontrol edilir (1 Eylul'deki tarihsel davranis; errata
// kaydi asic/README.md 9.5). JTAG_DEBUG'da TAP pinleri sabit baglanir
// (trst_n=0: DM pasif).
// Protokol ayni: 'R' -> 'A' -> tam 12 karakter ("Hello World!").
`timescale 1ns / 1ps

module asic_top_boot_tb;
    logic clk = 0, resetn = 0;
    always #10 clk = ~clk;
    initial begin resetn = 0; #200 resetn = 1; end

    logic uart_tx, uart_rx = 1;
    logic qspi_sclk, qspi_cs_n;
    logic [3:0] qspi_io_o, qspi_io_oe, qspi_io_i;

    // GDS ust modulu; boot adresi asic_top icinde 0x0'a sabitlidir
    asic_top dut (
        .clk_i(clk), .rst_ni(resetn),
        .uart_rxd_i(uart_rx), .uart_txd_o(uart_tx),
        .uart1_rxd_i(1'b1), .uart1_txd_o(),
        .gpio_in_i('0), .gpio_out_o(),
        .qspi_sclk_o(qspi_sclk), .qspi_cs_no(qspi_cs_n),
        .qspi_io_o(qspi_io_o), .qspi_io_oe(qspi_io_oe),
        .qspi_io_i(qspi_io_i),
        .i2c_scl_o(), .i2c_sda_oe_o(), .i2c_sda_i(1'b1)
`ifdef JTAG_DEBUG
        // JTAG TAP bagli degil: trst_n=0 TAP'i resette tutar (DM pasif, debug_req=0)
        , .jtag_tck_i(1'b0), .jtag_tms_i(1'b0), .jtag_tdi_i(1'b0),
          .jtag_trst_ni(1'b0), .jtag_tdo_o()
`endif
    );

    // flash model: 4-lane arayuz
    wire [3:0] flash_out, flash_oe;
    spi_flash_model #(.FLASH_SIZE(131072), .INIT_FILE("flash.hex")) flash (
        .sclk(qspi_sclk), .cs_n(qspi_cs_n),
        .io_in (qspi_io_o & qspi_io_oe),
        .io_out(flash_out), .io_oe_out(flash_oe)
    );
    genvar gi;
    generate for (gi = 0; gi < 4; gi++) begin : g_io
        assign qspi_io_i[gi] = qspi_io_oe[gi] ? qspi_io_o[gi]
                              : flash_oe[gi]  ? flash_out[gi] : 1'b1;
    end endgenerate

    localparam int BIT_NS = 8680;
    task uart_read(output logic [7:0] d);
        @(negedge uart_tx); #(BIT_NS + BIT_NS/2);
        for (int i=0;i<8;i++) begin d[i]=uart_tx; #BIT_NS; end
    endtask
    task uart_write(input logic [7:0] d);
        uart_rx=0; #BIT_NS;
        for (int i=0;i<8;i++) begin uart_rx=d[i]; #BIT_NS; end
        uart_rx=1; #BIT_NS;
    endtask

    string received = "";
    logic [7:0] ch;
    initial begin
        wait(resetn===1); @(posedge clk);
        $display("[%0t] === ASIC-TOP BOOT+YZ TESTI: asic_top @ 0x00000000 ===", $time);

        uart_read(ch);
        if (ch !== "R") begin $error("'R' bekleniyordu, 0x%02h alindi", ch); $finish; end
        $display("[%0t] 'R' alindi -> bootloader+firmware calisti", $time);

        // alici 'A' gonderiminden once arm edilmeli, yoksa ilk karakterin
        // start kenari kaciriliyor
        fork
            begin
                for (int i = 0; i < 12; i++) begin
                    uart_read(ch);
                    received = {received, string'(ch)};
                end
            end
            uart_write("A");
        join

        if (received == "Hello World!")
`ifdef CHECK_ARGMAX
            $display("[%0t] *** TEST SUCCESS *** asic_top + makro modeli: boot + YZ cikarimi bit-tam, argmax dahil ('%s')", $time, received);
`else
            $display("[%0t] *** TEST SUCCESS *** asic_top + makro modeli: boot + conv katmani bit-tam ('%s')", $time, received);
`endif
        else
            $error("FAIL: alinan='%s'", received);
        $finish;
    end

    // boot ~51 ms + cikarim ~9 ms + raporlama; genis pay
    initial #120_000_000 begin $error("TIMEOUT"); $finish; end
endmodule
