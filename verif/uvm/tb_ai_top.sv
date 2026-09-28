// SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
// SPDX-License-Identifier: GPL-3.0-only
// Licensed under the GNU General Public License version 3 only.
// See the LICENSE file in the repository root for the full license text.

// ============================================
// Ostim BLogic Mikroelektronik
// tb_ai_top.sv  -  YZ hizlandirici UVM testbench ust modulu
//
// DUT = ai_accelerator (davranissal bellekli RTL, ASIC_SRAM_MACRO tanimsiz).
//  - AXI-Lite CSR slave portu  : ortak axi_lite_if + axi_lite_agent (UVM) surer.
//  - AXI4 master portu         : asagidaki AXI4 slave bellek modeline baglidir.
//    Model AI SRAM penceresini (0x0003_0000, 32 KB) tutar; statik agirliklar ve
//    yes_real girdisi make ai TB'siyle ayni altin dosyalardan yuklenir.
//  - AXI4 sozlesmesi (tek vurus, 4 bayt, INCR, WLAST=1) her adres fazinda
//    denetlenir; ihlaller ve pencere disi erisimler ai_side_if'e sayilir.
//  - irq_o yukselen kenarinda conv_out tensoru (1000 sozcuk) altin modelle
//    karsilastirilir; sonuc da ai_side_if uzerinden UVM testine gider.
// RTL'e dokunulmaz.
// ============================================
`timescale 1ns/1ns

module tb_ai_top;

    import uvm_pkg::*;
    import axi_lite_uvm_pkg::*;
    import periph_uvm_pkg::*;
    import ai_uvm_pkg::*;
    `include "uvm_macros.svh"

    // saat ve reset
    logic clk;
    logic rst_n;

    initial begin
        clk = 0;
        forever #5 clk = ~clk;  // 100 MHz
    end

    initial begin
        rst_n = 0;
        #50;
        rst_n = 1;
    end

    axi_lite_if axi_if (.clk(clk), .rst_n(rst_n));
    ai_side_if  side   (.clk(clk));

    // AXI4 master sinyalleri (DUT -> bellek modeli)
    logic [ 3:0] m_awid;    logic [31:0] m_awaddr;  logic [ 7:0] m_awlen;
    logic [ 2:0] m_awsize;  logic [ 1:0] m_awburst; logic        m_awvalid, m_awready;
    logic [31:0] m_wdata;   logic [ 3:0] m_wstrb;   logic        m_wlast, m_wvalid, m_wready;
    logic [ 3:0] m_bid;     logic [ 1:0] m_bresp;   logic        m_bvalid, m_bready;
    logic [ 3:0] m_arid;    logic [31:0] m_araddr;  logic [ 7:0] m_arlen;
    logic [ 2:0] m_arsize;  logic [ 1:0] m_arburst; logic        m_arvalid, m_arready;
    logic [ 3:0] m_rid;     logic [31:0] m_rdata;   logic [ 1:0] m_rresp;
    logic        m_rlast, m_rvalid, m_rready;

    ai_accelerator #(
        .CONV_SHIFT(11),
        .FC_SHIFT  (11)
    ) i_dut (
        .clk_i         (clk),
        .rst_ni        (rst_n),

        .s_axi_awaddr  (axi_if.awaddr),
        .s_axi_awvalid (axi_if.awvalid),
        .s_axi_awready (axi_if.awready),
        .s_axi_wdata   (axi_if.wdata),
        .s_axi_wstrb   (axi_if.wstrb),
        .s_axi_wvalid  (axi_if.wvalid),
        .s_axi_wready  (axi_if.wready),
        .s_axi_bresp   (axi_if.bresp),
        .s_axi_bvalid  (axi_if.bvalid),
        .s_axi_bready  (axi_if.bready),
        .s_axi_araddr  (axi_if.araddr),
        .s_axi_arvalid (axi_if.arvalid),
        .s_axi_arready (axi_if.arready),
        .s_axi_rdata   (axi_if.rdata),
        .s_axi_rresp   (axi_if.rresp),
        .s_axi_rvalid  (axi_if.rvalid),
        .s_axi_rready  (axi_if.rready),

        .m_axi_awid    (m_awid),    .m_axi_awaddr (m_awaddr), .m_axi_awlen  (m_awlen),
        .m_axi_awsize  (m_awsize),  .m_axi_awburst(m_awburst),
        .m_axi_awvalid (m_awvalid), .m_axi_awready(m_awready),
        .m_axi_wdata   (m_wdata),   .m_axi_wstrb  (m_wstrb),  .m_axi_wlast  (m_wlast),
        .m_axi_wvalid  (m_wvalid),  .m_axi_wready (m_wready),
        .m_axi_bid     (m_bid),     .m_axi_bresp  (m_bresp),
        .m_axi_bvalid  (m_bvalid),  .m_axi_bready (m_bready),
        .m_axi_arid    (m_arid),    .m_axi_araddr (m_araddr), .m_axi_arlen  (m_arlen),
        .m_axi_arsize  (m_arsize),  .m_axi_arburst(m_arburst),
        .m_axi_arvalid (m_arvalid), .m_axi_arready(m_arready),
        .m_axi_rid     (m_rid),     .m_axi_rdata  (m_rdata),  .m_axi_rresp  (m_rresp),
        .m_axi_rlast   (m_rlast),   .m_axi_rvalid (m_rvalid), .m_axi_rready (m_rready),

        .busy_o        (side.busy),
        .irq_o         (side.irq)
    );

    // --------------------------------------------
    // AXI4 slave bellek modeli (AI SRAM penceresi)
    // make ai TB'sindeki (verif/tb/ai_accel_tb.sv) FSM'in aynisi; ek olarak
    // adres fazinda AXI4 sozlesmesi ve pencere siniri denetlenir.
    // --------------------------------------------
    localparam logic [31:0] AI_SRAM_BASE = 32'h0003_0000;
    localparam int          AI_MEM_WORDS = 8192;           // 32 KB
    logic [31:0] ai_mem [0:AI_MEM_WORDS-1];

    function automatic bit in_window(input logic [31:0] a);
        return (a >= AI_SRAM_BASE) && (a < AI_SRAM_BASE + AI_MEM_WORDS * 4);
    endfunction

    function automatic int unsigned word_idx(input logic [31:0] a);
        return (a - AI_SRAM_BASE) >> 2;
    endfunction

    typedef enum logic [1:0] { S_IDLE, S_R_DRIVE, S_W_DATA, S_W_RESP } slv_state_t;
    slv_state_t  slv;
    logic [31:0] saved_awaddr, saved_araddr;
    logic [ 3:0] saved_awid,   saved_arid;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            slv       <= S_IDLE;
            m_awready <= 1'b0;  m_wready  <= 1'b0;
            m_bvalid  <= 1'b0;  m_bresp   <= 2'b00;  m_bid <= 4'd0;
            m_arready <= 1'b0;  m_rvalid  <= 1'b0;   m_rresp <= 2'b00;
            m_rlast   <= 1'b0;  m_rid     <= 4'd0;   m_rdata <= 32'd0;
        end else begin
            m_awready <= 1'b0;
            m_wready  <= 1'b0;
            m_arready <= 1'b0;

            unique case (slv)
                S_IDLE: begin
                    if (m_arvalid) begin
                        if (m_arlen != 8'd0 || m_arsize != 3'b010 || m_arburst != 2'b01)
                            side.axi4_errs <= side.axi4_errs + 1;
                        if (!in_window(m_araddr))
                            side.oob_errs <= side.oob_errs + 1;
                        saved_araddr <= m_araddr;
                        saved_arid   <= m_arid;
                        m_arready    <= 1'b1;
                        slv          <= S_R_DRIVE;
                    end else if (m_awvalid) begin
                        if (m_awlen != 8'd0 || m_awsize != 3'b010 || m_awburst != 2'b01)
                            side.axi4_errs <= side.axi4_errs + 1;
                        if (!in_window(m_awaddr))
                            side.oob_errs <= side.oob_errs + 1;
                        saved_awaddr <= m_awaddr;
                        saved_awid   <= m_awid;
                        m_awready    <= 1'b1;
                        slv          <= S_W_DATA;
                    end
                end
                S_R_DRIVE: begin
                    m_rdata  <= in_window(saved_araddr) ? ai_mem[word_idx(saved_araddr)] : 32'hDEAD_BEEF;
                    m_rid    <= saved_arid;
                    m_rresp  <= 2'b00;
                    m_rlast  <= 1'b1;
                    m_rvalid <= 1'b1;
                    if (m_rvalid && m_rready) begin
                        m_rvalid <= 1'b0;
                        m_rlast  <= 1'b0;
                        side.rd_beats <= side.rd_beats + 1;
                        slv      <= S_IDLE;
                    end
                end
                S_W_DATA: begin
                    if (m_wvalid) begin
                        if (!m_wlast) side.axi4_errs <= side.axi4_errs + 1;
                        if (in_window(saved_awaddr)) begin
                            if (m_wstrb[0]) ai_mem[word_idx(saved_awaddr)][ 7: 0] <= m_wdata[ 7: 0];
                            if (m_wstrb[1]) ai_mem[word_idx(saved_awaddr)][15: 8] <= m_wdata[15: 8];
                            if (m_wstrb[2]) ai_mem[word_idx(saved_awaddr)][23:16] <= m_wdata[23:16];
                            if (m_wstrb[3]) ai_mem[word_idx(saved_awaddr)][31:24] <= m_wdata[31:24];
                        end
                        side.last_wr_addr <= saved_awaddr;
                        side.last_wr_data <= m_wdata;
                        side.wr_beats     <= side.wr_beats + 1;
                        m_wready <= 1'b1;
                        slv      <= S_W_RESP;
                    end
                end
                S_W_RESP: begin
                    m_bid    <= saved_awid;
                    m_bresp  <= 2'b00;
                    m_bvalid <= 1'b1;
                    if (m_bvalid && m_bready) begin
                        m_bvalid <= 1'b0;
                        slv      <= S_IDLE;
                    end
                end
                default: slv <= S_IDLE;
            endcase
        end
    end

    // --------------------------------------------
    // On yukleme ve altin model (make ai ile ayni dosyalar, repo kokunden)
    // --------------------------------------------
    logic [31:0] golden_conv [0:999];
    logic [31:0] golden_out  [0:0];

    initial begin
        logic signed [7:0] b [0:3];
        int unsigned am;

        for (int i = 0; i < AI_MEM_WORDS; i++) ai_mem[i] = 32'd0;
        $readmemh("sw/ai_model/golden_vectors/weights_conv.hex", ai_mem, 32'h17A8 >> 2, (32'h17A8 >> 2) + 160 - 1);
        $readmemh("sw/ai_model/golden_vectors/bias_conv.hex",    ai_mem, 32'h1BA8 >> 2, (32'h1BA8 >> 2) + 8 - 1);
        $readmemh("sw/ai_model/golden_vectors/weights_fc.hex",   ai_mem, 32'h1BC8 >> 2, (32'h1BC8 >> 2) + 4000 - 1);
        $readmemh("sw/ai_model/golden_vectors/bias_fc.hex",      ai_mem, 32'h5A48 >> 2, (32'h5A48 >> 2) + 4 - 1);
        $readmemh("sw/ai_model/golden_vectors/input_yes_real.hex", ai_mem, 0, 490 - 1);
        $readmemh("sw/ai_model/golden_vectors/conv_out_yes_real.hex", golden_conv);
        $readmemh("sw/ai_model/golden_vectors/output_yes_real.hex",   golden_out);

        // yol hatasi sessiz kalmasin: make ai TB'sinin spot-check degerleri
        if (ai_mem[32'h17A8 >> 2] !== 32'h095C1EFA || ai_mem[32'h1BC8 >> 2] !== 32'h0AFDF9FF)
            $fatal(1, "[AI-TB] agirlik on yuklemesi basarisiz (repo kokunden mi kosuluyor?)");

        // fc_out[silence, unknown, yes, no] -> argmax
        b[0] = golden_out[0][ 7: 0]; b[1] = golden_out[0][15: 8];
        b[2] = golden_out[0][23:16]; b[3] = golden_out[0][31:24];
        am = 0;
        for (int i = 1; i < 4; i++) if ($signed(b[i]) > $signed(b[am])) am = i;
        side.expected_argmax = am;

        side.last_wr_addr = 32'd0;  side.last_wr_data = 32'd0;
        side.rd_beats     = 0;      side.wr_beats     = 0;
        side.axi4_errs    = 0;      side.oob_errs     = 0;
        side.done_count   = 0;      side.conv_errors  = -1;
        $display("[AI-TB] on yukleme tamam: yes_real girdisi, beklenen argmax=%0d", am);
    end

    // DONE (irq_o) yukselen kenari: conv_out tensorunu altin modelle karsilastir
    logic irq_q;
    always @(posedge clk) begin
        irq_q <= side.irq;
        if (rst_n && side.irq && !irq_q) begin
            int e;
            e = 0;
            for (int i = 0; i < 1000; i++)
                if (ai_mem[(32'h07A8 >> 2) + i] !== golden_conv[i]) e++;
            side.conv_errors <= e;
            side.done_count  <= side.done_count + 1;
            $display("[AI-TB] DONE #%0d: conv_out farki %0d/1000 sozcuk, son yazma 0x%08h <- 0x%08h",
                     side.done_count + 1, e, side.last_wr_addr, side.last_wr_data);
        end
    end

    // UVM baglanti
    initial begin
        uvm_config_db #(virtual axi_lite_if)::set(
            null, "uvm_test_top.env.agent.*", "vif", axi_if);
        uvm_config_db #(virtual ai_side_if)::set(
            null, "uvm_test_top", "ai_vif", side);
        run_test();
    end

    // simulasyon zaman asimi korumasi (iki cikarim ~9 ms)
    initial begin
        #60_000_000;
        `uvm_fatal("TIMEOUT", "Simulasyon zaman asimina ugradi")
    end

endmodule
