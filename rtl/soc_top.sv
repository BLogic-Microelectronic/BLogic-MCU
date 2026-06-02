`timescale 1ns / 1ps
`include "axi/typedef.svh"
`include "axi/assign.svh"
 
module soc_top (
    input  logic        clk_i,
    input  logic        rst_ni,
 
    // Dış Dünya
    input  logic        uart_rxd_i,
    output logic        uart_txd_o,
    input  logic [31:0] gpio_in_i,
    output logic [31:0] gpio_out_o,

    // QSPI Flash Pinleri
    output logic        qspi_sclk_o,
    output logic        qspi_cs_no,
    output logic [ 3:0] qspi_io_o,
    input  logic [ 3:0] qspi_io_i,
    output logic [ 3:0] qspi_io_oe
);
 
    // ============================================================
    // 1. AXI BUS ARAYÜZLERİ
    // ============================================================
    AXI_BUS #(
        .AXI_ADDR_WIDTH(32), .AXI_DATA_WIDTH(32),
        .AXI_ID_WIDTH(4),    .AXI_USER_WIDTH(1)
    ) cpu_instr_bus(), cpu_data_bus(), boot_rom_bus(), instr_sram_bus(),
      data_sram_bus(), ai_sram_bus(), periph_bus();
 
    // ============================================================
    // 2. İŞLEMCİ OBI SİNYALLERİ
    // ============================================================
    logic        instr_req, instr_gnt, instr_rvalid;
    logic [31:0] instr_addr, instr_rdata;
 
    logic        data_req, data_gnt, data_rvalid, data_we;
    logic [ 3:0] data_be;
    logic [31:0] data_addr, data_wdata, data_rdata;

    // Kesme (interrupt) sinyalleri
    logic        timer_irq;
 
    logic [31:0] irq_vector;
    assign irq_vector = {15'd0, timer_irq, 16'd0};
 
    // ============================================================
    // 3. İŞLEMCİ ÇEKİRDEĞİ (CV32E40P)
    // ============================================================
    cv32e40p_top #(.COREV_PULP(0), .FPU(0)) i_cpu (
        .clk_i(clk_i), .rst_ni(rst_ni),
        .pulp_clock_en_i(1'b1), .scan_cg_en_i(1'b0),
        .boot_addr_i(32'h0001_0000), .mtvec_addr_i(32'h0001_0000),
        .dm_halt_addr_i(32'h0001_0000), .hart_id_i(32'd0),
        .dm_exception_addr_i(32'h0001_0000),
        .instr_req_o(instr_req), .instr_gnt_i(instr_gnt),
        .instr_rvalid_i(instr_rvalid), .instr_addr_o(instr_addr),
        .instr_rdata_i(instr_rdata),
        .data_req_o(data_req), .data_gnt_i(data_gnt),
        .data_rvalid_i(data_rvalid), .data_we_o(data_we),
        .data_be_o(data_be), .data_addr_o(data_addr),
        .data_wdata_o(data_wdata), .data_rdata_i(data_rdata),
        .irq_i(irq_vector), .irq_ack_o(), .irq_id_o(),
        .debug_req_i(1'b0), .fetch_enable_i(1'b1), .core_sleep_o()
    );
 
    // ============================================================
    // 4. OBI → AXI KÖPRÜLERİ
    // ============================================================
    obi_to_axi #(.AXI_ID(0)) i_obi_axi_instr (
        .clk_i(clk_i), .rst_ni(rst_ni),
        .obi_req_i(instr_req), .obi_gnt_o(instr_gnt),
        .obi_addr_i(instr_addr), .obi_we_i(1'b0),
        .obi_be_i(4'b1111), .obi_wdata_i(32'd0),
        .obi_rvalid_o(instr_rvalid), .obi_rdata_o(instr_rdata),
        .axi_mst(cpu_instr_bus)
    );
 
    obi_to_axi #(.AXI_ID(1)) i_obi_axi_data (
        .clk_i(clk_i), .rst_ni(rst_ni),
        .obi_req_i(data_req), .obi_gnt_o(data_gnt),
        .obi_addr_i(data_addr), .obi_we_i(data_we),
        .obi_be_i(data_be), .obi_wdata_i(data_wdata),
        .obi_rvalid_o(data_rvalid), .obi_rdata_o(data_rdata),
        .axi_mst(cpu_data_bus)
    );
 
    // ============================================================
    // 5. AXI CROSSBAR
    // ============================================================
    soc_axi_interconnect i_crossbar (
        .clk_i(clk_i), .rst_ni(rst_ni),
        .cpu_instr_slv(cpu_instr_bus), .cpu_data_slv(cpu_data_bus),
        .boot_rom_mst(boot_rom_bus), .instr_sram_mst(instr_sram_bus),
        .data_sram_mst(data_sram_bus), .ai_sram_mst(ai_sram_bus),
        .periph_mst(periph_bus)
    );
 
    // ============================================================
    // 6. AXI4 → AXI4-Lite KÖPRÜSÜ
    // ============================================================
    logic [31:0] lite_awaddr,  lite_araddr,  lite_wdata,  lite_rdata;
    logic [ 3:0] lite_wstrb;
    logic        lite_awvalid, lite_awready, lite_wvalid, lite_wready;
    logic [ 1:0] lite_bresp,   lite_rresp;
    logic        lite_bvalid,  lite_bready;
    logic        lite_arvalid, lite_arready;
    logic        lite_rvalid,  lite_rready;
 
    axi4_to_axilite_bridge i_axi_lite_bridge (
        .clk_i(clk_i), .rst_ni(rst_ni),
        .s_awid(periph_bus.aw_id), .s_awaddr(periph_bus.aw_addr),
        .s_awlen(periph_bus.aw_len), .s_awsize(periph_bus.aw_size),
        .s_awburst(periph_bus.aw_burst), .s_awlock(periph_bus.aw_lock),
        .s_awcache(periph_bus.aw_cache), .s_awprot(periph_bus.aw_prot),
        .s_awqos(periph_bus.aw_qos), .s_awregion(periph_bus.aw_region),
        .s_awatop(periph_bus.aw_atop), .s_awuser(periph_bus.aw_user),
        .s_awvalid(periph_bus.aw_valid), .s_awready(periph_bus.aw_ready),
        .s_wdata(periph_bus.w_data), .s_wstrb(periph_bus.w_strb),
        .s_wlast(periph_bus.w_last), .s_wuser(periph_bus.w_user),
        .s_wvalid(periph_bus.w_valid), .s_wready(periph_bus.w_ready),
        .s_bid(periph_bus.b_id), .s_bresp(periph_bus.b_resp),
        .s_buser(periph_bus.b_user), .s_bvalid(periph_bus.b_valid),
        .s_bready(periph_bus.b_ready),
        .s_arid(periph_bus.ar_id), .s_araddr(periph_bus.ar_addr),
        .s_arlen(periph_bus.ar_len), .s_arsize(periph_bus.ar_size),
        .s_arburst(periph_bus.ar_burst), .s_arlock(periph_bus.ar_lock),
        .s_arcache(periph_bus.ar_cache), .s_arprot(periph_bus.ar_prot),
        .s_arqos(periph_bus.ar_qos), .s_arregion(periph_bus.ar_region),
        .s_aruser(periph_bus.ar_user),
        .s_arvalid(periph_bus.ar_valid), .s_arready(periph_bus.ar_ready),
        .s_rid(periph_bus.r_id), .s_rdata(periph_bus.r_data),
        .s_rresp(periph_bus.r_resp), .s_rlast(periph_bus.r_last),
        .s_ruser(periph_bus.r_user),
        .s_rvalid(periph_bus.r_valid), .s_rready(periph_bus.r_ready),
        .m_awaddr(lite_awaddr), .m_awvalid(lite_awvalid), .m_awready(lite_awready),
        .m_wdata(lite_wdata), .m_wstrb(lite_wstrb),
        .m_wvalid(lite_wvalid), .m_wready(lite_wready),
        .m_bresp(lite_bresp), .m_bvalid(lite_bvalid), .m_bready(lite_bready),
        .m_araddr(lite_araddr), .m_arvalid(lite_arvalid), .m_arready(lite_arready),
        .m_rdata(lite_rdata), .m_rresp(lite_rresp),
        .m_rvalid(lite_rvalid), .m_rready(lite_rready)
    );
 
    // ============================================================
    // 7. ÇEVRE BİRİMİ ADRES ÇÖZÜCÜ
    // ============================================================
    logic [31:0] uart_awaddr,  uart_araddr,  uart_wdata,  uart_rdata;
    logic [3:0]  uart_wstrb;
    logic        uart_awvalid, uart_awready, uart_wvalid, uart_wready;
    logic [1:0]  uart_bresp,   uart_rresp;
    logic        uart_bvalid,  uart_bready,  uart_arvalid, uart_arready;
    logic        uart_rvalid,  uart_rready;
 
    logic [31:0] gpio_awaddr,  gpio_araddr,  gpio_wdata,  gpio_rdata;
    logic [3:0]  gpio_wstrb;
    logic        gpio_awvalid, gpio_awready, gpio_wvalid, gpio_wready;
    logic [1:0]  gpio_bresp,   gpio_rresp;
    logic        gpio_bvalid,  gpio_bready,  gpio_arvalid, gpio_arready;
    logic        gpio_rvalid,  gpio_rready;
 
    logic [31:0] timer_awaddr,  timer_araddr,  timer_wdata,  timer_rdata;
    logic [3:0]  timer_wstrb;
    logic        timer_awvalid, timer_awready, timer_wvalid, timer_wready;
    logic [1:0]  timer_bresp,   timer_rresp;
    logic        timer_bvalid,  timer_bready,  timer_arvalid, timer_arready;
    logic        timer_rvalid,  timer_rready;

    logic [31:0] qspi_awaddr,  qspi_araddr,  qspi_wdata,  qspi_rdata;
    logic [3:0]  qspi_wstrb;
    logic        qspi_awvalid, qspi_awready, qspi_wvalid, qspi_wready;
    logic [1:0]  qspi_bresp,   qspi_rresp;
    logic        qspi_bvalid,  qspi_bready,  qspi_arvalid, qspi_arready;
    logic        qspi_rvalid,  qspi_rready;
 
    periph_decoder i_periph_decoder (
        .clk_i(clk_i), .rst_ni(rst_ni),
        .s_awaddr(lite_awaddr), .s_awvalid(lite_awvalid), .s_awready(lite_awready),
        .s_wdata(lite_wdata), .s_wstrb(lite_wstrb),
        .s_wvalid(lite_wvalid), .s_wready(lite_wready),
        .s_bresp(lite_bresp), .s_bvalid(lite_bvalid), .s_bready(lite_bready),
        .s_araddr(lite_araddr), .s_arvalid(lite_arvalid), .s_arready(lite_arready),
        .s_rdata(lite_rdata), .s_rresp(lite_rresp),
        .s_rvalid(lite_rvalid), .s_rready(lite_rready),
        // UART
        .uart_awaddr, .uart_awvalid, .uart_awready,
        .uart_wdata, .uart_wstrb, .uart_wvalid, .uart_wready,
        .uart_bresp, .uart_bvalid, .uart_bready,
        .uart_araddr, .uart_arvalid, .uart_arready,
        .uart_rdata, .uart_rresp, .uart_rvalid, .uart_rready,
        // GPIO
        .gpio_awaddr, .gpio_awvalid, .gpio_awready,
        .gpio_wdata, .gpio_wstrb, .gpio_wvalid, .gpio_wready,
        .gpio_bresp, .gpio_bvalid, .gpio_bready,
        .gpio_araddr, .gpio_arvalid, .gpio_arready,
        .gpio_rdata, .gpio_rresp, .gpio_rvalid, .gpio_rready,
        // Timer
        .timer_awaddr, .timer_awvalid, .timer_awready,
        .timer_wdata, .timer_wstrb, .timer_wvalid, .timer_wready,
        .timer_bresp, .timer_bvalid, .timer_bready,
        .timer_araddr, .timer_arvalid, .timer_arready,
        .timer_rdata, .timer_rresp, .timer_rvalid, .timer_rready,
        // QSPI
        .qspi_awaddr, .qspi_awvalid, .qspi_awready,
        .qspi_wdata, .qspi_wstrb, .qspi_wvalid, .qspi_wready,
        .qspi_bresp, .qspi_bvalid, .qspi_bready,
        .qspi_araddr, .qspi_arvalid, .qspi_arready,
        .qspi_rdata, .qspi_rresp, .qspi_rvalid, .qspi_rready
    );
 
    // ============================================================
    // 8. UART_0 (0x4000_0000)
    // ============================================================
    uart_axil i_uart_0 (
        .clk_i(clk_i), .rst_ni(rst_ni),
        .s_axi_awaddr(uart_awaddr), .s_axi_awvalid(uart_awvalid), .s_axi_awready(uart_awready),
        .s_axi_wdata(uart_wdata), .s_axi_wstrb(uart_wstrb),
        .s_axi_wvalid(uart_wvalid), .s_axi_wready(uart_wready),
        .s_axi_bresp(uart_bresp), .s_axi_bvalid(uart_bvalid), .s_axi_bready(uart_bready),
        .s_axi_araddr(uart_araddr), .s_axi_arvalid(uart_arvalid), .s_axi_arready(uart_arready),
        .s_axi_rdata(uart_rdata), .s_axi_rresp(uart_rresp),
        .s_axi_rvalid(uart_rvalid), .s_axi_rready(uart_rready),
        .rxd_i(uart_rxd_i), .txd_o(uart_txd_o)
    );
 
    // ============================================================
    // 9. GPIO (0x4000_0100)
    // ============================================================
    gpio_axil i_gpio (
        .clk_i(clk_i), .rst_ni(rst_ni),
        .s_axi_awaddr(gpio_awaddr), .s_axi_awvalid(gpio_awvalid), .s_axi_awready(gpio_awready),
        .s_axi_wdata(gpio_wdata), .s_axi_wstrb(gpio_wstrb),
        .s_axi_wvalid(gpio_wvalid), .s_axi_wready(gpio_wready),
        .s_axi_bresp(gpio_bresp), .s_axi_bvalid(gpio_bvalid), .s_axi_bready(gpio_bready),
        .s_axi_araddr(gpio_araddr), .s_axi_arvalid(gpio_arvalid), .s_axi_arready(gpio_arready),
        .s_axi_rdata(gpio_rdata), .s_axi_rresp(gpio_rresp),
        .s_axi_rvalid(gpio_rvalid), .s_axi_rready(gpio_rready),
        .gpio_in_i(gpio_in_i), .gpio_out_o(gpio_out_o)
    );
 
    // ============================================================
    // 10. TIMER (0x4000_0200)
    // ============================================================
    timer_axil i_timer (
        .clk_i(clk_i), .rst_ni(rst_ni),
        .s_axi_awaddr(timer_awaddr), .s_axi_awvalid(timer_awvalid), .s_axi_awready(timer_awready),
        .s_axi_wdata(timer_wdata), .s_axi_wstrb(timer_wstrb),
        .s_axi_wvalid(timer_wvalid), .s_axi_wready(timer_wready),
        .s_axi_bresp(timer_bresp), .s_axi_bvalid(timer_bvalid), .s_axi_bready(timer_bready),
        .s_axi_araddr(timer_araddr), .s_axi_arvalid(timer_arvalid), .s_axi_arready(timer_arready),
        .s_axi_rdata(timer_rdata), .s_axi_rresp(timer_rresp),
        .s_axi_rvalid(timer_rvalid), .s_axi_rready(timer_rready),
        .timer_irq_o(timer_irq)
    );

    // ============================================================
    // 11. QSPI MASTER (0x4000_0500)
    // ============================================================
    qspi_master_axil i_qspi (
        .clk_i(clk_i), .rst_ni(rst_ni),
        .s_axi_awaddr(qspi_awaddr), .s_axi_awvalid(qspi_awvalid), .s_axi_awready(qspi_awready),
        .s_axi_wdata(qspi_wdata), .s_axi_wstrb(qspi_wstrb),
        .s_axi_wvalid(qspi_wvalid), .s_axi_wready(qspi_wready),
        .s_axi_bresp(qspi_bresp), .s_axi_bvalid(qspi_bvalid), .s_axi_bready(qspi_bready),
        .s_axi_araddr(qspi_araddr), .s_axi_arvalid(qspi_arvalid), .s_axi_arready(qspi_arready),
        .s_axi_rdata(qspi_rdata), .s_axi_rresp(qspi_rresp),
        .s_axi_rvalid(qspi_rvalid), .s_axi_rready(qspi_rready),
        .sclk_o(qspi_sclk_o), .cs_no(qspi_cs_no),
        .io_o(qspi_io_o), .io_i(qspi_io_i), .io_oe(qspi_io_oe)
    );
 
    // ============================================================
    // 12. BELLEK MODÜLLERİ
    // ============================================================
    axi_sram_wrapper #(.AXI_ID_WIDTH(5), .SRAM_BYTES(1024),  .INIT_FILE("data_mem.hex"))
        i_boot_rom  (.clk_i(clk_i), .rst_ni(rst_ni), .slv(boot_rom_bus));
 
    axi_sram_wrapper #(.AXI_ID_WIDTH(5), .SRAM_BYTES(8192), .INIT_FILE("firmware.hex"))
        i_instr_sram(.clk_i(clk_i), .rst_ni(rst_ni), .slv(instr_sram_bus));
 
    axi_sram_wrapper #(.AXI_ID_WIDTH(5), .SRAM_BYTES(8192), .INIT_FILE("data_mem.hex"))
        i_data_sram (.clk_i(clk_i), .rst_ni(rst_ni), .slv(data_sram_bus));
 
    axi_sram_wrapper #(.AXI_ID_WIDTH(5), .SRAM_BYTES(30720), .INIT_FILE("data_mem.hex"))
        i_ai_sram   (.clk_i(clk_i), .rst_ni(rst_ni), .slv(ai_sram_bus));

// ============================================================
    // 13. PROTOCOL CHECKER'LAR (Doğrulama — Sentez'de çıkarılır)
    // ============================================================
    // synthesis translate_off
    // verilator lint_off UNUSED
    // verilator lint_off UNDRIVEN
 
    soc_protocol_bind i_protocol_checkers (
        .clk       (clk_i),
        .rst_n     (rst_ni),
 
        // Periph bus (AXI-Lite köprü çıkışı)
        .lite_awaddr  (lite_awaddr),   .lite_awvalid (lite_awvalid),  .lite_awready (lite_awready),
        .lite_wdata   (lite_wdata),    .lite_wstrb   (lite_wstrb),
        .lite_wvalid  (lite_wvalid),   .lite_wready  (lite_wready),
        .lite_bresp   (lite_bresp),    .lite_bvalid  (lite_bvalid),   .lite_bready  (lite_bready),
        .lite_araddr  (lite_araddr),   .lite_arvalid (lite_arvalid),  .lite_arready (lite_arready),
        .lite_rdata   (lite_rdata),    .lite_rresp   (lite_rresp),
        .lite_rvalid  (lite_rvalid),   .lite_rready  (lite_rready),
 
        // UART_0
        .uart_awaddr  (uart_awaddr),   .uart_awvalid (uart_awvalid),  .uart_awready (uart_awready),
        .uart_wdata   (uart_wdata),    .uart_wstrb   (uart_wstrb),
        .uart_wvalid  (uart_wvalid),   .uart_wready  (uart_wready),
        .uart_bresp   (uart_bresp),    .uart_bvalid  (uart_bvalid),   .uart_bready  (uart_bready),
        .uart_araddr  (uart_araddr),   .uart_arvalid (uart_arvalid),  .uart_arready (uart_arready),
        .uart_rdata   (uart_rdata),    .uart_rresp   (uart_rresp),
        .uart_rvalid  (uart_rvalid),   .uart_rready  (uart_rready),
 
        // GPIO
        .gpio_awaddr  (gpio_awaddr),   .gpio_awvalid (gpio_awvalid),  .gpio_awready (gpio_awready),
        .gpio_wdata   (gpio_wdata),    .gpio_wstrb   (gpio_wstrb),
        .gpio_wvalid  (gpio_wvalid),   .gpio_wready  (gpio_wready),
        .gpio_bresp   (gpio_bresp),    .gpio_bvalid  (gpio_bvalid),   .gpio_bready  (gpio_bready),
        .gpio_araddr  (gpio_araddr),   .gpio_arvalid (gpio_arvalid),  .gpio_arready (gpio_arready),
        .gpio_rdata   (gpio_rdata),    .gpio_rresp   (gpio_rresp),
        .gpio_rvalid  (gpio_rvalid),   .gpio_rready  (gpio_rready),
 
        // Timer
        .timer_awaddr (timer_awaddr),  .timer_awvalid(timer_awvalid), .timer_awready(timer_awready),
        .timer_wdata  (timer_wdata),   .timer_wstrb  (timer_wstrb),
        .timer_wvalid (timer_wvalid),  .timer_wready (timer_wready),
        .timer_bresp  (timer_bresp),   .timer_bvalid (timer_bvalid),  .timer_bready (timer_bready),
        .timer_araddr (timer_araddr),  .timer_arvalid(timer_arvalid), .timer_arready(timer_arready),
        .timer_rdata  (timer_rdata),   .timer_rresp  (timer_rresp),
        .timer_rvalid (timer_rvalid),  .timer_rready (timer_rready),
 
        // QSPI
        .qspi_awaddr  (qspi_awaddr),  .qspi_awvalid (qspi_awvalid), .qspi_awready (qspi_awready),
        .qspi_wdata   (qspi_wdata),   .qspi_wstrb   (qspi_wstrb),
        .qspi_wvalid  (qspi_wvalid),  .qspi_wready  (qspi_wready),
        .qspi_bresp   (qspi_bresp),   .qspi_bvalid  (qspi_bvalid),  .qspi_bready  (qspi_bready),
        .qspi_araddr  (qspi_araddr),  .qspi_arvalid (qspi_arvalid), .qspi_arready (qspi_arready),
        .qspi_rdata   (qspi_rdata),   .qspi_rresp   (qspi_rresp),
        .qspi_rvalid  (qspi_rvalid),  .qspi_rready  (qspi_rready)
    );
 
    // verilator lint_on UNUSED
    // verilator lint_on UNDRIVEN
    // synthesis translate_on
 

endmodule
