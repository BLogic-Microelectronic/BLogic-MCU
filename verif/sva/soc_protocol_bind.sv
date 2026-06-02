// ============================================================
// BLogic MCU — SoC Protocol Bind Dosyası
// TEKNOFEST 2026 Çip Tasarım Yarışması
// ============================================================
// Bu dosya protocol checker modüllerini SoC'deki tüm AXI/AXI-Lite
// arayüzlerine bağlar. `bind` kullanmak yerine doğrudan soc_top
// seviyesinde instantiation yapılır — Verilator uyumluluğu için.
//
// Kapsanan arayüzler:
//   1. UART_0  AXI-Lite slave  (0x4000_0000)
//   2. GPIO    AXI-Lite slave  (0x4000_0100)
//   3. Timer   AXI-Lite slave  (0x4000_0200)
//   4. QSPI    AXI-Lite slave  (0x4000_0500)
//   5. Periph  AXI-Lite master (AXI4→AXI-Lite köprü çıkışı)
//
// NOT: AI accelerator SoC'ye entegre edildiğinde aşağıdaki
// bind'ler de aktif edilmelidir:
//   6. AI Acc  AXI-Lite slave  (CSR)
//   7. AI Acc  AXI4 master     (AI SRAM erişimi)
// ============================================================

module soc_protocol_bind (
    input logic        clk,
    input logic        rst_n,

    // === Periph Bus (AXI4→AXI-Lite köprü çıkışı) ===
    input logic [31:0] lite_awaddr,
    input logic        lite_awvalid,
    input logic        lite_awready,
    input logic [31:0] lite_wdata,
    input logic [ 3:0] lite_wstrb,
    input logic        lite_wvalid,
    input logic        lite_wready,
    input logic [ 1:0] lite_bresp,
    input logic        lite_bvalid,
    input logic        lite_bready,
    input logic [31:0] lite_araddr,
    input logic        lite_arvalid,
    input logic        lite_arready,
    input logic [31:0] lite_rdata,
    input logic [ 1:0] lite_rresp,
    input logic        lite_rvalid,
    input logic        lite_rready,

    // === UART AXI-Lite ===
    input logic [31:0] uart_awaddr,  input logic uart_awvalid, input logic uart_awready,
    input logic [31:0] uart_wdata,   input logic [3:0] uart_wstrb,
    input logic        uart_wvalid,  input logic uart_wready,
    input logic [ 1:0] uart_bresp,   input logic uart_bvalid,  input logic uart_bready,
    input logic [31:0] uart_araddr,  input logic uart_arvalid, input logic uart_arready,
    input logic [31:0] uart_rdata,   input logic [1:0] uart_rresp,
    input logic        uart_rvalid,  input logic uart_rready,

    // === GPIO AXI-Lite ===
    input logic [31:0] gpio_awaddr,  input logic gpio_awvalid, input logic gpio_awready,
    input logic [31:0] gpio_wdata,   input logic [3:0] gpio_wstrb,
    input logic        gpio_wvalid,  input logic gpio_wready,
    input logic [ 1:0] gpio_bresp,   input logic gpio_bvalid,  input logic gpio_bready,
    input logic [31:0] gpio_araddr,  input logic gpio_arvalid, input logic gpio_arready,
    input logic [31:0] gpio_rdata,   input logic [1:0] gpio_rresp,
    input logic        gpio_rvalid,  input logic gpio_rready,

    // === Timer AXI-Lite ===
    input logic [31:0] timer_awaddr,  input logic timer_awvalid, input logic timer_awready,
    input logic [31:0] timer_wdata,   input logic [3:0] timer_wstrb,
    input logic        timer_wvalid,  input logic timer_wready,
    input logic [ 1:0] timer_bresp,   input logic timer_bvalid,  input logic timer_bready,
    input logic [31:0] timer_araddr,  input logic timer_arvalid, input logic timer_arready,
    input logic [31:0] timer_rdata,   input logic [1:0] timer_rresp,
    input logic        timer_rvalid,  input logic timer_rready,

    // === QSPI AXI-Lite ===
    input logic [31:0] qspi_awaddr,  input logic qspi_awvalid, input logic qspi_awready,
    input logic [31:0] qspi_wdata,   input logic [3:0] qspi_wstrb,
    input logic        qspi_wvalid,  input logic qspi_wready,
    input logic [ 1:0] qspi_bresp,   input logic qspi_bvalid,  input logic qspi_bready,
    input logic [31:0] qspi_araddr,  input logic qspi_arvalid, input logic qspi_arready,
    input logic [31:0] qspi_rdata,   input logic [1:0] qspi_rresp,
    input logic        qspi_rvalid,  input logic qspi_rready
);

    // =========================================================
    // 1. PERIPH BUS — AXI-Lite köprü çıkışı (tüm periph trafiği)
    // =========================================================
    axi_lite_protocol_checker #(.INTF_NAME("PERIPH_BUS")) i_chk_periph (
        .clk(clk), .rst_n(rst_n),
        .awvalid(lite_awvalid), .awready(lite_awready), .awaddr(lite_awaddr),
        .wvalid(lite_wvalid),   .wready(lite_wready),   .wdata(lite_wdata),   .wstrb(lite_wstrb),
        .bvalid(lite_bvalid),   .bready(lite_bready),   .bresp(lite_bresp),
        .arvalid(lite_arvalid), .arready(lite_arready), .araddr(lite_araddr),
        .rvalid(lite_rvalid),   .rready(lite_rready),   .rdata(lite_rdata),   .rresp(lite_rresp)
    );

    // =========================================================
    // 2. UART_0 AXI-Lite (0x4000_0000)
    // =========================================================
    axi_lite_protocol_checker #(.INTF_NAME("UART_0")) i_chk_uart (
        .clk(clk), .rst_n(rst_n),
        .awvalid(uart_awvalid), .awready(uart_awready), .awaddr(uart_awaddr),
        .wvalid(uart_wvalid),   .wready(uart_wready),   .wdata(uart_wdata),   .wstrb(uart_wstrb),
        .bvalid(uart_bvalid),   .bready(uart_bready),   .bresp(uart_bresp),
        .arvalid(uart_arvalid), .arready(uart_arready), .araddr(uart_araddr),
        .rvalid(uart_rvalid),   .rready(uart_rready),   .rdata(uart_rdata),   .rresp(uart_rresp)
    );

    // =========================================================
    // 3. GPIO AXI-Lite (0x4000_0100)
    // =========================================================
    axi_lite_protocol_checker #(.INTF_NAME("GPIO")) i_chk_gpio (
        .clk(clk), .rst_n(rst_n),
        .awvalid(gpio_awvalid), .awready(gpio_awready), .awaddr(gpio_awaddr),
        .wvalid(gpio_wvalid),   .wready(gpio_wready),   .wdata(gpio_wdata),   .wstrb(gpio_wstrb),
        .bvalid(gpio_bvalid),   .bready(gpio_bready),   .bresp(gpio_bresp),
        .arvalid(gpio_arvalid), .arready(gpio_arready), .araddr(gpio_araddr),
        .rvalid(gpio_rvalid),   .rready(gpio_rready),   .rdata(gpio_rdata),   .rresp(gpio_rresp)
    );

    // =========================================================
    // 4. Timer AXI-Lite (0x4000_0200)
    // =========================================================
    axi_lite_protocol_checker #(.INTF_NAME("TIMER")) i_chk_timer (
        .clk(clk), .rst_n(rst_n),
        .awvalid(timer_awvalid), .awready(timer_awready), .awaddr(timer_awaddr),
        .wvalid(timer_wvalid),   .wready(timer_wready),   .wdata(timer_wdata),   .wstrb(timer_wstrb),
        .bvalid(timer_bvalid),   .bready(timer_bready),   .bresp(timer_bresp),
        .arvalid(timer_arvalid), .arready(timer_arready), .araddr(timer_araddr),
        .rvalid(timer_rvalid),   .rready(timer_rready),   .rdata(timer_rdata),   .rresp(timer_rresp)
    );

    // =========================================================
    // 5. QSPI AXI-Lite (0x4000_0500)
    // =========================================================
    axi_lite_protocol_checker #(.INTF_NAME("QSPI")) i_chk_qspi (
        .clk(clk), .rst_n(rst_n),
        .awvalid(qspi_awvalid), .awready(qspi_awready), .awaddr(qspi_awaddr),
        .wvalid(qspi_wvalid),   .wready(qspi_wready),   .wdata(qspi_wdata),   .wstrb(qspi_wstrb),
        .bvalid(qspi_bvalid),   .bready(qspi_bready),   .bresp(qspi_bresp),
        .arvalid(qspi_arvalid), .arready(qspi_arready), .araddr(qspi_araddr),
        .rvalid(qspi_rvalid),   .rready(qspi_rready),   .rdata(qspi_rdata),   .rresp(qspi_rresp)
    );

endmodule
