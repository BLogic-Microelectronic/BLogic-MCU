`timescale 1ns/1ps
// ============================================================
// uart_stream_tb — UART_1 / YZ stream (DMA) dogrulamasi
//
// DUT: uart_stream_axil tek basina; AXI-Lite CSR dogrudan TB'den
// surulur, RX hatti bit-bit TB'den beslenir, DUT'un AXI4 master'i
// TB icindeki basit bellek modeline (AI SRAM taklidi) baglanir.
//
// Senaryolar (hepsi self-checking):
//   A) Temel DMA: 16 bayt → 4 word little-endian paketleme,
//      DONE/IRQ/BUSY/rxcnt kontrolu.
//   B) Kismi word: len=7 → son word wstrb=0111, komsu bayt korunur
//      (bellek 0xAA on-dolgulu).
//   C) Kilit: DMA busy iken STRM_ADDR yazisi yok sayilir.
//   D) ABORT: akis ortasinda durdur (IRQ/DONE yok), ardindan yeni
//      START sorunsuz calisir (pointer base'e doner).
//   E) DMA kapaliyken normal UART: RX→RDR + CFG[1], TX→CFG[2].
//
// Calistirma: make uart-stream
// ============================================================
module uart_stream_tb;

    // --- CSR ofsetleri ---
    localparam logic [5:0] A_CPB  = 6'h00;
    localparam logic [5:0] A_STP  = 6'h04;
    localparam logic [5:0] A_RDR  = 6'h08;
    localparam logic [5:0] A_TDR  = 6'h0C;
    localparam logic [5:0] A_CFG  = 6'h10;
    localparam logic [5:0] A_SADR = 6'h14;
    localparam logic [5:0] A_SLEN = 6'h18;
    localparam logic [5:0] A_SCTL = 6'h1C;
    localparam logic [5:0] A_SSTA = 6'h20;

    localparam int unsigned CPB     = 64;            // hizli sim baud (presc=8)
    localparam int unsigned BIT_CLK = CPB;           // 1 bit = CPB clk

    localparam logic [31:0] MEM_BASE = 32'h0003_0000;
    localparam int unsigned MEM_WORDS = 2048;        // 8 KB pencere

    logic clk = 1'b0;
    logic rst_n = 1'b0;
    always #10 clk = ~clk;                            // 50 MHz

    // --- AXI-Lite master (TB → DUT CSR) ---
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

    // --- DUT AXI4 master → TB bellek modeli ---
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

    // --- UART hatti + durum ---
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

    // =========================================================
    // Basit AXI4 slave bellek modeli (tek beat, wstrb uygular)
    // =========================================================
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
                // protokol sanity: tek beat, 4 bayt, INCR
                if (m_awlen != 8'd0)    $fatal(1, "[MEM] awlen != 0: %0d", m_awlen);
                if (m_awsize != 3'b010) $fatal(1, "[MEM] awsize != 4B: %0d", m_awsize);
                if (m_awaddr < MEM_BASE || m_awaddr >= MEM_BASE + MEM_WORDS*4)
                    $fatal(1, "[MEM] adres pencere disi: 0x%08x", m_awaddr);
                if (m_awaddr[1:0] != 2'b00)
                    $fatal(1, "[MEM] hizasiz word adresi: 0x%08x", m_awaddr);
                aw_q   <= m_awaddr;
                aw_got <= 1'b1;
            end
            if (m_wvalid && m_wready) begin
                if (!m_wlast) $fatal(1, "[MEM] wlast bekleniyordu");
                wd_q  <= m_wdata;
                ws_q  <= m_wstrb;
                w_got <= 1'b1;
            end
            if (aw_got && w_got && !m_bvalid) begin
                widx = (aw_q - MEM_BASE) >> 2;
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

    // =========================================================
    // Gorevler
    // =========================================================
    // NOT: Verilator initial/task icindeki NBA'yi blocking'e cevirir
    // (INITIALDLY). Race'siz calismak icin TB master'i NEGEDGE
    // disipliniyle surulur: atama ve ornekleme negedge'de yapilir,
    // valid'ler handshake posedge'i gectikten sonra dusurulur.
    task automatic axi_write(input logic [5:0] addr, input logic [31:0] data);
        @(negedge clk);
        awaddr  = {26'd0, addr};
        wdata   = data;
        awvalid = 1'b1;
        wvalid  = 1'b1;
        do @(negedge clk); while (!(awready && wready));
        @(negedge clk);          // ready&&valid posedge'i (handshake) gecti
        awvalid = 1'b0;
        wvalid  = 1'b0;
        while (!bvalid) @(negedge clk);
    endtask

    task automatic axi_read(input logic [5:0] addr, output logic [31:0] data);
        @(negedge clk);
        araddr  = {26'd0, addr};
        arvalid = 1'b1;
        do @(negedge clk); while (!arready);
        @(negedge clk);          // arready&&arvalid posedge'i gecti
        arvalid = 1'b0;
        while (!rvalid) @(negedge clk);
        data = rdata;
    endtask

    // 8N1 cerceve: start(0) + 8 veri (LSB-first) + stop(1)
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

    // DONE bekleyip durum bitlerini dondurur (sinirli poll)
    task automatic wait_done(output logic [31:0] sta);
        int unsigned n = 0;
        forever begin
            axi_read(A_SSTA, sta);
            if (sta[1]) return;                      // DONE
            n++;
            if (n > 50_000) $fatal(1, "[STRM] DONE zaman asimi (STA=0x%08x)", sta);
        end
    endtask

    function automatic logic [7:0] pat(input int unsigned i);
        pat = 8'((i * 7 + 3) & 32'hFF);
    endfunction

    // Beklenen word'u dogrula
    task automatic check_word(input int unsigned idx, input logic [31:0] exp, input string tag);
        if (mem[idx] !== exp)
            $fatal(1, "[%s] mem[%0d] = 0x%08x, beklenen 0x%08x", tag, idx, mem[idx], exp);
    endtask

    // =========================================================
    // Test akisi
    // =========================================================
    logic [31:0] r, sta;
    int unsigned base_idx;

    initial begin
        // Bellek on-dolgu (komsu bayt korunumu kontrolu icin)
        for (int i = 0; i < MEM_WORDS; i++) mem[i] = 32'hAAAA_AAAA;

        repeat (5) @(posedge clk);
        rst_n = 1'b1;
        repeat (5) @(posedge clk);

        axi_write(A_CPB, CPB);

        // ---------------- A) Temel DMA: 16 bayt ----------------
        $display("[A] Temel DMA: 16 bayt @0x%08x", MEM_BASE);
        irq_seen = 1'b0;
        axi_write(A_SADR, MEM_BASE);
        axi_write(A_SLEN, 32'd16);
        axi_write(A_SCTL, 32'h1);                    // START
        axi_read(A_SSTA, sta);
        if (!sta[0]) $fatal(1, "[A] START sonrasi BUSY=0");
        if (!strm_active) $fatal(1, "[A] strm_active=0 (arbiter sahiplik sinyali)");

        for (int i = 0; i < 16; i++) uart_send_byte(pat(i));
        wait_done(sta);

        if (sta[0])              $fatal(1, "[A] DONE sonrasi BUSY hala 1");
        if (sta[31:16] != 16'd16) $fatal(1, "[A] rxcnt=%0d, beklenen 16", sta[31:16]);
        if (!irq_seen)           $fatal(1, "[A] IRQ pulse gorulmedi");
        if (strm_active)         $fatal(1, "[A] DONE sonrasi strm_active hala 1");

        base_idx = 0;
        for (int w = 0; w < 4; w++)
            check_word(base_idx + w,
                       {pat(4*w+3), pat(4*w+2), pat(4*w+1), pat(4*w+0)}, "A");
        $display("[A] PASS — 4 word little-endian dogru, DONE+IRQ+rxcnt OK");

        // ------------- B) Kismi word: len=7 @ +0x40 -------------
        $display("[B] Kismi word: 7 bayt @0x%08x", MEM_BASE + 32'h40);
        axi_write(A_SCTL, 32'h0);                    // (etkisiz yazma)
        axi_write(A_SADR, MEM_BASE + 32'h40);
        axi_write(A_SLEN, 32'd7);
        axi_write(A_SCTL, 32'h1);
        for (int i = 0; i < 7; i++) uart_send_byte(pat(100 + i));
        wait_done(sta);
        if (sta[31:16] != 16'd7) $fatal(1, "[B] rxcnt=%0d, beklenen 7", sta[31:16]);

        base_idx = 32'h40 >> 2;
        check_word(base_idx + 0, {pat(103), pat(102), pat(101), pat(100)}, "B");
        // son word: yalniz 3 bayt yazildi, ust bayt 0xAA korunmali
        check_word(base_idx + 1, {8'hAA, pat(106), pat(105), pat(104)}, "B");
        $display("[B] PASS — wstrb=0111 kismi yazma + komsu bayt korunumu OK");

        // ------- C) Kilit: busy iken STRM_ADDR yazisi etkisiz -------
        $display("[C] Busy iken SADR kilidi");
        axi_write(A_SADR, MEM_BASE + 32'h80);
        axi_write(A_SLEN, 32'd4);
        axi_write(A_SCTL, 32'h1);
        axi_write(A_SADR, 32'hDEAD_0000);            // busy iken — yok sayilmali
        for (int i = 0; i < 4; i++) uart_send_byte(pat(200 + i));
        wait_done(sta);
        axi_read(A_SADR, r);
        if (r != MEM_BASE + 32'h80)
            $fatal(1, "[C] SADR busy iken degisti: 0x%08x", r);
        check_word(32'h80 >> 2, {pat(203), pat(202), pat(201), pat(200)}, "C");
        $display("[C] PASS — busy sirasinda SADR korunur, veri dogru hedefe yazildi");

        // ----------- D) ABORT + yeniden START -----------
        $display("[D] ABORT ortasinda durdur + yeniden START");
        irq_seen = 1'b0;
        axi_write(A_SADR, MEM_BASE + 32'hC0);
        axi_write(A_SLEN, 32'd8);
        axi_write(A_SCTL, 32'h1);
        for (int i = 0; i < 3; i++) uart_send_byte(pat(50 + i));  // 3/8 bayt
        repeat (2 * BIT_CLK) @(posedge clk);                      // hat bosta
        axi_write(A_SCTL, 32'h2);                    // ABORT
        // busy dusene kadar bekle (zarif sonlanma)
        begin
            int unsigned n = 0;
            do begin
                axi_read(A_SSTA, sta);
                n++;
                if (n > 1000) $fatal(1, "[D] ABORT sonrasi BUSY dusmedi");
            end while (sta[0]);
        end
        if (sta[1])    $fatal(1, "[D] ABORT DONE kurdu (kurmamali)");
        if (irq_seen)  $fatal(1, "[D] ABORT IRQ uretti (uretmemeli)");
        // ayni kanal yeniden kullanilabilir olmali
        axi_write(A_SADR, MEM_BASE + 32'h100);
        axi_write(A_SLEN, 32'd4);
        axi_write(A_SCTL, 32'h1);
        for (int i = 0; i < 4; i++) uart_send_byte(pat(60 + i));
        wait_done(sta);
        check_word(32'h100 >> 2, {pat(63), pat(62), pat(61), pat(60)}, "D");
        // abort edilen akisin yarim kalan baytlari hedefe sizmamis olmali
        check_word(32'hC0 >> 2, 32'hAAAA_AAAA, "D");
        $display("[D] PASS — ABORT temiz (IRQ/DONE yok), yeniden START calisiyor");

        // -------- E) DMA kapaliyken normal UART modu --------
        $display("[E] DMA kapaliyken RX→RDR ve TX→CFG[2]");
        uart_send_byte(8'h5A);
        begin
            int unsigned n = 0;
            do begin
                axi_read(A_CFG, r);
                n++;
                if (n > 1000) $fatal(1, "[E] rx_done gelmedi");
            end while (!r[1]);
        end
        axi_read(A_RDR, r);
        if (r[7:0] != 8'h5A) $fatal(1, "[E] RDR=0x%02x, beklenen 0x5A", r[7:0]);
        axi_write(A_CFG, 32'h0);                     // bayraklari temizle

        axi_write(A_TDR, 32'hA5);                    // TX baslat
        begin
            int unsigned n = 0;
            do begin
                axi_read(A_CFG, r);
                n++;
                if (n > 2000) $fatal(1, "[E] tx_done gelmedi");
            end while (!r[2]);
        end
        $display("[E] PASS — normal UART RX/TX yollari calisiyor");

        $display("");
        $display("*** TEST SUCCESS *** UART-stream DMA (A-E) 5/5 senaryo gecti");
        $finish;
    end

    // Bekci
    initial begin
        #20ms;
        $fatal(1, "[STRM] GLOBAL TIMEOUT");
    end

endmodule
