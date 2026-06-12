`timescale 1ns / 1ps
`include "axi/typedef.svh"
`include "axi/assign.svh"

module soc_top #(
    parameter logic [31:0] BOOT_ADDR   = 32'h0000_0000,
    // Cekirdek-uyumluluk (arch-test) kosumlarinda -G ile buyutulur.
    // Sartname SoC konfigurasyonu 8 KB'dir; varsayilanlar DEGISTIRILMEZ.
    parameter int unsigned INSTR_SRAM_BYTES = 8192,
    parameter int unsigned DATA_SRAM_BYTES  = 8192,
    parameter int unsigned CLK_FREQ_HZ = 50_000_000   // I2C SCL (400 kHz) bölücüsü için
)(
    input  logic        clk_i,
    input  logic        rst_ni,

    // Dış Dünya
    input  logic        uart_rxd_i,
    output logic        uart_txd_o,
    // UART_1 / YZ stream (DMA) pinleri — YENİ
    input  logic        uart1_rxd_i,
    output logic        uart1_txd_o,
    input  logic [31:0] gpio_in_i,
    output logic [31:0] gpio_out_o,

    // QSPI Flash Pinleri
    output logic        qspi_sclk_o,
    output logic        qspi_cs_no,
    output logic [ 3:0] qspi_io_o,
    input  logic [ 3:0] qspi_io_i,
    output logic [ 3:0] qspi_io_oe,

    // I2C Pinleri — YENİ
    // fpga_top'ta open-drain bağlantı:
    //   assign i2c_sda   = i2c_sda_oe ? 1'b0 : 1'bz;
    //   assign sda_geri  = i2c_sda;   // → i2c_sda_i'ye
    output logic        i2c_scl_o,
    output logic        i2c_sda_oe_o,   // 1 = SDA'yı '0'a çek
    input  logic        i2c_sda_i
);

    // ============================================================
    // 1. AXI BUS ARAYÜZLERİ
    // ============================================================
    // cpu_to_ai_sram_bus: crossbar'dan çıkıp arbiter'a giren yol (CPU tarafı)
    // ai_sram_bus      : arbiter'dan çıkıp SRAM'e giren MUXLU yol
    AXI_BUS #(
        .AXI_ADDR_WIDTH(32), .AXI_DATA_WIDTH(32),
        .AXI_ID_WIDTH(4),    .AXI_USER_WIDTH(1)
    ) cpu_instr_bus(), cpu_data_bus(), boot_rom_bus(), instr_sram_bus(),
      data_sram_bus(), cpu_to_ai_sram_bus(), ai_sram_bus(), periph_bus();

    // ============================================================
    // 2. İŞLEMCİ OBI SİNYALLERİ
    // ============================================================
    logic        instr_req, instr_gnt, instr_rvalid;
    logic [31:0] instr_addr, instr_rdata;

    logic        data_req, data_gnt, data_rvalid, data_we;
    logic [ 3:0] data_be;
    logic [31:0] data_addr, data_wdata, data_rdata;

    // Kesme sinyalleri: timer bit 16, AI bit 17, UART-stream DMA bit 18
    logic        timer_irq;
    logic        ai_irq;
    logic        strm_irq;

    logic [31:0] irq_vector;
    assign irq_vector = {13'd0, strm_irq, ai_irq, timer_irq, 16'd0};

    // AI accelerator durumu (arbiter için bus ownership sinyali)
    logic        ai_busy;
    // UART-stream DMA aktif (arbiter için bus ownership sinyali)
    logic        strm_busy;

    // ============================================================
    // 3. İŞLEMCİ ÇEKİRDEĞİ (CV32E40P)
    // ============================================================
    cv32e40p_top #(.COREV_PULP(0), .FPU(0)) i_cpu (
        .clk_i(clk_i), .rst_ni(rst_ni),
        .pulp_clock_en_i(1'b1), .scan_cg_en_i(1'b0),
        .boot_addr_i(BOOT_ADDR), .mtvec_addr_i(32'h0001_0000),
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
    // ai_sram_mst → cpu_to_ai_sram_bus (sonra arbiter'a girer)
    soc_axi_interconnect i_crossbar (
        .clk_i(clk_i), .rst_ni(rst_ni),
        .cpu_instr_slv(cpu_instr_bus), .cpu_data_slv(cpu_data_bus),
        .boot_rom_mst(boot_rom_bus), .instr_sram_mst(instr_sram_bus),
        .data_sram_mst(data_sram_bus), .ai_sram_mst(cpu_to_ai_sram_bus),
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

    // UART_1 / YZ stream (decoder 0x3) — YENİ
    logic [31:0] uart1_awaddr,  uart1_araddr,  uart1_wdata,  uart1_rdata;
    logic [3:0]  uart1_wstrb;
    logic        uart1_awvalid, uart1_awready, uart1_wvalid, uart1_wready;
    logic [1:0]  uart1_bresp,   uart1_rresp;
    logic        uart1_bvalid,  uart1_bready,  uart1_arvalid, uart1_arready;
    logic        uart1_rvalid,  uart1_rready;

    logic [31:0] qspi_awaddr,  qspi_araddr,  qspi_wdata,  qspi_rdata;
    logic [3:0]  qspi_wstrb;
    logic        qspi_awvalid, qspi_awready, qspi_wvalid, qspi_wready;
    logic [1:0]  qspi_bresp,   qspi_rresp;
    logic        qspi_bvalid,  qspi_bready,  qspi_arvalid, qspi_arready;
    logic        qspi_rvalid,  qspi_rready;

    // I2C (decoder 0x4) — YENİ
    logic [31:0] i2c_awaddr,  i2c_araddr,  i2c_wdata,  i2c_rdata;
    logic [3:0]  i2c_wstrb;
    logic        i2c_awvalid, i2c_awready, i2c_wvalid, i2c_wready;
    logic [1:0]  i2c_bresp,   i2c_rresp;
    logic        i2c_bvalid,  i2c_bready,  i2c_arvalid, i2c_arready;
    logic        i2c_rvalid,  i2c_rready;

    // AI accelerator CSR (decoder 0x6) — YENİ
    logic [31:0] ai_awaddr,  ai_araddr,  ai_wdata,  ai_rdata;
    logic [3:0]  ai_wstrb;
    logic        ai_awvalid, ai_awready, ai_wvalid, ai_wready;
    logic [1:0]  ai_bresp,   ai_rresp;
    logic        ai_bvalid,  ai_bready,  ai_arvalid, ai_arready;
    logic        ai_rvalid,  ai_rready;

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
        // UART_1 / YZ stream — YENİ
        .uart1_awaddr, .uart1_awvalid, .uart1_awready,
        .uart1_wdata, .uart1_wstrb, .uart1_wvalid, .uart1_wready,
        .uart1_bresp, .uart1_bvalid, .uart1_bready,
        .uart1_araddr, .uart1_arvalid, .uart1_arready,
        .uart1_rdata, .uart1_rresp, .uart1_rvalid, .uart1_rready,
        // I2C — YENİ
        .i2c_awaddr, .i2c_awvalid, .i2c_awready,
        .i2c_wdata, .i2c_wstrb, .i2c_wvalid, .i2c_wready,
        .i2c_bresp, .i2c_bvalid, .i2c_bready,
        .i2c_araddr, .i2c_arvalid, .i2c_arready,
        .i2c_rdata, .i2c_rresp, .i2c_rvalid, .i2c_rready,
        // QSPI
        .qspi_awaddr, .qspi_awvalid, .qspi_awready,
        .qspi_wdata, .qspi_wstrb, .qspi_wvalid, .qspi_wready,
        .qspi_bresp, .qspi_bvalid, .qspi_bready,
        .qspi_araddr, .qspi_arvalid, .qspi_arready,
        .qspi_rdata, .qspi_rresp, .qspi_rvalid, .qspi_rready,
        // AI Accelerator CSR — YENİ
        .ai_awaddr, .ai_awvalid, .ai_awready,
        .ai_wdata, .ai_wstrb, .ai_wvalid, .ai_wready,
        .ai_bresp, .ai_bvalid, .ai_bready,
        .ai_araddr, .ai_arvalid, .ai_arready,
        .ai_rdata, .ai_rresp, .ai_rvalid, .ai_rready
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
    // EK-2: 32 pin = 16 sabit giriş + 16 sabit çıkış. Top portlar
    // 32-bit tutulur; geçerli alan [15:0], çıkışın üst 16 biti sabit 0.
    logic [15:0] gpio_out16;
    assign gpio_out_o = {16'd0, gpio_out16};

    gpio_axil i_gpio (
        .clk_i(clk_i), .rst_ni(rst_ni),
        .s_axi_awaddr(gpio_awaddr), .s_axi_awvalid(gpio_awvalid), .s_axi_awready(gpio_awready),
        .s_axi_wdata(gpio_wdata), .s_axi_wstrb(gpio_wstrb),
        .s_axi_wvalid(gpio_wvalid), .s_axi_wready(gpio_wready),
        .s_axi_bresp(gpio_bresp), .s_axi_bvalid(gpio_bvalid), .s_axi_bready(gpio_bready),
        .s_axi_araddr(gpio_araddr), .s_axi_arvalid(gpio_arvalid), .s_axi_arready(gpio_arready),
        .s_axi_rdata(gpio_rdata), .s_axi_rresp(gpio_rresp),
        .s_axi_rvalid(gpio_rvalid), .s_axi_rready(gpio_rready),
        .gpio_in_i(gpio_in_i[15:0]), .gpio_out_o(gpio_out16)
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
    // 12. I2C MASTER (0x4000_0400) — YENİ
    // ============================================================
    i2c_master_axil #(
        .CLK_FREQ_HZ(CLK_FREQ_HZ),
        .SCL_FREQ_HZ(400_000)        // şartname: sabit 400 kHz
    ) i_i2c (
        .clk_i(clk_i), .rst_ni(rst_ni),
        .s_axi_awaddr(i2c_awaddr), .s_axi_awvalid(i2c_awvalid), .s_axi_awready(i2c_awready),
        .s_axi_wdata(i2c_wdata), .s_axi_wstrb(i2c_wstrb),
        .s_axi_wvalid(i2c_wvalid), .s_axi_wready(i2c_wready),
        .s_axi_bresp(i2c_bresp), .s_axi_bvalid(i2c_bvalid), .s_axi_bready(i2c_bready),
        .s_axi_araddr(i2c_araddr), .s_axi_arvalid(i2c_arvalid), .s_axi_arready(i2c_arready),
        .s_axi_rdata(i2c_rdata), .s_axi_rresp(i2c_rresp),
        .s_axi_rvalid(i2c_rvalid), .s_axi_rready(i2c_rready),
        .scl_o(i2c_scl_o), .sda_oe_o(i2c_sda_oe_o), .sda_i(i2c_sda_i)
    );

    // ============================================================
    // 13. AI ACCELERATOR (CSR 0x4000_0600) — YENİ
    // ============================================================
    // Master discrete sinyaller (arbiter'a gidecek)
    logic [ 3:0] ai_m_awid;
    logic [31:0] ai_m_awaddr;
    logic [ 7:0] ai_m_awlen;
    logic [ 2:0] ai_m_awsize;
    logic [ 1:0] ai_m_awburst;
    logic        ai_m_awvalid, ai_m_awready;
    logic [31:0] ai_m_wdata;
    logic [ 3:0] ai_m_wstrb;
    logic        ai_m_wlast, ai_m_wvalid, ai_m_wready;
    logic [ 3:0] ai_m_bid;
    logic [ 1:0] ai_m_bresp;
    logic        ai_m_bvalid, ai_m_bready;
    logic [ 3:0] ai_m_arid;
    logic [31:0] ai_m_araddr;
    logic [ 7:0] ai_m_arlen;
    logic [ 2:0] ai_m_arsize;
    logic [ 1:0] ai_m_arburst;
    logic        ai_m_arvalid, ai_m_arready;
    logic [ 3:0] ai_m_rid;
    logic [31:0] ai_m_rdata;
    logic [ 1:0] ai_m_rresp;
    logic        ai_m_rlast, ai_m_rvalid, ai_m_rready;

    ai_accelerator i_ai_accel (
        .clk_i(clk_i), .rst_ni(rst_ni),
        // AXI4-Lite Slave (CSR)
        .s_axi_awaddr(ai_awaddr), .s_axi_awvalid(ai_awvalid), .s_axi_awready(ai_awready),
        .s_axi_wdata(ai_wdata), .s_axi_wstrb(ai_wstrb),
        .s_axi_wvalid(ai_wvalid), .s_axi_wready(ai_wready),
        .s_axi_bresp(ai_bresp), .s_axi_bvalid(ai_bvalid), .s_axi_bready(ai_bready),
        .s_axi_araddr(ai_araddr), .s_axi_arvalid(ai_arvalid), .s_axi_arready(ai_arready),
        .s_axi_rdata(ai_rdata), .s_axi_rresp(ai_rresp),
        .s_axi_rvalid(ai_rvalid), .s_axi_rready(ai_rready),
        // AXI4 Master (AI SRAM)
        .m_axi_awid(ai_m_awid), .m_axi_awaddr(ai_m_awaddr), .m_axi_awlen(ai_m_awlen),
        .m_axi_awsize(ai_m_awsize), .m_axi_awburst(ai_m_awburst),
        .m_axi_awvalid(ai_m_awvalid), .m_axi_awready(ai_m_awready),
        .m_axi_wdata(ai_m_wdata), .m_axi_wstrb(ai_m_wstrb), .m_axi_wlast(ai_m_wlast),
        .m_axi_wvalid(ai_m_wvalid), .m_axi_wready(ai_m_wready),
        .m_axi_bid(ai_m_bid), .m_axi_bresp(ai_m_bresp),
        .m_axi_bvalid(ai_m_bvalid), .m_axi_bready(ai_m_bready),
        .m_axi_arid(ai_m_arid), .m_axi_araddr(ai_m_araddr), .m_axi_arlen(ai_m_arlen),
        .m_axi_arsize(ai_m_arsize), .m_axi_arburst(ai_m_arburst),
        .m_axi_arvalid(ai_m_arvalid), .m_axi_arready(ai_m_arready),
        .m_axi_rid(ai_m_rid), .m_axi_rdata(ai_m_rdata), .m_axi_rresp(ai_m_rresp),
        .m_axi_rlast(ai_m_rlast), .m_axi_rvalid(ai_m_rvalid), .m_axi_rready(ai_m_rready),
        // Status + IRQ
        .busy_o(ai_busy),
        .irq_o(ai_irq)
    );

    // ============================================================
    // 13b. UART_1 / YZ STREAM (0x4000_0300) + AI SRAM DMA — YENİ
    // ============================================================
    // RX baytlarını AI SRAM'e DMA ile yazar (kendi AXI4 master'ı arbiter'a).
    logic [ 3:0] strm_m_awid;
    logic [31:0] strm_m_awaddr;
    logic [ 7:0] strm_m_awlen;
    logic [ 2:0] strm_m_awsize;
    logic [ 1:0] strm_m_awburst;
    logic        strm_m_awvalid, strm_m_awready;
    logic [31:0] strm_m_wdata;
    logic [ 3:0] strm_m_wstrb;
    logic        strm_m_wlast, strm_m_wvalid, strm_m_wready;
    logic [ 3:0] strm_m_bid;
    logic [ 1:0] strm_m_bresp;
    logic        strm_m_bvalid, strm_m_bready;
    // Okuma kanalı (stream okumaz; arbiter'a bağlanmaz, modülde tieoff)
    logic [ 3:0] strm_m_arid;
    logic [31:0] strm_m_araddr;
    logic [ 7:0] strm_m_arlen;
    logic [ 2:0] strm_m_arsize;
    logic [ 1:0] strm_m_arburst;
    logic        strm_m_arvalid;
    logic [ 3:0] strm_m_rid;
    logic [31:0] strm_m_rdata;
    logic [ 1:0] strm_m_rresp;
    logic        strm_m_rlast, strm_m_rvalid;

    uart_stream_axil i_uart_1 (
        .clk_i(clk_i), .rst_ni(rst_ni),
        // AXI4-Lite Slave (CSR)
        .s_axi_awaddr(uart1_awaddr), .s_axi_awvalid(uart1_awvalid), .s_axi_awready(uart1_awready),
        .s_axi_wdata(uart1_wdata), .s_axi_wstrb(uart1_wstrb),
        .s_axi_wvalid(uart1_wvalid), .s_axi_wready(uart1_wready),
        .s_axi_bresp(uart1_bresp), .s_axi_bvalid(uart1_bvalid), .s_axi_bready(uart1_bready),
        .s_axi_araddr(uart1_araddr), .s_axi_arvalid(uart1_arvalid), .s_axi_arready(uart1_arready),
        .s_axi_rdata(uart1_rdata), .s_axi_rresp(uart1_rresp),
        .s_axi_rvalid(uart1_rvalid), .s_axi_rready(uart1_rready),
        // AXI4 Master (AI SRAM DMA)
        .m_axi_awid(strm_m_awid), .m_axi_awaddr(strm_m_awaddr), .m_axi_awlen(strm_m_awlen),
        .m_axi_awsize(strm_m_awsize), .m_axi_awburst(strm_m_awburst),
        .m_axi_awvalid(strm_m_awvalid), .m_axi_awready(strm_m_awready),
        .m_axi_wdata(strm_m_wdata), .m_axi_wstrb(strm_m_wstrb), .m_axi_wlast(strm_m_wlast),
        .m_axi_wvalid(strm_m_wvalid), .m_axi_wready(strm_m_wready),
        .m_axi_bid(strm_m_bid), .m_axi_bresp(strm_m_bresp),
        .m_axi_bvalid(strm_m_bvalid), .m_axi_bready(strm_m_bready),
        .m_axi_arid(strm_m_arid), .m_axi_araddr(strm_m_araddr), .m_axi_arlen(strm_m_arlen),
        .m_axi_arsize(strm_m_arsize), .m_axi_arburst(strm_m_arburst),
        .m_axi_arvalid(strm_m_arvalid), .m_axi_arready(1'b0),
        .m_axi_rid(4'd0), .m_axi_rdata(32'd0), .m_axi_rresp(2'd0),
        .m_axi_rlast(1'b0), .m_axi_rvalid(1'b0), .m_axi_rready(),
        // Pinler + durum
        .rxd_i(uart1_rxd_i), .txd_o(uart1_txd_o),
        .stream_active_o(strm_busy),
        .irq_o(strm_irq)
    );

    // ============================================================
    // 14. AI SRAM ARBITER — YENİ
    // ============================================================
    // Crossbar (CPU yolu) ile AI accelerator master'ı 2:1 muxlayıp
    // tek bir bus üzerinden i_ai_sram'e bağlar. ai_busy=1 iken AI sahip,
    // 0 iken CPU sahip.
    ai_sram_arbiter i_ai_arb (
        .clk_i(clk_i), .rst_ni(rst_ni),
        .ai_active(ai_busy),
        .strm_active(strm_busy),
        .cpu(cpu_to_ai_sram_bus),

        .ai_awid(ai_m_awid), .ai_awaddr(ai_m_awaddr), .ai_awlen(ai_m_awlen),
        .ai_awsize(ai_m_awsize), .ai_awburst(ai_m_awburst),
        .ai_awvalid(ai_m_awvalid), .ai_awready(ai_m_awready),
        .ai_wdata(ai_m_wdata), .ai_wstrb(ai_m_wstrb), .ai_wlast(ai_m_wlast),
        .ai_wvalid(ai_m_wvalid), .ai_wready(ai_m_wready),
        .ai_bid(ai_m_bid), .ai_bresp(ai_m_bresp),
        .ai_bvalid(ai_m_bvalid), .ai_bready(ai_m_bready),
        .ai_arid(ai_m_arid), .ai_araddr(ai_m_araddr), .ai_arlen(ai_m_arlen),
        .ai_arsize(ai_m_arsize), .ai_arburst(ai_m_arburst),
        .ai_arvalid(ai_m_arvalid), .ai_arready(ai_m_arready),
        .ai_rid(ai_m_rid), .ai_rdata(ai_m_rdata), .ai_rresp(ai_m_rresp),
        .ai_rlast(ai_m_rlast), .ai_rvalid(ai_m_rvalid), .ai_rready(ai_m_rready),

        // UART-stream DMA master (yalnız yazma)
        .strm_awid(strm_m_awid), .strm_awaddr(strm_m_awaddr), .strm_awlen(strm_m_awlen),
        .strm_awsize(strm_m_awsize), .strm_awburst(strm_m_awburst),
        .strm_awvalid(strm_m_awvalid), .strm_awready(strm_m_awready),
        .strm_wdata(strm_m_wdata), .strm_wstrb(strm_m_wstrb), .strm_wlast(strm_m_wlast),
        .strm_wvalid(strm_m_wvalid), .strm_wready(strm_m_wready),
        .strm_bid(strm_m_bid), .strm_bresp(strm_m_bresp),
        .strm_bvalid(strm_m_bvalid), .strm_bready(strm_m_bready),

        .sram(ai_sram_bus)
    );

    // ============================================================
    // 15. BELLEK MODÜLLERİ
    // ============================================================
    axi_sram_wrapper #(.AXI_ID_WIDTH(5), .SRAM_BYTES(1024),  .INIT_FILE("bootrom.hex"))
        i_boot_rom  (.clk_i(clk_i), .rst_ni(rst_ni), .slv(boot_rom_bus));

    axi_sram_wrapper #(.AXI_ID_WIDTH(5), .SRAM_BYTES(INSTR_SRAM_BYTES),  .INIT_FILE("firmware.hex"))
        i_instr_sram(.clk_i(clk_i), .rst_ni(rst_ni), .slv(instr_sram_bus));

    axi_sram_wrapper #(.AXI_ID_WIDTH(5), .SRAM_BYTES(DATA_SRAM_BYTES),  .INIT_FILE("data_mem.hex"))
        i_data_sram (.clk_i(clk_i), .rst_ni(rst_ni), .slv(data_sram_bus));

    // ai_sram artık arbiter çıkışına bağlı
    axi_sram_wrapper #(.AXI_ID_WIDTH(5), .SRAM_BYTES(30720), .INIT_FILE("ai_sram_init.hex"))
        i_ai_sram   (.clk_i(clk_i), .rst_ni(rst_ni), .slv(ai_sram_bus));

    // ============================================================
    // 16. PROTOCOL CHECKER'LAR (Doğrulama — Sentez'de çıkarılır)
    // ============================================================
    // Şartname EK-3 (Zorunlu): tüm çevre birimleri + YZ hızlandırıcı
    // arayüzleri protocol check ile izlenir. Kapsam: periph köprüsü,
    // UART_0/1, GPIO, Timer, I2C, QSPI, AI CSR (AXI-Lite) ve
    // AI + stream-DMA AXI4 master'ları.
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
        .qspi_rvalid  (qspi_rvalid),  .qspi_rready  (qspi_rready),

        // I2C
        .i2c_awaddr   (i2c_awaddr),   .i2c_awvalid  (i2c_awvalid),  .i2c_awready  (i2c_awready),
        .i2c_wdata    (i2c_wdata),    .i2c_wstrb    (i2c_wstrb),
        .i2c_wvalid   (i2c_wvalid),   .i2c_wready   (i2c_wready),
        .i2c_bresp    (i2c_bresp),    .i2c_bvalid   (i2c_bvalid),   .i2c_bready   (i2c_bready),
        .i2c_araddr   (i2c_araddr),   .i2c_arvalid  (i2c_arvalid),  .i2c_arready  (i2c_arready),
        .i2c_rdata    (i2c_rdata),    .i2c_rresp    (i2c_rresp),
        .i2c_rvalid   (i2c_rvalid),   .i2c_rready   (i2c_rready),

        // UART_1 / YZ stream (CSR)
        .uart1_awaddr (uart1_awaddr), .uart1_awvalid(uart1_awvalid), .uart1_awready(uart1_awready),
        .uart1_wdata  (uart1_wdata),  .uart1_wstrb  (uart1_wstrb),
        .uart1_wvalid (uart1_wvalid), .uart1_wready (uart1_wready),
        .uart1_bresp  (uart1_bresp),  .uart1_bvalid (uart1_bvalid),  .uart1_bready (uart1_bready),
        .uart1_araddr (uart1_araddr), .uart1_arvalid(uart1_arvalid), .uart1_arready(uart1_arready),
        .uart1_rdata  (uart1_rdata),  .uart1_rresp  (uart1_rresp),
        .uart1_rvalid (uart1_rvalid), .uart1_rready (uart1_rready),

        // AI Accelerator CSR
        .ai_awaddr    (ai_awaddr),    .ai_awvalid   (ai_awvalid),   .ai_awready   (ai_awready),
        .ai_wdata     (ai_wdata),     .ai_wstrb     (ai_wstrb),
        .ai_wvalid    (ai_wvalid),    .ai_wready    (ai_wready),
        .ai_bresp     (ai_bresp),     .ai_bvalid    (ai_bvalid),    .ai_bready    (ai_bready),
        .ai_araddr    (ai_araddr),    .ai_arvalid   (ai_arvalid),   .ai_arready   (ai_arready),
        .ai_rdata     (ai_rdata),     .ai_rresp     (ai_rresp),
        .ai_rvalid    (ai_rvalid),    .ai_rready    (ai_rready),

        // AI Accelerator AXI4 master (AI SRAM)
        .aim_awid     (ai_m_awid),    .aim_awaddr   (ai_m_awaddr),  .aim_awlen    (ai_m_awlen),
        .aim_awsize   (ai_m_awsize),  .aim_awburst  (ai_m_awburst),
        .aim_awvalid  (ai_m_awvalid), .aim_awready  (ai_m_awready),
        .aim_wdata    (ai_m_wdata),   .aim_wstrb    (ai_m_wstrb),   .aim_wlast    (ai_m_wlast),
        .aim_wvalid   (ai_m_wvalid),  .aim_wready   (ai_m_wready),
        .aim_bid      (ai_m_bid),     .aim_bresp    (ai_m_bresp),
        .aim_bvalid   (ai_m_bvalid),  .aim_bready   (ai_m_bready),
        .aim_arid     (ai_m_arid),    .aim_araddr   (ai_m_araddr),  .aim_arlen    (ai_m_arlen),
        .aim_arsize   (ai_m_arsize),  .aim_arburst  (ai_m_arburst),
        .aim_arvalid  (ai_m_arvalid), .aim_arready  (ai_m_arready),
        .aim_rid      (ai_m_rid),     .aim_rdata    (ai_m_rdata),   .aim_rresp    (ai_m_rresp),
        .aim_rlast    (ai_m_rlast),   .aim_rvalid   (ai_m_rvalid),  .aim_rready   (ai_m_rready),

        // UART_1 stream DMA AXI4 master (yalnız yazma)
        .stm_awid     (strm_m_awid),    .stm_awaddr  (strm_m_awaddr), .stm_awlen   (strm_m_awlen),
        .stm_awsize   (strm_m_awsize),  .stm_awburst (strm_m_awburst),
        .stm_awvalid  (strm_m_awvalid), .stm_awready (strm_m_awready),
        .stm_wdata    (strm_m_wdata),   .stm_wstrb   (strm_m_wstrb),  .stm_wlast   (strm_m_wlast),
        .stm_wvalid   (strm_m_wvalid),  .stm_wready  (strm_m_wready),
        .stm_bid      (strm_m_bid),     .stm_bresp   (strm_m_bresp),
        .stm_bvalid   (strm_m_bvalid),  .stm_bready  (strm_m_bready)
    );

    // verilator lint_on UNUSED
    // verilator lint_on UNDRIVEN
    // synthesis translate_on


endmodule