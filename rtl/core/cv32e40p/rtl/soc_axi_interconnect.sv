`include "axi/typedef.svh"
`include "axi/assign.svh"

module soc_axi_interconnect #(
    parameter int unsigned AXI_ADDR_WIDTH = 32,
    parameter int unsigned AXI_DATA_WIDTH = 32,
    parameter int unsigned AXI_ID_WIDTH   = 4,
    parameter int unsigned AXI_USER_WIDTH = 1
)(
    input  logic clk_i,
    input  logic rst_ni,

    // ============================================================
    // MASTER PORTLARI (CPU'dan Crossbar'a gelen istekler)
    // ============================================================
    // M0: İşlemci Komut (Instruction) Arayüzü — sadece okuma yapar
    AXI_BUS.Slave  cpu_instr_slv,
    // M1: İşlemci Veri (Data) Arayüzü — okuma + yazma yapar
    AXI_BUS.Slave  cpu_data_slv,

    // ============================================================
    // SLAVE PORTLARI (Crossbar'dan hedef modüllere gidenler)
    // ============================================================
    // S0: Boot ROM       — 0x0000_0000 .. 0x0000_03FF (1 KB)
    AXI_BUS.Master boot_rom_mst,
    // S1: Instruction SRAM — 0x0001_0000 .. 0x0001_1FFF (8 KB)
    AXI_BUS.Master instr_sram_mst,
    // S2: Data SRAM      — 0x0002_0000 .. 0x0002_1FFF (8 KB)
    AXI_BUS.Master data_sram_mst,
    // S3: AI SRAM        — 0x0003_0000 .. 0x0003_77FF (30 KB)
    AXI_BUS.Master ai_sram_mst,
    // S4: Çevre Birimleri — 0x4000_0000 .. 0x4000_FFFF (64 KB, AXI-Lite bridge'e)
    AXI_BUS.Master periph_mst
);

    // ============================================================
    // Crossbar konfigürasyon sabitleri
    // ============================================================
    localparam int unsigned NUM_MASTERS   = 2;  // CPU Instr + CPU Data
    localparam int unsigned NUM_SLAVES    = 5;  // ROM + 3×SRAM + Periph
    localparam int unsigned NUM_RULES     = 5;  // Her slave için bir adres kuralı

    // NOT: Crossbar, master tarafında ID genişliğini otomatik genişletir:
    //   mst_id_width = AXI_ID_WIDTH + $clog2(NUM_MASTERS)
    //                = 4 + 1 = 5 bit
    // Slave modülleriniz (SRAM wrapper, UART vb.) bu genişliği desteklemeli!

    // ============================================================
    // PULP xbar_cfg_t yapılandırma struct'ı
    // ============================================================
    localparam axi_pkg::xbar_cfg_t XbarCfg = '{
        NoSlvPorts:         NUM_MASTERS,        // Crossbar'a bağlanan master sayısı
        NoMstPorts:         NUM_SLAVES,          // Crossbar'dan çıkan slave sayısı
        MaxMstTrans:        4,                   // Master başına eşzamanlı transaction
        MaxSlvTrans:        4,                   // Slave başına eşzamanlı transaction
        FallThrough:        1'b0,                // FIFO cut-through kapalı (timing için)
        LatencyMode:        axi_pkg::CUT_ALL_AX, // AW/AR kanallarında pipeline register
        PipelineStages:     1,                   // 1 aşama pipeline (fmax için)
        AxiIdWidthSlvPorts: AXI_ID_WIDTH,        // Giriş tarafı ID genişliği
        AxiIdUsedSlvPorts:  AXI_ID_WIDTH,
        UniqueIds:          1'b0,                // Farklı master'lar aynı ID kullanabilir
        AxiAddrWidth:       AXI_ADDR_WIDTH,
        AxiDataWidth:       AXI_DATA_WIDTH,
        NoAddrRules:        NUM_RULES            // Adres kuralı sayısı
    };

    // ============================================================
    // Adres haritası (Memory Map)
    // ============================================================
    typedef axi_pkg::xbar_rule_32_t rule_t;

    rule_t [NUM_RULES-1:0] addr_map;

    assign addr_map = '{
        // S0: Boot ROM — 1 KB
        '{idx: 32'd0, start_addr: 32'h0000_0000, end_addr: 32'h0000_0400},

        // S1: Instruction SRAM — 8 KB
        '{idx: 32'd1, start_addr: 32'h0001_0000, end_addr: 32'h0001_2000},

        // S2: Data SRAM — 8 KB
        '{idx: 32'd2, start_addr: 32'h0002_0000, end_addr: 32'h0002_2000},

        // S3: AI SRAM — 30 KB (30 × 1024 = 30720 = 0x7800)
        '{idx: 32'd3, start_addr: 32'h0003_0000, end_addr: 32'h0003_7800},

        // S4: Çevre Birimleri — 64 KB blok
        '{idx: 32'd4, start_addr: 32'h4000_0000, end_addr: 32'h4001_0000}
    };

    // ============================================================
    // PULP AXI Crossbar — Interface Wrapper
    // ============================================================
    // axi_xbar_intf kullanıyoruz çünkü portlarımız AXI_BUS interface.
    // (axi_xbar'ın kendisi req_t/resp_t struct ile çalışır, interface ile değil)

    axi_xbar_intf #(
        .AXI_USER_WIDTH ( AXI_USER_WIDTH ),
        .Cfg            ( XbarCfg ),
        .ATOPS          ( 1'b0 ),               // Atomik operasyon desteği kapalı
        .Connectivity   ( {NUM_MASTERS * NUM_SLAVES{1'b1}} ), // Tam bağlantı
        .rule_t         ( rule_t )
    ) i_axi_xbar (
        .clk_i                  ( clk_i  ),
        .rst_ni                 ( rst_ni ),
        .test_i                 ( 1'b0   ),
        .slv_ports              ( '{cpu_instr_slv, cpu_data_slv} ),
        .mst_ports              ( '{boot_rom_mst, instr_sram_mst, data_sram_mst,
                                    ai_sram_mst, periph_mst} ),
        .addr_map_i             ( addr_map ),
        .en_default_mst_port_i  ( '0 ),
        .default_mst_port_i     ( '0 )
    );

endmodule
