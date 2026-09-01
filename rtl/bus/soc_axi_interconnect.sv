// ============================================
// Ostim BLogic Mikroelektronik
// soc_axi_interconnect.sv  -  AXI adres yönlendirici (manuel crossbar)
// ============================================
`timescale 1ns / 1ps

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
`ifdef JTAG_DEBUG
    ,
    // Debug Module (riscv-dbg) bolgesi: 0x0004_0000-0x0004_FFFF (64 KB pencere;
    // dm_mem yalniz addr[11:0] cozdugu icin 4 KB'lik DM bu pencerede 16 kez
    // yansir - yazilim bu araligi kullanmaz). Hem buyruk (debug ROM getirme)
    // hem veri (Halted/Going bayraklari, data0, progbuf) yolundan erisilir;
    // iki yol axi_dm_slave icinde tek DM portuna tahkim edilir. JTAG_DEBUG
    // tanimli degilken bu port ve asagidaki dm_* bayraklari yoktur / sabit
    // 0'dir - mevcut yonlendirme birebir korunur. Kayitli wr/rd_to_dm_q
    // bayraklari (wr_dest/rd_dest gibi) tek-outstanding master varsayar.
    AXI_BUS.Master dm_instr_mst,
    AXI_BUS.Master dm_data_mst
`endif
);

    // Instr path: 2-yollu decode (Boot ROM + Instr SRAM) (+ DM, JTAG_DEBUG)
    logic [31:0] cpu_iar_addr_local;
    logic [3:0]  iar_mid_nib;

    assign cpu_iar_addr_local = cpu_instr_slv.ar_addr;
    assign iar_mid_nib = {cpu_iar_addr_local[19], cpu_iar_addr_local[18],
                          cpu_iar_addr_local[17], cpu_iar_addr_local[16]};

    logic iar_to_boot;
    assign iar_to_boot = (iar_mid_nib == 4'h0);

    // DM dekod bayraklari: JTAG_DEBUG yokken sabit 0 -> mevcut ifadelerdeki
    // "&& !x_to_dm" terimleri sabit katlanir, mantik degismez.
    logic iar_to_dm, ird_from_dm_q;
    logic aw_to_dm, ar_to_dm, wr_to_dm_q, rd_to_dm_q;
`ifdef JTAG_DEBUG
    assign iar_to_dm = (cpu_iar_addr_local[31:28] == 4'h0) && (iar_mid_nib == 4'h4);
`else
    assign iar_to_dm = 1'b0;
`endif

    // R kanalı için registered hedef bayrağı
    logic ird_from_boot_q;
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni)
            ird_from_boot_q <= 1'b0;
        else if (cpu_instr_slv.ar_valid && cpu_instr_slv.ar_ready)
            ird_from_boot_q <= iar_to_boot;
    end
`ifdef JTAG_DEBUG
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni)
            ird_from_dm_q <= 1'b0;
        else if (cpu_instr_slv.ar_valid && cpu_instr_slv.ar_ready)
            ird_from_dm_q <= iar_to_dm;
    end
`else
    assign ird_from_dm_q = 1'b0;
`endif

    // Instr port yazmaz, ready=0 ile reddet (CV32E40P fetch portu read-only)
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

    // Instr SRAM AR (sadece instr path'ten)
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
    assign instr_sram_mst.ar_valid  = cpu_instr_slv.ar_valid && !iar_to_boot && !iar_to_dm;

`ifdef JTAG_DEBUG
    // AR ready hedefe göre (DM oncelikli ek bacak)
    assign cpu_instr_slv.ar_ready   = iar_to_dm   ? dm_instr_mst.ar_ready
                                    : iar_to_boot ? boot_rom_mst.ar_ready
                                                  : instr_sram_mst.ar_ready;

    // R kanalı (registered mux, 3-yollu)
    assign cpu_instr_slv.r_id    = ird_from_dm_q   ? dm_instr_mst.r_id
                                 : ird_from_boot_q ? boot_rom_mst.r_id    : instr_sram_mst.r_id;
    assign cpu_instr_slv.r_data  = ird_from_dm_q   ? dm_instr_mst.r_data
                                 : ird_from_boot_q ? boot_rom_mst.r_data  : instr_sram_mst.r_data;
    assign cpu_instr_slv.r_resp  = ird_from_dm_q   ? dm_instr_mst.r_resp
                                 : ird_from_boot_q ? boot_rom_mst.r_resp  : instr_sram_mst.r_resp;
    assign cpu_instr_slv.r_last  = ird_from_dm_q   ? dm_instr_mst.r_last
                                 : ird_from_boot_q ? boot_rom_mst.r_last  : instr_sram_mst.r_last;
    assign cpu_instr_slv.r_user  = ird_from_dm_q   ? dm_instr_mst.r_user
                                 : ird_from_boot_q ? boot_rom_mst.r_user  : instr_sram_mst.r_user;
    assign cpu_instr_slv.r_valid = ird_from_dm_q   ? dm_instr_mst.r_valid
                                 : ird_from_boot_q ? boot_rom_mst.r_valid : instr_sram_mst.r_valid;
    assign dm_instr_mst.r_ready   = cpu_instr_slv.r_ready &&  ird_from_dm_q;
    assign boot_rom_mst.r_ready   = cpu_instr_slv.r_ready &&  ird_from_boot_q;
    assign instr_sram_mst.r_ready = cpu_instr_slv.r_ready && !ird_from_boot_q && !ird_from_dm_q;
`else
    // AR ready hedefe göre
    assign cpu_instr_slv.ar_ready   = iar_to_boot ? boot_rom_mst.ar_ready
                                                  : instr_sram_mst.ar_ready;

    // R kanalı (registered mux)
    assign cpu_instr_slv.r_id    = ird_from_boot_q ? boot_rom_mst.r_id    : instr_sram_mst.r_id;
    assign cpu_instr_slv.r_data  = ird_from_boot_q ? boot_rom_mst.r_data  : instr_sram_mst.r_data;
    assign cpu_instr_slv.r_resp  = ird_from_boot_q ? boot_rom_mst.r_resp  : instr_sram_mst.r_resp;
    assign cpu_instr_slv.r_last  = ird_from_boot_q ? boot_rom_mst.r_last  : instr_sram_mst.r_last;
    assign cpu_instr_slv.r_user  = ird_from_boot_q ? boot_rom_mst.r_user  : instr_sram_mst.r_user;
    assign cpu_instr_slv.r_valid = ird_from_boot_q ? boot_rom_mst.r_valid : instr_sram_mst.r_valid;
    assign boot_rom_mst.r_ready   = cpu_instr_slv.r_ready &&  ird_from_boot_q;
    assign instr_sram_mst.r_ready = cpu_instr_slv.r_ready && !ird_from_boot_q;
`endif

    // Boot ROM read-only: AW/W/B tied off
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

    // Data path: 4-yollu decode (AW), 3-yollu decode (AR)
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

    // Decode bayrakları (birbirini dışlar)
    logic aw_to_periph,    ar_to_periph;
    logic aw_to_ai_sram,   ar_to_ai_sram;
    logic aw_to_instr_sram;   // sadece AW

    assign aw_to_periph     =  (aw_addr_high_nib == 4'h4);
    assign ar_to_periph     =  (ar_addr_high_nib == 4'h4);
    assign aw_to_instr_sram = !aw_to_periph && (aw_addr_high_nib == 4'h0)
                                            && (aw_addr_mid_nib  == 4'h1);
    assign aw_to_ai_sram    = !aw_to_periph && (aw_addr_high_nib == 4'h0)
                                            && (aw_addr_mid_nib  == 4'h3);
    assign ar_to_ai_sram    = !ar_to_periph && (ar_addr_high_nib == 4'h0)
                                            && (ar_addr_mid_nib  == 4'h3);
    // data_sram = kalan default
`ifdef JTAG_DEBUG
    // DM veri bolgesi (0x0004_xxxx): wr_dest/rd_dest kodlamasina dokunmadan
    // ayri kayitli bayrakla onceliklendirilir (wr_dest 2'b11 instr-SRAM'de dolu).
    assign aw_to_dm = !aw_to_periph && (aw_addr_high_nib == 4'h0)
                                    && (aw_addr_mid_nib  == 4'h4);
    assign ar_to_dm = !ar_to_periph && (ar_addr_high_nib == 4'h0)
                                    && (ar_addr_mid_nib  == 4'h4);
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            wr_to_dm_q <= 1'b0;
            rd_to_dm_q <= 1'b0;
        end else begin
            if (cpu_data_slv.aw_valid && cpu_data_slv.aw_ready) wr_to_dm_q <= aw_to_dm;
            if (cpu_data_slv.ar_valid && cpu_data_slv.ar_ready) rd_to_dm_q <= ar_to_dm;
        end
    end
`else
    assign aw_to_dm   = 1'b0;
    assign ar_to_dm   = 1'b0;
    assign wr_to_dm_q = 1'b0;
    assign rd_to_dm_q = 1'b0;
`endif

    // Registered hedef: wr_dest (00=data,01=ai,10=periph,11=instr), rd_dest (00=data,01=ai,10=periph)
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

    // AW kanalı — combinational decode, 4-yollu broadcast
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

    // Instr SRAM AW (bootloader yazıyor)
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

    // Valid sadece hedef master'a
    assign data_sram_mst.aw_valid  = cpu_data_slv.aw_valid && !aw_to_periph && !aw_to_ai_sram && !aw_to_instr_sram && !aw_to_dm;
    assign ai_sram_mst.aw_valid    = cpu_data_slv.aw_valid &&  aw_to_ai_sram;
    assign periph_mst.aw_valid     = cpu_data_slv.aw_valid &&  aw_to_periph;
    assign instr_sram_mst.aw_valid = cpu_data_slv.aw_valid &&  aw_to_instr_sram;

`ifdef JTAG_DEBUG
    assign cpu_data_slv.aw_ready   = aw_to_dm         ? dm_data_mst.aw_ready
                                   : aw_to_periph     ? periph_mst.aw_ready
                                   : aw_to_ai_sram    ? ai_sram_mst.aw_ready
                                   : aw_to_instr_sram ? instr_sram_mst.aw_ready
                                                      : data_sram_mst.aw_ready;
`else
    assign cpu_data_slv.aw_ready   = aw_to_periph     ? periph_mst.aw_ready
                                   : aw_to_ai_sram    ? ai_sram_mst.aw_ready
                                   : aw_to_instr_sram ? instr_sram_mst.aw_ready
                                                      : data_sram_mst.aw_ready;
`endif

    // W kanalı — combinational decode, 4-yollu
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

    // Instr SRAM W
    assign instr_sram_mst.w_data   = cpu_data_slv.w_data;
    assign instr_sram_mst.w_strb   = cpu_data_slv.w_strb;
    assign instr_sram_mst.w_last   = cpu_data_slv.w_last;
    assign instr_sram_mst.w_user   = cpu_data_slv.w_user;

    assign data_sram_mst.w_valid   = cpu_data_slv.w_valid && !aw_to_periph && !aw_to_ai_sram && !aw_to_instr_sram && !aw_to_dm;
    assign ai_sram_mst.w_valid     = cpu_data_slv.w_valid &&  aw_to_ai_sram;
    assign periph_mst.w_valid      = cpu_data_slv.w_valid &&  aw_to_periph;
    assign instr_sram_mst.w_valid  = cpu_data_slv.w_valid &&  aw_to_instr_sram;

`ifdef JTAG_DEBUG
    assign cpu_data_slv.w_ready    = aw_to_dm         ? dm_data_mst.w_ready
                                   : aw_to_periph     ? periph_mst.w_ready
                                   : aw_to_ai_sram    ? ai_sram_mst.w_ready
                                   : aw_to_instr_sram ? instr_sram_mst.w_ready
                                                      : data_sram_mst.w_ready;

    // B kanalı — registered decode (4-yollu mux + DM oncelikli)
    assign cpu_data_slv.b_id       = wr_to_dm_q          ? dm_data_mst.b_id
                                   : (wr_dest == 2'b10) ? periph_mst.b_id
                                   : (wr_dest == 2'b01) ? ai_sram_mst.b_id
                                   : (wr_dest == 2'b11) ? instr_sram_mst.b_id
                                                        : data_sram_mst.b_id;
    assign cpu_data_slv.b_resp     = wr_to_dm_q          ? dm_data_mst.b_resp
                                   : (wr_dest == 2'b10) ? periph_mst.b_resp
                                   : (wr_dest == 2'b01) ? ai_sram_mst.b_resp
                                   : (wr_dest == 2'b11) ? instr_sram_mst.b_resp
                                                        : data_sram_mst.b_resp;
    assign cpu_data_slv.b_user     = wr_to_dm_q          ? dm_data_mst.b_user
                                   : (wr_dest == 2'b10) ? periph_mst.b_user
                                   : (wr_dest == 2'b01) ? ai_sram_mst.b_user
                                   : (wr_dest == 2'b11) ? instr_sram_mst.b_user
                                                        : data_sram_mst.b_user;
    assign cpu_data_slv.b_valid    = wr_to_dm_q          ? dm_data_mst.b_valid
                                   : (wr_dest == 2'b10) ? periph_mst.b_valid
                                   : (wr_dest == 2'b01) ? ai_sram_mst.b_valid
                                   : (wr_dest == 2'b11) ? instr_sram_mst.b_valid
                                                        : data_sram_mst.b_valid;
    assign dm_data_mst.b_ready     = cpu_data_slv.b_ready && wr_to_dm_q;
`else
    assign cpu_data_slv.w_ready    = aw_to_periph     ? periph_mst.w_ready
                                   : aw_to_ai_sram    ? ai_sram_mst.w_ready
                                   : aw_to_instr_sram ? instr_sram_mst.w_ready
                                                      : data_sram_mst.w_ready;

    // B kanalı — registered decode (4-yollu mux)
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
`endif
    assign data_sram_mst.b_ready   = cpu_data_slv.b_ready && (wr_dest == 2'b00) && !wr_to_dm_q;
    assign ai_sram_mst.b_ready     = cpu_data_slv.b_ready && (wr_dest == 2'b01);
    assign periph_mst.b_ready      = cpu_data_slv.b_ready && (wr_dest == 2'b10);
    assign instr_sram_mst.b_ready  = cpu_data_slv.b_ready && (wr_dest == 2'b11);

    // AR kanalı — combinational decode (3-yollu); data path Instr SRAM'i okumaz
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

    assign data_sram_mst.ar_valid  = cpu_data_slv.ar_valid && !ar_to_periph && !ar_to_ai_sram && !ar_to_dm;
    assign ai_sram_mst.ar_valid    = cpu_data_slv.ar_valid &&  ar_to_ai_sram;
    assign periph_mst.ar_valid     = cpu_data_slv.ar_valid &&  ar_to_periph;

`ifdef JTAG_DEBUG
    assign cpu_data_slv.ar_ready   = ar_to_dm      ? dm_data_mst.ar_ready
                                   : ar_to_periph  ? periph_mst.ar_ready
                                   : ar_to_ai_sram ? ai_sram_mst.ar_ready
                                                   : data_sram_mst.ar_ready;

    // R kanalı — registered decode (3-yollu mux + DM oncelikli)
    assign cpu_data_slv.r_id       = rd_to_dm_q          ? dm_data_mst.r_id
                                   : (rd_dest == 2'b10) ? periph_mst.r_id
                                   : (rd_dest == 2'b01) ? ai_sram_mst.r_id
                                                        : data_sram_mst.r_id;
    assign cpu_data_slv.r_data     = rd_to_dm_q          ? dm_data_mst.r_data
                                   : (rd_dest == 2'b10) ? periph_mst.r_data
                                   : (rd_dest == 2'b01) ? ai_sram_mst.r_data
                                                        : data_sram_mst.r_data;
    assign cpu_data_slv.r_resp     = rd_to_dm_q          ? dm_data_mst.r_resp
                                   : (rd_dest == 2'b10) ? periph_mst.r_resp
                                   : (rd_dest == 2'b01) ? ai_sram_mst.r_resp
                                                        : data_sram_mst.r_resp;
    assign cpu_data_slv.r_last     = rd_to_dm_q          ? dm_data_mst.r_last
                                   : (rd_dest == 2'b10) ? periph_mst.r_last
                                   : (rd_dest == 2'b01) ? ai_sram_mst.r_last
                                                        : data_sram_mst.r_last;
    assign cpu_data_slv.r_user     = rd_to_dm_q          ? dm_data_mst.r_user
                                   : (rd_dest == 2'b10) ? periph_mst.r_user
                                   : (rd_dest == 2'b01) ? ai_sram_mst.r_user
                                                        : data_sram_mst.r_user;
    assign cpu_data_slv.r_valid    = rd_to_dm_q          ? dm_data_mst.r_valid
                                   : (rd_dest == 2'b10) ? periph_mst.r_valid
                                   : (rd_dest == 2'b01) ? ai_sram_mst.r_valid
                                                        : data_sram_mst.r_valid;
    assign dm_data_mst.r_ready     = cpu_data_slv.r_ready && rd_to_dm_q;
`else
    assign cpu_data_slv.ar_ready   = ar_to_periph  ? periph_mst.ar_ready
                                   : ar_to_ai_sram ? ai_sram_mst.ar_ready
                                                   : data_sram_mst.ar_ready;

    // R kanalı — registered decode (3-yollu mux)
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
`endif
    assign data_sram_mst.r_ready   = cpu_data_slv.r_ready && (rd_dest == 2'b00) && !rd_to_dm_q;
    assign ai_sram_mst.r_ready     = cpu_data_slv.r_ready && (rd_dest == 2'b01);
    assign periph_mst.r_ready      = cpu_data_slv.r_ready && (rd_dest == 2'b10);

`ifdef JTAG_DEBUG
    // ---- DM master portlari: adres/veri gecisleri ----
    // Buyruk yolu -> dm_instr_mst (salt okunur; AW/W boot_rom gibi baglanmaz)
    assign dm_instr_mst.ar_id     = cpu_instr_slv.ar_id;
    assign dm_instr_mst.ar_addr   = cpu_instr_slv.ar_addr;
    assign dm_instr_mst.ar_len    = cpu_instr_slv.ar_len;
    assign dm_instr_mst.ar_size   = cpu_instr_slv.ar_size;
    assign dm_instr_mst.ar_burst  = cpu_instr_slv.ar_burst;
    assign dm_instr_mst.ar_lock   = cpu_instr_slv.ar_lock;
    assign dm_instr_mst.ar_cache  = cpu_instr_slv.ar_cache;
    assign dm_instr_mst.ar_prot   = cpu_instr_slv.ar_prot;
    assign dm_instr_mst.ar_qos    = cpu_instr_slv.ar_qos;
    assign dm_instr_mst.ar_region = cpu_instr_slv.ar_region;
    assign dm_instr_mst.ar_user   = cpu_instr_slv.ar_user;
    assign dm_instr_mst.ar_valid  = cpu_instr_slv.ar_valid && iar_to_dm;
    assign dm_instr_mst.aw_id     = '0;
    assign dm_instr_mst.aw_addr   = '0;
    assign dm_instr_mst.aw_len    = '0;
    assign dm_instr_mst.aw_size   = '0;
    assign dm_instr_mst.aw_burst  = '0;
    assign dm_instr_mst.aw_lock   = '0;
    assign dm_instr_mst.aw_cache  = '0;
    assign dm_instr_mst.aw_prot   = '0;
    assign dm_instr_mst.aw_qos    = '0;
    assign dm_instr_mst.aw_region = '0;
    assign dm_instr_mst.aw_atop   = '0;
    assign dm_instr_mst.aw_user   = '0;
    assign dm_instr_mst.aw_valid  = 1'b0;
    assign dm_instr_mst.w_data    = '0;
    assign dm_instr_mst.w_strb    = '0;
    assign dm_instr_mst.w_last    = '0;
    assign dm_instr_mst.w_user    = '0;
    assign dm_instr_mst.w_valid   = 1'b0;
    assign dm_instr_mst.b_ready   = 1'b1;

    // Veri yolu -> dm_data_mst (okuma + yazma)
    assign dm_data_mst.aw_id     = cpu_data_slv.aw_id;
    assign dm_data_mst.aw_addr   = cpu_data_slv.aw_addr;
    assign dm_data_mst.aw_len    = cpu_data_slv.aw_len;
    assign dm_data_mst.aw_size   = cpu_data_slv.aw_size;
    assign dm_data_mst.aw_burst  = cpu_data_slv.aw_burst;
    assign dm_data_mst.aw_lock   = cpu_data_slv.aw_lock;
    assign dm_data_mst.aw_cache  = cpu_data_slv.aw_cache;
    assign dm_data_mst.aw_prot   = cpu_data_slv.aw_prot;
    assign dm_data_mst.aw_qos    = cpu_data_slv.aw_qos;
    assign dm_data_mst.aw_region = cpu_data_slv.aw_region;
    assign dm_data_mst.aw_atop   = cpu_data_slv.aw_atop;
    assign dm_data_mst.aw_user   = cpu_data_slv.aw_user;
    assign dm_data_mst.aw_valid  = cpu_data_slv.aw_valid && aw_to_dm;
    assign dm_data_mst.w_data    = cpu_data_slv.w_data;
    assign dm_data_mst.w_strb    = cpu_data_slv.w_strb;
    assign dm_data_mst.w_last    = cpu_data_slv.w_last;
    assign dm_data_mst.w_user    = cpu_data_slv.w_user;
    assign dm_data_mst.w_valid   = cpu_data_slv.w_valid && aw_to_dm;
    assign dm_data_mst.ar_id     = cpu_data_slv.ar_id;
    assign dm_data_mst.ar_addr   = cpu_data_slv.ar_addr;
    assign dm_data_mst.ar_len    = cpu_data_slv.ar_len;
    assign dm_data_mst.ar_size   = cpu_data_slv.ar_size;
    assign dm_data_mst.ar_burst  = cpu_data_slv.ar_burst;
    assign dm_data_mst.ar_lock   = cpu_data_slv.ar_lock;
    assign dm_data_mst.ar_cache  = cpu_data_slv.ar_cache;
    assign dm_data_mst.ar_prot   = cpu_data_slv.ar_prot;
    assign dm_data_mst.ar_qos    = cpu_data_slv.ar_qos;
    assign dm_data_mst.ar_region = cpu_data_slv.ar_region;
    assign dm_data_mst.ar_user   = cpu_data_slv.ar_user;
    assign dm_data_mst.ar_valid  = cpu_data_slv.ar_valid && ar_to_dm;
`endif

endmodule