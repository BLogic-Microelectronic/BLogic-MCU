// SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
// SPDX-License-Identifier: GPL-3.0-only
// Licensed under the GNU General Public License version 3 only.
// See the LICENSE file in the repository root for the full license text.

// ============================================
// Ostim BLogic Mikroelektronik
// i2c_master_tb.sv  -  I2C master testbench
// ============================================
`timescale 1ns / 1ps

module i2c_master_tb;

    // Saat / reset
    localparam int unsigned CLK_HZ = 50_000_000;   // 20 ns periyot
    localparam logic [6:0]  SLAVE_ADDR = 7'h50;

    logic clk = 1'b0;
    logic rst_n;
    always #10 clk = ~clk;

    // DUT AXI-Lite sinyalleri
    logic [31:0] awaddr, wdata, araddr;
    logic [ 3:0] wstrb;
    logic        awvalid, awready, wvalid, wready;
    logic [ 1:0] bresp;
    logic        bvalid, bready;
    logic        arvalid, arready;
    logic [31:0] rdata;
    logic [ 1:0] rresp;
    logic        rvalid, rready;

    // I2C hattı (open-drain)
    logic scl;
    logic mst_sda_oe;
    logic slv_sda_oe;
    wire  sda = ~(mst_sda_oe | slv_sda_oe);   // pull-up'lı hat

    i2c_master_axil #(
        .CLK_FREQ_HZ(CLK_HZ),
        .SCL_FREQ_HZ(400_000)
    ) dut (
        .clk_i(clk), .rst_ni(rst_n),
        .s_axi_awaddr(awaddr), .s_axi_awvalid(awvalid), .s_axi_awready(awready),
        .s_axi_wdata(wdata), .s_axi_wstrb(wstrb),
        .s_axi_wvalid(wvalid), .s_axi_wready(wready),
        .s_axi_bresp(bresp), .s_axi_bvalid(bvalid), .s_axi_bready(bready),
        .s_axi_araddr(araddr), .s_axi_arvalid(arvalid), .s_axi_arready(arready),
        .s_axi_rdata(rdata), .s_axi_rresp(rresp),
        .s_axi_rvalid(rvalid), .s_axi_rready(rready),
        .scl_o(scl), .sda_oe_o(mst_sda_oe), .sda_i(sda)
    );

    // Yazmaç offset'leri
    localparam logic [31:0] A_NBY = 32'h00;
    localparam logic [31:0] A_ADR = 32'h04;
    localparam logic [31:0] A_RDR = 32'h08;
    localparam logic [31:0] A_TDR = 32'h0C;
    localparam logic [31:0] A_CFG = 32'h10;

    // Davranışsal I2C slave modeli
    logic scl_q1, sda_q1;
    always_ff @(posedge clk) begin
        scl_q1 <= scl;
        sda_q1 <= sda;
    end
    wire scl_rise =  scl & ~scl_q1;
    wire scl_fall = ~scl &  scl_q1;
    wire start_c  = (~sda &  sda_q1) & scl & scl_q1;  // SCL=1 iken SDA düştü
    wire stop_c   = ( sda & ~sda_q1) & scl & scl_q1;  // SCL=1 iken SDA çıktı

    typedef enum logic [2:0] {
        SL_IDLE, SL_GET, SL_ACK_OUT, SL_SEND, SL_GET_MACK, SL_WAIT_STOP
    } slv_state_e;
    slv_state_e sl_st;

    logic [7:0] sl_sh;
    logic [3:0] sl_bits;
    logic       sl_addr_ph, sl_rw, sl_mack;
    logic [7:0] sl_rx_q [0:7];   // master'dan alınan baytlar
    logic [3:0] sl_rx_n;
    logic [7:0] sl_tx_q [0:7];   // master'a gönderilecek baytlar (initial'da dolar)
    logic [2:0] sl_tx_i;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            sl_st      <= SL_IDLE;
            slv_sda_oe <= 1'b0;
            sl_sh      <= 8'd0;
            sl_bits    <= 4'd0;
            sl_addr_ph <= 1'b0;
            sl_rw      <= 1'b0;
            sl_mack    <= 1'b0;
            sl_rx_n    <= 4'd0;
            sl_tx_i    <= 3'd0;
        end else if (start_c) begin
            sl_st      <= SL_GET;
            sl_bits    <= 4'd0;
            sl_sh      <= 8'd0;
            sl_addr_ph <= 1'b1;
            slv_sda_oe <= 1'b0;
        end else if (stop_c) begin
            sl_st      <= SL_IDLE;
            slv_sda_oe <= 1'b0;
        end else begin
            case (sl_st)
                // adres veya veri baytı al
                SL_GET: begin
                    if (scl_rise) begin
                        sl_sh   <= {sl_sh[6:0], sda};
                        sl_bits <= sl_bits + 4'd1;
                    end
                    if (scl_fall && sl_bits == 4'd8) begin
                        sl_bits <= 4'd0;
                        if (sl_addr_ph) begin
                            if (sl_sh[7:1] == SLAVE_ADDR) begin
                                sl_rw      <= sl_sh[0];
                                slv_sda_oe <= 1'b1;        // ACK
                                sl_st      <= SL_ACK_OUT;
                            end else begin
                                sl_st <= SL_WAIT_STOP;     // NACK: hattı sürme
                            end
                        end else begin
                            sl_rx_q[sl_rx_n[2:0]] <= sl_sh;
                            sl_rx_n               <= sl_rx_n + 4'd1;
                            slv_sda_oe       <= 1'b1;      // ACK
                            sl_st            <= SL_ACK_OUT;
                        end
                    end
                end
                // ACK clock'u bitir
                SL_ACK_OUT: begin
                    if (scl_fall) begin
                        if (sl_addr_ph && sl_rw) begin
                            // master READ: ilk baytın MSB'sini sür
                            sl_addr_ph <= 1'b0;
                            sl_sh      <= sl_tx_q[sl_tx_i];
                            slv_sda_oe <= ~sl_tx_q[sl_tx_i][7];
                            sl_bits    <= 4'd0;
                            sl_st      <= SL_SEND;
                        end else begin
                            sl_addr_ph <= 1'b0;
                            slv_sda_oe <= 1'b0;
                            sl_st      <= SL_GET;
                        end
                    end
                end
                // slave veri gönderiyor (master READ)
                SL_SEND: begin
                    if (scl_rise) sl_bits <= sl_bits + 4'd1;
                    if (scl_fall) begin
                        if (sl_bits == 4'd8) begin
                            slv_sda_oe <= 1'b0;            // master ACK'i için bırak
                            sl_bits    <= 4'd0;
                            sl_st      <= SL_GET_MACK;
                        end else begin
                            sl_sh      <= {sl_sh[6:0], 1'b0};
                            slv_sda_oe <= ~sl_sh[6];       // sonraki bit
                        end
                    end
                end
                // master'ın ACK/NACK'ini örnekle
                SL_GET_MACK: begin
                    if (scl_rise) sl_mack <= ~sda;          // 0'a çekildi = ACK
                    if (scl_fall) begin
                        if (sl_mack) begin
                            sl_tx_i    <= sl_tx_i + 3'd1;
                            sl_sh      <= sl_tx_q[sl_tx_i + 3'd1];
                            slv_sda_oe <= ~sl_tx_q[sl_tx_i + 3'd1][7];
                            sl_st      <= SL_SEND;
                        end else begin
                            slv_sda_oe <= 1'b0;            // NACK → STOP bekle
                            sl_st      <= SL_WAIT_STOP;
                        end
                    end
                end
                SL_WAIT_STOP: ;   // start_c/stop_c yukarıda yakalanır
                default: sl_st <= SL_IDLE;
            endcase
        end
    end

    // SCL periyot ölçümü: ilk kenar reset artefaktı olabilir, 2.-3. yükseliş arası ölçülür
    longint cyc = 0;
    always @(posedge clk) cyc <= cyc + 1;
    longint scl_t0 = 0, scl_per = 0;
    int unsigned scl_rise_cnt = 0;
    always @(posedge clk) begin
        if (scl_rise) begin
            scl_rise_cnt <= scl_rise_cnt + 1;
            if (scl_rise_cnt == 1) scl_t0  <= cyc;
            if (scl_rise_cnt == 2) scl_per <= cyc - scl_t0;
        end
    end

    // AXI-Lite BFM görevleri
    int errors = 0;

    // ready görüldükten sonra valid bir cycle daha tutulur; bready/rready
    // yanıt görülene kadar düşük kalır (iki simülatörde de çalışsın diye).
    /* verilator lint_off INITIALDLY */
    task automatic axil_write(input logic [31:0] addr, input logic [31:0] data);
        @(posedge clk);
        awaddr <= addr; awvalid <= 1'b1;
        wdata  <= data; wstrb   <= 4'hF; wvalid <= 1'b1;
        do @(posedge clk); while (!(awready && wready));
        @(posedge clk);                       // valid'ları bir cycle daha tut
        awvalid <= 1'b0; wvalid <= 1'b0;
        do @(posedge clk); while (!bvalid);
        bready <= 1'b1;
        @(posedge clk);
        bready <= 1'b0;
    endtask

    task automatic axil_read(input logic [31:0] addr, output logic [31:0] data);
        @(posedge clk);
        araddr <= addr; arvalid <= 1'b1;
        do @(posedge clk); while (!arready);
        @(posedge clk);                       // arvalid'ı bir cycle daha tut
        arvalid <= 1'b0;
        do @(posedge clk); while (!rvalid);
        data = rdata;
        rready <= 1'b1;
        @(posedge clk);
        rready <= 1'b0;
    endtask
    /* verilator lint_on INITIALDLY */

    task automatic check32(input logic [31:0] got, input logic [31:0] exp,
                           input string what);
        if (got !== exp) begin
            $display("[FAIL] %s: got=0x%08x exp=0x%08x", what, got, exp);
            errors++;
        end else begin
            $display("[ OK ] %s = 0x%08x", what, got);
        end
    endtask

    task automatic check8(input logic [7:0] got, input logic [7:0] exp,
                          input string what);
        if (got !== exp) begin
            $display("[FAIL] %s: got=0x%02x exp=0x%02x", what, got, exp);
            errors++;
        end else begin
            $display("[ OK ] %s = 0x%02x", what, got);
        end
    endtask

    // CFG'deki done bitini timeout'lu bekle
    task automatic wait_done(input int bitpos, input string name);
        logic [31:0] v;
        int n = 0;
        forever begin
            axil_read(A_CFG, v);
            if (v[bitpos]) begin
                $display("[ OK ] %s", name);
                return;
            end
            n++;
            if (n > 20000) begin
                $display("[FAIL] %s TIMEOUT", name);
                errors++;
                return;
            end
        end
    endtask

    // Test akışı
    logic [31:0] v;

    initial begin
        // slave'in master'a vereceği baytlar (T3/T6 READ testleri)
        sl_tx_q[0] = 8'h11; sl_tx_q[1] = 8'h22;
        sl_tx_q[2] = 8'h33; sl_tx_q[3] = 8'h44;
        sl_tx_q[4] = 8'h00; sl_tx_q[5] = 8'h00;
        sl_tx_q[6] = 8'h00; sl_tx_q[7] = 8'h00;

        // AXI master init
        awaddr = '0; awvalid = 0; wdata = '0; wstrb = '0; wvalid = 0;
        bready = 0;  araddr  = '0; arvalid = 0; rready = 0;

        rst_n = 1'b0;
        repeat (10) @(posedge clk);
        rst_n = 1'b1;
        repeat (5) @(posedge clk);

        $display("==== I2C Master Standalone TB ====");

        // T1: NBY yuvarlama
        axil_write(A_NBY, 32'd0);  axil_read(A_NBY, v);
        check32(v, 32'd1, "T1 NBY 0->1");
        axil_write(A_NBY, 32'd25); axil_read(A_NBY, v);
        check32(v, 32'd4, "T1 NBY 25->4");

        // T2: 4 bayt TX
        axil_write(A_ADR, {25'd0, SLAVE_ADDR});
        axil_write(A_NBY, 32'd4);
        axil_write(A_TDR, 32'hDDCCBBAA);
        axil_write(A_CFG, 32'h1);                 // TXEN (done'lar temizlenir)
        wait_done(1, "T2 TXDONE (4B)");
        axil_read(A_CFG, v);
        check32(v & 32'h10, 32'h0, "T2 no NACK");
        check8(sl_rx_q[0], 8'hAA, "T2 slave byte 0 (LSB first)");
        check8(sl_rx_q[1], 8'hBB, "T2 slave byte 1");
        check8(sl_rx_q[2], 8'hCC, "T2 slave byte 2");
        check8(sl_rx_q[3], 8'hDD, "T2 slave byte 3");
        check32({28'd0, sl_rx_n}, 32'd4, "T2 slave byte count");

        // T2b: SCL ~400 kHz (50MHz'de periyot = 4*31 = 124 clk)
        if (scl_per < 110 || scl_per > 140) begin
            $display("[FAIL] T2b SCL period %0d clk (expected 110 to 140)", scl_per);
            errors++;
        end else begin
            $display("[ OK ] T2b SCL period %0d clk (about %0d kHz)",
                     scl_per, 50_000_000 / scl_per / 1000);
        end

        // T3: 4 bayt RX
        axil_write(A_NBY, 32'd4);
        axil_write(A_CFG, 32'h4);                 // RXEN (TXDONE temizlenir)
        wait_done(3, "T3 RXDONE (4B)");
        axil_read(A_RDR, v);
        check32(v, 32'h44332211, "T3 RDR packing");

        // T4: 1 bayt TX
        axil_write(A_NBY, 32'd1);
        axil_write(A_TDR, 32'h0000005A);
        axil_write(A_CFG, 32'h1);                 // TXEN (RXDONE temizlenir)
        wait_done(1, "T4 TXDONE (1B)");
        check8(sl_rx_q[4], 8'h5A, "T4 slave byte 4");

        // T5: NACK (eşleşmeyen adres)
        axil_write(A_ADR, 32'h23);
        axil_write(A_CFG, 32'h1);
        wait_done(1, "T5 TXDONE (also set on NACK)");
        axil_read(A_CFG, v);
        check32((v >> 4) & 32'h1, 32'h1, "T5 NACK flag");
        axil_write(A_CFG, 32'h0);                 // hepsini temizle
        axil_read(A_CFG, v);
        check32(v & 32'h0000_001F, 32'd0, "T5 status clear");

        // T6: TX+RX birlikte, önce TX sonra zincirleme RX
        axil_write(A_ADR, {25'd0, SLAVE_ADDR});
        axil_write(A_NBY, 32'd1);
        axil_write(A_TDR, 32'h00000077);
        axil_write(A_CFG, 32'h5);                 // TXEN | RXEN
        wait_done(1, "T6 TXDONE (TX has priority)");
        axil_read(A_CFG, v);
        check32((v >> 3) & 32'h1, 32'h0, "T6 RXDONE not set yet");
        check8(sl_rx_q[5], 8'h77, "T6 slave byte 5");
        wait_done(3, "T6 RXDONE (chained RX)");
        axil_read(A_RDR, v);
        check32(v, 32'h00000044, "T6 chained RX data");
        axil_write(A_CFG, 32'h0);

        // Sonuç
        repeat (10) @(posedge clk);
        if (errors == 0) $display("[I2C] PASS: all tests passed");
        else             $display("[I2C] FAIL: %0d errors", errors);
        $finish;
    end

    // Genel emniyet timeout
    initial begin
        #10_000_000;   // 10 ms
        $display("[FAIL] Global testbench timeout");
        $display("[I2C] FAIL");
        $finish;
    end

endmodule