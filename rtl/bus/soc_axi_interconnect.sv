-`timescale 1ns / 1ps

// ============================================================
// BLogic MCU - AXI Adres Yönlendirici (Manual Crossbar)
// ============================================================
// QSPI BOOT DESTEKLI v3 — Şartname 4.2.2 min kriter #2
//
// Instr port: 2-yollu decode
//   addr[19:16] == 0x0 → Boot ROM   (0x0000_0000 - 0x0000_FFFF)
//   addr[19:16] != 0x0 → Instr SRAM (firmware @ 0x0001_0000)
//
// Data port: 4-yollu decode (AW/W), 3-yollu decode (AR/R)
//   high[31:28] == 0x4              → Peripherals (0x4xxx_xxxx)
//   high==0 && mid[19:16] == 0x1    → Instr SRAM  (bootloader yazıyor — YENI)
//   high==0 && mid[19:16] == 0x3    → AI SRAM     (0x0003_xxxx)
//   default                          → Data SRAM   (0x0002_xxxx)
//
// TASARIM NOTLARI:
//  - Boot ROM read-only: AW/W tied off, sadece instr path'ten AR/R
//  - Instr SRAM dual-port mantığı: AW/W/B sadece data path'ten (bootloader 
//    yazıyor), AR/R sadece instr path'ten (CPU fetch). Ayrı kanallar = 
//    çakışma yok, arbiter gerekmiyor. Bootloader Instr SRAM'i okumuyor, 
//    firmware kendi kodunu data olarak okumuyor.
//  - OBI bridge AW ve W'yi aynı cycle'da sunar → W kanalı combinational 
//    decode, B/R registered state.
// ============================================================

module soc_axi_interconnect (
    input  logic clk_i,
    input  logic rst_ni,

    AXI_BUS.Slave  cpu_instr_slv,
    AXI_BUS.Slave  cpu_data_slv,

    AXI_BUS.Master boot_rom_mst,
    AXI_BUS.Master instr_sram_mst,
    AXI_BUS.Master data_sram_mst,
    AXI_BUS.Master ai_sram_mst,
    AXI_BUS.Master periph_mst
);

    // ============================================================
    // INSTRUCTION PATH: 2-yollu decode (Boot ROM + Instr SRAM)
    // ============================================================
    logic [31:0] cpu_iar_addr_local;
    logic [3:0]  iar_mid_nib;

    assign cpu_iar_addr_local = cpu_instr_slv.ar_addr;
    assign iar_mid_nib = {cpu_iar_addr_local[19], cpu_iar_addr_local[18],
                          cpu_iar_addr_local[17], cpu_iar_addr_local[16]};

    logic iar_to_boot;
    assign iar_to_boot = (iar_mid_nib == 4'h0);

    // R kanal için registered destination flag
    logic ird_from_boot_q;
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni)
            ird_from_boot_q <= 1'b0;
        else if (cpu_instr_slv.ar_valid && cpu_instr_slv.ar_ready)
            ird_from_boot_q <= iar_to_boot;
    end

    // CPU instr port write side: instr port yazmaz, ready=0 ile reddet
    // (CV32E40P'nin instruction port'u read-only; bridge zaten aw_valid=0 sürer)
    assign cpu_instr_slv.aw_ready = 1'b0;
    assign cpu_instr_slv.w_ready  = 1'b0;
    assign cpu_instr_slv.b_id     = '0;
    assign cpu_instr_slv.b_resp   = 2'b00;
    assign cpu_instr_slv.b_user   = '0;
    assign cpu_instr_slv.b_valid  = 1'b0;

    // Boot ROM AR (sadece instr path'ten)
    assign boot_rom_mst.ar_id     = cpu_instr_slv.ar_id;
    assign boot_rom_mst.ar_addr   = cpu_instr_slv.ar_addr;
    assign boot_rom_mst.ar_len    = cpu_instr_slv.ar_len;
    assign boot_rom_mst.ar_size   = cpu_instr_slv.ar_size;
    assign boot_rom_mst.ar_burst  = cpu_instr_slv.ar_burst;
    assign boot_rom_mst.ar_lock   = cpu_instr_slv.ar_lock;
    assign boot_rom_mst.ar_cache  = cpu_instr_slv.ar_cache;
    assign boot_rom_mst.ar_prot   = cpu_instr_slv.ar_prot;
    assign boot_rom_mst.ar_qos    = cpu_instr_slv.ar_qos;
    assign boot_rom_mst.ar_region = cpu_instr_slv.ar_region;
    assign boot_rom_mst.ar_user   = cpu_instr_slv.ar_user;
    assign boot_rom_mst.ar_valid  = cpu_instr_slv.ar_valid && iar_to_boot;

    // Instr SRAM AR (sadece instr path'ten; data path AR'leri buraya gelmez)
    assign instr_sram_mst.ar_id     = cpu_instr_slv.ar_id;
    assign instr_sram_mst.ar_addr   = cpu_instr_slv.ar_addr;
    assign instr_sram_mst.ar_len    = cpu_instr_slv.ar_len;
    assign instr_sram_mst.ar_size   = cpu_instr_slv.ar_size;
    assign instr_sram_mst.ar_burst  = cpu_instr_slv.ar_burst;
    assign instr_sram_mst.ar_lock   = cpu_instr_slv.ar_lock;
    assign instr_sram_mst.ar_cache  = cpu_instr_slv.ar_cache;
    assign instr_sram_mst.ar_prot   = cpu_instr_slv.ar_prot;
    assign instr_sram_mst.ar_qos    = cpu_instr_slv.ar_qos;
    assign instr_sram_mst.ar_region = cpu_instr_slv.ar_region;
    assign instr_sram_mst.ar_user   = cpu_instr_slv.ar_user;
    assign instr_sram_mst.ar_valid  = cpu_instr_slv.ar_valid && !iar_to_boot;

    // CPU instr port AR ready (hedef master'a göre)
    assign cpu_instr_slv.ar_ready   = iar_to_boot ? boot_rom_mst.ar_ready
                                                  : instr_sram_mst.ar_ready;

    // CPU instr port R kanalı (registered mux)
    assign cpu_instr_slv.r_id    = ird_from_boot_q ? boot_rom_mst.r_id    : instr_sram_mst.r_id;
    assign cpu_instr_slv.r_data  = ird_from_boot_q ? boot_rom_mst.r_data  : instr_sram_mst.r_data;
    assign cpu_instr_slv.r_resp  = ird_from_boot_q ? boot_rom_mst.r_resp  : instr_sram_mst.r_resp;
    assign cpu_instr_slv.r_last  = ird_from_boot_q ? boot_rom_mst.r_last  : instr_sram_mst.r_last;
    assign cpu_instr_slv.r_user  = ird_from_boot_q ? boot_rom_mst.r_user  : instr_sram_mst.r_user;
    assign cpu_instr_slv.r_valid = ird_from_boot_q ? boot_rom_mst.r_valid : instr_sram_mst.r_valid;
    assign boot_rom_mst.r_ready   = cpu_instr_slv.r_ready &&  ird_from_boot_q;
    assign instr_sram_mst.r_ready = cpu_instr_slv.r_ready && !ird_from_boot_q;

    // Boot ROM AW/W/B tied off — ROM read-only
    assign boot_rom_mst.aw_id     = '0;
    assign boot_rom_mst.aw_addr   = '0;
    assign boot_rom_mst.aw_len    = '0;
    assign boot_rom_mst.aw_size   = '0;
    assign boot_rom_mst.aw_burst  = '0;
    assign boot_rom_mst.aw_lock   = '0;
    assign boot_rom_mst.aw_cache  = '0;
    assign boot_rom_mst.aw_prot   = '0;
    assign boot_rom_mst.aw_qos    = '0;
    assign boot_rom_mst.aw_region = '0;
    assign boot_rom_mst.aw_atop   = '0;
    assign boot_rom_mst.aw_user   = '0;
    assign boot_rom_mst.aw_valid  = 1'b0;
    assign boot_rom_mst.w_data    = '0;
    assign boot_rom_mst.w_strb    = '0;
    assign boot_rom_mst.w_last    = '0;
    assign boot_rom_mst.w_user    = '0;
    assign boot_rom_mst.w_valid   = 1'b0;
    assign boot_rom_mst.b_ready   = 1'b1;

    // ============================================================
    // DATA PATH: 4-yollu decode (AW), 3-yollu decode (AR)
    // ============================================================
    logic [31:0] cpu_aw_addr_local;
    logic [31:0] cpu_ar_addr_local;
    logic [3:0]  aw_addr_high_nib, ar_addr_high_nib;
    logic [3:0]  aw_addr_mid_nib,  ar_addr_mid_nib;

    assign cpu_aw_addr_local = cpu_data_slv.aw_addr;
    assign cpu_ar_addr_local = cpu_data_slv.ar_addr;

    assign aw_addr_high_nib = {cpu_aw_addr_local[31], cpu_aw_addr_local[30],
                               cpu_aw_addr_local[29], cpu_aw_addr_local[28]};
    assign ar_addr_high_nib = {cpu_ar_addr_local[31], cpu_ar_addr_local[30],
                               cpu_ar_addr_local[29], cpu_ar_addr_local[28]};

    assign aw_addr_mid_nib  = {cpu_aw_addr_local[19], cpu_aw_addr_local[18],
                               cpu_aw_addr_local[17], cpu_aw_addr_local[16]};
    assign ar_addr_mid_nib  = {cpu_ar_addr_local[19], cpu_ar_addr_local[18],
                               cpu_ar_addr_local[17], cpu_ar_addr_local[16]};

    // Decode flags (mutually exclusive)
    logic aw_to_periph,    ar_to_periph;
    logic aw_to_ai_sram,   ar_to_ai_sram;
    logic aw_to_instr_sram;   // AW only (data path Instr SRAM'i okumuyor)

    assign aw_to_periph     =  (aw_addr_high_nib == 4'h4);
    assign ar_to_periph     =  (ar_addr_high_nib == 4'h4);
    assign aw_to_instr_sram = !aw_to_periph && (aw_addr_high_nib == 4'h0)
                                            && (aw_addr_mid_nib  == 4'h1);
    assign aw_to_ai_sram    = !aw_to_periph && (aw_addr_high_nib == 4'h0)
                                            && (aw_addr_mid_nib  == 4'h3);
    assign ar_to_ai_sram    = !ar_to_periph && (ar_addr_high_nib == 4'h0)
                                            && (ar_addr_mid_nib  == 4'h3);
    // data_sram = AW: !periph && !ai && !instr; AR: !periph && !ai (default)

    // ============================================================
    // Registered destination state
    //   wr_dest: 4 hedef (00=data, 01=ai, 10=periph, 11=instr_sram)
    //   rd_dest: 3 hedef (00=data, 01=ai, 10=periph)
    // ============================================================
    logic [1:0] wr_dest, rd_dest;
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            wr_dest <= 2'b00;
            rd_dest <= 2'b00;
        end else begin
            if (cpu_data_slv.aw_valid && cpu_data_slv.aw_ready)
                wr_dest <= aw_to_periph     ? 2'b10
                         : aw_to_ai_sram    ? 2'b01
                         : aw_to_instr_sram ? 2'b11
                                            : 2'b00;
            if (cpu_data_slv.ar_valid && cpu_data_slv.ar_ready)
                rd_dest <= ar_to_periph  ? 2'b10
                         : ar_to_ai_sram ? 2'b01
                                         : 2'b00;
        end
    end

    // ============================================================
    // AW kanal — combinational decode, 4-yollu broadcast
    // ============================================================
    assign data_sram_mst.aw_id     = cpu_data_slv.aw_id;
    assign data_sram_mst.aw_addr   = cpu_data_slv.aw_addr;
    assign data_sram_mst.aw_len    = cpu_data_slv.aw_len;
    assign data_sram_mst.aw_size   = cpu_data_slv.aw_size;
    assign data_sram_mst.aw_burst  = cpu_data_slv.aw_burst;
    assign data_sram_mst.aw_lock   = cpu_data_slv.aw_lock;
    assign data_sram_mst.aw_cache  = cpu_data_slv.aw_cache;
    assign data_sram_mst.aw_prot   = cpu_data_slv.aw_prot;
    assign data_sram_mst.aw_qos    = cpu_data_slv.aw_qos;
    assign data_sram_mst.aw_region = cpu_data_slv.aw_region;
    assign data_sram_mst.aw_atop   = cpu_data_slv.aw_atop;
    assign data_sram_mst.aw_user   = cpu_data_slv.aw_user;

    assign ai_sram_mst.aw_id       = cpu_data_slv.aw_id;
    assign ai_sram_mst.aw_addr     = cpu_data_slv.aw_addr;
    assign ai_sram_mst.aw_len      = cpu_data_slv.aw_len;
    assign ai_sram_mst.aw_size     = cpu_data_slv.aw_size;
    assign ai_sram_mst.aw_burst    = cpu_data_slv.aw_burst;
    assign ai_sram_mst.aw_lock     = cpu_data_slv.aw_lock;
    assign ai_sram_mst.aw_cache    = cpu_data_slv.aw_cache;
    assign ai_sram_mst.aw_prot     = cpu_data_slv.aw_prot;
    assign ai_sram_mst.aw_qos      = cpu_data_slv.aw_qos;
    assign ai_sram_mst.aw_region   = cpu_data_slv.aw_region;
    assign ai_sram_mst.aw_atop     = cpu_data_slv.aw_atop;
    assign ai_sram_mst.aw_user     = cpu_data_slv.aw_user;

    assign periph_mst.aw_id        = cpu_data_slv.aw_id;
    assign periph_mst.aw_addr      = cpu_data_slv.aw_addr;
    assign periph_mst.aw_len       = cpu_data_slv.aw_len;
    assign periph_mst.aw_size      = cpu_data_slv.aw_size;
    assign periph_mst.aw_burst     = cpu_data_slv.aw_burst;
    assign periph_mst.aw_lock      = cpu_data_slv.aw_lock;
    assign periph_mst.aw_cache     = cpu_data_slv.aw_cache;
    assign periph_mst.aw_prot      = cpu_data_slv.aw_prot;
    assign periph_mst.aw_qos       = cpu_data_slv.aw_qos;
    assign periph_mst.aw_region    = cpu_data_slv.aw_region;
    assign periph_mst.aw_atop      = cpu_data_slv.aw_atop;
    assign periph_mst.aw_user      = cpu_data_slv.aw_user;

    // YENI: Instr SRAM AW (bootloader yazıyor)
    assign instr_sram_mst.aw_id     = cpu_data_slv.aw_id;
    assign instr_sram_mst.aw_addr   = cpu_data_slv.aw_addr;
    assign instr_sram_mst.aw_len    = cpu_data_slv.aw_len;
    assign instr_sram_mst.aw_size   = cpu_data_slv.aw_size;
    assign instr_sram_mst.aw_burst  = cpu_data_slv.aw_burst;
    assign instr_sram_mst.aw_lock   = cpu_data_slv.aw_lock;
    assign instr_sram_mst.aw_cache  = cpu_data_slv.aw_cache;
    assign instr_sram_mst.aw_prot   = cpu_data_slv.aw_prot;
    assign instr_sram_mst.aw_qos    = cpu_data_slv.aw_qos;
    assign instr_sram_mst.aw_region = cpu_data_slv.aw_region;
    assign instr_sram_mst.aw_atop   = cpu_data_slv.aw_atop;
    assign instr_sram_mst.aw_user   = cpu_data_slv.aw_user;

    // Valid sinyalleri — sadece hedef master'a
    assign data_sram_mst.aw_valid  = cpu_data_slv.aw_valid && !aw_to_periph && !aw_to_ai_sram && !aw_to_instr_sram;
    assign ai_sram_mst.aw_valid    = cpu_data_slv.aw_valid &&  aw_to_ai_sram;
    assign periph_mst.aw_valid     = cpu_data_slv.aw_valid &&  aw_to_periph;
    assign instr_sram_mst.aw_valid = cpu_data_slv.aw_valid &&  aw_to_instr_sram;

    assign cpu_data_slv.aw_ready   = aw_to_periph     ? periph_mst.aw_ready
                                   : aw_to_ai_sram    ? ai_sram_mst.aw_ready
                                   : aw_to_instr_sram ? instr_sram_mst.aw_ready
                                                      : data_sram_mst.aw_ready;

    // ============================================================
    // W kanal — combinational decode, 4-yollu
    // ============================================================
    assign data_sram_mst.w_data    = cpu_data_slv.w_data;
    assign data_sram_mst.w_strb    = cpu_data_slv.w_strb;
    assign data_sram_mst.w_last    = cpu_data_slv.w_last;
    assign data_sram_mst.w_user    = cpu_data_slv.w_user;

    assign ai_sram_mst.w_data      = cpu_data_slv.w_data;
    assign ai_sram_mst.w_strb      = cpu_data_slv.w_strb;
    assign ai_sram_mst.w_last      = cpu_data_slv.w_last;
    assign ai_sram_mst.w_user      = cpu_data_slv.w_user;

    assign periph_mst.w_data       = cpu_data_slv.w_data;
    assign periph_mst.w_strb       = cpu_data_slv.w_strb;
    assign periph_mst.w_last       = cpu_data_slv.w_last;
    assign periph_mst.w_user       = cpu_data_slv.w_user;

    // YENI: Instr SRAM W
    assign instr_sram_mst.w_data   = cpu_data_slv.w_data;
    assign instr_sram_mst.w_strb   = cpu_data_slv.w_strb;
    assign instr_sram_mst.w_last   = cpu_data_slv.w_last;
    assign instr_sram_mst.w_user   = cpu_data_slv.w_user;

    assign data_sram_mst.w_valid   = cpu_data_slv.w_valid && !aw_to_periph && !aw_to_ai_sram && !aw_to_instr_sram;
    assign ai_sram_mst.w_valid     = cpu_data_slv.w_valid &&  aw_to_ai_sram;
    assign periph_mst.w_valid      = cpu_data_slv.w_valid &&  aw_to_periph;
    assign instr_sram_mst.w_valid  = cpu_data_slv.w_valid &&  aw_to_instr_sram;

    assign cpu_data_slv.w_ready    = aw_to_periph     ? periph_mst.w_ready
                                   : aw_to_ai_sram    ? ai_sram_mst.w_ready
                                   : aw_to_instr_sram ? instr_sram_mst.w_ready
                                                      : data_sram_mst.w_ready;

    // ============================================================
    // B kanal — registered decode (4-yollu mux)
    // ============================================================
    assign cpu_data_slv.b_id       = (wr_dest == 2'b10) ? periph_mst.b_id
                                   : (wr_dest == 2'b01) ? ai_sram_mst.b_id
                                   : (wr_dest == 2'b11) ? instr_sram_mst.b_id
                                                        : data_sram_mst.b_id;
    assign cpu_data_slv.b_resp     = (wr_dest == 2'b10) ? periph_mst.b_resp
                                   : (wr_dest == 2'b01) ? ai_sram_mst.b_resp
                                   : (wr_dest == 2'b11) ? instr_sram_mst.b_resp
                                                        : data_sram_mst.b_resp;
    assign cpu_data_slv.b_user     = (wr_dest == 2'b10) ? periph_mst.b_user
                                   : (wr_dest == 2'b01) ? ai_sram_mst.b_user
                                   : (wr_dest == 2'b11) ? instr_sram_mst.b_user
                                                        : data_sram_mst.b_user;
    assign cpu_data_slv.b_valid    = (wr_dest == 2'b10) ? periph_mst.b_valid
                                   : (wr_dest == 2'b01) ? ai_sram_mst.b_valid
                                   : (wr_dest == 2'b11) ? instr_sram_mst.b_valid
                                                        : data_sram_mst.b_valid;
    assign data_sram_mst.b_ready   = cpu_data_slv.b_ready && (wr_dest == 2'b00);
    assign ai_sram_mst.b_ready     = cpu_data_slv.b_ready && (wr_dest == 2'b01);
    assign periph_mst.b_ready      = cpu_data_slv.b_ready && (wr_dest == 2'b10);
    assign instr_sram_mst.b_ready  = cpu_data_slv.b_ready && (wr_dest == 2'b11);

    // ============================================================
    // AR kanal — combinational decode (3-yollu)
    // (Data path Instr SRAM'i okumuyor — bootloader sadece yazar,
    //  firmware kendi kodunu data olarak okumaz)
    // ============================================================
    assign data_sram_mst.ar_id     = cpu_data_slv.ar_id;
    assign data_sram_mst.ar_addr   = cpu_data_slv.ar_addr;
    assign data_sram_mst.ar_len    = cpu_data_slv.ar_len;
    assign data_sram_mst.ar_size   = cpu_data_slv.ar_size;
    assign data_sram_mst.ar_burst  = cpu_data_slv.ar_burst;
    assign data_sram_mst.ar_lock   = cpu_data_slv.ar_lock;
    assign data_sram_mst.ar_cache  = cpu_data_slv.ar_cache;
    assign data_sram_mst.ar_prot   = cpu_data_slv.ar_prot;
    assign data_sram_mst.ar_qos    = cpu_data_slv.ar_qos;
    assign data_sram_mst.ar_region = cpu_data_slv.ar_region;
    assign data_sram_mst.ar_user   = cpu_data_slv.ar_user;

    assign ai_sram_mst.ar_id       = cpu_data_slv.ar_id;
    assign ai_sram_mst.ar_addr     = cpu_data_slv.ar_addr;
    assign ai_sram_mst.ar_len      = cpu_data_slv.ar_len;
    assign ai_sram_mst.ar_size     = cpu_data_slv.ar_size;
    assign ai_sram_mst.ar_burst    = cpu_data_slv.ar_burst;
    assign ai_sram_mst.ar_lock     = cpu_data_slv.ar_lock;
    assign ai_sram_mst.ar_cache    = cpu_data_slv.ar_cache;
    assign ai_sram_mst.ar_prot     = cpu_data_slv.ar_prot;
    assign ai_sram_mst.ar_qos      = cpu_data_slv.ar_qos;
    assign ai_sram_mst.ar_region   = cpu_data_slv.ar_region;
    assign ai_sram_mst.ar_user     = cpu_data_slv.ar_user;

    assign periph_mst.ar_id        = cpu_data_slv.ar_id;
    assign periph_mst.ar_addr      = cpu_data_slv.ar_addr;
    assign periph_mst.ar_len       = cpu_data_slv.ar_len;
    assign periph_mst.ar_size      = cpu_data_slv.ar_size;
    assign periph_mst.ar_burst     = cpu_data_slv.ar_burst;
    assign periph_mst.ar_lock      = cpu_data_slv.ar_lock;
    assign periph_mst.ar_cache     = cpu_data_slv.ar_cache;
    assign periph_mst.ar_prot      = cpu_data_slv.ar_prot;
    assign periph_mst.ar_qos       = cpu_data_slv.ar_qos;
    assign periph_mst.ar_region    = cpu_data_slv.ar_region;
    assign periph_mst.ar_user      = cpu_data_slv.ar_user;

    assign data_sram_mst.ar_valid  = cpu_data_slv.ar_valid && !ar_to_periph && !ar_to_ai_sram;
    assign ai_sram_mst.ar_valid    = cpu_data_slv.ar_valid &&  ar_to_ai_sram;
    assign periph_mst.ar_valid     = cpu_data_slv.ar_valid &&  ar_to_periph;

    assign cpu_data_slv.ar_ready   = ar_to_periph  ? periph_mst.ar_ready
                                   : ar_to_ai_sram ? ai_sram_mst.ar_ready
                                                   : data_sram_mst.ar_ready;

    // ============================================================
    // R kanal — registered decode (3-yollu mux)
    // ============================================================
    assign cpu_data_slv.r_id       = (rd_dest == 2'b10) ? periph_mst.r_id
                                   : (rd_dest == 2'b01) ? ai_sram_mst.r_id
                                                        : data_sram_mst.r_id;
    assign cpu_data_slv.r_data     = (rd_dest == 2'b10) ? periph_mst.r_data
                                   : (rd_dest == 2'b01) ? ai_sram_mst.r_data
                                                        : data_sram_mst.r_data;
    assign cpu_data_slv.r_resp     = (rd_dest == 2'b10) ? periph_mst.r_resp
                                   : (rd_dest == 2'b01) ? ai_sram_mst.r_resp
                                                        : data_sram_mst.r_resp;
    assign cpu_data_slv.r_last     = (rd_dest == 2'b10) ? periph_mst.r_last
                                   : (rd_dest == 2'b01) ? ai_sram_mst.r_last
                                                        : data_sram_mst.r_last;
    assign cpu_data_slv.r_user     = (rd_dest == 2'b10) ? periph_mst.r_user
                                   : (rd_dest == 2'b01) ? ai_sram_mst.r_user
                                                        : data_sram_mst.r_user;
    assign cpu_data_slv.r_valid    = (rd_dest == 2'b10) ? periph_mst.r_valid
                                   : (rd_dest == 2'b01) ? ai_sram_mst.r_valid
                                                        : data_sram_mst.r_valid;
    assign data_sram_mst.r_ready   = cpu_data_slv.r_ready && (rd_dest == 2'b00);
    assign ai_sram_mst.r_ready     = cpu_data_slv.r_ready && (rd_dest == 2'b01);
    assign periph_mst.r_ready      = cpu_data_slv.r_ready && (rd_dest == 2'b10);

endmodule