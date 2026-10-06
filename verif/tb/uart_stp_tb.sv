// SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
// SPDX-License-Identifier: GPL-3.0-only
// Licensed under the GNU General Public License version 3 only.
// See the LICENSE file in the repository root for the full license text.

// ============================================
// Ostim BLogic Mikroelektronik
// uart_stp_tb.sv  -  UART stop-bit dogrulamasi
// ============================================
`timescale 1ns/1ps
module uart_stp_tb;
    import tb_log_pkg::*;
    BusLog blog;   // bus_trace.log, bus_summary.tsv

    localparam logic [4:0] ADDR_CPB = 5'h00;
    localparam logic [4:0] ADDR_STP = 5'h04;
    localparam logic [4:0] ADDR_TDR = 5'h0C;
    localparam logic [4:0] ADDR_CFG = 5'h10;

    localparam int unsigned CPB      = 434;        // 115200 @ 50 MHz
    localparam int unsigned PRESC    = CPB / 8;    // 54
    localparam int unsigned BIT_CLK  = PRESC * 8;  // 432 clk / bit
    localparam int unsigned HALF_CLK = PRESC * 4;  // 216 clk
    localparam int unsigned TOL      = 16;         // poll hizalama payi

    function automatic string reg_name(input logic [4:0] a);
        case (a)
            5'h00: return "UART.CPB";
            5'h04: return "UART.STP";
            5'h08: return "UART.RDR";
            5'h0C: return "UART.TDR";
            5'h10: return "UART.CFG";
            default: return $sformatf("UART+0x%02h", a);
        endcase
    endfunction

    logic clk = 1'b0;
    logic rst_n = 1'b0;
    always #10 clk = ~clk;                          // 50 MHz

    // AXI-Lite master sinyalleri
    logic [31:0] awaddr  = '0;
    logic        awvalid = 1'b0;
    logic        awready;
    logic [31:0] wdata   = '0;
    logic [ 3:0] wstrb   = 4'hF;
    logic        wvalid  = 1'b0;
    logic        wready;
    logic [ 1:0] bresp;
    logic        bvalid;
    logic        bready  = 1'b1;
    logic [31:0] araddr  = '0;
    logic        arvalid = 1'b0;
    logic        arready;
    logic [31:0] rdata;
    logic [ 1:0] rresp;
    logic        rvalid;
    logic        rready  = 1'b1;
    logic        txd;

    uart_axil i_dut (
        .clk_i         (clk),
        .rst_ni        (rst_n),
        .s_axi_awaddr  (awaddr),
        .s_axi_awvalid (awvalid),
        .s_axi_awready (awready),
        .s_axi_wdata   (wdata),
        .s_axi_wstrb   (wstrb),
        .s_axi_wvalid  (wvalid),
        .s_axi_wready  (wready),
        .s_axi_bresp   (bresp),
        .s_axi_bvalid  (bvalid),
        .s_axi_bready  (bready),
        .s_axi_araddr  (araddr),
        .s_axi_arvalid (arvalid),
        .s_axi_arready (arready),
        .s_axi_rdata   (rdata),
        .s_axi_rresp   (rresp),
        .s_axi_rvalid  (rvalid),
        .s_axi_rready  (rready),
        .rxd_i         (1'b1),
        .txd_o         (txd)
    );

    // cevrim sayaci + start kenar kaydi
    int unsigned cyc = 0;
    logic        txd_q = 1'b1;
    int unsigned start_cyc [0:15];
    int unsigned start_n = 0;
    int unsigned frame_guard = 0;   // cerceve ici kenar maskesi

    always @(posedge clk) begin
        cyc   <= cyc + 1;
        txd_q <= txd;
        // Sadece cerceve baslangici olan dusen kenari say, veri bitlerini maskele
        if (rst_n && txd_q && !txd && cyc >= frame_guard && start_n < 16) begin
            start_cyc[start_n] <= cyc;
            start_n            <= start_n + 1;
            frame_guard        <= cyc + 10 * BIT_CLK - 16;
        end
    end

    // AXI-Lite gorevleri
    // K14 ile ayni hata: valid transfer kenarindan once birakiliyordu.
    // uart_axil.sv:103-108 aw_en idiomu, ai_accelerator.sv ile birebir ayni.
    // Surme/birakma ve ornekleme negedge'de, transfer arada gecen posedge'de.
    task automatic axi_write(input logic [4:0] addr, input logic [31:0] data);
        @(negedge clk);
        awaddr  <= {27'd0, addr};
        wdata   <= data;
        awvalid <= 1'b1;
        wvalid  <= 1'b1;
        do @(negedge clk); while (!(awready && wready));
        @(posedge clk);
        @(negedge clk);
        awvalid <= 1'b0;
        wvalid  <= 1'b0;
        while (!bvalid) @(negedge clk);
        blog.access(cyc, 1'b1, {27'd0, addr}, reg_name(addr), data, 4'hF, bresp);
        @(posedge clk);
    endtask

    // K14: ayni yaris okuma yolunda da var (uart_axil.sv:145-156).
    task automatic axi_read(input logic [4:0] addr, output logic [31:0] data);
        @(negedge clk);
        araddr  <= {27'd0, addr};
        arvalid <= 1'b1;
        do @(negedge clk); while (!arready);
        @(posedge clk);
        @(negedge clk);
        arvalid <= 1'b0;
        while (!rvalid) @(negedge clk);
        data = rdata;
        blog.access(cyc, 1'b0, {27'd0, addr}, reg_name(addr), data, 4'hF, rresp);
        @(posedge clk);
    endtask

    // Bir STP ayarinda iki bayt gonderir, start->start araligini dondurur
    task automatic send_pair(input logic [1:0] stp, output int unsigned delta);
        logic [31:0] r;
        int unsigned base;
        base = start_n;
        axi_write(ADDR_STP, {30'd0, stp});
        axi_write(ADDR_TDR, 32'h41);
        do axi_read(ADDR_CFG, r); while (!r[2]);
        axi_write(ADDR_CFG, 32'h0);
        axi_write(ADDR_TDR, 32'h42);
        do axi_read(ADDR_CFG, r); while (!r[2]);
        axi_write(ADDR_CFG, 32'h0);
        @(posedge clk);
        if (start_n != base + 2) begin
            blog.fail(cyc, $sformatf("two frames sent with STP=%0d", stp), $sformatf("%0d start edges, expected %0d", start_n - base, 2));
            $fatal(1, "[STP] unexpected number of start edges: %0d (expected %0d)", start_n, base + 2);
        end
        delta = start_cyc[base + 1] - start_cyc[base];
    endtask

    function automatic int unsigned absdiff(input int unsigned a, input int unsigned b);
        absdiff = (a > b) ? (a - b) : (b - a);
    endfunction

    int unsigned d00, d01, d10, d11;
    int unsigned base2, s1, s2, gap;

    initial begin
        string pfx;
        pfx = "";
        void'($value$plusargs("LOGDIR=%s", pfx));
        blog = new(pfx, "uart_stp_tb register accesses (make uart-stp)",
                   "testbench AXI-Lite master -> uart_axil (UART register block alone)", "cycle");
        repeat (5) @(posedge clk);
        rst_n = 1'b1;
        repeat (5) @(posedge clk);

        // CPB'yi acikca yaz
        axi_write(ADDR_CPB, CPB);

        // Olcum 1: poll'lu yol
        blog.note(cyc, "measurement 1: two frames for each STP value, TX done polled in CFG");
        send_pair(2'b00, d00);
        send_pair(2'b01, d01);
        send_pair(2'b10, d10);
        send_pair(2'b11, d11);

        $display("[STP] start-to-start time in clocks: STP=00 %0d, STP=01 %0d, STP=10 %0d, STP=11 %0d", d00, d01, d10, d11);
        $display("[STP] difference 01-00 = %0d (expected about %0d), 10-00 = %0d (expected about %0d), 11-10 = %0d (expected about 0)", d01 - d00, HALF_CLK, d10 - d00, BIT_CLK, absdiff(d11, d10));

        if (d00 < 10 * BIT_CLK) begin
            blog.fail(cyc, "frame length with 1 stop bit (STP=00) is at least 10 bit times", $sformatf("%0d clocks", d00));
            $fatal(1, "[STP] frame spacing with 1 stop bit is too short: %0d clocks", d00);
        end
        blog.check(cyc, "frame length with 1 stop bit (STP=00) is at least 10 bit times", 1'b1, $sformatf("%0d clocks", d00));
        if (absdiff(d01 - d00, HALF_CLK) > TOL) begin
            blog.fail(cyc, "1.5 stop bits (STP=01) add half a bit time", $sformatf("+%0d clocks, expected about %0d", d01 - d00, HALF_CLK));
            $fatal(1, "[STP] wrong extension for 1.5 stop bits: +%0d clocks (expected about %0d)", d01 - d00, HALF_CLK);
        end
        blog.check(cyc, "1.5 stop bits (STP=01) add half a bit time", 1'b1, $sformatf("+%0d clocks, expected about %0d", d01 - d00, HALF_CLK));
        if (absdiff(d10 - d00, BIT_CLK) > TOL) begin
            blog.fail(cyc, "2 stop bits (STP=10) add one bit time", $sformatf("+%0d clocks, expected about %0d", d10 - d00, BIT_CLK));
            $fatal(1, "[STP] wrong extension for 2 stop bits: +%0d clocks (expected about %0d)", d10 - d00, BIT_CLK);
        end
        blog.check(cyc, "2 stop bits (STP=10) add one bit time", 1'b1, $sformatf("+%0d clocks, expected about %0d", d10 - d00, BIT_CLK));
        if (absdiff(d11, d10) > TOL) begin
            blog.fail(cyc, "STP=11 behaves like STP=10 (2 stop bits)", $sformatf("%0d vs %0d clocks", d11, d10));
            $fatal(1, "[STP] STP=11 is not equivalent to STP=10: %0d vs %0d", d11, d10);
        end
        blog.check(cyc, "STP=11 behaves like STP=10 (2 stop bits)", 1'b1, $sformatf("%0d vs %0d clocks", d11, d10));

        // Olcum 2: donanim garantisi - STP=2 iken TX_DONE'a bakmadan TDR yaz
        blog.note(cyc, "measurement 2: with STP=10, TDR written again without polling; the hardware must keep the second stop bit");
        axi_write(ADDR_STP, 32'h2);
        base2 = start_n;
        axi_write(ADDR_TDR, 32'h55);
        while (start_n <= base2) @(posedge clk);
        s1 = start_cyc[base2];

        // TDR yazisi uzatma penceresine dussun diye bekle
        while (cyc < s1 + 10 * BIT_CLK + 6) @(posedge clk);
        axi_write(ADDR_TDR, 32'h56);          // poll yok

        while (start_n <= base2 + 1) @(posedge clk);
        s2  = start_cyc[base2 + 1];
        gap = s2 - s1;

        $display("[STP] hardware guarantee: start-to-start = %0d clocks (lower limit %0d; without the extension it would be about %0d)", gap, 11 * BIT_CLK, 10 * BIT_CLK + 12);
        if (gap + 4 < 11 * BIT_CLK) begin
            blog.fail(cyc, "back-to-back write keeps 2 stop bits", $sformatf("%0d clocks, lower limit %0d", gap, 11 * BIT_CLK));
            $fatal(1, "[STP] stop-bit extension violated: %0d < %0d", gap, 11 * BIT_CLK);
        end
        blog.check(cyc, "back-to-back write keeps 2 stop bits", 1'b1, $sformatf("%0d clocks, lower limit %0d", gap, 11 * BIT_CLK));
        if (gap > 11 * BIT_CLK + 64) begin
            blog.fail(cyc, "pending frame starts right after the stop bits", $sformatf("%0d clocks", gap));
            $fatal(1, "[STP] pending transmission started late: %0d", gap);
        end
        blog.check(cyc, "pending frame starts right after the stop bits", 1'b1, $sformatf("%0d clocks", gap));

        blog.close();
        $display("");
        $display("*** TEST SUCCESS *** UART_STP: 1, 1.5 and 2 stop bits verified (STP = 00 / 01 / 1x)");
        $finish;
    end

    // bekci
    initial begin
        #4ms;
        blog.fail(cyc, "test finished within 4 ms of simulated time");
        $fatal(1, "[STP] TIMEOUT");
    end

endmodule
