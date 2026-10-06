// SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
// SPDX-License-Identifier: GPL-3.0-only
// Licensed under the GNU General Public License version 3 only.
// See the LICENSE file in the repository root for the full license text.

// ============================================
// Ostim BLogic Mikroelektronik
// uart_stream_tb.sv  -  UART YZ stream DMA dogrulama tb
// ============================================
`timescale 1ns/1ps
module uart_stream_tb;
    import tb_log_pkg::*;
    BusLog blog;                      // bus_trace.log, bus_summary.tsv
    longint unsigned cyc = 0;         // clock cycle counter for the log

    // CSR ofsetleri
    localparam logic [5:0] A_CPB  = 6'h00;
    localparam logic [5:0] A_STP  = 6'h04;
    localparam logic [5:0] A_RDR  = 6'h08;
    localparam logic [5:0] A_TDR  = 6'h0C;
    localparam logic [5:0] A_CFG  = 6'h10;
    localparam logic [5:0] A_SADR = 6'h14;
    localparam logic [5:0] A_SLEN = 6'h18;
    localparam logic [5:0] A_SCTL = 6'h1C;
    localparam logic [5:0] A_SSTA = 6'h20;

    localparam int unsigned CPB     = 64;            // hizli sim baud
    localparam int unsigned BIT_CLK = CPB;           // 1 bit = CPB clk

    localparam logic [31:0] MEM_BASE = 32'h0003_0000;
    localparam int unsigned MEM_WORDS = 2048;        // 8 KB pencere

    function automatic string reg_name(input logic [5:0] a);
        case (a)
            A_CPB: return "UART1.CPB";        A_STP: return "UART1.STP";
            A_RDR: return "UART1.RDR";        A_TDR: return "UART1.TDR";
            A_CFG: return "UART1.CFG";        A_SADR: return "UART1.STRM_ADDR";
            A_SLEN: return "UART1.STRM_LEN";  A_SCTL: return "UART1.STRM_CTRL";
            A_SSTA: return "UART1.STRM_STAT";
            default: return $sformatf("UART1+0x%02h", a);
        endcase
    endfunction

    logic clk = 1'b0;
    logic rst_n = 1'b0;
    always #10 clk = ~clk;                            // 50 MHz
    always @(posedge clk) cyc <= cyc + 1;

    // AXI-Lite master (TB -> DUT CSR)
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

    // DUT AXI4 master -> TB bellek modeli
    logic [ 3:0] m_awid;
    logic [31:0] m_awaddr;
    logic [ 7:0] m_awlen;
    logic [ 2:0] m_awsize;
    logic [ 1:0] m_awburst;
    logic        m_awvalid, m_awready;
    logic [31:0] m_wdata;
    logic [ 3:0] m_wstrb;
    logic        m_wlast, m_wvalid, m_wready;
    logic [ 1:0] m_bresp;
    logic        m_bvalid, m_bready;

    // UART hatti + durum
    logic rxd = 1'b1;
    logic txd;
    logic strm_active;
    logic irq;
    logic irq_seen = 1'b0;
    always @(posedge clk) if (irq) irq_seen <= 1'b1;

    uart_stream_axil i_dut (
        .clk_i           (clk),
        .rst_ni          (rst_n),
        .s_axi_awaddr    (awaddr),
        .s_axi_awvalid   (awvalid),
        .s_axi_awready   (awready),
        .s_axi_wdata     (wdata),
        .s_axi_wstrb     (wstrb),
        .s_axi_wvalid    (wvalid),
        .s_axi_wready    (wready),
        .s_axi_bresp     (bresp),
        .s_axi_bvalid    (bvalid),
        .s_axi_bready    (bready),
        .s_axi_araddr    (araddr),
        .s_axi_arvalid   (arvalid),
        .s_axi_arready   (arready),
        .s_axi_rdata     (rdata),
        .s_axi_rresp     (rresp),
        .s_axi_rvalid    (rvalid),
        .s_axi_rready    (rready),
        .m_axi_awid      (m_awid),
        .m_axi_awaddr    (m_awaddr),
        .m_axi_awlen     (m_awlen),
        .m_axi_awsize    (m_awsize),
        .m_axi_awburst   (m_awburst),
        .m_axi_awvalid   (m_awvalid),
        .m_axi_awready   (m_awready),
        .m_axi_wdata     (m_wdata),
        .m_axi_wstrb     (m_wstrb),
        .m_axi_wlast     (m_wlast),
        .m_axi_wvalid    (m_wvalid),
        .m_axi_wready    (m_wready),
        .m_axi_bid       (),
        .m_axi_bresp     (m_bresp),
        .m_axi_bvalid    (m_bvalid),
        .m_axi_bready    (m_bready),
        .m_axi_arid      (),
        .m_axi_araddr    (),
        .m_axi_arlen     (),
        .m_axi_arsize    (),
        .m_axi_arburst   (),
        .m_axi_arvalid   (),
        .m_axi_arready   (1'b0),
        .m_axi_rid       (4'd0),
        .m_axi_rdata     (32'd0),
        .m_axi_rresp     (2'd0),
        .m_axi_rlast     (1'b0),
        .m_axi_rvalid    (1'b0),
        .m_axi_rready    (),
        .rxd_i           (rxd),
        .txd_o           (txd),
        .stream_active_o (strm_active),
        .irq_o           (irq)
    );

    // basit AXI4 slave bellek (tek beat, wstrb uygular)
    logic [31:0] mem [0:MEM_WORDS-1];
    logic [31:0] aw_q;
    logic        aw_got = 1'b0, w_got = 1'b0;
    logic [31:0] wd_q;
    logic [ 3:0] ws_q;
    int unsigned widx;

    assign m_awready = rst_n && !aw_got;
    assign m_wready  = rst_n && !w_got;
    assign m_bresp   = 2'b00;

    always @(posedge clk) begin
        if (!rst_n) begin
            aw_got <= 1'b0; w_got <= 1'b0; m_bvalid <= 1'b0;
        end else begin
            if (m_awvalid && m_awready) begin
                // tek beat, 4 bayt, INCR kontrolu
                if (m_awlen != 8'd0)    blog.require(cyc, 1'b0, "DMA write is a single beat (AWLEN = 0)", $sformatf("AWLEN = %0d", m_awlen));
                if (m_awsize != 3'b010) blog.require(cyc, 1'b0, "DMA write is 4 bytes wide (AWSIZE = 2)", $sformatf("AWSIZE = %0d", m_awsize));
                if (m_awaddr < MEM_BASE || m_awaddr >= MEM_BASE + MEM_WORDS*4)
                    blog.require(cyc, 1'b0, "DMA write address inside the AI SRAM window", $sformatf("0x%08x", m_awaddr));
                if (m_awaddr[1:0] != 2'b00)
                    blog.require(cyc, 1'b0, "DMA write address is word aligned", $sformatf("0x%08x", m_awaddr));
                aw_q   <= m_awaddr;
                aw_got <= 1'b1;
            end
            if (m_wvalid && m_wready) begin
                if (!m_wlast) blog.require(cyc, 1'b0, "DMA write data beat carries WLAST");
                wd_q  <= m_wdata;
                ws_q  <= m_wstrb;
                w_got <= 1'b1;
            end
            if (aw_got && w_got && !m_bvalid) begin
                widx = (aw_q - MEM_BASE) >> 2;
                blog.access(cyc, 1'b1, aw_q, "AI SRAM (DMA)", wd_q, ws_q, 2'b00);
                if (ws_q[0]) mem[widx][ 7: 0] <= wd_q[ 7: 0];
                if (ws_q[1]) mem[widx][15: 8] <= wd_q[15: 8];
                if (ws_q[2]) mem[widx][23:16] <= wd_q[23:16];
                if (ws_q[3]) mem[widx][31:24] <= wd_q[31:24];
                m_bvalid <= 1'b1;
                aw_got   <= 1'b0;
                w_got    <= 1'b0;
            end else if (m_bvalid && m_bready) begin
                m_bvalid <= 1'b0;
            end
        end
    end

    // NOT: Verilator NBA'yi blocking yapiyor; race olmasin diye master negedge'de surulur
    task automatic axi_write(input logic [5:0] addr, input logic [31:0] data);
        @(negedge clk);
        awaddr  = {26'd0, addr};
        wdata   = data;
        awvalid = 1'b1;
        wvalid  = 1'b1;
        do @(negedge clk); while (!(awready && wready));
        @(negedge clk);          // handshake posedge'i gecti
        awvalid = 1'b0;
        wvalid  = 1'b0;
        while (!bvalid) @(negedge clk);
        blog.access(cyc, 1'b1, {26'd0, addr}, reg_name(addr), data, 4'hF, bresp);
    endtask

    task automatic axi_read(input logic [5:0] addr, output logic [31:0] data);
        @(negedge clk);
        araddr  = {26'd0, addr};
        arvalid = 1'b1;
        do @(negedge clk); while (!arready);
        @(negedge clk);          // handshake posedge'i gecti
        arvalid = 1'b0;
        while (!rvalid) @(negedge clk);
        data = rdata;
        blog.access(cyc, 1'b0, {26'd0, addr}, reg_name(addr), data, 4'hF, rresp);
    endtask

    // 8N1: start + 8 veri (LSB-first) + stop
    task automatic uart_send_byte(input logic [7:0] b);
        @(negedge clk);
        rxd = 1'b0;
        repeat (BIT_CLK) @(negedge clk);
        for (int i = 0; i < 8; i++) begin
            rxd = b[i];
            repeat (BIT_CLK) @(negedge clk);
        end
        rxd = 1'b1;
        repeat (BIT_CLK) @(negedge clk);
    endtask

    // DONE bekle, durum bitlerini dondur
    task automatic wait_done(output logic [31:0] sta);
        int unsigned n = 0;
        forever begin
            axi_read(A_SSTA, sta);
            if (sta[1]) return;                      // DONE
            n++;
            if (n > 50_000) blog.require(cyc, 1'b0, "STRM_STAT.DONE is set within 50000 polls", $sformatf("STRM_STAT = 0x%08x", sta));
        end
    endtask

    function automatic logic [7:0] pat(input int unsigned i);
        pat = 8'((i * 7 + 3) & 32'hFF);
    endfunction

    // beklenen word'u dogrula
    task automatic check_word(input int unsigned idx, input logic [31:0] exp, input string tag);
        blog.require(cyc, mem[idx] === exp,
                     $sformatf("[%s] memory word 0x%08x holds the expected bytes", tag, MEM_BASE + idx * 4),
                     $sformatf("read 0x%08x, expected 0x%08x", mem[idx], exp));
    endtask

    // test akisi
    logic [31:0] r, sta;
    int unsigned base_idx;

    initial begin
        string pfx;
        pfx = "";
        void'($value$plusargs("LOGDIR=%s", pfx));
        blog = new(pfx, "uart_stream_tb register accesses and DMA writes (make uart-stream)",
                   "testbench AXI-Lite master -> uart_stream_axil registers; uart_stream_axil AXI4 master -> memory model of the AI SRAM",
                   "cycle");
        // komsu bayt korunumu icin bellegi on-dolgula
        for (int i = 0; i < MEM_WORDS; i++) mem[i] = 32'hAAAA_AAAA;

        repeat (5) @(posedge clk);
        rst_n = 1'b1;
        repeat (5) @(posedge clk);

        axi_write(A_CPB, CPB);

        // A) temel DMA: 16 bayt
        $display("[A] Basic DMA: 16 bytes to 0x%08x", MEM_BASE);
        blog.note(cyc, "scenario A: basic DMA, 16 bytes");
        irq_seen = 1'b0;
        axi_write(A_SADR, MEM_BASE);
        axi_write(A_SLEN, 32'd16);
        axi_write(A_SCTL, 32'h1);                    // START
        axi_read(A_SSTA, sta);
        blog.require(cyc, sta[0], "[A] STRM_STAT.BUSY is 1 after START");
        blog.require(cyc, strm_active, "[A] stream_active_o is 1 while the DMA owns the AI SRAM port");

        for (int i = 0; i < 16; i++) uart_send_byte(pat(i));
        wait_done(sta);

        blog.require(cyc, !sta[0], "[A] STRM_STAT.BUSY is 0 after DONE");
        blog.require(cyc, sta[31:16] == 16'd16, "[A] receive count in STRM_STAT is 16", $sformatf("%0d", sta[31:16]));
        blog.require(cyc, irq_seen, "[A] interrupt pulse seen at the end of the transfer");
        blog.require(cyc, !strm_active, "[A] stream_active_o is 0 after DONE");

        base_idx = 0;
        for (int w = 0; w < 4; w++)
            check_word(base_idx + w,
                       {pat(4*w+3), pat(4*w+2), pat(4*w+1), pat(4*w+0)}, "A");
        $display("[A] PASS: 4 words in little-endian order, DONE, IRQ and receive count correct");

        // B) kismi word: len=7 @ +0x40
        $display("[B] Partial word: 7 bytes to 0x%08x", MEM_BASE + 32'h40);
        blog.note(cyc, "scenario B: 7 bytes, the last word is written with byte enables 0111");
        axi_write(A_SCTL, 32'h0);                    // etkisiz yazma
        axi_write(A_SADR, MEM_BASE + 32'h40);
        axi_write(A_SLEN, 32'd7);
        axi_write(A_SCTL, 32'h1);
        for (int i = 0; i < 7; i++) uart_send_byte(pat(100 + i));
        wait_done(sta);
        blog.require(cyc, sta[31:16] == 16'd7, "[B] receive count in STRM_STAT is 7", $sformatf("%0d", sta[31:16]));

        base_idx = 32'h40 >> 2;
        check_word(base_idx + 0, {pat(103), pat(102), pat(101), pat(100)}, "B");
        // son word 3 bayt; ust bayt 0xAA korunmali
        check_word(base_idx + 1, {8'hAA, pat(106), pat(105), pat(104)}, "B");
        $display("[B] PASS: partial write with WSTRB 0111, the neighbouring byte is kept");

        // C) busy iken SADR yazisi etkisiz olmali
        $display("[C] STRM_ADDR is locked while the DMA is busy");
        blog.note(cyc, "scenario C: a write to STRM_ADDR during a transfer must be ignored");
        axi_write(A_SADR, MEM_BASE + 32'h80);
        axi_write(A_SLEN, 32'd4);
        axi_write(A_SCTL, 32'h1);
        axi_write(A_SADR, 32'hDEAD_0000);            // busy iken yok sayilmali
        for (int i = 0; i < 4; i++) uart_send_byte(pat(200 + i));
        wait_done(sta);
        axi_read(A_SADR, r);
        blog.require(cyc, r == MEM_BASE + 32'h80, "[C] STRM_ADDR unchanged by the write during the transfer", $sformatf("0x%08x", r));
        check_word(32'h80 >> 2, {pat(203), pat(202), pat(201), pat(200)}, "C");
        $display("[C] PASS: STRM_ADDR kept during the transfer, data written to the right place");

        // D) ABORT + yeniden START
        $display("[D] ABORT in the middle of a transfer, then a new START");
        blog.note(cyc, "scenario D: ABORT after 3 of 8 bytes, then a new transfer on the same channel");
        irq_seen = 1'b0;
        axi_write(A_SADR, MEM_BASE + 32'hC0);
        axi_write(A_SLEN, 32'd8);
        axi_write(A_SCTL, 32'h1);
        for (int i = 0; i < 3; i++) uart_send_byte(pat(50 + i));  // 3/8 bayt
        repeat (2 * BIT_CLK) @(posedge clk);                      // hat bosta
        axi_write(A_SCTL, 32'h2);                    // ABORT
        // busy dusene kadar bekle
        begin
            int unsigned n = 0;
            do begin
                axi_read(A_SSTA, sta);
                n++;
                if (n > 1000) blog.require(cyc, 1'b0, "[D] STRM_STAT.BUSY clears after ABORT");
            end while (sta[0]);
        end
        blog.require(cyc, !sta[1], "[D] ABORT does not set DONE");
        blog.require(cyc, !irq_seen, "[D] ABORT does not raise the interrupt");
        // ayni kanal yeniden kullanilabilmeli
        axi_write(A_SADR, MEM_BASE + 32'h100);
        axi_write(A_SLEN, 32'd4);
        axi_write(A_SCTL, 32'h1);
        for (int i = 0; i < 4; i++) uart_send_byte(pat(60 + i));
        wait_done(sta);
        check_word(32'h100 >> 2, {pat(63), pat(62), pat(61), pat(60)}, "D");
        // abort edilen akisin yarim baytlari sizmamali
        check_word(32'hC0 >> 2, 32'hAAAA_AAAA, "D");
        $display("[D] PASS: ABORT is clean (no IRQ, no DONE) and a new START works");

        // E) DMA kapaliyken normal UART modu
        $display("[E] With the DMA off: RX to RDR and TX done in CFG[2]");
        blog.note(cyc, "scenario E: normal UART receive and transmit with the DMA off");
        uart_send_byte(8'h5A);
        begin
            int unsigned n = 0;
            do begin
                axi_read(A_CFG, r);
                n++;
                if (n > 1000) blog.require(cyc, 1'b0, "[E] CFG.RX_DONE is set after a byte is received");
            end while (!r[1]);
        end
        axi_read(A_RDR, r);
        blog.require(cyc, r[7:0] == 8'h5A, "[E] RDR holds the received byte 0x5A", $sformatf("0x%02x", r[7:0]));
        axi_write(A_CFG, 32'h0);                     // bayraklari temizle

        axi_write(A_TDR, 32'hA5);                    // TX baslat
        begin
            int unsigned n = 0;
            do begin
                axi_read(A_CFG, r);
                n++;
                if (n > 2000) blog.require(cyc, 1'b0, "[E] CFG.TX_DONE is set after a byte is sent");
            end while (!r[2]);
        end
        blog.check(cyc, "[E] CFG.TX_DONE is set after a byte is sent", 1'b1);
        $display("[E] PASS: normal UART receive and transmit paths work");

        blog.close();
        $display("");
        $display("*** TEST SUCCESS *** UART stream DMA: all 5 scenarios (A to E) passed");
        $finish;
    end

    // bekci
    initial begin
        #20ms;
        blog.fail(cyc, "test finished within 20 ms of simulated time");
        $fatal(1, "[STRM] GLOBAL TIMEOUT");
    end

endmodule
