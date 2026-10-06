// SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
// SPDX-License-Identifier: GPL-3.0-only
// Licensed under the GNU General Public License version 3 only.
// See the LICENSE file in the repository root for the full license text.

// ============================================
// Ostim BLogic Mikroelektronik
// axi4_protocol_checker.sv  -  AXI4 protokol kontrolcusu
// ============================================

module axi4_protocol_checker #(
    parameter string      INTF_NAME    = "AXI4",
    parameter int unsigned ID_WIDTH     = 4,
    parameter int unsigned ADDR_WIDTH   = 32,
    parameter int unsigned DATA_WIDTH   = 32,
    parameter int unsigned STRB_WIDTH   = DATA_WIDTH / 8
)(
    input logic                    clk,
    input logic                    rst_n,

    // Write Address Channel
    input logic [ID_WIDTH-1:0]     awid,
    input logic [ADDR_WIDTH-1:0]   awaddr,
    input logic [7:0]              awlen,
    input logic [2:0]              awsize,
    input logic [1:0]              awburst,
    input logic                    awvalid,
    input logic                    awready,

    // Write Data Channel
    input logic [DATA_WIDTH-1:0]   wdata,
    input logic [STRB_WIDTH-1:0]   wstrb,
    input logic                    wlast,
    input logic                    wvalid,
    input logic                    wready,

    // Write Response Channel
    input logic [ID_WIDTH-1:0]     bid,
    input logic [1:0]              bresp,
    input logic                    bvalid,
    input logic                    bready,

    // Read Address Channel
    input logic [ID_WIDTH-1:0]     arid,
    input logic [ADDR_WIDTH-1:0]   araddr,
    input logic [7:0]              arlen,
    input logic [2:0]              arsize,
    input logic [1:0]              arburst,
    input logic                    arvalid,
    input logic                    arready,

    // Read Data Channel
    input logic [ID_WIDTH-1:0]     rid,
    input logic [DATA_WIDTH-1:0]   rdata,
    input logic [1:0]              rresp,
    input logic                    rlast,
    input logic                    rvalid,
    input logic                    rready
);

// xsim'de multi-driver hatasini onlemek icin makro tanimliyken govde haric tutulur.
`ifndef NO_PROTOCOL_CHECK
    // onceki degerler (1 cycle gecikmeli)
    logic                    prev_awvalid, prev_awready;
    logic [ADDR_WIDTH-1:0]   prev_awaddr;
    logic [7:0]              prev_awlen;
    logic [2:0]              prev_awsize;
    logic [1:0]              prev_awburst;

    logic                    prev_wvalid,  prev_wready;
    logic [DATA_WIDTH-1:0]   prev_wdata;
    logic [STRB_WIDTH-1:0]   prev_wstrb;
    logic                    prev_wlast;

    logic                    prev_bvalid,  prev_bready;

    logic                    prev_arvalid, prev_arready;
    logic [ADDR_WIDTH-1:0]   prev_araddr;
    logic [7:0]              prev_arlen;
    logic [2:0]              prev_arsize;
    logic [1:0]              prev_arburst;

    logic                    prev_rvalid,  prev_rready;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            prev_awvalid <= 0; prev_awready <= 0; prev_awaddr <= 0;
            prev_awlen   <= 0; prev_awsize  <= 0; prev_awburst <= 0;
            prev_wvalid  <= 0; prev_wready  <= 0; prev_wdata <= 0;
            prev_wstrb   <= 0; prev_wlast   <= 0;
            prev_bvalid  <= 0; prev_bready  <= 0;
            prev_arvalid <= 0; prev_arready <= 0; prev_araddr <= 0;
            prev_arlen   <= 0; prev_arsize  <= 0; prev_arburst <= 0;
            prev_rvalid  <= 0; prev_rready  <= 0;
        end else begin
            prev_awvalid <= awvalid; prev_awready <= awready;
            prev_awaddr  <= awaddr;  prev_awlen   <= awlen;
            prev_awsize  <= awsize;  prev_awburst <= awburst;
            prev_wvalid  <= wvalid;  prev_wready  <= wready;
            prev_wdata   <= wdata;   prev_wstrb   <= wstrb;
            prev_wlast   <= wlast;
            prev_bvalid  <= bvalid;  prev_bready  <= bready;
            prev_arvalid <= arvalid; prev_arready <= arready;
            prev_araddr  <= araddr;  prev_arlen   <= arlen;
            prev_arsize  <= arsize;  prev_arburst <= arburst;
            prev_rvalid  <= rvalid;  prev_rready  <= rready;
        end
    end

    // rapor sayaclari
    integer pass_count  = 0;
    integer fail_count  = 0;
    integer check_count = 0;
    integer warn_count  = 0;

    // handshake sayaclari
    integer aw_handshakes = 0;
    integer w_handshakes  = 0;
    integer b_handshakes  = 0;
    integer ar_handshakes = 0;
    integer r_handshakes  = 0;

    // handshake sayimi
    always_ff @(posedge clk) begin
        if (rst_n) begin
            if (awvalid && awready) aw_handshakes <= aw_handshakes + 1;
            if (wvalid  && wready)  w_handshakes  <= w_handshakes  + 1;
            if (bvalid  && bready)  b_handshakes  <= b_handshakes  + 1;
            if (arvalid && arready) ar_handshakes <= ar_handshakes + 1;
            if (rvalid  && rready)  r_handshakes  <= r_handshakes  + 1;
        end
    end

    // AWVALID handshake olmadan dusmemeli, AW sinyalleri degismemeli
    always_ff @(posedge clk) begin
        if (rst_n && prev_awvalid && !prev_awready) begin
            check_count <= check_count + 1;
            if (!awvalid) begin
                fail_count <= fail_count + 1;
                $display("[%s] FAIL AW1: AWVALID dropped before the handshake t=%0t", INTF_NAME, $time);
            end else begin
                pass_count <= pass_count + 1;
            end

            if (awvalid) begin
                check_count <= check_count + 1;
                if (awaddr !== prev_awaddr || awlen !== prev_awlen ||
                    awsize !== prev_awsize || awburst !== prev_awburst) begin
                    fail_count <= fail_count + 1;
                    $display("[%s] FAIL AW2: AW signals changed before the handshake t=%0t", INTF_NAME, $time);
                end else begin
                    pass_count <= pass_count + 1;
                end
            end
        end
    end

    // WVALID handshake olmadan dusmemeli, W sinyalleri degismemeli
    always_ff @(posedge clk) begin
        if (rst_n && prev_wvalid && !prev_wready) begin
            check_count <= check_count + 1;
            if (!wvalid) begin
                fail_count <= fail_count + 1;
                $display("[%s] FAIL W1: WVALID dropped before the handshake t=%0t", INTF_NAME, $time);
            end else begin
                pass_count <= pass_count + 1;
            end

            if (wvalid) begin
                check_count <= check_count + 1;
                if (wdata !== prev_wdata || wstrb !== prev_wstrb || wlast !== prev_wlast) begin
                    fail_count <= fail_count + 1;
                    $display("[%s] FAIL W2: W signals changed before the handshake t=%0t", INTF_NAME, $time);
                end else begin
                    pass_count <= pass_count + 1;
                end
            end
        end
    end

    // BVALID handshake olmadan dusmemeli
    always_ff @(posedge clk) begin
        if (rst_n && prev_bvalid && !prev_bready) begin
            check_count <= check_count + 1;
            if (!bvalid) begin
                fail_count <= fail_count + 1;
                $display("[%s] FAIL B1: BVALID dropped before the handshake t=%0t", INTF_NAME, $time);
            end else begin
                pass_count <= pass_count + 1;
            end
        end
    end

    // ARVALID handshake olmadan dusmemeli, AR sinyalleri degismemeli
    always_ff @(posedge clk) begin
        if (rst_n && prev_arvalid && !prev_arready) begin
            check_count <= check_count + 1;
            if (!arvalid) begin
                fail_count <= fail_count + 1;
                $display("[%s] FAIL AR1: ARVALID dropped before the handshake t=%0t", INTF_NAME, $time);
            end else begin
                pass_count <= pass_count + 1;
            end

            if (arvalid) begin
                check_count <= check_count + 1;
                if (araddr !== prev_araddr || arlen !== prev_arlen ||
                    arsize !== prev_arsize || arburst !== prev_arburst) begin
                    fail_count <= fail_count + 1;
                    $display("[%s] FAIL AR2: AR signals changed before the handshake t=%0t", INTF_NAME, $time);
                end else begin
                    pass_count <= pass_count + 1;
                end
            end
        end
    end

    // RVALID handshake olmadan dusmemeli
    always_ff @(posedge clk) begin
        if (rst_n && prev_rvalid && !prev_rready) begin
            check_count <= check_count + 1;
            if (!rvalid) begin
                fail_count <= fail_count + 1;
                $display("[%s] FAIL R1: RVALID dropped before the handshake t=%0t", INTF_NAME, $time);
            end else begin
                pass_count <= pass_count + 1;
            end
        end
    end

    // BRESP/RRESP hata izleme (DECERR=11, SLVERR=10)
    always_ff @(posedge clk) begin
        if (rst_n) begin
            if (bvalid && bready) begin
                if (bresp == 2'b11) begin
                    warn_count <= warn_count + 1;
                    $display("[%s] WARN RESP1: BRESP=DECERR t=%0t", INTF_NAME, $time);
                end else if (bresp == 2'b10) begin
                    warn_count <= warn_count + 1;
                    $display("[%s] WARN RESP1: BRESP=SLVERR t=%0t", INTF_NAME, $time);
                end
            end

            if (rvalid && rready) begin
                if (rresp == 2'b11) begin
                    warn_count <= warn_count + 1;
                    $display("[%s] WARN RESP1: RRESP=DECERR t=%0t", INTF_NAME, $time);
                end else if (rresp == 2'b10) begin
                    warn_count <= warn_count + 1;
                    $display("[%s] WARN RESP1: RRESP=SLVERR t=%0t", INTF_NAME, $time);
                end
            end
        end
    end

    // yazma beat sayisi AWLEN ile uyumlu olmali
    logic [7:0] pending_awlen;
    logic       aw_pending;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            pending_awlen <= '0;
            aw_pending    <= 1'b0;
        end else begin
            if (awvalid && awready) begin
                pending_awlen <= awlen;
                aw_pending    <= 1'b1;
            end
            if (wvalid && wready && wlast)
                aw_pending <= 1'b0;
        end
    end

    // yazma beat sayaci
    logic [8:0] w_beat_cnt;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            w_beat_cnt <= '0;
        end else begin
            if (wvalid && wready) begin
                if (wlast)
                    w_beat_cnt <= '0;
                else
                    w_beat_cnt <= w_beat_cnt + 1;
            end
        end
    end

    always_ff @(posedge clk) begin
        if (rst_n && wvalid && wready && wlast && aw_pending) begin
            check_count <= check_count + 1;
            if (w_beat_cnt !== {1'b0, pending_awlen}) begin
                fail_count <= fail_count + 1;
                $display("[%s] FAIL LEN1: WLAST beat count mismatch (expected %0d, got %0d) t=%0t",
                         INTF_NAME, pending_awlen + 1, w_beat_cnt + 1, $time);
            end else begin
                pass_count <= pass_count + 1;
            end
        end
    end

    // okuma beat sayaci + RLAST kontrolu
    logic [7:0] pending_arlen;
    logic        ar_pending;
    logic [8:0]  r_beat_cnt;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            pending_arlen <= '0;
            ar_pending    <= 1'b0;
            r_beat_cnt    <= '0;
        end else begin
            if (arvalid && arready) begin
                pending_arlen <= arlen;
                ar_pending    <= 1'b1;
            end
            if (rvalid && rready) begin
                if (rlast) begin
                    ar_pending <= 1'b0;
                    r_beat_cnt <= '0;
                end else begin
                    r_beat_cnt <= r_beat_cnt + 1;
                end
            end
        end
    end

    always_ff @(posedge clk) begin
        if (rst_n && rvalid && rready && rlast && ar_pending) begin
            check_count <= check_count + 1;
            if (r_beat_cnt !== {1'b0, pending_arlen}) begin
                fail_count <= fail_count + 1;
                $display("[%s] FAIL LEN2: RLAST beat count mismatch (expected %0d, got %0d) t=%0t",
                         INTF_NAME, pending_arlen + 1, r_beat_cnt + 1, $time);
            end else begin
                pass_count <= pass_count + 1;
            end
        end
    end

    // burst tipi RESERVED(2'b11) olmamali
    always_ff @(posedge clk) begin
        if (rst_n) begin
            if (awvalid) begin
                check_count <= check_count + 1;
                if (awburst == 2'b11) begin
                    fail_count <= fail_count + 1;
                    $display("[%s] FAIL BURST1: AWBURST=RESERVED(2'b11) is not allowed t=%0t", INTF_NAME, $time);
                end else begin
                    pass_count <= pass_count + 1;
                end
            end
            if (arvalid) begin
                check_count <= check_count + 1;
                if (arburst == 2'b11) begin
                    fail_count <= fail_count + 1;
                    $display("[%s] FAIL BURST1: ARBURST=RESERVED(2'b11) is not allowed t=%0t", INTF_NAME, $time);
                end else begin
                    pass_count <= pass_count + 1;
                end
            end
        end
    end

    // transfer boyutu veri genisligini asmamali
    localparam int MAX_SIZE = $clog2(DATA_WIDTH / 8);

    always_ff @(posedge clk) begin
        if (rst_n) begin
            if (awvalid && awready) begin
                check_count <= check_count + 1;
                if (awsize > MAX_SIZE[2:0]) begin
                    fail_count <= fail_count + 1;
                    $display("[%s] FAIL SIZE1: AWSIZE=%0d > max(%0d) t=%0t",
                             INTF_NAME, awsize, MAX_SIZE, $time);
                end else begin
                    pass_count <= pass_count + 1;
                end
            end
            if (arvalid && arready) begin
                check_count <= check_count + 1;
                if (arsize > MAX_SIZE[2:0]) begin
                    fail_count <= fail_count + 1;
                    $display("[%s] FAIL SIZE1: ARSIZE=%0d > max(%0d) t=%0t",
                             INTF_NAME, arsize, MAX_SIZE, $time);
                end else begin
                    pass_count <= pass_count + 1;
                end
            end
        end
    end

    // End-of-simulation report: one line per interface.
    final begin
        $display("[%s] AXI4 Protocol Check Report: %0d checks, %0d pass, %0d fail, %0d warnings; handshakes AW %0d, W %0d, B %0d, AR %0d, R %0d => %0s",
                 INTF_NAME, check_count, pass_count, fail_count, warn_count,
                 aw_handshakes, w_handshakes, b_handshakes, ar_handshakes, r_handshakes,
                 (fail_count == 0) ? "AXI4 PROTOCOL OK" : "AXI4 PROTOCOL VIOLATION");
    end
`endif // NO_PROTOCOL_CHECK

endmodule
