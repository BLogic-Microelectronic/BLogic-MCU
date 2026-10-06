// SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
// SPDX-License-Identifier: GPL-3.0-only
// Licensed under the GNU General Public License version 3 only.
// See the LICENSE file in the repository root for the full license text.

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
    import tb_log_pkg::*;
    BusLog blog;                      // bus_trace.log, bus_summary.tsv

    localparam logic [31:0] DM_BASE = 32'h0004_0000;
    // debug ROM ilk sozcugu (DM_BASE + 0x800 = dm_halt_addr): riscv-dbg
    // vendor'da sabit (debug_rom/debug_rom.sv: 64'h00000013_0180006f).
    // Sabit beklenti olarak kullanilir; okunan degerden turetilmez.
    localparam logic [31:0] ROM_W0  = 32'h0180_006f;

    logic clk = 0, rst_n = 0;
    always #5 clk = ~clk;

    longint unsigned cyc = 0;         // clock cycle counter for the log
    always @(posedge clk) cyc <= cyc + 1;

    // Log names: AXI addresses are debug module memory, not the SoC map
    function automatic string dm_mem_name(input logic [31:0] a, input bit instr);
        logic [31:0] off;
        string port;
        off  = a - DM_BASE;
        port = instr ? " (instr)" : "";
        if (off == 32'h380)               return {"DM data0 0x00000380", port};
        if (off >= 32'h800 && off < 32'h1000) return {$sformatf("DM debug ROM 0x%08h", off), port};
        return {$sformatf("DM memory 0x%08h", off), port};
    endfunction

    function automatic string dmi_name(input logic [6:0] a);
        case (a)
            7'h04: return "DMI data0";
            7'h10: return "DMI dmcontrol";
            7'h11: return "DMI dmstatus";
            7'h16: return "DMI abstractcs";
            7'h17: return "DMI command";
            7'h38: return "DMI sbcs";
            7'h39: return "DMI sbaddress0";
            7'h3C: return "DMI sbdata0";
            default: begin
                if (a >= 7'h20 && a <= 7'h2F) return $sformatf("DMI progbuf%0d", a - 7'h20);
                return $sformatf("DMI 0x%02h", a);
            end
        endcase
    endfunction

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
        logic [1:0] resp;
        @(negedge clk);
        dmi_req.addr = addr; dmi_req.op = op; dmi_req.data = data;
        dmi_req_valid = 1'b1;
        #1;
        while (!dmi_req_ready) begin @(negedge clk); #1; end
        @(negedge clk);            // araya giren posedge istegi kabul etti
        dmi_req_valid = 1'b0;
        rdata = 32'hDEAD_BEEF;
        resp  = 2'b10;                 // no response seen: logged as an error response
        for (int i = 0; i < 6; i++) begin
            if (dmi_resp_valid) begin
                rdata = dmi_resp.data;
                resp  = (dmi_resp.resp == 2'd0) ? 2'b00 : 2'b10;
                break;
            end
            @(negedge clk);
        end
        blog.access(cyc, op == dm::DTM_WRITE, {25'd0, addr}, dmi_name(addr),
                    (op == dm::DTM_WRITE) ? data : rdata, 4'hF, resp);
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
        logic [1:0] resp;
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
            resp  = instr_bus.r_resp;
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
            resp  = data_bus.r_resp;
            @(negedge clk);
            data_bus.r_ready = 1'b0;
        end
        blog.access(cyc, 1'b0, addr, dm_mem_name(addr, instr), rdata, 4'hF, resp);
    endtask

    task automatic axi_write(input logic [31:0] addr, input logic [31:0] wdata,
                             input logic [3:0] strb, input logic [3:0] id,
                             input int bready_delay);
        int guard;
        logic [1:0] resp;
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
        resp = data_bus.b_resp;
        @(negedge clk);
        data_bus.b_ready = 1'b0;
        blog.access(cyc, 1'b1, addr, dm_mem_name(addr, 1'b0), wdata, strb, resp);
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
        string pfx;
        pfx = "";
        void'($value$plusargs("LOGDIR=%s", pfx));
        blog = new(pfx, "axi_dm_slave_tb register accesses (make jtag-bridge-sim)",
                   "testbench AXI masters (instruction and data port) -> axi_dm_slave -> dm_top; DMI driven directly",
                   "cycle");
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
        $display("[%0t] === AXI_DM_SLAVE UNIT TEST (gap G-08) ===", $time);

        // DM'i etkinlestir (dmcontrol.dmactive=1) - progbuf/data yazmaclari
        // ancak dmactive=1 iken degerlerini korur.
        dmi_op(7'h10, dm::DTM_WRITE, 32'h0000_0001, rd_dmi);

        // ---------------------------------------------------------------
        // 1) Ayni cevrimde BUYRUK okuma + VERI okuma: oncelik VERI'de
        // ---------------------------------------------------------------
        blog.note(cyc, "stage 1: instruction read and data read in the same cycle, the data read must win");
        ok_all = 1'b1;
        @(negedge clk);
        instr_bus.ar_addr = DM_BASE + 32'h800; instr_bus.ar_id = 4'h1; instr_bus.ar_valid = 1'b1;
        instr_bus.r_ready = 1'b1;
        data_bus.ar_addr  = DM_BASE + 32'h380; data_bus.ar_id  = 4'h2; data_bus.ar_valid  = 1'b1;
        data_bus.r_ready  = 1'b1;
        #1;   // ar_ready KOMBINASYONEL: ayni cevrimde, posedge'den ONCE ornekle
        if (!(data_bus.ar_ready && !instr_bus.ar_ready)) begin
            ok_all = 1'b0;
            $display("      arbitration: data.ar_ready=%0b instr.ar_ready=%0b (expected 1/0)",
                     data_bus.ar_ready, instr_bus.ar_ready);
        end else $display("[%0t]       data and instruction read in the same cycle: data accepted, instruction held", $time);
        blog.check(cyc, "[1] data AR accepted and instruction AR held in the same cycle",
                   data_bus.ar_ready && !instr_bus.ar_ready,
                   $sformatf("data.ar_ready=%0b instr.ar_ready=%0b", data_bus.ar_ready, instr_bus.ar_ready));
        @(negedge clk);            // istek posedge'de kabul edildi
        data_bus.ar_valid = 1'b0;
        // veri yaniti
        n = 0;
        while (!data_bus.r_valid && n < 10) begin @(negedge clk); n++; end
        if (!data_bus.r_valid || (data_bus.r_id !== 4'h2)) begin
            ok_all = 1'b0; $display("      data R: valid=%0b id=%0h", data_bus.r_valid, data_bus.r_id);
        end else $display("[%0t]       data R response: id=%0h data=0x%08h (%0d cycles)", $time, data_bus.r_id, data_bus.r_data, n);
        if (data_bus.r_valid)
            blog.access(cyc, 1'b0, DM_BASE + 32'h380, dm_mem_name(DM_BASE + 32'h380, 1'b0), data_bus.r_data, 4'hF, data_bus.r_resp);
        blog.check(cyc, "[1] data R response arrives with ID 2", data_bus.r_valid && (data_bus.r_id === 4'h2),
                   $sformatf("valid=%0b id=%0h", data_bus.r_valid, data_bus.r_id));
        @(negedge clk);
        // buyruk istegi simdi kabul edilmeli
        n = 0;
        while (!instr_bus.r_valid && n < 10) begin @(negedge clk); n++; end
        if (!instr_bus.r_valid || (instr_bus.r_id !== 4'h1)) begin
            ok_all = 1'b0; $display("      instruction R: valid=%0b id=%0h", instr_bus.r_valid, instr_bus.r_id);
        end else $display("[%0t]       instruction R response: id=%0h data=0x%08h (debug ROM)", $time, instr_bus.r_id, instr_bus.r_data);
        if (instr_bus.r_valid)
            blog.access(cyc, 1'b0, DM_BASE + 32'h800, dm_mem_name(DM_BASE + 32'h800, 1'b1), instr_bus.r_data, 4'hF, instr_bus.r_resp);
        blog.check(cyc, "[1] instruction R response follows with ID 1", instr_bus.r_valid && (instr_bus.r_id === 4'h1),
                   $sformatf("valid=%0b id=%0h", instr_bus.r_valid, instr_bus.r_id));
        instr_bus.ar_valid = 1'b0;
        @(negedge clk); instr_bus.r_ready = 1'b0; data_bus.r_ready = 1'b0;
        repeat (3) @(negedge clk);
        blog.check(cyc, "[1/6] arbitration: data read before instruction read", ok_all);
        if (ok_all) begin $display("[%0t] [1/%0d] ARBITRATION (data read before instruction read) OK", $time, NSTAGE); stage_ok++; end
        else $error("[1/%0d] ARBITRATION FAIL", NSTAGE);

        // ---------------------------------------------------------------
        // 2) Ayni cevrimde buyruk okuma + veri YAZMA: yazma once
        // ---------------------------------------------------------------
        blog.note(cyc, "stage 2: instruction read and data write in the same cycle, the write must win");
        ok_all = 1'b1;
        @(negedge clk);
        instr_bus.ar_addr = DM_BASE + 32'h808; instr_bus.ar_valid = 1'b1; instr_bus.r_ready = 1'b1;
        data_bus.aw_addr  = DM_BASE + 32'h380; data_bus.aw_valid = 1'b1;
        data_bus.w_data   = 32'hA1B2_C3D4; data_bus.w_strb = 4'b1111; data_bus.w_valid = 1'b1;
        data_bus.b_ready  = 1'b1;
        #1;   // aw_ready/w_ready KOMBINASYONEL
        if (!(data_bus.aw_ready && data_bus.w_ready && !instr_bus.ar_ready)) begin
            ok_all = 1'b0;
            $display("      arbitration: aw_ready=%0b w_ready=%0b instr.ar_ready=%0b",
                     data_bus.aw_ready, data_bus.w_ready, instr_bus.ar_ready);
        end else $display("[%0t]       data write and instruction read in the same cycle: write accepted", $time);
        blog.check(cyc, "[2] data AW/W accepted and instruction AR held in the same cycle",
                   data_bus.aw_ready && data_bus.w_ready && !instr_bus.ar_ready,
                   $sformatf("aw_ready=%0b w_ready=%0b instr.ar_ready=%0b",
                             data_bus.aw_ready, data_bus.w_ready, instr_bus.ar_ready));
        @(negedge clk);            // yazma posedge'de kabul edildi
        data_bus.aw_valid = 1'b0; data_bus.w_valid = 1'b0;
        n = 0;
        while (!data_bus.b_valid && n < 10) begin @(negedge clk); n++; end
        if (!data_bus.b_valid) begin ok_all = 1'b0; $display("      no B response received"); end
        else $display("[%0t]       B response after %0d cycles (resp=%0d)", $time, n, data_bus.b_resp);
        if (data_bus.b_valid)
            blog.access(cyc, 1'b1, DM_BASE + 32'h380, dm_mem_name(DM_BASE + 32'h380, 1'b0), 32'hA1B2_C3D4, 4'b1111, data_bus.b_resp);
        blog.check(cyc, "[2] B response arrives for the data write", data_bus.b_valid, $sformatf("%0d cycles", n));
        @(negedge clk);
        n = 0;
        while (!instr_bus.r_valid && n < 10) begin @(negedge clk); n++; end
        if (!instr_bus.r_valid) begin ok_all = 1'b0; $display("      no instruction R response received"); end
        else blog.access(cyc, 1'b0, DM_BASE + 32'h808, dm_mem_name(DM_BASE + 32'h808, 1'b1), instr_bus.r_data, 4'hF, instr_bus.r_resp);
        blog.check(cyc, "[2] instruction R response follows the write", instr_bus.r_valid);
        instr_bus.ar_valid = 1'b0;
        @(negedge clk); instr_bus.r_ready = 1'b0; data_bus.b_ready = 1'b0;
        repeat (3) @(negedge clk);
        blog.check(cyc, "[2/6] arbitration: data write before instruction read", ok_all);
        if (ok_all) begin $display("[%0t] [2/%0d] ARBITRATION (data write before instruction read) OK", $time, NSTAGE); stage_ok++; end
        else $error("[2/%0d] ARBITRATION FAIL", NSTAGE);

        // ---------------------------------------------------------------
        // 3) r_ready 3 cevrim DUSUK: r_valid tutulur, DM istegi kesilir,
        //    adres sabit kalir, yeni istek kabul EDILMEZ
        // ---------------------------------------------------------------
        blog.note(cyc, "stage 3: r_ready held low for 3 cycles, the R channel must hold");
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
                $display("      R hold contract violated (cycle %0d): r_valid=%0b dm_req=%0b dm_addr=0x%08h ar_ready=%0b/%0b",
                         i, data_bus.r_valid, dm_req, dm_addr, data_bus.ar_ready, instr_bus.ar_ready);
            end
        end
        blog.check(cyc, "[3] with r_ready=0: r_valid held, dm_req=0, dm_addr stable, no new request accepted (3 cycles)",
                   ok_all, $sformatf("dm_addr=0x%08h", addr_seen));
        if (ok_all)
            $display("[%0t]       with r_ready=0: r_valid held, dm_req=0, dm_addr=0x%08h stable, ar_ready=0 (3 cycles)",
                     $time, addr_seen);
        data_bus.r_ready = 1'b1;
        rd_d = data_bus.r_data;
        blog.access(cyc, 1'b0, DM_BASE + 32'h380, dm_mem_name(DM_BASE + 32'h380, 1'b0), rd_d, 4'hF, data_bus.r_resp);
        @(negedge clk);
        blog.check(cyc, "[3] r_valid drops after the handshake", !data_bus.r_valid);
        if (data_bus.r_valid) begin ok_all = 1'b0; $display("      r_valid did not drop after the handshake"); end
        data_bus.r_ready = 1'b0;
        repeat (3) @(negedge clk);
        blog.check(cyc, "[3/6] R channel hold", ok_all, $sformatf("data=0x%08h", rd_d));
        if (ok_all) begin
            $display("[%0t] [3/%0d] R CHANNEL HOLD OK (data=0x%08h)", $time, NSTAGE, rd_d); stage_ok++;
        end else $error("[3/%0d] R CHANNEL HOLD FAIL", NSTAGE);

        // ---------------------------------------------------------------
        // 4) b_ready 3 cevrim DUSUK: b_valid tutulur, kopru mesgul kalir
        // ---------------------------------------------------------------
        blog.note(cyc, "stage 4: b_ready held low for 3 cycles, the B channel must hold and the bridge stay busy");
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
                $display("      B hold contract violated (cycle %0d): b_valid=%0b busy=%0b aw_ready=%0b",
                         i, data_bus.b_valid, dut.busy, data_bus.aw_ready);
            end
        end
        if (ok_all) $display("[%0t]       with b_ready=0: b_valid held, bridge busy, no new request accepted", $time);
        blog.check(cyc, "[4] with b_ready=0: b_valid held, bridge busy, no new request accepted (3 cycles)", ok_all);
        blog.access(cyc, 1'b1, DM_BASE + 32'h380, dm_mem_name(DM_BASE + 32'h380, 1'b0), 32'h1122_3344, 4'b1111, data_bus.b_resp);
        data_bus.b_ready = 1'b1;
        @(negedge clk); @(negedge clk);
        blog.check(cyc, "[4] b_valid drops after the handshake", !data_bus.b_valid);
        if (data_bus.b_valid) begin ok_all = 1'b0; $display("      b_valid did not drop after the handshake"); end
        data_bus.b_ready = 1'b0;
        repeat (3) @(negedge clk);
        blog.check(cyc, "[4/6] B channel hold", ok_all);
        if (ok_all) begin $display("[%0t] [4/%0d] B CHANNEL HOLD OK", $time, NSTAGE); stage_ok++; end
        else $error("[4/%0d] B CHANNEL HOLD FAIL", NSTAGE);

        // ---------------------------------------------------------------
        // 5) Bayt-enable: w_strb DM'e be_o olarak gecer; data0'in yalniz
        //    secilen baytlari degisir (DMI okumasiyla dogrulanir)
        // ---------------------------------------------------------------
        blog.note(cyc, "stage 5: w_strb reaches the DM as dm_be_o, only the selected bytes of data0 change");
        ok_all = 1'b1;
        axi_write(DM_BASE + 32'h380, 32'hFFFF_FFFF, 4'b1111, 4'h0, 0);
        dmi_op(7'h04, dm::DTM_READ, 32'd0, rd_dmi);
        blog.check(cyc, "[5] data0 after a full write is 0xFFFFFFFF", rd_dmi === 32'hFFFF_FFFF, $sformatf("0x%08h", rd_dmi));
        if (rd_dmi !== 32'hFFFF_FFFF) begin ok_all = 1'b0; $display("      data0 after preload=0x%08h", rd_dmi); end

        axi_write(DM_BASE + 32'h380, 32'h1234_5678, 4'b0001, 4'h0, 0);
        dmi_op(7'h04, dm::DTM_READ, 32'd0, rd_dmi);
        blog.check(cyc, "[5] w_strb=0001 changes only byte 0 (data0 = 0xFFFFFF78)", rd_dmi === 32'hFFFF_FF78, $sformatf("0x%08h", rd_dmi));
        if (rd_dmi !== 32'hFFFF_FF78) begin
            ok_all = 1'b0; $display("      data0 after strb=0001 is 0x%08h (expected 0xFFFFFF78)", rd_dmi);
        end else $display("[%0t]       w_strb=0001: data0=0x%08h (only byte 0 changed)", $time, rd_dmi);

        axi_write(DM_BASE + 32'h380, 32'hAABB_CCDD, 4'b0011, 4'h0, 0);
        dmi_op(7'h04, dm::DTM_READ, 32'd0, rd_dmi);
        blog.check(cyc, "[5] w_strb=0011 changes only the lower half (data0 = 0xFFFFCCDD)", rd_dmi === 32'hFFFF_CCDD, $sformatf("0x%08h", rd_dmi));
        if (rd_dmi !== 32'hFFFF_CCDD) begin
            ok_all = 1'b0; $display("      data0 after strb=0011 is 0x%08h (expected 0xFFFFCCDD)", rd_dmi);
        end else $display("[%0t]       w_strb=0011: data0=0x%08h (lower half changed)", $time, rd_dmi);

        axi_write(DM_BASE + 32'h380, 32'h9999_0000, 4'b1100, 4'h0, 0);
        dmi_op(7'h04, dm::DTM_READ, 32'd0, rd_dmi);
        blog.check(cyc, "[5] w_strb=1100 changes only the upper half (data0 = 0x9999CCDD)", rd_dmi === 32'h9999_CCDD, $sformatf("0x%08h", rd_dmi));
        if (rd_dmi !== 32'h9999_CCDD) begin
            ok_all = 1'b0; $display("      data0 after strb=1100 is 0x%08h (expected 0x9999CCDD)", rd_dmi);
        end else $display("[%0t]       w_strb=1100: data0=0x%08h (upper half changed)", $time, rd_dmi);

        blog.check(cyc, "[5/6] byte enable (w_strb to dm_be_o)", ok_all);
        if (ok_all) begin $display("[%0t] [5/%0d] BYTE ENABLE (w_strb to dm_be_o) OK", $time, NSTAGE); stage_ok++; end
        else $error("[5/%0d] BYTE ENABLE FAIL", NSTAGE);

        // ---------------------------------------------------------------
        // 6) Istek ucusta iken RESET: req_q/r_valid/b_valid temizlenir,
        //    ilk istekten sonra kopru normal calisir
        // ---------------------------------------------------------------
        blog.note(cyc, "stage 6: reset while a request is in flight, then both ports must work again");
        ok_all = 1'b1;
        @(negedge clk);
        data_bus.ar_addr = DM_BASE + 32'h380; data_bus.ar_valid = 1'b1; data_bus.r_ready = 1'b0;
        axi_req_wait_ready(1'b0, 1'b0);
        data_bus.ar_valid = 1'b0;
        rst_n = 1'b0;                      // istek ucustayken reset
        repeat (3) @(negedge clk);
        if (dut.req_q || data_bus.r_valid || data_bus.b_valid || instr_bus.r_valid) begin
            ok_all = 1'b0;
            $display("      after reset: req_q=%0b r_valid=%0b b_valid=%0b",
                     dut.req_q, data_bus.r_valid, data_bus.b_valid);
        end else $display("[%0t]       in-flight request cleared by reset (req_q=0, all valid signals 0)", $time);
        blog.check(cyc, "[6] reset clears the in-flight request (req_q=0, all valid signals 0)",
                   !(dut.req_q || data_bus.r_valid || data_bus.b_valid || instr_bus.r_valid),
                   $sformatf("req_q=%0b r_valid=%0b b_valid=%0b", dut.req_q, data_bus.r_valid, data_bus.b_valid));
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
        blog.check(cyc, "[6] both ports read debug ROM[0] = 0x0180006f after reset",
                   (rd_d === ROM_W0) && (rd_i === ROM_W0),
                   $sformatf("data=0x%08h instruction=0x%08h", rd_d, rd_i));
        if ((rd_d !== ROM_W0) || (rd_i !== ROM_W0)) begin
            ok_all = 1'b0;
            $display("      read after reset: data=0x%08h instruction=0x%08h (expected 0x%08h)",
                     rd_d, rd_i, ROM_W0);
        end else $display("[%0t]       both ports work after reset (debug ROM[0]=0x%08h)", $time, rd_d);
        blog.check(cyc, "[6/6] reset recovery", ok_all);
        if (ok_all) begin $display("[%0t] [6/%0d] RESET RECOVERY OK", $time, NSTAGE); stage_ok++; end
        else $error("[6/%0d] RESET RECOVERY FAIL", NSTAGE);

        // kapsama: resp_pending bu TB'de vurmali (smoke TB'de HIC vurmuyor)
        $display("[%0t]       coverage: resp_pending was high for %0d cycles (0 in jtag_smoke_tb)",
                 $time, resp_pending_hits);
        blog.check(cyc, "resp_pending was asserted (the r_ready/b_ready scenarios took effect)",
                   resp_pending_hits > 0, $sformatf("%0d cycles", resp_pending_hits));
        if (resp_pending_hits == 0)
            $error("resp_pending was never asserted: the r_ready/b_ready scenarios did not take effect");

        if ((stage_ok == NSTAGE) && (resp_pending_hits > 0))
            $display("[%0t] *** TEST SUCCESS *** axi_dm_slave: arbitration, R/B hold, byte enable and reset (%0d/%0d)",
                     $time, stage_ok, NSTAGE);
        else
            $error("AXI_DM_SLAVE FAIL: %0d/%0d stages passed", stage_ok, NSTAGE);
        blog.check(cyc, "all stages passed", stage_ok == NSTAGE, $sformatf("%0d of %0d", stage_ok, NSTAGE));
        blog.close();
        $finish;
    end

    initial #2_000_000 begin
        blog.fail(cyc, "test finished within 2 ms of simulated time");
        $error("TIMEOUT"); $finish;
    end
endmodule
