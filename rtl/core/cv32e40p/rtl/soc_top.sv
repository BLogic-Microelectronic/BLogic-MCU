`timescale 1ns / 1ps
`include "axi/typedef.svh"
`include "axi/assign.svh"

module soc_top (
    input  logic clk_i,
    input  logic rst_ni,

    // Dış Dünya (FPGA Pinleri / Simülasyon)
    input  logic uart_rxd_i,
    output logic uart_txd_o
);

    // ============================================================
    // 1. AXI BUS ARAYÜZLERİ (Anakart Yolları)
    // ============================================================
    AXI_BUS #(
        .AXI_ADDR_WIDTH(32),
        .AXI_DATA_WIDTH(32),
        .AXI_ID_WIDTH(4),
        .AXI_USER_WIDTH(1)
    ) cpu_instr_bus(), cpu_data_bus(), boot_rom_bus(), instr_sram_bus(), data_sram_bus(), ai_sram_bus(), periph_bus();

    // ============================================================
    // 2. İŞLEMCİ OBI SİNYALLERİ (CV32E40P)
    // ============================================================
    logic        instr_req, instr_gnt, instr_rvalid;
    logic [31:0] instr_addr, instr_rdata;
    
    logic        data_req, data_gnt, data_rvalid, data_we;
    logic [ 3:0] data_be;
    logic [31:0] data_addr, data_wdata, data_rdata;

    // ============================================================
    // 3. İŞLEMCİ ÇEKİRDEĞİ (CV32E40P)
    // ============================================================
    cv32e40p_top #(
        .COREV_PULP(0),
        .FPU(0)
    ) i_cpu (
        .clk_i           ( clk_i ),
        .rst_ni          ( rst_ni ),
        .pulp_clock_en_i ( 1'b1 ),
        .scan_cg_en_i    ( 1'b0 ),
        
        // BOOT ADRESİ: Direkt Instruction SRAM'den başlasın (0x0001_0000)
        .boot_addr_i         ( 32'h0001_0000 ),
        .mtvec_addr_i        ( 32'h0001_0000 ),
        .dm_halt_addr_i      ( 32'h0001_0000 ),
        .hart_id_i           ( 32'd0 ),
        .dm_exception_addr_i ( 32'h0001_0000 ),

        // Instruction OBI
        .instr_req_o    ( instr_req ),
        .instr_gnt_i    ( instr_gnt ),
        .instr_rvalid_i ( instr_rvalid ),
        .instr_addr_o   ( instr_addr ),
        .instr_rdata_i  ( instr_rdata ),

        // Data OBI
        .data_req_o     ( data_req ),
        .data_gnt_i     ( data_gnt ),
        .data_rvalid_i  ( data_rvalid ),
        .data_we_o      ( data_we ),
        .data_be_o      ( data_be ),
        .data_addr_o    ( data_addr ),
        .data_wdata_o   ( data_wdata ),
        .data_rdata_i   ( data_rdata ),

        // Interrupt ve Debug (Şimdilik bağlı değil)
        .irq_i          ( 32'd0 ),
        .irq_ack_o      ( /* unused */ ),
        .irq_id_o       ( /* unused */ ),
        .debug_req_i    ( 1'b0 ),
        .fetch_enable_i ( 1'b1 ),
        .core_sleep_o   ( /* unused */ )
    );

    // ============================================================
    // 4. OBI to AXI KÖPRÜLERİ
    // ============================================================
    // Instruction Bridge
    obi_to_axi #(.AXI_ID(0)) i_obi_axi_instr (
        .clk_i        ( clk_i ),
        .rst_ni       ( rst_ni ),
        .obi_req_i    ( instr_req ),
        .obi_gnt_o    ( instr_gnt ),
        .obi_addr_i   ( instr_addr ),
        .obi_we_i     ( 1'b0 ),
        .obi_be_i     ( 4'b1111 ),
        .obi_wdata_i  ( 32'd0 ),
        .obi_rvalid_o ( instr_rvalid ),
        .obi_rdata_o  ( instr_rdata ),
        .axi_mst      ( cpu_instr_bus )
    );

    // Data Bridge
    obi_to_axi #(.AXI_ID(1)) i_obi_axi_data (
        .clk_i        ( clk_i ),
        .rst_ni       ( rst_ni ),
        .obi_req_i    ( data_req ),
        .obi_gnt_o    ( data_gnt ),
        .obi_addr_i   ( data_addr ),
        .obi_we_i     ( data_we ),
        .obi_be_i     ( data_be ),
        .obi_wdata_i  ( data_wdata ),
        .obi_rvalid_o ( data_rvalid ),
        .obi_rdata_o  ( data_rdata ),
        .axi_mst      ( cpu_data_bus )
    );

    // ============================================================
    // 5. AXI CROSSBAR (Ana Yönlendirici)
    // ============================================================
    soc_axi_interconnect i_crossbar (
        .clk_i          ( clk_i ),
        .rst_ni         ( rst_ni ),
        .cpu_instr_slv  ( cpu_instr_bus ),
        .cpu_data_slv   ( cpu_data_bus ),
        .boot_rom_mst   ( boot_rom_bus ),
        .instr_sram_mst ( instr_sram_bus ),
        .data_sram_mst  ( data_sram_bus ),
        .ai_sram_mst    ( ai_sram_bus ),
        .periph_mst     ( periph_bus )
    );

    // ============================================================
    // 6. ÇEVRE BİRİMLERİ (UART)
    // ============================================================
    uart_axil i_uart_0 (
        .clk_i          ( clk_i ),
        .rst_ni         ( rst_ni ),
        
        // AXI-Lite Dönüşümü (periph_bus üzerinden)
        .s_axi_awaddr   ( periph_bus.aw_addr ),
        .s_axi_awvalid  ( periph_bus.aw_valid ),
        .s_axi_awready  ( periph_bus.aw_ready ),
        .s_axi_wdata    ( periph_bus.w_data ),
        .s_axi_wstrb    ( periph_bus.w_strb ),
        .s_axi_wvalid   ( periph_bus.w_valid ),
        .s_axi_wready   ( periph_bus.w_ready ),
        .s_axi_bresp    ( periph_bus.b_resp ),
        .s_axi_bvalid   ( periph_bus.b_valid ),
        .s_axi_bready   ( periph_bus.b_ready ),
        .s_axi_araddr   ( periph_bus.ar_addr ),
        .s_axi_arvalid  ( periph_bus.ar_valid ),
        .s_axi_arready  ( periph_bus.ar_ready ),
        .s_axi_rdata    ( periph_bus.r_data ),
        .s_axi_rresp    ( periph_bus.r_resp ),
        .s_axi_rvalid   ( periph_bus.r_valid ),
        .s_axi_rready   ( periph_bus.r_ready ),

        // Fiziksel UART Pinleri
        .rxd_i          ( uart_rxd_i ),
        .txd_o          ( uart_txd_o )
    );

    // ============================================================
    // 7. GERÇEK BELLEK MODÜLLERİ
    // ============================================================

    // Boot ROM — 1 KB (şimdilik kullanılmıyor, boot_addr = Instr SRAM)
    axi_sram_wrapper #(
        .AXI_ID_WIDTH   ( 5 ),
        .SRAM_BYTES     ( 1024 ),              // 1 KB
        .INIT_FILE      ( "" )                  // Boş (henüz bootloader yok)
    ) i_boot_rom (
        .clk_i  ( clk_i ),
        .rst_ni ( rst_ni ),
        .slv    ( boot_rom_bus )
    );

    // Instruction SRAM — 8 KB (CPU buradan komut okuyacak)
    axi_sram_wrapper #(
        .AXI_ID_WIDTH   ( 5 ),
        .SRAM_BYTES     ( 8192 ),              // 8 KB
        .INIT_FILE      ( "firmware.hex" )      // Berkin'in derleyeceği hex dosyası
    ) i_instr_sram (
        .clk_i  ( clk_i ),
        .rst_ni ( rst_ni ),
        .slv    ( instr_sram_bus )
    );

    // Data SRAM — 8 KB (değişkenler, stack, heap)
    axi_sram_wrapper #(
        .AXI_ID_WIDTH   ( 5 ),
        .SRAM_BYTES     ( 8192 ),              // 8 KB
        .INIT_FILE      ( "" )                  // Başlangıçta sıfır
    ) i_data_sram (
        .clk_i  ( clk_i ),
        .rst_ni ( rst_ni ),
        .slv    ( data_sram_bus )
    );

    // AI SRAM — 30 KB (YZ hızlandırıcıya özel)
    axi_sram_wrapper #(
        .AXI_ID_WIDTH   ( 5 ),
        .SRAM_BYTES     ( 30720 ),             // 30 KB
        .INIT_FILE      ( "" )                  // Runtime'da yüklenecek
    ) i_ai_sram (
        .clk_i  ( clk_i ),
        .rst_ni ( rst_ni ),
        .slv    ( ai_sram_bus )
    );

endmodule
