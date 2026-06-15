// ============================================
// Ostim BLogic Mikroelektronik
// uart_stp_tb.sv  -  UART stop-bit dogrulamasi
// ============================================
`timescale 1ns/1ps
module uart_stp_tb;

    localparam logic [4:0] ADDR_CPB = 5'h00;
    localparam logic [4:0] ADDR_STP = 5'h04;
    localparam logic [4:0] ADDR_TDR = 5'h0C;
    localparam logic [4:0] ADDR_CFG = 5'h10;

    localparam int unsigned CPB      = 434;        // 115200 @ 50 MHz
    localparam int unsigned PRESC    = CPB / 8;    // 54
    localparam int unsigned BIT_CLK  = PRESC * 8;  // 432 clk / bit
    localparam int unsigned HALF_CLK = PRESC * 4;  // 216 clk
    localparam int unsigned TOL      = 16;         // poll hizalama payi

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
    task automatic axi_write(input logic [4:0] addr, input logic [31:0] data);
        @(posedge clk);
        awaddr  <= {27'd0, addr};
        wdata   <= data;
        awvalid <= 1'b1;
        wvalid  <= 1'b1;
        do @(posedge clk); while (!(awready && wready));
        awvalid <= 1'b0;
        wvalid  <= 1'b0;
        do @(posedge clk); while (!bvalid);
    endtask

    task automatic axi_read(input logic [4:0] addr, output logic [31:0] data);
        @(posedge clk);
        araddr  <= {27'd0, addr};
        arvalid <= 1'b1;
        do @(posedge clk); while (!arready);
        arvalid <= 1'b0;
        do @(posedge clk); while (!rvalid);
        data = rdata;
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
        if (start_n != base + 2)
            $fatal(1, "[STP] start kenari sayisi beklenmedik: %0d (beklenen %0d)", start_n, base + 2);
        delta = start_cyc[base + 1] - start_cyc[base];
    endtask

    function automatic int unsigned absdiff(input int unsigned a, input int unsigned b);
        absdiff = (a > b) ? (a - b) : (b - a);
    endfunction

    int unsigned d00, d01, d10, d11;
    int unsigned base2, s1, s2, gap;

    initial begin
        repeat (5) @(posedge clk);
        rst_n = 1'b1;
        repeat (5) @(posedge clk);

        // CPB'yi acikca yaz
        axi_write(ADDR_CPB, CPB);

        // Olcum 1: poll'lu yol
        send_pair(2'b00, d00);
        send_pair(2'b01, d01);
        send_pair(2'b10, d10);
        send_pair(2'b11, d11);

        $display("[STP] start->start (clk): STP=00 %0d, STP=01 %0d, STP=10 %0d, STP=11 %0d", d00, d01, d10, d11);
        $display("[STP] fark(01-00)=%0d beklenen ~%0d, fark(10-00)=%0d beklenen ~%0d, fark(11-10)=%0d beklenen ~0", d01 - d00, HALF_CLK, d10 - d00, BIT_CLK, absdiff(d11, d10));

        if (d00 < 10 * BIT_CLK)
            $fatal(1, "[STP] taban cerceve araligi anormal kucuk: %0d clk", d00);
        if (absdiff(d01 - d00, HALF_CLK) > TOL)
            $fatal(1, "[STP] 1.5 stop uzatmasi yanlis: +%0d clk (beklenen ~%0d)", d01 - d00, HALF_CLK);
        if (absdiff(d10 - d00, BIT_CLK) > TOL)
            $fatal(1, "[STP] 2 stop uzatmasi yanlis: +%0d clk (beklenen ~%0d)", d10 - d00, BIT_CLK);
        if (absdiff(d11, d10) > TOL)
            $fatal(1, "[STP] STP=11, STP=10 ile esdeger degil: %0d vs %0d", d11, d10);

        // Olcum 2: donanim garantisi - STP=2 iken TX_DONE'a bakmadan TDR yaz
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

        $display("[STP] donanim garantisi: start->start = %0d clk (alt sinir %0d, uzatmasiz ~%0d olurdu)", gap, 11 * BIT_CLK, 10 * BIT_CLK + 12);
        if (gap + 4 < 11 * BIT_CLK)
            $fatal(1, "[STP] uzatma IHLAL edildi: %0d < %0d", gap, 11 * BIT_CLK);
        if (gap > 11 * BIT_CLK + 64)
            $fatal(1, "[STP] tx_pending baslatmasi gecikti: %0d", gap);

        $display("");
        $display("*** TEST SUCCESS *** UART_STP 1 / 1.5 / 2 stop dogrulandi (00/01/1X)");
        $finish;
    end

    // bekci
    initial begin
        #4ms;
        $fatal(1, "[STP] TIMEOUT");
    end

endmodule
