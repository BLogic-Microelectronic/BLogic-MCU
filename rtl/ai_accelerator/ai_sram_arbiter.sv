`timescale 1ns / 1ps

// ============================================================
// BLogic MCU - AI SRAM Arbiter (2:1 AXI4 mux)
// ============================================================
// ai_sram'e iki erişim yolu var:
//   - CPU (crossbar üzerinden)            → AXI_BUS interface
//   - AI accelerator (m_axi_* discrete)   → discrete sinyaller
//
// ai_active = 1 iken AI accelerator yolu bağlı.
// ai_active = 0 iken CPU yolu bağlı.
//
// SW kontratı: CPU, AI inference (CTRL.START → IRQ) süresince
// ai_sram'e dokunmaz; aksi halde geçişler arasında veri kaybı olabilir.
//
// ai_active sinyali genelde accelerator'ın busy_o çıkışına bağlanır.
// busy_o, START'tan IRQ'ya kadar 1'de kaldığı için geçişler bus idle
// anlarında olur ve in-flight transaction kalmaz.
// ============================================================

module ai_sram_arbiter (
    input  logic clk_i,
    input  logic rst_ni,
    input  logic ai_active,

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

    // ---- SRAM yolu (AXI_BUS master interface) ----
    AXI_BUS.Master sram
);

    // Unused (clk/rst kontrolü için tutuldu, ileride saatli arbitraj eklenebilir)
    logic unused;
    assign unused = clk_i & rst_ni;

    // ===================== AW Channel =====================
    assign sram.aw_id     = ai_active ? ai_awid     : cpu.aw_id;
    assign sram.aw_addr   = ai_active ? ai_awaddr   : cpu.aw_addr;
    assign sram.aw_len    = ai_active ? ai_awlen    : cpu.aw_len;
    assign sram.aw_size   = ai_active ? ai_awsize   : cpu.aw_size;
    assign sram.aw_burst  = ai_active ? ai_awburst  : cpu.aw_burst;
    assign sram.aw_lock   = ai_active ? 1'b0        : cpu.aw_lock;
    assign sram.aw_cache  = ai_active ? 4'b0011     : cpu.aw_cache;
    assign sram.aw_prot   = ai_active ? 3'b000      : cpu.aw_prot;
    assign sram.aw_qos    = ai_active ? 4'b0000     : cpu.aw_qos;
    assign sram.aw_region = ai_active ? 4'b0000     : cpu.aw_region;
    assign sram.aw_atop   = ai_active ? 6'b000000   : cpu.aw_atop;
    assign sram.aw_user   = ai_active ? 1'b0        : cpu.aw_user;
    assign sram.aw_valid  = ai_active ? ai_awvalid  : cpu.aw_valid;

    assign cpu.aw_ready   = !ai_active && sram.aw_ready;
    assign ai_awready     =  ai_active && sram.aw_ready;

    // ===================== W Channel =====================
    assign sram.w_data    = ai_active ? ai_wdata    : cpu.w_data;
    assign sram.w_strb    = ai_active ? ai_wstrb    : cpu.w_strb;
    assign sram.w_last    = ai_active ? ai_wlast    : cpu.w_last;
    assign sram.w_user    = ai_active ? 1'b0        : cpu.w_user;
    assign sram.w_valid   = ai_active ? ai_wvalid   : cpu.w_valid;

    assign cpu.w_ready    = !ai_active && sram.w_ready;
    assign ai_wready      =  ai_active && sram.w_ready;

    // ===================== B Channel =====================
    assign cpu.b_id       = sram.b_id;
    assign cpu.b_resp     = sram.b_resp;
    assign cpu.b_user     = sram.b_user;
    assign cpu.b_valid    = !ai_active && sram.b_valid;

    assign ai_bid         = sram.b_id;
    assign ai_bresp       = sram.b_resp;
    assign ai_bvalid      = ai_active  && sram.b_valid;

    assign sram.b_ready   = ai_active ? ai_bready : cpu.b_ready;

    // ===================== AR Channel =====================
    assign sram.ar_id     = ai_active ? ai_arid     : cpu.ar_id;
    assign sram.ar_addr   = ai_active ? ai_araddr   : cpu.ar_addr;
    assign sram.ar_len    = ai_active ? ai_arlen    : cpu.ar_len;
    assign sram.ar_size   = ai_active ? ai_arsize   : cpu.ar_size;
    assign sram.ar_burst  = ai_active ? ai_arburst  : cpu.ar_burst;
    assign sram.ar_lock   = ai_active ? 1'b0        : cpu.ar_lock;
    assign sram.ar_cache  = ai_active ? 4'b0011     : cpu.ar_cache;
    assign sram.ar_prot   = ai_active ? 3'b000      : cpu.ar_prot;
    assign sram.ar_qos    = ai_active ? 4'b0000     : cpu.ar_qos;
    assign sram.ar_region = ai_active ? 4'b0000     : cpu.ar_region;
    assign sram.ar_user   = ai_active ? 1'b0        : cpu.ar_user;
    assign sram.ar_valid  = ai_active ? ai_arvalid  : cpu.ar_valid;

    assign cpu.ar_ready   = !ai_active && sram.ar_ready;
    assign ai_arready     =  ai_active && sram.ar_ready;

    // ===================== R Channel =====================
    assign cpu.r_id       = sram.r_id;
    assign cpu.r_data     = sram.r_data;
    assign cpu.r_resp     = sram.r_resp;
    assign cpu.r_last     = sram.r_last;
    assign cpu.r_user     = sram.r_user;
    assign cpu.r_valid    = !ai_active && sram.r_valid;

    assign ai_rid         = sram.r_id;
    assign ai_rdata       = sram.r_data;
    assign ai_rresp       = sram.r_resp;
    assign ai_rlast       = sram.r_last;
    assign ai_rvalid      = ai_active  && sram.r_valid;

    assign sram.r_ready   = ai_active ? ai_rready : cpu.r_ready;

endmodule