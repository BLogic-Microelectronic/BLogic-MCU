`timescale 1ns / 1ps

// ============================================================
// BLogic MCU - AI SRAM Arbiter (3:1 AXI4 mux)
// ============================================================
// ai_sram'e üç erişim yolu var:
//   - CPU (crossbar üzerinden)              → AXI_BUS interface
//   - AI accelerator (m_axi_* discrete)     → discrete sinyaller
//   - UART-stream DMA (strm_* discrete)      → discrete sinyaller (yalnız yazma)
//
// Öncelik / sahiplik:
//   ai_active = 1            → AI accelerator yolu
//   ai_active=0, strm_active=1 → UART-stream DMA yolu
//   ikisi de 0              → CPU yolu
//
// SW kontratı (şartname iş akışıyla uyumlu): YZ veri akışı SIRALIDIR —
//   1) CPU stream'i konfigüre eder (STRM_ADDR/LEN) ve START verir,
//   2) UART-stream DMA veriyi AI SRAM'e yazar (strm_active=1), CPU bu sırada
//      AI SRAM'e dokunmaz,
//   3) DMA biter (IRQ), CPU AI accelerator'ı START eder (ai_active=1),
//      accelerator AI SRAM'i okur/yazar.
// Bu sıralı kontrat sayesinde sahiplik geçişleri bus idle anlarında olur ve
// in-flight transaction kalmaz. ai_active genelde accelerator busy_o'ya,
// strm_active da UART-stream'in DMA busy çıkışına bağlanır.
// ============================================================

module ai_sram_arbiter (
    input  logic clk_i,
    input  logic rst_ni,
    input  logic ai_active,
    input  logic strm_active,

    // ---- CPU yolu (crossbar çıkışından, AXI_BUS interface) ----
    AXI_BUS.Slave  cpu,

    // ---- AI accelerator master (discrete sinyaller, 4-bit ID) ----
    input  logic [ 3:0] ai_awid,
    input  logic [31:0] ai_awaddr,
    input  logic [ 7:0] ai_awlen,
    input  logic [ 2:0] ai_awsize,
    input  logic [ 1:0] ai_awburst,
    input  logic        ai_awvalid,
    output logic        ai_awready,
    input  logic [31:0] ai_wdata,
    input  logic [ 3:0] ai_wstrb,
    input  logic        ai_wlast,
    input  logic        ai_wvalid,
    output logic        ai_wready,
    output logic [ 3:0] ai_bid,
    output logic [ 1:0] ai_bresp,
    output logic        ai_bvalid,
    input  logic        ai_bready,
    input  logic [ 3:0] ai_arid,
    input  logic [31:0] ai_araddr,
    input  logic [ 7:0] ai_arlen,
    input  logic [ 2:0] ai_arsize,
    input  logic [ 1:0] ai_arburst,
    input  logic        ai_arvalid,
    output logic        ai_arready,
    output logic [ 3:0] ai_rid,
    output logic [31:0] ai_rdata,
    output logic [ 1:0] ai_rresp,
    output logic        ai_rlast,
    output logic        ai_rvalid,
    input  logic        ai_rready,

    // ---- UART-stream DMA master (discrete sinyaller, yalnız yazma) ----
    input  logic [ 3:0] strm_awid,
    input  logic [31:0] strm_awaddr,
    input  logic [ 7:0] strm_awlen,
    input  logic [ 2:0] strm_awsize,
    input  logic [ 1:0] strm_awburst,
    input  logic        strm_awvalid,
    output logic        strm_awready,
    input  logic [31:0] strm_wdata,
    input  logic [ 3:0] strm_wstrb,
    input  logic        strm_wlast,
    input  logic        strm_wvalid,
    output logic        strm_wready,
    output logic [ 3:0] strm_bid,
    output logic [ 1:0] strm_bresp,
    output logic        strm_bvalid,
    input  logic        strm_bready,

    // ---- SRAM yolu (AXI_BUS master interface) ----
    AXI_BUS.Master sram
);

    // Unused (clk/rst kontrolü için tutuldu)
    logic unused;
    assign unused = clk_i & rst_ni;

    // Sahiplik bayrakları
    wire own_cpu  = !ai_active && !strm_active;
    wire own_strm = !ai_active &&  strm_active;
    wire own_ai   =  ai_active;

    // ===================== AW Channel =====================
    assign sram.aw_id     = own_ai ? ai_awid    : own_strm ? strm_awid    : cpu.aw_id;
    assign sram.aw_addr   = own_ai ? ai_awaddr  : own_strm ? strm_awaddr  : cpu.aw_addr;
    assign sram.aw_len    = own_ai ? ai_awlen   : own_strm ? strm_awlen   : cpu.aw_len;
    assign sram.aw_size   = own_ai ? ai_awsize  : own_strm ? strm_awsize  : cpu.aw_size;
    assign sram.aw_burst  = own_ai ? ai_awburst : own_strm ? strm_awburst : cpu.aw_burst;
    assign sram.aw_lock   = own_cpu ? cpu.aw_lock   : 1'b0;
    assign sram.aw_cache  = own_cpu ? cpu.aw_cache  : 4'b0011;
    assign sram.aw_prot   = own_cpu ? cpu.aw_prot   : 3'b000;
    assign sram.aw_qos    = own_cpu ? cpu.aw_qos    : 4'b0000;
    assign sram.aw_region = own_cpu ? cpu.aw_region : 4'b0000;
    assign sram.aw_atop   = own_cpu ? cpu.aw_atop   : 6'b000000;
    assign sram.aw_user   = own_cpu ? cpu.aw_user   : 1'b0;
    assign sram.aw_valid  = own_ai ? ai_awvalid : own_strm ? strm_awvalid : cpu.aw_valid;

    assign cpu.aw_ready   = own_cpu  && sram.aw_ready;
    assign ai_awready     = own_ai   && sram.aw_ready;
    assign strm_awready   = own_strm && sram.aw_ready;

    // ===================== W Channel =====================
    assign sram.w_data    = own_ai ? ai_wdata : own_strm ? strm_wdata : cpu.w_data;
    assign sram.w_strb    = own_ai ? ai_wstrb : own_strm ? strm_wstrb : cpu.w_strb;
    assign sram.w_last    = own_ai ? ai_wlast : own_strm ? strm_wlast : cpu.w_last;
    assign sram.w_user    = own_cpu ? cpu.w_user : 1'b0;
    assign sram.w_valid   = own_ai ? ai_wvalid : own_strm ? strm_wvalid : cpu.w_valid;

    assign cpu.w_ready    = own_cpu  && sram.w_ready;
    assign ai_wready      = own_ai   && sram.w_ready;
    assign strm_wready    = own_strm && sram.w_ready;

    // ===================== B Channel =====================
    assign cpu.b_id       = sram.b_id;
    assign cpu.b_resp     = sram.b_resp;
    assign cpu.b_user     = sram.b_user;
    assign cpu.b_valid    = own_cpu && sram.b_valid;

    assign ai_bid         = sram.b_id;
    assign ai_bresp       = sram.b_resp;
    assign ai_bvalid      = own_ai && sram.b_valid;

    assign strm_bid       = sram.b_id;
    assign strm_bresp     = sram.b_resp;
    assign strm_bvalid    = own_strm && sram.b_valid;

    assign sram.b_ready   = own_ai ? ai_bready : own_strm ? strm_bready : cpu.b_ready;

    // ===================== AR Channel (CPU/AI; stream okumaz) =====================
    assign sram.ar_id     = own_ai ? ai_arid    : cpu.ar_id;
    assign sram.ar_addr   = own_ai ? ai_araddr  : cpu.ar_addr;
    assign sram.ar_len    = own_ai ? ai_arlen   : cpu.ar_len;
    assign sram.ar_size   = own_ai ? ai_arsize  : cpu.ar_size;
    assign sram.ar_burst  = own_ai ? ai_arburst : cpu.ar_burst;
    assign sram.ar_lock   = own_ai ? 1'b0      : cpu.ar_lock;
    assign sram.ar_cache  = own_ai ? 4'b0011   : cpu.ar_cache;
    assign sram.ar_prot   = own_ai ? 3'b000    : cpu.ar_prot;
    assign sram.ar_qos    = own_ai ? 4'b0000   : cpu.ar_qos;
    assign sram.ar_region = own_ai ? 4'b0000   : cpu.ar_region;
    assign sram.ar_user   = own_ai ? 1'b0      : cpu.ar_user;
    // stream sahipken CPU okuması bloklanır (SW kontratı: stream sırasında
    // CPU AI SRAM'e dokunmaz)
    assign sram.ar_valid  = own_ai ? ai_arvalid : (own_cpu ? cpu.ar_valid : 1'b0);

    assign cpu.ar_ready   = own_cpu && sram.ar_ready;
    assign ai_arready     = own_ai  && sram.ar_ready;

    // ===================== R Channel =====================
    assign cpu.r_id       = sram.r_id;
    assign cpu.r_data     = sram.r_data;
    assign cpu.r_resp     = sram.r_resp;
    assign cpu.r_last     = sram.r_last;
    assign cpu.r_user     = sram.r_user;
    assign cpu.r_valid    = own_cpu && sram.r_valid;

    assign ai_rid         = sram.r_id;
    assign ai_rdata       = sram.r_data;
    assign ai_rresp       = sram.r_resp;
    assign ai_rlast       = sram.r_last;
    assign ai_rvalid      = own_ai && sram.r_valid;

    assign sram.r_ready   = own_ai ? ai_rready : cpu.r_ready;

endmodule
