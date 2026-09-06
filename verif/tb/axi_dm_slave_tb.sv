// ============================================
// Ostim BLogic Mikroelektronik
// axi_dm_slave_tb.sv  -  axi_dm_slave koprusunun YONLU birim testi
// ============================================
// JTAG debug altsistemi (teslim cipinin parcasi), test boslugu G-08;
// make jtag-bridge-sim = test-all'in 18. bileseni.
// Kopru bugune kadar yalniz uctan uca (jtag_smoke_tb / jtag_openocd_tb)
// dolayli dogrulandi. Bugunku master (obi_to_axi) r_ready/b_ready'yi HER ZAMAN
// yuksek tuttugu icin su durumlar hic olusmadi:
//   - r_valid && !r_ready , b_valid && !b_ready  (resp_pending = 0 tum kosu
//     boyunca -> "yanit beklerken adres sabit kalir" SVA'si VAKUMDA gecti)
//   - w_strb != 4'b1111 ile DM yazmasi (be_o yolu)
//   - ayni cevrimde VERI OKUMA + BUYRUK OKUMA (tahkim onceligi)
//   - istek ucusta iken reset
// Bu TB bunlari dogrudan surer. dm_top gercek ornekle baglidir (soc_top ile
// ayni parametreler), boylece rdata/be etkileri gercek DM uzerinden gorulur.
// Kosum: make jtag-bridge-sim
`timescale 1ns / 1ps

module axi_dm_slave_tb;
    localparam logic [31:0] DM_BASE = 32'h0004_0000;
    // debug ROM ilk sozcugu (DM_BASE + 0x800 = dm_halt_addr): riscv-dbg
    // vendor'da sabit (debug_rom/debug_rom.sv: 64'h00000013_0180006f).
    // Sabit beklenti olarak kullanilir; okunan degerden turetilmez.
    localparam logic [31:0] ROM_W0  = 32'h0180_006f;

    logic clk = 0, rst_n = 0;
    always #5 clk = ~clk;

    // AXI arayuzleri (soc_top ile ayni genislikler)
    AXI_BUS #(
        .AXI_ADDR_WIDTH(32), .AXI_DATA_WIDTH(32),
        .AXI_ID_WIDTH(4),    .AXI_USER_WIDTH(1)
    ) instr_bus(), data_bus();

    // DM portu
    logic        dm_req, dm_we;
    logic [31:0] dm_addr, dm_wdata, dm_rdata;
    logic [ 3:0] dm_be;

    axi_dm_slave #(.AXI_ID_WIDTH(4)) dut (
        .clk_i(clk), .rst_ni(rst_n),
        .instr_slv(instr_bus), .data_slv(data_bus),
        .dm_req_o(dm_req), .dm_we_o(dm_we), .dm_addr_o(dm_addr),
        .dm_be_o(dm_be), .dm_wdata_o(dm_wdata), .dm_rdata_i(dm_rdata)
    );

    // ---- DM (soc_top JTAG blogundaki parametrelerle) ----
    dm::dmi_req_t  dmi_req;
    dm::dmi_resp_t dmi_resp;
    logic          dmi_req_valid, dmi_req_ready, dmi_resp_valid;
    logic          sba_req, sba_req_q;
    always_ff @(posedge clk or negedge rst_n)
        if (!rst_n) sba_req_q <= 1'b0; else sba_req_q <= sba_req;

    localparam dm::hartinfo_t DM_HARTINFO = '{
        zero1: '0, nscratch: 2, zero0: '0,
        dataaccess: 1'b1, datasize: dm::DataCount, dataaddr: dm::DataAddr
    };

    dm_top #(
        .NrHarts(1), .BusWidth(32),
        .DmBaseAddress(DM_BASE), .SelectableHarts(1'b1)
    ) i_dm_top (
        .clk_i(clk), .rst_ni(rst_n), .testmode_i(1'b0),
        .next_dm_addr_i(32'd0),
        .ndmreset_o(), .ndmreset_ack_i(1'b0), .dmactive_o(),
        .debug_req_o(), .unavailable_i(1'b0), .hartinfo_i(DM_HARTINFO),
        .slave_req_i(dm_req), .slave_we_i(dm_we), .slave_addr_i(dm_addr),
        .slave_be_i(dm_be), .slave_wdata_i(dm_wdata), .slave_rdata_o(dm_rdata),
        .master_req_o(sba_req), .master_add_o(), .master_we_o(),
        .master_wdata_o(), .master_be_o(),
        .master_gnt_i(1'b1), .master_r_valid_i(sba_req_q),
        .master_r_err_i(1'b1), .master_r_other_err_i(1'b0),
        .master_r_rdata_i(32'd0),
        .dmi_rst_ni(rst_n),
        .dmi_req_valid_i(dmi_req_valid), .dmi_req_ready_o(dmi_req_ready),
        .dmi_req_i(dmi_req),
        .dmi_resp_valid_o(dmi_resp_valid), .dmi_resp_ready_i(1'b1),
        .dmi_resp_o(dmi_resp)
    );

    // ---- DMI (JTAG'siz, dogrudan senkron arayuz): dmactive kurmak ve data0'i
    //      okumak icin. dm_csrs yaniti istegin kabul edildigi posedge'de FIFO'ya
    //      iter; dmi_resp_ready_i sabit 1 oldugu icin yanit YALNIZ BIR CEVRIM
    //      gecerlidir -> once ornekle, sonra ilerle.
    task automatic dmi_op(input logic [6:0] addr, input dm::dtm_op_e op,
                          input logic [31:0] data, output logic [31:0] rdata);
        @(negedge clk);
        dmi_req.addr = addr; dmi_req.op = op; dmi_req.data = data;
        dmi_req_valid = 1'b1;
        #1;
        while (!dmi_req_ready) begin @(negedge clk); #1; end
        @(negedge clk);            // araya giren posedge istegi kabul etti
        dmi_req_valid = 1'b0;
        rdata = 32'hDEAD_BEEF;
        for (int i = 0; i < 6; i++) begin
            if (dmi_resp_valid) begin rdata = dmi_resp.data; break; end
            @(negedge clk);
        end
    endtask

    // ---- AXI master gorevleri (kanal kanal, ready ayri kontrol edilir) ----
    // DIKKAT: ar_ready/aw_ready/w_ready KOMBINASYONELDIR (!busy'den turer).
    // Istek negedge'de surulur, ayni cevrimde (#1) ready ornek alinir, araya
    // giren posedge'de kabul edilir ve BIR SONRAKI negedge'de valid dusurulur.
    // r_ready/b_ready dusuk tutulan senaryolarda "ready dusene kadar bekle"
    // yapilamaz: yanit tuketilmedigi surece kopru mesguldur (kilitlenme).
    task automatic axi_req_wait_ready(input bit is_instr, input bit is_write);
        int guard;
        guard = 0;
        #1;
        while (guard < 50) begin
            if (is_instr      && instr_bus.ar_ready) break;
            if (!is_instr && !is_write && data_bus.ar_ready) break;
            if (!is_instr &&  is_write && data_bus.aw_ready && data_bus.w_ready) break;
            @(negedge clk); #1; guard++;
        end
        @(negedge clk);   // araya giren posedge istegi kabul etti
    endtask

    task automatic axi_read(input bit instr, input logic [31:0] addr,
                            input logic [3:0] id, input int rready_delay,
                            output logic [31:0] rdata);
        int guard;
        if (instr) begin
            @(negedge clk);
            instr_bus.ar_addr  = addr; instr_bus.ar_id = id; instr_bus.ar_valid = 1'b1;
            instr_bus.r_ready  = (rready_delay == 0);
            axi_req_wait_ready(1'b1, 1'b0);
            instr_bus.ar_valid = 1'b0;
            for (int i = 0; i < rready_delay; i++) @(negedge clk);
            instr_bus.r_ready = 1'b1;
            guard = 0;
            while (!instr_bus.r_valid && guard < 50) begin @(negedge clk); guard++; end
            rdata = instr_bus.r_data;
            @(negedge clk);
            instr_bus.r_ready = 1'b0;
        end else begin
            @(negedge clk);
            data_bus.ar_addr = addr; data_bus.ar_id = id; data_bus.ar_valid = 1'b1;
            data_bus.r_ready = (rready_delay == 0);
            axi_req_wait_ready(1'b0, 1'b0);
            data_bus.ar_valid = 1'b0;
            for (int i = 0; i < rready_delay; i++) @(negedge clk);
            data_bus.r_ready = 1'b1;
            guard = 0;
            while (!data_bus.r_valid && guard < 50) begin @(negedge clk); guard++; end
            rdata = data_bus.r_data;
            @(negedge clk);
            data_bus.r_ready = 1'b0;
        end
    endtask

    task automatic axi_write(input logic [31:0] addr, input logic [31:0] wdata,
                             input logic [3:0] strb, input logic [3:0] id,
                             input int bready_delay);
        int guard;
        @(negedge clk);
        data_bus.aw_addr  = addr; data_bus.aw_id = id; data_bus.aw_valid = 1'b1;
        data_bus.w_data   = wdata; data_bus.w_strb = strb; data_bus.w_last = 1'b1;
        data_bus.w_valid  = 1'b1;
        data_bus.b_ready  = (bready_delay == 0);
        axi_req_wait_ready(1'b0, 1'b1);
        data_bus.aw_valid = 1'b0; data_bus.w_valid = 1'b0;
        for (int i = 0; i < bready_delay; i++) @(negedge clk);
        data_bus.b_ready = 1'b1;
        guard = 0;
        while (!data_bus.b_valid && guard < 50) begin @(negedge clk); guard++; end
        @(negedge clk);
        data_bus.b_ready = 1'b0;
    endtask

    // ---- Test ----
    localparam int NSTAGE = 6;
    int stage_ok = 0;
    logic [31:0] rd_i, rd_d, rd_dmi;
    logic [31:0] addr_seen;
    logic        ok_all;
    int          n;

    // resp_pending kapsama sayaci (smoke TB'de HIC vurmuyor - G-08 gerekcesi)
    int resp_pending_hits = 0;
    always @(posedge clk) if (rst_n && dut.resp_pending) resp_pending_hits <= resp_pending_hits + 1;

    initial begin
        instr_bus.ar_valid = 1'b0; instr_bus.r_ready = 1'b0;
        instr_bus.aw_valid = 1'b0; instr_bus.w_valid = 1'b0; instr_bus.b_ready = 1'b1;
        instr_bus.ar_addr = '0; instr_bus.ar_id = '0;
        instr_bus.ar_len = '0; instr_bus.ar_size = 3'd2; instr_bus.ar_burst = 2'b01;
        instr_bus.ar_lock = 1'b0; instr_bus.ar_cache = '0; instr_bus.ar_prot = '0;
        instr_bus.ar_qos = '0; instr_bus.ar_region = '0; instr_bus.ar_user = '0;
        instr_bus.aw_addr = '0; instr_bus.aw_id = '0; instr_bus.aw_len = '0;
        instr_bus.aw_size = 3'd2; instr_bus.aw_burst = 2'b01; instr_bus.aw_lock = 1'b0;
        instr_bus.aw_cache = '0; instr_bus.aw_prot = '0; instr_bus.aw_qos = '0;
        instr_bus.aw_region = '0; instr_bus.aw_atop = '0; instr_bus.aw_user = '0;
        instr_bus.w_data = '0; instr_bus.w_strb = '0; instr_bus.w_last = 1'b1;
        instr_bus.w_user = '0;

        data_bus.ar_valid = 1'b0; data_bus.r_ready = 1'b0;
        data_bus.aw_valid = 1'b0; data_bus.w_valid = 1'b0; data_bus.b_ready = 1'b0;
        data_bus.ar_addr = '0; data_bus.ar_id = '0;
        data_bus.ar_len = '0; data_bus.ar_size = 3'd2; data_bus.ar_burst = 2'b01;
        data_bus.ar_lock = 1'b0; data_bus.ar_cache = '0; data_bus.ar_prot = '0;
        data_bus.ar_qos = '0; data_bus.ar_region = '0; data_bus.ar_user = '0;
        data_bus.aw_addr = '0; data_bus.aw_id = '0; data_bus.aw_len = '0;
        data_bus.aw_size = 3'd2; data_bus.aw_burst = 2'b01; data_bus.aw_lock = 1'b0;
        data_bus.aw_cache = '0; data_bus.aw_prot = '0; data_bus.aw_qos = '0;
        data_bus.aw_region = '0; data_bus.aw_atop = '0; data_bus.aw_user = '0;
        data_bus.w_data = '0; data_bus.w_strb = 4'b1111; data_bus.w_last = 1'b1;
        data_bus.w_user = '0;

        dmi_req_valid = 1'b0; dmi_req = '0;

        #100 rst_n = 1'b1;
        repeat (5) @(negedge clk);
        $display("[%0t] === AXI_DM_SLAVE BIRIM TESTI (bosluk G-08) ===", $time);

        // DM'i etkinlestir (dmcontrol.dmactive=1) - progbuf/data yazmaclari
        // ancak dmactive=1 iken degerlerini korur.
        dmi_op(7'h10, dm::DTM_WRITE, 32'h0000_0001, rd_dmi);

        // ---------------------------------------------------------------
        // 1) Ayni cevrimde BUYRUK okuma + VERI okuma: oncelik VERI'de
        // ---------------------------------------------------------------
        ok_all = 1'b1;
        @(negedge clk);
        instr_bus.ar_addr = DM_BASE + 32'h800; instr_bus.ar_id = 4'h1; instr_bus.ar_valid = 1'b1;
        instr_bus.r_ready = 1'b1;
        data_bus.ar_addr  = DM_BASE + 32'h380; data_bus.ar_id  = 4'h2; data_bus.ar_valid  = 1'b1;
        data_bus.r_ready  = 1'b1;
        #1;   // ar_ready KOMBINASYONEL: ayni cevrimde, posedge'den ONCE ornekle
        if (!(data_bus.ar_ready && !instr_bus.ar_ready)) begin
            ok_all = 1'b0;
            $display("      tahkim: data.ar_ready=%0b instr.ar_ready=%0b (1/0 beklenir)",
                     data_bus.ar_ready, instr_bus.ar_ready);
        end else $display("[%0t]       ayni cevrim veri+buyruk okuma -> VERI kabul, buyruk bekletildi", $time);
        @(negedge clk);            // istek posedge'de kabul edildi
        data_bus.ar_valid = 1'b0;
        // veri yaniti
        n = 0;
        while (!data_bus.r_valid && n < 10) begin @(negedge clk); n++; end
        if (!data_bus.r_valid || (data_bus.r_id !== 4'h2)) begin
            ok_all = 1'b0; $display("      veri R: valid=%0b id=%0h", data_bus.r_valid, data_bus.r_id);
        end else $display("[%0t]       veri R yaniti: id=%0h data=0x%08h (%0d cevrim)", $time, data_bus.r_id, data_bus.r_data, n);
        @(negedge clk);
        // buyruk istegi simdi kabul edilmeli
        n = 0;
        while (!instr_bus.r_valid && n < 10) begin @(negedge clk); n++; end
        if (!instr_bus.r_valid || (instr_bus.r_id !== 4'h1)) begin
            ok_all = 1'b0; $display("      buyruk R: valid=%0b id=%0h", instr_bus.r_valid, instr_bus.r_id);
        end else $display("[%0t]       buyruk R yaniti: id=%0h data=0x%08h (debug ROM)", $time, instr_bus.r_id, instr_bus.r_data);
        instr_bus.ar_valid = 1'b0;
        @(negedge clk); instr_bus.r_ready = 1'b0; data_bus.r_ready = 1'b0;
        repeat (3) @(negedge clk);
        if (ok_all) begin $display("[%0t] [1/%0d] TAHKIM (veri okuma > buyruk okuma) OK", $time, NSTAGE); stage_ok++; end
        else $error("[1/%0d] TAHKIM FAIL", NSTAGE);

        // ---------------------------------------------------------------
        // 2) Ayni cevrimde buyruk okuma + veri YAZMA: yazma once
        // ---------------------------------------------------------------
        ok_all = 1'b1;
        @(negedge clk);
        instr_bus.ar_addr = DM_BASE + 32'h808; instr_bus.ar_valid = 1'b1; instr_bus.r_ready = 1'b1;
        data_bus.aw_addr  = DM_BASE + 32'h380; data_bus.aw_valid = 1'b1;
        data_bus.w_data   = 32'hA1B2_C3D4; data_bus.w_strb = 4'b1111; data_bus.w_valid = 1'b1;
        data_bus.b_ready  = 1'b1;
        #1;   // aw_ready/w_ready KOMBINASYONEL
        if (!(data_bus.aw_ready && data_bus.w_ready && !instr_bus.ar_ready)) begin
            ok_all = 1'b0;
            $display("      tahkim: aw_ready=%0b w_ready=%0b instr.ar_ready=%0b",
                     data_bus.aw_ready, data_bus.w_ready, instr_bus.ar_ready);
        end else $display("[%0t]       ayni cevrim veri yazma + buyruk okuma -> YAZMA kabul", $time);
        @(negedge clk);            // yazma posedge'de kabul edildi
        data_bus.aw_valid = 1'b0; data_bus.w_valid = 1'b0;
        n = 0;
        while (!data_bus.b_valid && n < 10) begin @(negedge clk); n++; end
        if (!data_bus.b_valid) begin ok_all = 1'b0; $display("      B yaniti gelmedi"); end
        else $display("[%0t]       B yaniti %0d cevrimde (resp=%0d)", $time, n, data_bus.b_resp);
        @(negedge clk);
        n = 0;
        while (!instr_bus.r_valid && n < 10) begin @(negedge clk); n++; end
        if (!instr_bus.r_valid) begin ok_all = 1'b0; $display("      buyruk R gelmedi"); end
        instr_bus.ar_valid = 1'b0;
        @(negedge clk); instr_bus.r_ready = 1'b0; data_bus.b_ready = 1'b0;
        repeat (3) @(negedge clk);
        if (ok_all) begin $display("[%0t] [2/%0d] TAHKIM (veri yazma > buyruk okuma) OK", $time, NSTAGE); stage_ok++; end
        else $error("[2/%0d] TAHKIM FAIL", NSTAGE);

        // ---------------------------------------------------------------
        // 3) r_ready 3 cevrim DUSUK: r_valid tutulur, DM istegi kesilir,
        //    adres sabit kalir, yeni istek kabul EDILMEZ
        // ---------------------------------------------------------------
        ok_all = 1'b1;
        @(negedge clk);
        data_bus.ar_addr = DM_BASE + 32'h380; data_bus.ar_id = 4'h5; data_bus.ar_valid = 1'b1;
        data_bus.r_ready = 1'b0;
        axi_req_wait_ready(1'b0, 1'b0);
        data_bus.ar_valid = 1'b0;
        n = 0;
        while (!data_bus.r_valid && n < 10) begin @(negedge clk); n++; end
        addr_seen = dm_addr;
        // simdi r_valid && !r_ready: 3 cevrim boyunca tutulmali
        for (int i = 0; i < 3; i++) begin
            @(negedge clk);
            if (!data_bus.r_valid || dm_req || (dm_addr !== addr_seen) ||
                data_bus.ar_ready || instr_bus.ar_ready) begin
                ok_all = 1'b0;
                $display("      tutma sozlesmesi bozuldu (cevrim %0d): r_valid=%0b dm_req=%0b dm_addr=0x%08h ar_ready=%0b/%0b",
                         i, data_bus.r_valid, dm_req, dm_addr, data_bus.ar_ready, instr_bus.ar_ready);
            end
        end
        if (ok_all)
            $display("[%0t]       r_ready=0 iken: r_valid tutuldu, dm_req=0, dm_addr=0x%08h sabit, ar_ready=0 (3 cevrim)",
                     $time, addr_seen);
        data_bus.r_ready = 1'b1;
        rd_d = data_bus.r_data;
        @(negedge clk);
        if (data_bus.r_valid) begin ok_all = 1'b0; $display("      r_valid el sikismadan sonra dusmedi"); end
        data_bus.r_ready = 1'b0;
        repeat (3) @(negedge clk);
        if (ok_all) begin
            $display("[%0t] [3/%0d] R KANALI TUTMA OK (data=0x%08h)", $time, NSTAGE, rd_d); stage_ok++;
        end else $error("[3/%0d] R KANALI TUTMA FAIL", NSTAGE);

        // ---------------------------------------------------------------
        // 4) b_ready 3 cevrim DUSUK: b_valid tutulur, kopru mesgul kalir
        // ---------------------------------------------------------------
        ok_all = 1'b1;
        @(negedge clk);
        data_bus.aw_addr = DM_BASE + 32'h380; data_bus.aw_valid = 1'b1;
        data_bus.w_data  = 32'h1122_3344; data_bus.w_strb = 4'b1111; data_bus.w_valid = 1'b1;
        data_bus.b_ready = 1'b0;
        axi_req_wait_ready(1'b0, 1'b1);
        data_bus.aw_valid = 1'b0; data_bus.w_valid = 1'b0;
        n = 0;
        while (!data_bus.b_valid && n < 10) begin @(negedge clk); n++; end
        for (int i = 0; i < 3; i++) begin
            @(negedge clk);
            if (!data_bus.b_valid || !dut.busy || data_bus.aw_ready || instr_bus.ar_ready) begin
                ok_all = 1'b0;
                $display("      b tutma bozuldu (cevrim %0d): b_valid=%0b busy=%0b aw_ready=%0b",
                         i, data_bus.b_valid, dut.busy, data_bus.aw_ready);
            end
        end
        if (ok_all) $display("[%0t]       b_ready=0 iken: b_valid tutuldu, kopru mesgul, yeni istek kabul edilmedi", $time);
        data_bus.b_ready = 1'b1;
        @(negedge clk); @(negedge clk);
        if (data_bus.b_valid) begin ok_all = 1'b0; $display("      b_valid el sikismadan sonra dusmedi"); end
        data_bus.b_ready = 1'b0;
        repeat (3) @(negedge clk);
        if (ok_all) begin $display("[%0t] [4/%0d] B KANALI TUTMA OK", $time, NSTAGE); stage_ok++; end
        else $error("[4/%0d] B KANALI TUTMA FAIL", NSTAGE);

        // ---------------------------------------------------------------
        // 5) Bayt-enable: w_strb DM'e be_o olarak gecer; data0'in yalniz
        //    secilen baytlari degisir (DMI okumasiyla dogrulanir)
        // ---------------------------------------------------------------
        ok_all = 1'b1;
        axi_write(DM_BASE + 32'h380, 32'hFFFF_FFFF, 4'b1111, 4'h0, 0);
        dmi_op(7'h04, dm::DTM_READ, 32'd0, rd_dmi);
        if (rd_dmi !== 32'hFFFF_FFFF) begin ok_all = 1'b0; $display("      data0 on yukleme=0x%08h", rd_dmi); end

        axi_write(DM_BASE + 32'h380, 32'h1234_5678, 4'b0001, 4'h0, 0);
        dmi_op(7'h04, dm::DTM_READ, 32'd0, rd_dmi);
        if (rd_dmi !== 32'hFFFF_FF78) begin
            ok_all = 1'b0; $display("      strb=0001 sonrasi data0=0x%08h (0xFFFFFF78 beklenir)", rd_dmi);
        end else $display("[%0t]       w_strb=0001 -> data0=0x%08h (yalniz bayt 0 degisti)", $time, rd_dmi);

        axi_write(DM_BASE + 32'h380, 32'hAABB_CCDD, 4'b0011, 4'h0, 0);
        dmi_op(7'h04, dm::DTM_READ, 32'd0, rd_dmi);
        if (rd_dmi !== 32'hFFFF_CCDD) begin
            ok_all = 1'b0; $display("      strb=0011 sonrasi data0=0x%08h (0xFFFFCCDD beklenir)", rd_dmi);
        end else $display("[%0t]       w_strb=0011 -> data0=0x%08h (alt yari degisti)", $time, rd_dmi);

        axi_write(DM_BASE + 32'h380, 32'h9999_0000, 4'b1100, 4'h0, 0);
        dmi_op(7'h04, dm::DTM_READ, 32'd0, rd_dmi);
        if (rd_dmi !== 32'h9999_CCDD) begin
            ok_all = 1'b0; $display("      strb=1100 sonrasi data0=0x%08h (0x9999CCDD beklenir)", rd_dmi);
        end else $display("[%0t]       w_strb=1100 -> data0=0x%08h (ust yari degisti)", $time, rd_dmi);

        if (ok_all) begin $display("[%0t] [5/%0d] BAYT-ENABLE (w_strb -> dm_be_o) OK", $time, NSTAGE); stage_ok++; end
        else $error("[5/%0d] BAYT-ENABLE FAIL", NSTAGE);

        // ---------------------------------------------------------------
        // 6) Istek ucusta iken RESET: req_q/r_valid/b_valid temizlenir,
        //    ilk istekten sonra kopru normal calisir
        // ---------------------------------------------------------------
        ok_all = 1'b1;
        @(negedge clk);
        data_bus.ar_addr = DM_BASE + 32'h380; data_bus.ar_valid = 1'b1; data_bus.r_ready = 1'b0;
        axi_req_wait_ready(1'b0, 1'b0);
        data_bus.ar_valid = 1'b0;
        rst_n = 1'b0;                      // istek ucustayken reset
        repeat (3) @(negedge clk);
        if (dut.req_q || data_bus.r_valid || data_bus.b_valid || instr_bus.r_valid) begin
            ok_all = 1'b0;
            $display("      reset sonrasi: req_q=%0b r_valid=%0b b_valid=%0b",
                     dut.req_q, data_bus.r_valid, data_bus.b_valid);
        end else $display("[%0t]       ucustaki istek reset ile temizlendi (req_q=0, tum valid'ler 0)", $time);
        rst_n = 1'b1;
        repeat (5) @(negedge clk);
        dmi_op(7'h10, dm::DTM_WRITE, 32'h0000_0001, rd_dmi);   // dmactive tekrar
        axi_read(1'b0, DM_BASE + 32'h800, 4'h7, 0, rd_d);
        axi_read(1'b1, DM_BASE + 32'h800, 4'h8, 0, rd_i);
        // SABIT beklenti (3 Eylul gozden gecirme bulgusu): onceki surum
        // 'rd_d !== rd_i' diyordu, yani beklenen deger sonucun kendisinden
        // turetiliyordu - iki port da bozuk/sifir dondurse test yine gecerdi.
        // DM+0x800 = debug ROM ilk sozcugu; riscv-dbg vendor'da sabittir
        // (debug_rom.sv: 64'h00000013_0180006f -> dusuk sozcuk 0x0180006f).
        if ((rd_d !== ROM_W0) || (rd_i !== ROM_W0)) begin
            ok_all = 1'b0;
            $display("      reset sonrasi okuma: veri=0x%08h buyruk=0x%08h (beklenen 0x%08h)",
                     rd_d, rd_i, ROM_W0);
        end else $display("[%0t]       reset sonrasi iki port da calisiyor (debug ROM[0]=0x%08h)", $time, rd_d);
        if (ok_all) begin $display("[%0t] [6/%0d] RESET KURTARMA OK", $time, NSTAGE); stage_ok++; end
        else $error("[6/%0d] RESET KURTARMA FAIL", NSTAGE);

        // kapsama: resp_pending bu TB'de vurmali (smoke TB'de HIC vurmuyor)
        $display("[%0t]       kapsama: resp_pending %0d cevrim yuksek kaldi (jtag_smoke_tb'de 0)",
                 $time, resp_pending_hits);
        if (resp_pending_hits == 0)
            $error("resp_pending hic vurmadi: r_ready/b_ready senaryolari calismamis");

        if ((stage_ok == NSTAGE) && (resp_pending_hits > 0))
            $display("[%0t] *** TEST SUCCESS *** axi_dm_slave: tahkim + R/B tutma + bayt-enable + reset (%0d/%0d)",
                     $time, stage_ok, NSTAGE);
        else
            $error("AXI_DM_SLAVE FAIL: %0d/%0d asama gecti", stage_ok, NSTAGE);
        $finish;
    end

    initial #2_000_000 begin $error("TIMEOUT"); $finish; end
endmodule
