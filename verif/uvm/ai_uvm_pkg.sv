// ============================================
// Ostim BLogic Mikroelektronik
// ai_uvm_pkg.sv  -  YZ hizlandirici UVM genisletmesi
//
// Sartname 4.2.2.1: YZ hizlandiricinin AXI/AXI-Lite arayuzleri UVM ile
// dogrulanmali. Blok-bagimsiz AXI-Lite agent (axi_lite_uvm_pkg) CSR portunu
// surer; AXI4 master portu tb_ai_top'taki bellek modeline baglidir ve
// gozlemleri ai_side_if ile gelir. Iki test:
//   ai_directed_test : reset/readback, haritasiz ofsetler, iki uctan uca
//                      cikarim (START -> BUSY -> irq -> STATUS/sonuc sozcugu/
//                      conv_out altin farki -> CLEAR_DONE), mesgulken START
//   ai_random_test   : z3 ile cozulen kisitli rastgele CSR trafigi (START
//                      kisitla dislanir), ardindan ayarlarin geri yuklenip
//                      cikarimin hala dogru calistiginin kaniti
// RTL'e dokunulmaz - salt dogrulama katmani.
// ============================================

package ai_uvm_pkg;
    import uvm_pkg::*;
    import axi_lite_uvm_pkg::*;
    import periph_uvm_pkg::*;
    `include "uvm_macros.svh"

    localparam bit [31:0] AI_BASE     = 32'h0003_0000;
    localparam bit [31:0] AI_OUT_DEF  = 32'h0003_5A58;   // DEFAULT_OUT
    localparam int        IRQ_TIMEOUT = 2_000_000;       // cevrim (~20 ms @100 MHz)

    // --------------------------------------------
    // CSR referans modeli (ai_accelerator.sv:115-122, 905-984)
    //   CTRL 0x00 W: [0]=START, [1]=CLEAR_DONE darbesi; okunur 0
    //   STATUS 0x04 RO: [0]=BUSY [1]=DONE [7:4]=RESULT (dinamik)
    //   DATA_ADDR 0x08 RW (reset 0x0003_0000), OUT_ADDR 0x0C RW (reset 0x0003_5A58)
    //   diger ofsetler: yazma yok sayilir, okuma 0; tum yanitlar OKAY
    // --------------------------------------------
    class ai_scoreboard extends periph_scoreboard;
        `uvm_component_utils(ai_scoreboard)

        bit [31:0] data_addr_model = AI_BASE;
        bit [31:0] out_addr_model  = AI_OUT_DEF;

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        virtual function void model_write(bit [4:0] a, bit [31:0] d);
            case (a)
                5'h08: data_addr_model = d;
                5'h0C: out_addr_model  = d;
                default: ;  // CTRL darbe, STATUS salt okunur, digerleri yok sayilir
            endcase
        endfunction

        virtual function bit model_read(bit [4:0] a, output bit [31:0] exp);
            case (a)
                5'h00: begin exp = 32'h0;           return 1'b1; end
                5'h04: begin exp = 32'h0;           return 1'b0; end // STATUS dinamik
                5'h08: begin exp = data_addr_model; return 1'b1; end
                5'h0C: begin exp = out_addr_model;  return 1'b1; end
                default: begin exp = 32'h0;         return 1'b1; end // RTL default: 0
            endcase
        endfunction
    endclass

    class ai_env extends uvm_env;
        `uvm_component_utils(ai_env)

        axi_lite_agent    agent;
        ai_scoreboard     scoreboard;
        axi_lite_coverage coverage;

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            agent      = axi_lite_agent::type_id::create("agent", this);
            scoreboard = ai_scoreboard::type_id::create("scoreboard", this);
            coverage   = axi_lite_coverage::type_id::create("coverage", this);
        endfunction

        function void connect_phase(uvm_phase phase);
            super.connect_phase(phase);
            agent.ap.connect(scoreboard.analysis_imp);
            agent.ap.connect(coverage.analysis_export);
        endfunction
    endclass

    // --------------------------------------------
    // Kisitli rastgele CSR sequence'i (z3). Kisitlar:
    //  - adres = bu turun hedef ofseti (0x00-0x1C, hizali - sinif kisiti)
    //  - STATUS (0x04) salt okunur: oraya yazma uretilmez
    //  - CTRL yazmasinda START=0: bu sequence cikarim baslatmaz (rastgele
    //    DATA_ADDR ile baslayan cikarim bellek modeli disini okur)
    // Hedef ofset her turda 8 ofsetin karistirilmis sirasindan gelir; yon (R/W)
    // ve veri cozucuden gelir. Olculdu (10 Eylul): adres de cozucuye birakilinca
    // dagilim 0x18/0x1C'ye yigiliyor, STATUS hic okunmuyor ve CTRL'e hic
    // yazilmiyordu. Her ofsete 10 erisim ve STATUS'un yalniz okunmasi yapi ve
    // kisit geregi garanti (asagidaki ofset/STATUS denetimleri yalniz akil
    // sagligi denetimi); asil kapsama kapisi: CTRL/DATA_ADDR/OUT_ADDR'a en az
    // bir kez yazildi mi - degilse UVM_ERROR.
    // --------------------------------------------
    class ai_csr_random_seq extends axi_lite_base_seq;
        `uvm_object_utils(ai_csr_random_seq)

        int        num_txns = 80;
        bit [31:0] target;
        int        n_wr = 0, n_rd = 0;
        int        wr_at[8], rd_at[8];

        function new(string name = "ai_csr_random_seq");
            super.new(name);
        endfunction

        task body();
            axi_lite_seq_item txn;
            bit [31:0] offs[$];
            int        i = 0;
            offs = {32'h00, 32'h04, 32'h08, 32'h0C, 32'h10, 32'h14, 32'h18, 32'h1C};
            while (i < num_txns) begin
                offs.shuffle();
                foreach (offs[j]) begin
                    if (i >= num_txns) break;
                    target = offs[j];
                    txn = axi_lite_seq_item::type_id::create($sformatf("ai_txn_%0d", i));
                    start_item(txn);
                    if (!txn.randomize() with {
                            addr == target;
                            rw -> (addr != 32'h04);
                            (rw && addr == 32'h00) -> (data[0] == 1'b0);
                        }) begin
                        `uvm_error("SEQ", "Randomization basarisiz (SMT cozucu z3 PATH'te mi?) - constrained-random kosmadi")
                    end
                    finish_item(txn);
                    if (txn.rw) begin n_wr++; wr_at[txn.addr[4:2]]++; end
                    else        begin n_rd++; rd_at[txn.addr[4:2]]++; end
                    `uvm_info("SEQ", $sformatf("[%0d/%0d] %s addr=0x%02h data=0x%08h",
                        i+1, num_txns, txn.rw ? "WR" : "RD", txn.addr,
                        txn.rw ? txn.data : txn.rdata), UVM_MEDIUM)
                    i++;
                end
            end
            `uvm_info("SEQ", $sformatf(
                "rastgele CSR trafigi: %0d WR, %0d RD | ofset W/R: 00=%0d/%0d 04=%0d/%0d 08=%0d/%0d 0C=%0d/%0d 10=%0d/%0d 14=%0d/%0d 18=%0d/%0d 1C=%0d/%0d",
                n_wr, n_rd, wr_at[0], rd_at[0], wr_at[1], rd_at[1], wr_at[2], rd_at[2],
                wr_at[3], rd_at[3], wr_at[4], rd_at[4], wr_at[5], rd_at[5],
                wr_at[6], rd_at[6], wr_at[7], rd_at[7]), UVM_LOW)
            for (int k = 0; k < 8; k++)
                if (wr_at[k] + rd_at[k] == 0)
                    `uvm_error("SEQ", $sformatf("kapsama: ofset 0x%02h hic erisilmedi", k*4))
            if (wr_at[0] == 0) `uvm_error("SEQ", "kapsama: CTRL'e (CLEAR_DONE yolu) hic yazilmadi")
            if (wr_at[2] == 0) `uvm_error("SEQ", "kapsama: DATA_ADDR'a hic yazilmadi")
            if (wr_at[3] == 0) `uvm_error("SEQ", "kapsama: OUT_ADDR'a hic yazilmadi")
            if (rd_at[1] == 0) `uvm_error("SEQ", "kapsama: STATUS hic okunmadi")
        endtask
    endclass

    // --------------------------------------------
    // Ortak test govdesi
    // --------------------------------------------
    class ai_base_test extends periph_base_test;
        `uvm_component_utils(ai_base_test)

        ai_env             env;
        virtual ai_side_if side;

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            env = ai_env::type_id::create("env", this);
            uvm_config_db #(uvm_active_passive_enum)::set(
                this, "env.agent", "is_active", UVM_ACTIVE);
            if (!uvm_config_db #(virtual ai_side_if)::get(this, "", "ai_vif", side))
                `uvm_fatal("NOVIF", "ai_side_if bulunamadi")
        endfunction

        // irq_o yukselene kadar bekle (cevrim sinirli)
        task wait_irq(output bit seen, output int cycles);
            seen   = 1'b0;
            cycles = 0;
            while (!side.irq && cycles < IRQ_TIMEOUT) begin
                @(posedge side.clk);
                cycles++;
            end
            seen = side.irq;
        endtask

        // DONE kenari denetcisi (tb_ai_top) conv farkini bir cevrim sonra yazar
        task settle();
            repeat (4) @(posedge side.clk);
        endtask

        // Uctan uca bir cikarim: adresleri yaz, START, irq, STATUS + bellek denetimi
        task run_inference(bit [31:0] out_addr, int unsigned exp_done);
            bit [31:0] st;
            bit        seen;
            int        cyc;
            int unsigned res;
            int unsigned wr0;

            wr(32'h08, AI_BASE);
            wr(32'h0C, out_addr);
            wr0 = side.wr_beats;
            wr(32'h00, 32'h1);                       // START
            rd(32'h04, st);
            if (st[0] !== 1'b1 || side.busy !== 1'b1)
                `uvm_error(get_type_name(), $sformatf(
                    "START sonrasi BUSY yok: STATUS=0x%08h busy_o=%0b", st, side.busy))

            wait_irq(seen, cyc);
            if (!seen) begin
                `uvm_error(get_type_name(), $sformatf("irq_o %0d cevrimde gelmedi", IRQ_TIMEOUT))
                return;
            end
            settle();
            `uvm_info(get_type_name(), $sformatf("irq_o geldi (START'tan ~%0d cevrim)", cyc), UVM_LOW)

            rd(32'h04, st);
            res = st[7:4];
            check_eq("STATUS.DONE/BUSY", {30'h0, st[1], st[0]}, 32'h2);
            check_eq("STATUS.RESULT (argmax, altin model)", res, side.expected_argmax);
            check_eq("sonuc sozcugu adresi (AXI4 son yazma)", side.last_wr_addr, out_addr);
            check_eq("sonuc sozcugu verisi", side.last_wr_data, res);
            check_eq("conv_out altin farki (1000 sozcuk)", side.conv_errors, 0);
            check_eq("tamamlanan cikarim sayisi", side.done_count, exp_done);
            // conv_out penceresi cikarimlar arasinda silinmez: geri yazmayi atlayan bir
            // cikarim onceki dogru sozcuklerle conv_out denetimini gecerdi. Sayim yakalar.
            check_eq("cikarim AXI4 yazma sozcugu (1000 conv_out + 1 sonuc)", side.wr_beats - wr0, 32'd1001);

            wr(32'h00, 32'h2);                       // CLEAR_DONE
            settle();
            rd(32'h04, st);
            check_eq("CLEAR_DONE sonrasi DONE", {31'h0, st[1]}, 32'h0);
            check_eq("CLEAR_DONE sonrasi irq_o", {31'h0, side.irq}, 32'h0);
        endtask

        function void report_phase(uvm_phase phase);
            `uvm_info("AI_RPT", $sformatf(
                "AXI4 master: %0d okuma, %0d yazma sozcugu; sozlesme ihlali %0d, pencere disi %0d",
                side.rd_beats, side.wr_beats, side.axi4_errs, side.oob_errs), UVM_LOW)
            if (side.axi4_errs != 0 || side.oob_errs != 0)
                `uvm_error("AI_RPT", "AXI4 master sozlesmesi ihlal edildi")
        endfunction
    endclass

    // Directed: reset/readback, haritasiz ofsetler, iki cikarim, mesgulken START
    class ai_directed_test extends ai_base_test;
        `uvm_component_utils(ai_directed_test)

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        task run_phase(uvm_phase phase);
            bit [31:0] v;
            bit        seen;
            int        cyc;
            int unsigned wr0;

            sqr = env.agent.sequencer;
            phase.raise_objection(this, "ai_directed_test");

            // 1) Reset degerleri
            rd(32'h00, v); check_eq("CTRL reset", v, 32'h0);
            rd(32'h04, v); check_eq("STATUS reset", v, 32'h0);
            rd(32'h08, v); check_eq("DATA_ADDR reset", v, AI_BASE);
            rd(32'h0C, v); check_eq("OUT_ADDR reset", v, AI_OUT_DEF);

            // 2) RW readback'ler (scoreboard da denetler)
            wr(32'h08, 32'hA5A5_5A5C); rd(32'h08, v); check_eq("DATA_ADDR readback", v, 32'hA5A5_5A5C);
            wr(32'h0C, 32'h1234_5678); rd(32'h0C, v); check_eq("OUT_ADDR readback", v, 32'h1234_5678);

            // 3) Haritasiz ofsetler: yazma etkisiz, okuma 0; CTRL okunur 0
            wr(32'h10, 32'hFFFF_FFFF); rd(32'h10, v); check_eq("0x10 haritasiz", v, 32'h0);
            wr(32'h1C, 32'hFFFF_FFFF); rd(32'h1C, v); check_eq("0x1C haritasiz", v, 32'h0);
            rd(32'h04, v); check_eq("haritasiz yazma sonrasi STATUS", v, 32'h0);
            wr(32'h00, 32'h2);          // DONE yokken CLEAR_DONE: etkisiz
            rd(32'h04, v); check_eq("bosta CLEAR_DONE sonrasi STATUS", v, 32'h0);
            check_eq("START oncesi irq_o", {31'h0, side.irq}, 32'h0);

            // 4) Cikarim #1 (varsayilan sonuc adresi)
            run_inference(AI_OUT_DEF, 1);

            // 5) Cikarim #2: farkli sonuc adresi + mesgulken ikinci START yok sayilmali
            wr(32'h08, AI_BASE);
            wr(32'h0C, 32'h0003_7F00);
            wr0 = side.wr_beats;
            wr(32'h00, 32'h1);                       // START
            wr(32'h00, 32'h1);                       // mesgulken START: RTL !status_busy ile dislar
            rd(32'h00, v); check_eq("CTRL okuma (mesgul)", v, 32'h0);
            wait_irq(seen, cyc);
            settle();
            rd(32'h04, v);
            check_eq("cikarim #2 STATUS.RESULT", v[7:4], side.expected_argmax);
            check_eq("cikarim #2 sonuc adresi", side.last_wr_addr, 32'h0003_7F00);
            check_eq("cikarim #2 conv_out farki", side.conv_errors, 0);
            check_eq("cikarim #2 AXI4 yazma sozcugu (1000 conv_out + 1 sonuc)", side.wr_beats - wr0, 32'd1001);
            wr(32'h00, 32'h2);
            // mesgulken START ikinci bir cikarim baslatmis olsaydi bir cikarim
            // suresi icinde ucuncu DONE gelirdi: 1,5 cikarim suresi bekle
            `uvm_info(get_type_name(), $sformatf(
                "mesgulken START denetimi: %0d cevrim ek bekleme", cyc + cyc/2), UVM_LOW)
            repeat (cyc + cyc/2) @(posedge side.clk);
            check_eq("mesgulken START yok sayildi (DONE sayisi)", side.done_count, 2);
            check_eq("son durumda irq_o", {31'h0, side.irq}, 32'h0);

            #100;
            phase.drop_objection(this, "ai_directed_test");
        endtask
    endclass

    // Random: z3 kisitli rastgele CSR trafigi + ardindan dogru cikarim kaniti
    class ai_random_test extends ai_base_test;
        `uvm_component_utils(ai_random_test)

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        task run_phase(uvm_phase phase);
            ai_csr_random_seq seq;

            sqr = env.agent.sequencer;
            phase.raise_objection(this, "ai_random_test");

            seq = ai_csr_random_seq::type_id::create("seq");
            seq.num_txns = 80;
            seq.start(env.agent.sequencer);
            check_eq("rastgele trafik START uretmedi (DONE sayisi)", side.done_count, 0);

            // rastgele DATA_ADDR/OUT_ADDR degerlerinden sonra gecerli ayarla cikarim
            run_inference(AI_OUT_DEF, 1);

            #100;
            phase.drop_objection(this, "ai_random_test");
        endtask
    endclass

endpackage
