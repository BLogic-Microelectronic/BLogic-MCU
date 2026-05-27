// ============================================================
// BLogic MCU - AXI Adres Yönlendirici (Manual Crossbar)
// ============================================================
// PULP xbar yerine Verilator uyumlu basit yönlendirici.
//
// Instruction port → doğrudan Instruction SRAM'e
// Data port → adres decode ile Data SRAM veya Peripherals'a
//
// ÖNEMLİ: OBI bridge AW ve W'yi aynı cycle'da sunar.
// Bu yüzden W kanalı combinational decode ile yönlendirilmeli,
// registered state ile DEĞİL. Aksi halde deadlock oluşur.
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
    // INSTRUCTION PATH: Direkt Instruction SRAM'e
    // ============================================================
    assign instr_sram_mst.aw_id     = cpu_instr_slv.aw_id;
    assign instr_sram_mst.aw_addr   = cpu_instr_slv.aw_addr;
    assign instr_sram_mst.aw_len    = cpu_instr_slv.aw_len;
    assign instr_sram_mst.aw_size   = cpu_instr_slv.aw_size;
    assign instr_sram_mst.aw_burst  = cpu_instr_slv.aw_burst;
    assign instr_sram_mst.aw_lock   = cpu_instr_slv.aw_lock;
    assign instr_sram_mst.aw_cache  = cpu_instr_slv.aw_cache;
    assign instr_sram_mst.aw_prot   = cpu_instr_slv.aw_prot;
    assign instr_sram_mst.aw_qos    = cpu_instr_slv.aw_qos;
    assign instr_sram_mst.aw_region = cpu_instr_slv.aw_region;
    assign instr_sram_mst.aw_atop   = cpu_instr_slv.aw_atop;
    assign instr_sram_mst.aw_user   = cpu_instr_slv.aw_user;
    assign instr_sram_mst.aw_valid  = cpu_instr_slv.aw_valid;
    assign cpu_instr_slv.aw_ready   = instr_sram_mst.aw_ready;

    assign instr_sram_mst.w_data    = cpu_instr_slv.w_data;
    assign instr_sram_mst.w_strb    = cpu_instr_slv.w_strb;
    assign instr_sram_mst.w_last    = cpu_instr_slv.w_last;
    assign instr_sram_mst.w_user    = cpu_instr_slv.w_user;
    assign instr_sram_mst.w_valid   = cpu_instr_slv.w_valid;
    assign cpu_instr_slv.w_ready    = instr_sram_mst.w_ready;

    assign cpu_instr_slv.b_id       = instr_sram_mst.b_id;
    assign cpu_instr_slv.b_resp     = instr_sram_mst.b_resp;
    assign cpu_instr_slv.b_user     = instr_sram_mst.b_user;
    assign cpu_instr_slv.b_valid    = instr_sram_mst.b_valid;
    assign instr_sram_mst.b_ready   = cpu_instr_slv.b_ready;

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
    assign instr_sram_mst.ar_valid  = cpu_instr_slv.ar_valid;
    assign cpu_instr_slv.ar_ready   = instr_sram_mst.ar_ready;

    assign cpu_instr_slv.r_id       = instr_sram_mst.r_id;
    assign cpu_instr_slv.r_data     = instr_sram_mst.r_data;
    assign cpu_instr_slv.r_resp     = instr_sram_mst.r_resp;
    assign cpu_instr_slv.r_last     = instr_sram_mst.r_last;
    assign cpu_instr_slv.r_user     = instr_sram_mst.r_user;
    assign cpu_instr_slv.r_valid    = instr_sram_mst.r_valid;
    assign instr_sram_mst.r_ready   = cpu_instr_slv.r_ready;

    // ============================================================
    // DATA PATH: Adres decode
    // ============================================================
    wire aw_to_periph = (cpu_data_slv.aw_addr[31:28] == 4'h4);
    wire ar_to_periph = (cpu_data_slv.ar_addr[31:28] == 4'h4);

    // Response mux için registered state
    logic wr_was_periph, rd_was_periph;
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            wr_was_periph <= 1'b0;
            rd_was_periph <= 1'b0;
        end else begin
            if (cpu_data_slv.aw_valid && cpu_data_slv.aw_ready)
                wr_was_periph <= aw_to_periph;
            if (cpu_data_slv.ar_valid && cpu_data_slv.ar_ready)
                rd_was_periph <= ar_to_periph;
        end
    end

    // --- AW kanal (combinational decode) ---
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
    assign data_sram_mst.aw_valid  = cpu_data_slv.aw_valid && !aw_to_periph;

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
    assign periph_mst.aw_valid     = cpu_data_slv.aw_valid && aw_to_periph;

    assign cpu_data_slv.aw_ready   = aw_to_periph ? periph_mst.aw_ready
                                                   : data_sram_mst.aw_ready;

    // --- W kanal (combinational decode — BUG FIX) ---
    assign data_sram_mst.w_data    = cpu_data_slv.w_data;
    assign data_sram_mst.w_strb    = cpu_data_slv.w_strb;
    assign data_sram_mst.w_last    = cpu_data_slv.w_last;
    assign data_sram_mst.w_user    = cpu_data_slv.w_user;
    assign data_sram_mst.w_valid   = cpu_data_slv.w_valid && !aw_to_periph;

    assign periph_mst.w_data       = cpu_data_slv.w_data;
    assign periph_mst.w_strb       = cpu_data_slv.w_strb;
    assign periph_mst.w_last       = cpu_data_slv.w_last;
    assign periph_mst.w_user       = cpu_data_slv.w_user;
    assign periph_mst.w_valid      = cpu_data_slv.w_valid && aw_to_periph;

    assign cpu_data_slv.w_ready    = aw_to_periph ? periph_mst.w_ready
                                                   : data_sram_mst.w_ready;

    // --- B kanal (registered decode — response mux) ---
    assign cpu_data_slv.b_id       = wr_was_periph ? periph_mst.b_id   : data_sram_mst.b_id;
    assign cpu_data_slv.b_resp     = wr_was_periph ? periph_mst.b_resp : data_sram_mst.b_resp;
    assign cpu_data_slv.b_user     = wr_was_periph ? periph_mst.b_user : data_sram_mst.b_user;
    assign cpu_data_slv.b_valid    = wr_was_periph ? periph_mst.b_valid: data_sram_mst.b_valid;
    assign data_sram_mst.b_ready   = cpu_data_slv.b_ready && !wr_was_periph;
    assign periph_mst.b_ready      = cpu_data_slv.b_ready &&  wr_was_periph;

    // --- AR kanal (combinational decode) ---
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
    assign data_sram_mst.ar_valid  = cpu_data_slv.ar_valid && !ar_to_periph;

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
    assign periph_mst.ar_valid     = cpu_data_slv.ar_valid && ar_to_periph;

    assign cpu_data_slv.ar_ready   = ar_to_periph ? periph_mst.ar_ready
                                                   : data_sram_mst.ar_ready;

    // --- R kanal (registered decode — response mux) ---
    assign cpu_data_slv.r_id       = rd_was_periph ? periph_mst.r_id   : data_sram_mst.r_id;
    assign cpu_data_slv.r_data     = rd_was_periph ? periph_mst.r_data : data_sram_mst.r_data;
    assign cpu_data_slv.r_resp     = rd_was_periph ? periph_mst.r_resp : data_sram_mst.r_resp;
    assign cpu_data_slv.r_last     = rd_was_periph ? periph_mst.r_last : data_sram_mst.r_last;
    assign cpu_data_slv.r_user     = rd_was_periph ? periph_mst.r_user : data_sram_mst.r_user;
    assign cpu_data_slv.r_valid    = rd_was_periph ? periph_mst.r_valid: data_sram_mst.r_valid;
    assign data_sram_mst.r_ready   = cpu_data_slv.r_ready && !rd_was_periph;
    assign periph_mst.r_ready      = cpu_data_slv.r_ready &&  rd_was_periph;

    // ============================================================
    // KULLANILMAYAN PORTLAR: Tie-off
    // ============================================================
    assign boot_rom_mst.aw_valid = 1'b0; assign boot_rom_mst.w_valid = 1'b0;
    assign boot_rom_mst.b_ready  = 1'b1; assign boot_rom_mst.ar_valid = 1'b0;
    assign boot_rom_mst.r_ready  = 1'b1;
    assign boot_rom_mst.aw_addr = '0; assign boot_rom_mst.aw_id = '0;
    assign boot_rom_mst.aw_len = '0; assign boot_rom_mst.aw_size = '0;
    assign boot_rom_mst.aw_burst = '0; assign boot_rom_mst.aw_lock = '0;
    assign boot_rom_mst.aw_cache = '0; assign boot_rom_mst.aw_prot = '0;
    assign boot_rom_mst.aw_qos = '0; assign boot_rom_mst.aw_region = '0;
    assign boot_rom_mst.aw_atop = '0; assign boot_rom_mst.aw_user = '0;
    assign boot_rom_mst.w_data = '0; assign boot_rom_mst.w_strb = '0;
    assign boot_rom_mst.w_last = '0; assign boot_rom_mst.w_user = '0;
    assign boot_rom_mst.ar_addr = '0; assign boot_rom_mst.ar_id = '0;
    assign boot_rom_mst.ar_len = '0; assign boot_rom_mst.ar_size = '0;
    assign boot_rom_mst.ar_burst = '0; assign boot_rom_mst.ar_lock = '0;
    assign boot_rom_mst.ar_cache = '0; assign boot_rom_mst.ar_prot = '0;
    assign boot_rom_mst.ar_qos = '0; assign boot_rom_mst.ar_region = '0;
    assign boot_rom_mst.ar_user = '0;

    assign ai_sram_mst.aw_valid = 1'b0; assign ai_sram_mst.w_valid = 1'b0;
    assign ai_sram_mst.b_ready  = 1'b1; assign ai_sram_mst.ar_valid = 1'b0;
    assign ai_sram_mst.r_ready  = 1'b1;
    assign ai_sram_mst.aw_addr = '0; assign ai_sram_mst.aw_id = '0;
    assign ai_sram_mst.aw_len = '0; assign ai_sram_mst.aw_size = '0;
    assign ai_sram_mst.aw_burst = '0; assign ai_sram_mst.aw_lock = '0;
    assign ai_sram_mst.aw_cache = '0; assign ai_sram_mst.aw_prot = '0;
    assign ai_sram_mst.aw_qos = '0; assign ai_sram_mst.aw_region = '0;
    assign ai_sram_mst.aw_atop = '0; assign ai_sram_mst.aw_user = '0;
    assign ai_sram_mst.w_data = '0; assign ai_sram_mst.w_strb = '0;
    assign ai_sram_mst.w_last = '0; assign ai_sram_mst.w_user = '0;
    assign ai_sram_mst.ar_addr = '0; assign ai_sram_mst.ar_id = '0;
    assign ai_sram_mst.ar_len = '0; assign ai_sram_mst.ar_size = '0;
    assign ai_sram_mst.ar_burst = '0; assign ai_sram_mst.ar_lock = '0;
    assign ai_sram_mst.ar_cache = '0; assign ai_sram_mst.ar_prot = '0;
    assign ai_sram_mst.ar_qos = '0; assign ai_sram_mst.ar_region = '0;
    assign ai_sram_mst.ar_user = '0;

endmodule

