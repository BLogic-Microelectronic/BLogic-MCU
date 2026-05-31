// ============================================================
// BLogic MCU — AXI-Lite Protocol Checker (SVA)
// TEKNOFEST 2026 Çip Tasarım Yarışması
// ============================================================

module axi_lite_protocol_checker #(
    parameter string INTF_NAME = "AXI_LITE"
)(
    input logic        clk,
    input logic        rst_n,

    // Write Address
    input logic        awvalid,
    input logic        awready,
    input logic [31:0] awaddr,

    // Write Data
    input logic        wvalid,
    input logic        wready,
    input logic [31:0] wdata,
    input logic [ 3:0] wstrb,

    // Write Response
    input logic        bvalid,
    input logic        bready,
    input logic [ 1:0] bresp,

    // Read Address
    input logic        arvalid,
    input logic        arready,
    input logic [31:0] araddr,

    // Read Data
    input logic        rvalid,
    input logic        rready,
    input logic [31:0] rdata,
    input logic [ 1:0] rresp
);

    // =========================================================
    // Geçmiş değerler (1 cycle öncesi)
    // =========================================================
    logic        prev_awvalid, prev_wvalid, prev_bvalid;
    logic        prev_arvalid, prev_rvalid;
    logic [31:0] prev_awaddr,  prev_wdata,  prev_araddr;
    logic [ 3:0] prev_wstrb;
    logic        prev_awready, prev_wready, prev_arready;
    logic        prev_bready,  prev_rready;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            prev_awvalid <= 0; prev_wvalid <= 0; prev_bvalid <= 0;
            prev_arvalid <= 0; prev_rvalid <= 0;
            prev_awaddr  <= 0; prev_wdata  <= 0; prev_araddr <= 0;
            prev_wstrb   <= 0;
            prev_awready <= 0; prev_wready <= 0; prev_arready <= 0;
            prev_bready  <= 0; prev_rready <= 0;
        end else begin
            prev_awvalid <= awvalid; prev_wvalid <= wvalid; prev_bvalid <= bvalid;
            prev_arvalid <= arvalid; prev_rvalid <= rvalid;
            prev_awaddr  <= awaddr;  prev_wdata  <= wdata;  prev_araddr <= araddr;
            prev_wstrb   <= wstrb;
            prev_awready <= awready; prev_wready <= wready; prev_arready <= arready;
            prev_bready  <= bready;  prev_rready <= rready;
        end
    end

    // =========================================================
    // Assertion sayaçları (raporlama)
    // =========================================================
    integer pass_count = 0;
    integer fail_count = 0;
    integer check_count = 0;

    // =========================================================
    // KURAL [AW1 & AW2]: Write Address Kontrolleri
    // =========================================================
    always_ff @(posedge clk) begin
        if (rst_n) begin
            if (prev_awvalid && !prev_awready) begin
                check_count <= check_count + 1;
                if (!awvalid) begin
                    fail_count <= fail_count + 1;
                    $display("[%s] FAIL AW1: AWVALID handshake olmadan dustu t=%0t", INTF_NAME, $time);
                end else begin
                    pass_count <= pass_count + 1;
                end
            end
            if (prev_awvalid && !prev_awready && awvalid) begin
                check_count <= check_count + 1;
                if (awaddr !== prev_awaddr) begin
                    fail_count <= fail_count + 1;
                    $display("[%s] FAIL AW2: AWADDR degisti handshake olmadan t=%0t", INTF_NAME, $time);
                end else begin
                    pass_count <= pass_count + 1;
                end
            end
        end
    end

    // =========================================================
    // KURAL [W1, W2, W3]: Write Data Kontrolleri
    // =========================================================
    always_ff @(posedge clk) begin
        if (rst_n) begin
            if (prev_wvalid && !prev_wready) begin
                check_count <= check_count + 1;
                if (!wvalid) begin
                    fail_count <= fail_count + 1;
                    $display("[%s] FAIL W1: WVALID handshake olmadan dustu t=%0t", INTF_NAME, $time);
                end else begin
                    pass_count <= pass_count + 1;
                end
            end
            if (prev_wvalid && !prev_wready && wvalid) begin
                check_count <= check_count + 1;
                if (wdata !== prev_wdata) begin
                    fail_count <= fail_count + 1;
                    $display("[%s] FAIL W2: WDATA degisti handshake olmadan t=%0t", INTF_NAME, $time);
                end else begin
                    pass_count <= pass_count + 1;
                end
                if (wstrb !== prev_wstrb) begin
                    fail_count <= fail_count + 1;
                    $display("[%s] FAIL W3: WSTRB degisti handshake olmadan t=%0t", INTF_NAME, $time);
                end else begin
                    pass_count <= pass_count + 1;
                end
            end
        end
    end

    // =========================================================
    // KURAL [B1]: Write Response Kontrolü
    // =========================================================
    always_ff @(posedge clk) begin
        if (rst_n) begin
            if (prev_bvalid && !prev_bready) begin
                check_count <= check_count + 1;
                if (!bvalid) begin
                    fail_count <= fail_count + 1;
                    $display("[%s] FAIL B1: BVALID handshake olmadan dustu t=%0t", INTF_NAME, $time);
                end else begin
                    pass_count <= pass_count + 1;
                end
            end
        end
    end

    // =========================================================
    // KURAL [AR1 & AR2]: Read Address Kontrolleri
    // =========================================================
    always_ff @(posedge clk) begin
        if (rst_n) begin
            if (prev_arvalid && !prev_arready) begin
                check_count <= check_count + 1;
                if (!arvalid) begin
                    fail_count <= fail_count + 1;
                    $display("[%s] FAIL AR1: ARVALID handshake olmadan dustu t=%0t", INTF_NAME, $time);
                end else begin
                    pass_count <= pass_count + 1;
                end
            end
            if (prev_arvalid && !prev_arready && arvalid) begin
                check_count <= check_count + 1;
                if (araddr !== prev_araddr) begin
                    fail_count <= fail_count + 1;
                    $display("[%s] FAIL AR2: ARADDR degisti handshake olmadan t=%0t", INTF_NAME, $time);
                end else begin
                    pass_count <= pass_count + 1;
                end
            end
        end
    end

    // =========================================================
    // KURAL [R1]: Read Data Kontrolü
    // =========================================================
    always_ff @(posedge clk) begin
        if (rst_n) begin
            if (prev_rvalid && !prev_rready) begin
                check_count <= check_count + 1;
                if (!rvalid) begin
                    fail_count <= fail_count + 1;
                    $display("[%s] FAIL R1: RVALID handshake olmadan dustu t=%0t", INTF_NAME, $time);
                end else begin
                    pass_count <= pass_count + 1;
                end
            end
        end
    end

    // =========================================================
    // Simülasyon sonu raporu
    // =========================================================
    final begin
        $display("=== [%s] AXI-Lite Protocol Check Raporu ===", INTF_NAME);
        $display("  Kontrol : %0d", check_count);
        $display("  PASS    : %0d", pass_count);
        $display("  FAIL    : %0d", fail_count);
        if (fail_count == 0)
            $display("  >>> PROTOKOL UYUMLU <<<");
        else
            $display("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<");
        $display("==========================================");
    end

endmodule
