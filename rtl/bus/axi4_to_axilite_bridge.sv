`timescale 1ns / 1ps

// ============================================================
// BLogic MCU - AXI4 → AXI4-Lite Eşzamanlı Köprü (Bridge)
// ============================================================
// Blok diyagramındaki mor kutunun karşılığıdır.
// AXI4 Full sinyallerini AXI4-Lite standardına düşürür.
// OBI-to-AXI bridge AW ve W'yi aynı anda bastığı için, bu köprü
// FSM (State Machine) KULLANMAZ. Sıfır gecikmeli passthrough çalışır.
// ============================================================

module axi4_to_axilite_bridge (
    input  logic        clk_i,
    input  logic        rst_ni,

    // AXI4 Full Slave Portu (Interconnect'ten gelen periph_bus)
    input  logic [ 3:0] s_awid,
    input  logic [31:0] s_awaddr,
    input  logic [ 7:0] s_awlen,
    input  logic [ 2:0] s_awsize,
    input  logic [ 1:0] s_awburst,
    input  logic        s_awlock,
    input  logic [ 3:0] s_awcache,
    input  logic [ 2:0] s_awprot,
    input  logic [ 3:0] s_awqos,
    input  logic [ 3:0] s_awregion,
    input  logic [ 5:0] s_awatop,
    input  logic        s_awuser,
    input  logic        s_awvalid,
    output logic        s_awready,

    input  logic [31:0] s_wdata,
    input  logic [ 3:0] s_wstrb,
    input  logic        s_wlast,
    input  logic        s_wuser,
    input  logic        s_wvalid,
    output logic        s_wready,

    output logic [ 3:0] s_bid,
    output logic [ 1:0] s_bresp,
    output logic        s_buser,
    output logic        s_bvalid,
    input  logic        s_bready,

    input  logic [ 3:0] s_arid,
    input  logic [31:0] s_araddr,
    input  logic [ 7:0] s_arlen,
    input  logic [ 2:0] s_arsize,
    input  logic [ 1:0] s_arburst,
    input  logic        s_arlock,
    input  logic [ 3:0] s_arcache,
    input  logic [ 2:0] s_arprot,
    input  logic [ 3:0] s_arqos,
    input  logic [ 3:0] s_arregion,
    input  logic        s_aruser,
    input  logic        s_arvalid,
    output logic        s_arready,

    output logic [ 3:0] s_rid,
    output logic [31:0] s_rdata,
    output logic [ 1:0] s_rresp,
    output logic        s_rlast,
    output logic        s_ruser,
    output logic        s_rvalid,
    input  logic        s_rready,

    // AXI4-Lite Master Portu (periph_decoder'a giden)
    output logic [31:0] m_awaddr,
    output logic        m_awvalid,
    input  logic        m_awready,
    output logic [31:0] m_wdata,
    output logic [ 3:0] m_wstrb,
    output logic        m_wvalid,
    input  logic        m_wready,
    input  logic [ 1:0] m_bresp,
    input  logic        m_bvalid,
    output logic        m_bready,
    output logic [31:0] m_araddr,
    output logic        m_arvalid,
    input  logic        m_arready,
    input  logic [31:0] m_rdata,
    input  logic [ 1:0] m_rresp,
    input  logic        m_rvalid,
    output logic        m_rready
);

    // ------------------------------------------------------------
    // 1. YAZMA KANALLARI (AW / W / B) PASSTHROUGH
    // ------------------------------------------------------------
    assign m_awaddr     = s_awaddr;
    assign m_awvalid    = s_awvalid;
    assign s_awready    = m_awready;

    assign m_wdata      = s_wdata;
    assign m_wstrb      = s_wstrb;
    assign m_wvalid     = s_wvalid;
    assign s_wready     = m_wready;

    // Yazma Yanıtı (B Kanalı) ID Yönetimi
    // AXI4-Lite'tan gelen yanıtı Full AXI4'e iletirken ID'yi ekliyoruz
    assign s_bid        = s_awid; 
    assign s_bresp      = m_bresp;
    assign s_bvalid     = m_bvalid;
    assign s_buser      = 1'b0;
    assign m_bready     = s_bready;

    // ------------------------------------------------------------
    // 2. OKUMA KANALLARI (AR / R) PASSTHROUGH
    // ------------------------------------------------------------
    assign m_araddr     = s_araddr;
    assign m_arvalid    = s_arvalid;
    assign s_arready    = m_arready;

    // Okuma Yanıtı (R Kanalı) ID Yönetimi
    assign s_rid        = s_arid;
    assign s_rdata      = m_rdata;
    assign s_rresp      = m_rresp;
    assign s_rvalid     = m_rvalid;
    assign s_rlast      = 1'b1; // Çevre birimleri hep tek beat çalıştığı için her zaman last=1
    assign s_ruser      = 1'b0;
    assign m_rready     = s_rready;

endmodule