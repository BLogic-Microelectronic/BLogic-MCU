// ============================================
// Ostim BLogic Mikroelektronik
// periph_uvm_pkg.sv  -  Timer / UART_0 / I2C UVM genisletmesi
//
// axi_lite_uvm_pkg'deki blok-bagimsiz agent (driver+monitor+sequencer)
// aynen yeniden kullanilir; bu paket yalnizca blok-ozel referans
// modelleri (scoreboard), sequence'ler, env'ler ve testleri ekler.
// RTL'e dokunulmaz - salt dogrulama katmani.
// ============================================

package periph_uvm_pkg;
    import uvm_pkg::*;
    import axi_lite_uvm_pkg::*;
    `include "uvm_macros.svh"

    // --------------------------------------------
    // Ortak scoreboard govdesi
    //
    // Yazmac-erisim seviyesi model: her blok icin
    //   model_write(addr, data)          : yazma yan etkisini modele isle
    //   model_read(addr, exp) -> bit     : 1 = deger ongorulebilir (exp gecerli),
    //                                      0 = dinamik yazmac, yalniz resp kontrolu
    // Adres cozumu RTL ile ayni: addr[4:0]
    // --------------------------------------------
    class periph_scoreboard extends uvm_scoreboard;
        `uvm_component_utils(periph_scoreboard)

        uvm_analysis_imp #(axi_lite_seq_item, periph_scoreboard) analysis_imp;

        int match_count    = 0;
        int mismatch_count = 0;
        int total_txns     = 0;

        function new(string name, uvm_component parent);
            super.new(name, parent);
            analysis_imp = new("analysis_imp", this);
        endfunction

        virtual function void model_write(bit [4:0] a, bit [31:0] d);
        endfunction

        virtual function bit model_read(bit [4:0] a, output bit [31:0] exp);
            exp = 32'h0;
            return 1'b0;
        endfunction

        virtual function void write(axi_lite_seq_item txn);
            bit [31:0] exp;
            total_txns++;

            if (txn.rw) begin
                model_write(txn.addr[4:0], txn.data);
                if (txn.resp == 2'b00)
                    match_count++;
                else begin
                    mismatch_count++;
                    `uvm_error("SB", $sformatf("Yazma yaniti OKAY degil: addr=0x%02h resp=%0d",
                              txn.addr[4:0], txn.resp))
                end
            end else begin
                if (txn.resp != 2'b00) begin
                    mismatch_count++;
                    `uvm_error("SB", $sformatf("Okuma yaniti OKAY degil: addr=0x%02h resp=%0d",
                              txn.addr[4:0], txn.resp))
                end else if (model_read(txn.addr[4:0], exp)) begin
                    if (txn.rdata == exp) begin
                        match_count++;
                        `uvm_info("SB", $sformatf("RD 0x%02h eslesti: 0x%08h",
                                  txn.addr[4:0], txn.rdata), UVM_HIGH)
                    end else begin
                        mismatch_count++;
                        `uvm_error("SB", $sformatf(
                            "RD 0x%02h UYUMSUZ! beklenen=0x%08h gercek=0x%08h",
                            txn.addr[4:0], exp, txn.rdata))
                    end
                end else begin
                    // dinamik yazmac: yalniz resp kontrolu yapildi
                    match_count++;
                end
            end
        endfunction

        function void report_phase(uvm_phase phase);
            `uvm_info("SB_RPT", $sformatf(
                "Scoreboard: %0d islem, %0d esleme, %0d uyumsuzluk",
                total_txns, match_count, mismatch_count), UVM_LOW)
            if (mismatch_count == 0)
                `uvm_info("SB_RPT", ">>> SCOREBOARD BASARILI <<<", UVM_LOW)
            else
                `uvm_error("SB_RPT", ">>> SCOREBOARD HATALI <<<")
        endfunction

    endclass

    // --------------------------------------------
    // Timer referans modeli (EK-2 yazmac haritasi)
    //   PRE 0x00 RW, ARE 0x04 RW (reset 0xFFFFFFFF), CLR 0x08 W (okunur=0),
    //   ENA 0x0C bit0 RW, MOD 0x10 bit0 RW (reset 1),
    //   CNT 0x14 RO dinamik, EVN 0x18 RO dinamik, EVC 0x1C W (okunur=0)
    // --------------------------------------------
    class timer_scoreboard extends periph_scoreboard;
        `uvm_component_utils(timer_scoreboard)

        bit [31:0] pre_model = 32'h0;
        bit [31:0] are_model = 32'hFFFF_FFFF;
        bit        ena_model = 1'b0;
        bit        mod_model = 1'b1;

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        virtual function void model_write(bit [4:0] a, bit [31:0] d);
            case (a)
                5'h00: pre_model = d;
                5'h04: are_model = d;
                5'h0C: ena_model = d[0];
                5'h10: mod_model = d[0];
                default: ;  // CLR/EVC pulse, CNT/EVN yazilamaz
            endcase
        endfunction

        virtual function bit model_read(bit [4:0] a, output bit [31:0] exp);
            case (a)
                5'h00: begin exp = pre_model;            return 1'b1; end
                5'h04: begin exp = are_model;            return 1'b1; end
                5'h08: begin exp = 32'h0;                return 1'b1; end
                5'h0C: begin exp = {31'h0, ena_model};   return 1'b1; end
                5'h10: begin exp = {31'h0, mod_model};   return 1'b1; end
                5'h1C: begin exp = 32'h0;                return 1'b1; end
                5'h14, 5'h18: begin exp = 32'h0;         return 1'b0; end // sayaclar dinamik
                default: begin exp = 32'h0;              return 1'b1; end // RTL default: 0
            endcase
        endfunction

    endclass

    // --------------------------------------------
    // UART_0 referans modeli (EK-2 yazmac haritasi)
    //   CPB 0x00 RW (reset 434), STP 0x04 [1:0] RW, RDR 0x08 RO,
    //   TDR 0x0C [7:0] RW, CFG 0x10 dinamik bayraklar
    // TB'de rxd hatti bosta ('1') tutulur -> RX trafigi yok -> RDR hep 0.
    // --------------------------------------------
    class uart_scoreboard extends periph_scoreboard;
        `uvm_component_utils(uart_scoreboard)

        bit [31:0] cpb_model = 32'd434;
        bit [ 1:0] stp_model = 2'b00;
        bit [ 7:0] tdr_model = 8'h00;

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        virtual function void model_write(bit [4:0] a, bit [31:0] d);
            case (a)
                5'h00: cpb_model = d;
                5'h04: stp_model = d[1:0];
                5'h0C: tdr_model = d[7:0];
                default: ;  // CFG bayrak islemleri dinamik, RDR yazilamaz
            endcase
        endfunction

        virtual function bit model_read(bit [4:0] a, output bit [31:0] exp);
            case (a)
                5'h00: begin exp = cpb_model;           return 1'b1; end
                5'h04: begin exp = {30'h0, stp_model};  return 1'b1; end
                5'h08: begin exp = 32'h0;               return 1'b1; end // RX yok -> RDR=0
                5'h0C: begin exp = {24'h0, tdr_model};  return 1'b1; end
                5'h10: begin exp = 32'h0;               return 1'b0; end // CFG dinamik
                default: begin exp = 32'h0;             return 1'b1; end // RTL default: 0
            endcase
        endfunction

    endclass

    // --------------------------------------------
    // I2C referans modeli (EK-2 yazmac haritasi)
    //   NBY 0x00 RW (kiskac: 0->1, >4->4), ADR 0x04 [6:0] RW,
    //   RDR 0x08 RO (motor yazar), TDR 0x0C RW, CFG 0x10 dinamik
    // CFG[0]/CFG[2] ile motor tetiklenirse RDR de dinamik sayilir.
    // --------------------------------------------
    class i2c_scoreboard extends periph_scoreboard;
        `uvm_component_utils(i2c_scoreboard)

        bit [ 2:0] nby_model = 3'd1;
        bit [ 6:0] adr_model = 7'd0;
        bit [31:0] tdr_model = 32'd0;
        bit        engine_started = 1'b0;

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        virtual function void model_write(bit [4:0] a, bit [31:0] d);
            case (a)
                5'h00: nby_model = (d == 32'd0) ? 3'd1 :
                                   (d >  32'd4) ? 3'd4 : d[2:0];
                5'h04: adr_model = d[6:0];
                5'h0C: tdr_model = d;
                5'h10: if (d[0] || d[2]) engine_started = 1'b1;
                default: ;  // RDR yazilamaz
            endcase
        endfunction

        virtual function bit model_read(bit [4:0] a, output bit [31:0] exp);
            case (a)
                5'h00: begin exp = {29'h0, nby_model};  return 1'b1; end
                5'h04: begin exp = {25'h0, adr_model};  return 1'b1; end
                5'h08: begin
                    exp = 32'h0;
                    return !engine_started;  // motor calistiysa RDR dinamik
                end
                5'h0C: begin exp = tdr_model;           return 1'b1; end
                5'h10: begin exp = 32'h0;               return 1'b0; end // CFG dinamik
                default: begin exp = 32'h0;             return 1'b1; end // RTL default: 0
            endcase
        endfunction

    endclass

    // --------------------------------------------
    // Havuzdan rastgele R/W sequence
    //
    // Simulatorun kisit cozumune yaslanmamak icin adres/rw secimi
    // dogrudan $urandom ile yapilir (bkz. -Wno-CONSTRAINTIGN).
    // --------------------------------------------
    class periph_random_seq extends axi_lite_base_seq;
        `uvm_object_utils(periph_random_seq)

        bit [31:0] rd_pool[$];
        bit [31:0] wr_pool[$];
        int        num_txns = 40;
        int        wr_pct   = 60;

        function new(string name = "periph_random_seq");
            super.new(name);
        endfunction

        task body();
            axi_lite_seq_item txn;
            bit do_wr;
            for (int i = 0; i < num_txns; i++) begin
                txn = axi_lite_seq_item::type_id::create($sformatf("txn_%0d", i));
                start_item(txn);
                do_wr    = (wr_pool.size() > 0) &&
                           (int'($urandom_range(0, 99)) < wr_pct);
                txn.rw   = do_wr;
                txn.addr = do_wr ? wr_pool[$urandom_range(0, wr_pool.size()-1)]
                                 : rd_pool[$urandom_range(0, rd_pool.size()-1)];
                txn.data = $urandom();
                txn.strb = 4'b1111;
                finish_item(txn);
                `uvm_info("SEQ", $sformatf("[%0d/%0d] %s addr=0x%02h data=0x%08h",
                    i+1, num_txns, txn.rw ? "WR" : "RD", txn.addr,
                    txn.rw ? txn.data : txn.rdata), UVM_MEDIUM)
            end
        endtask
    endclass

    // --------------------------------------------
    // Blok env'leri: agent + blok scoreboard'u + coverage aboneligi
    // --------------------------------------------
    class timer_env extends uvm_env;
        `uvm_component_utils(timer_env)

        axi_lite_agent    agent;
        timer_scoreboard  scoreboard;
        axi_lite_coverage coverage;

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            agent      = axi_lite_agent::type_id::create("agent", this);
            scoreboard = timer_scoreboard::type_id::create("scoreboard", this);
            coverage   = axi_lite_coverage::type_id::create("coverage", this);
        endfunction

        function void connect_phase(uvm_phase phase);
            super.connect_phase(phase);
            agent.ap.connect(scoreboard.analysis_imp);
            agent.ap.connect(coverage.analysis_export);
        endfunction
    endclass

    class uart_env extends uvm_env;
        `uvm_component_utils(uart_env)

        axi_lite_agent    agent;
        uart_scoreboard   scoreboard;
        axi_lite_coverage coverage;

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            agent      = axi_lite_agent::type_id::create("agent", this);
            scoreboard = uart_scoreboard::type_id::create("scoreboard", this);
            coverage   = axi_lite_coverage::type_id::create("coverage", this);
        endfunction

        function void connect_phase(uvm_phase phase);
            super.connect_phase(phase);
            agent.ap.connect(scoreboard.analysis_imp);
            agent.ap.connect(coverage.analysis_export);
        endfunction
    endclass

    class i2c_env extends uvm_env;
        `uvm_component_utils(i2c_env)

        axi_lite_agent    agent;
        i2c_scoreboard    scoreboard;
        axi_lite_coverage coverage;

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            agent      = axi_lite_agent::type_id::create("agent", this);
            scoreboard = i2c_scoreboard::type_id::create("scoreboard", this);
            coverage   = axi_lite_coverage::type_id::create("coverage", this);
        endfunction

        function void connect_phase(uvm_phase phase);
            super.connect_phase(phase);
            agent.ap.connect(scoreboard.analysis_imp);
            agent.ap.connect(coverage.analysis_export);
        endfunction
    endclass

    // --------------------------------------------
    // Test yardimcilari: her blok testinin ortak govdesi
    // (sqr alt sinifin run_phase'inde atanir)
    // --------------------------------------------
    class periph_base_test extends uvm_test;
        `uvm_component_utils(periph_base_test)

        axi_lite_sequencer sqr;

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        task wr(bit [31:0] a, bit [31:0] d);
            axi_lite_write_seq s;
            s = axi_lite_write_seq::type_id::create("wr_seq");
            s.wr_addr = a;
            s.wr_data = d;
            s.start(sqr);
        endtask

        task rd(bit [31:0] a, output bit [31:0] d);
            axi_lite_read_seq s;
            s = axi_lite_read_seq::type_id::create("rd_seq");
            s.rd_addr = a;
            s.start(sqr);
            d = s.rd_data;
        endtask

        // mask'li bit(ler) set olana kadar oku; timeout'ta hata
        task poll_mask(bit [31:0] a, bit [31:0] mask, int max_iter,
                       output bit [31:0] last);
            int i;
            last = 32'h0;
            for (i = 0; i < max_iter; i++) begin
                rd(a, last);
                if ((last & mask) != 32'h0) return;
                #50;
            end
            `uvm_error(get_type_name(), $sformatf(
                "poll_mask timeout: addr=0x%02h mask=0x%08h son=0x%08h",
                a[4:0], mask, last))
        endtask

        function void check_eq(string what, bit [31:0] got, bit [31:0] exp);
            if (got !== exp)
                `uvm_error(get_type_name(), $sformatf(
                    "%s: beklenen=0x%08h gercek=0x%08h", what, exp, got))
            else
                `uvm_info(get_type_name(), $sformatf(
                    "%s OK (0x%08h)", what, got), UVM_LOW)
        endfunction

    endclass

    // ============================================
    // TIMER testleri
    // ============================================
    class timer_base_test extends periph_base_test;
        `uvm_component_utils(timer_base_test)

        timer_env env;

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            env = timer_env::type_id::create("env", this);
            uvm_config_db #(uvm_active_passive_enum)::set(
                this, "env.agent", "is_active", UVM_ACTIVE);
        endfunction
    endclass

    // Directed: readback'ler + sayma/clear/event semantigi
    class timer_directed_test extends timer_base_test;
        `uvm_component_utils(timer_directed_test)

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        task run_phase(uvm_phase phase);
            bit [31:0] v, c1, c2;

            sqr = env.agent.sequencer;
            phase.raise_objection(this, "timer_directed_test");

            // 1) Reset degerleri
            rd(32'h00, v); check_eq("PRE reset", v, 32'h0);
            rd(32'h04, v); check_eq("ARE reset", v, 32'hFFFF_FFFF);
            rd(32'h0C, v); check_eq("ENA reset", v, 32'h0);
            rd(32'h10, v); check_eq("MOD reset", v, 32'h1);

            // 2) RW yazmac readback'leri (scoreboard da denetler)
            wr(32'h00, 32'h1234_5678); rd(32'h00, v);
            check_eq("PRE readback", v, 32'h1234_5678);
            wr(32'h04, 32'h0000_00FF); rd(32'h04, v);
            check_eq("ARE readback", v, 32'h0000_00FF);
            wr(32'h10, 32'h0);         rd(32'h10, v);
            check_eq("MOD=asagi readback", v, 32'h0);
            wr(32'h10, 32'h1);

            // 3) Devre disi + CLR -> CNT=0 kalir
            wr(32'h0C, 32'h0);          // ENA=0
            wr(32'h08, 32'h1);          // CLR pulse
            rd(32'h14, v); check_eq("CLR sonrasi CNT (ENA=0)", v, 32'h0);

            // 4) Sayma: PRE=0, ARE buyuk, ENA=1 -> CNT kesin artar
            wr(32'h00, 32'h0);
            wr(32'h04, 32'hFFFF_FFFF);
            wr(32'h0C, 32'h1);          // ENA=1
            rd(32'h14, c1);
            rd(32'h14, c2);
            if (c2 <= c1)
                `uvm_error(get_type_name(), $sformatf(
                    "CNT artmadi: once=0x%08h sonra=0x%08h", c1, c2))
            else
                `uvm_info(get_type_name(), $sformatf(
                    "CNT artiyor: 0x%08h -> 0x%08h", c1, c2), UVM_LOW)

            // 5) Event: ARE kucuk -> EVN birikir; EVC ile temizlenir
            wr(32'h0C, 32'h0);          // once durdur
            wr(32'h08, 32'h1);          // CLR
            wr(32'h04, 32'd4);          // ARE=4
            wr(32'h0C, 32'h1);          // ENA=1
            #500;                       // ~50 cevrim -> birkac event
            rd(32'h18, v);
            if (v == 32'h0)
                `uvm_error(get_type_name(), "EVN birikmedi (beklenen >0)")
            else
                `uvm_info(get_type_name(), $sformatf(
                    "EVN birikti: %0d event", v), UVM_LOW)
            wr(32'h0C, 32'h0);          // ENA=0
            wr(32'h1C, 32'h1);          // EVC pulse
            rd(32'h18, v); check_eq("EVC sonrasi EVN", v, 32'h0);

            #100;
            phase.drop_objection(this, "timer_directed_test");
        endtask
    endclass

    // Random: guvenli adres havuzunda rastgele R/W
    class timer_random_test extends timer_base_test;
        `uvm_component_utils(timer_random_test)

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        task run_phase(uvm_phase phase);
            periph_random_seq seq;

            sqr = env.agent.sequencer;
            phase.raise_objection(this, "timer_random_test");

            seq = periph_random_seq::type_id::create("seq");
            seq.wr_pool  = {32'h00, 32'h04, 32'h08, 32'h0C, 32'h10, 32'h1C};
            seq.rd_pool  = {32'h00, 32'h04, 32'h08, 32'h0C,
                            32'h10, 32'h14, 32'h18, 32'h1C};
            seq.num_txns = 60;
            seq.start(env.agent.sequencer);

            #100;
            phase.drop_objection(this, "timer_random_test");
        endtask
    endclass

    // ============================================
    // UART_0 testleri
    // ============================================
    class uart_base_test extends periph_base_test;
        `uvm_component_utils(uart_base_test)

        uart_env env;

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            env = uart_env::type_id::create("env", this);
            uvm_config_db #(uvm_active_passive_enum)::set(
                this, "env.agent", "is_active", UVM_ACTIVE);
        endfunction
    endclass

    // Directed: reset/readback + TX akisi + CFG[0] auto-clear (EK-2 v1.3)
    class uart_directed_test extends uart_base_test;
        `uvm_component_utils(uart_directed_test)

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        task run_phase(uvm_phase phase);
            bit [31:0] v;

            sqr = env.agent.sequencer;
            phase.raise_objection(this, "uart_directed_test");

            // 1) Reset degerleri
            rd(32'h00, v); check_eq("CPB reset (115200@50MHz)", v, 32'd434);
            rd(32'h04, v); check_eq("STP reset", v, 32'h0);
            rd(32'h08, v); check_eq("RDR reset", v, 32'h0);
            rd(32'h10, v); check_eq("CFG reset", v, 32'h0);

            // 2) Readback'ler: CPB (1 Mbps degeri dahil), STP modlari, TDR
            wr(32'h00, 32'd50);  rd(32'h00, v);
            check_eq("CPB=50 (1 Mbps) readback", v, 32'd50);
            wr(32'h04, 32'h1);   rd(32'h04, v); check_eq("STP=1.5 readback", v, 32'h1);
            wr(32'h04, 32'h2);   rd(32'h04, v); check_eq("STP=2 readback",   v, 32'h2);
            wr(32'h04, 32'h0);

            // 3) TX akisi + CFG[0] auto-clear kaniti
            //    CPB=16 -> bit suresi 16 cevrim, cerceve ~160 cevrim (hizli sim)
            wr(32'h00, 32'd16);
            wr(32'h10, 32'h1);          // CFG[0]=1 (TX enable bayragi)
            wr(32'h0C, 32'h0000_00A5);  // TDR yaz -> gonderim baslar
            rd(32'h0C, v); check_eq("TDR readback", v, 32'h0000_00A5);
            poll_mask(32'h10, 32'h4, 300, v);   // CFG[2]=TX_DONE bekle
            if ((v & 32'h1) != 32'h0)
                `uvm_error(get_type_name(), $sformatf(
                    "CFG[0] auto-clear OLMADI: CFG=0x%08h", v))
            else
                `uvm_info(get_type_name(), $sformatf(
                    "CFG[0] auto-clear dogrulandi (CFG=0x%08h)", v), UVM_LOW)

            // 4) Bayrak temizleme: CFG=0 -> tum bayraklar 0
            wr(32'h10, 32'h0);
            rd(32'h10, v); check_eq("CFG temizleme", v, 32'h0);

            // 5) RX yokken RDR 0 kalir
            rd(32'h08, v); check_eq("RDR (RX trafigi yok)", v, 32'h0);

            #100;
            phase.drop_objection(this, "uart_directed_test");
        endtask
    endclass

    // Random: CPB/STP/TDR yazilir, tum harita okunur (CFG dinamik)
    class uart_random_test extends uart_base_test;
        `uvm_component_utils(uart_random_test)

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        task run_phase(uvm_phase phase);
            periph_random_seq seq;

            sqr = env.agent.sequencer;
            phase.raise_objection(this, "uart_random_test");

            seq = periph_random_seq::type_id::create("seq");
            seq.wr_pool  = {32'h00, 32'h04, 32'h0C};
            seq.rd_pool  = {32'h00, 32'h04, 32'h08, 32'h0C, 32'h10, 32'h14};
            seq.num_txns = 60;
            seq.start(env.agent.sequencer);

            #100;
            phase.drop_objection(this, "uart_random_test");
        endtask
    endclass

    // ============================================
    // I2C testleri
    // ============================================
    class i2c_base_test extends periph_base_test;
        `uvm_component_utils(i2c_base_test)

        i2c_env env;

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            env = i2c_env::type_id::create("env", this);
            uvm_config_db #(uvm_active_passive_enum)::set(
                this, "env.agent", "is_active", UVM_ACTIVE);
        endfunction
    endclass

    // Directed: NBY kiskaci, readback'ler ve slave'siz NACK yolu
    // (TB'de SDA pull-up modellenir, slave yok -> adres fazi NACK almali)
    class i2c_directed_test extends i2c_base_test;
        `uvm_component_utils(i2c_directed_test)

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        task run_phase(uvm_phase phase);
            bit [31:0] v;

            sqr = env.agent.sequencer;
            phase.raise_objection(this, "i2c_directed_test");

            // 1) Reset degerleri
            rd(32'h00, v); check_eq("NBY reset", v, 32'h1);
            rd(32'h04, v); check_eq("ADR reset", v, 32'h0);
            rd(32'h08, v); check_eq("RDR reset", v, 32'h0);
            rd(32'h10, v); check_eq("CFG reset", v, 32'h0);

            // 2) NBY kiskac davranisi: 0->1, 7->4, 3->3
            wr(32'h00, 32'h0); rd(32'h00, v); check_eq("NBY=0 kiskac", v, 32'h1);
            wr(32'h00, 32'h7); rd(32'h00, v); check_eq("NBY=7 kiskac", v, 32'h4);
            wr(32'h00, 32'h3); rd(32'h00, v); check_eq("NBY=3",        v, 32'h3);

            // 3) ADR/TDR readback
            wr(32'h04, 32'h0000_0050); rd(32'h04, v);
            check_eq("ADR readback", v, 32'h0000_0050);
            wr(32'h0C, 32'hDEAD_BEEF); rd(32'h0C, v);
            check_eq("TDR readback", v, 32'hDEAD_BEEF);

            // 4) TX -> slave yok -> adres NACK -> TX_DONE + NACK_ERR
            wr(32'h00, 32'h1);          // NBY=1
            wr(32'h04, 32'h0000_002A);  // ADR=0x2A
            wr(32'h0C, 32'h0000_0055);  // TDR
            wr(32'h10, 32'h1);          // CFG[0]=1 -> TX baslat
            poll_mask(32'h10, 32'h2, 2000, v);  // CFG[1]=TX_DONE bekle
            if ((v & 32'h10) == 32'h0)
                `uvm_error(get_type_name(), $sformatf(
                    "NACK_ERR set olmadi (slave yokken): CFG=0x%08h", v))
            else
                `uvm_info(get_type_name(), $sformatf(
                    "TX NACK yolu dogrulandi (CFG=0x%08h)", v), UVM_LOW)

            // 5) Bayrak temizleme
            wr(32'h10, 32'h0);
            rd(32'h10, v); check_eq("CFG temizleme (TX sonrasi)", v, 32'h0);

            // 6) RX -> slave yok -> adres NACK -> RX_DONE + NACK_ERR, RDR=0
            wr(32'h10, 32'h4);          // CFG[2]=1 -> RX baslat
            poll_mask(32'h10, 32'h8, 2000, v);  // CFG[3]=RX_DONE bekle
            if ((v & 32'h10) == 32'h0)
                `uvm_error(get_type_name(), $sformatf(
                    "RX NACK_ERR set olmadi: CFG=0x%08h", v))
            else
                `uvm_info(get_type_name(), $sformatf(
                    "RX NACK yolu dogrulandi (CFG=0x%08h)", v), UVM_LOW)
            rd(32'h08, v); check_eq("NACK'li RX sonrasi RDR", v, 32'h0);
            wr(32'h10, 32'h0);
            rd(32'h10, v); check_eq("CFG temizleme (RX sonrasi)", v, 32'h0);

            #100;
            phase.drop_objection(this, "i2c_directed_test");
        endtask
    endclass

    // Random: NBY/ADR/TDR yazilir (CFG'ye yazilmaz - motor tetiklenmesin)
    class i2c_random_test extends i2c_base_test;
        `uvm_component_utils(i2c_random_test)

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        task run_phase(uvm_phase phase);
            periph_random_seq seq;

            sqr = env.agent.sequencer;
            phase.raise_objection(this, "i2c_random_test");

            seq = periph_random_seq::type_id::create("seq");
            seq.wr_pool  = {32'h00, 32'h04, 32'h0C};
            seq.rd_pool  = {32'h00, 32'h04, 32'h08, 32'h0C, 32'h10, 32'h14};
            seq.num_txns = 60;
            seq.start(env.agent.sequencer);

            #100;
            phase.drop_objection(this, "i2c_random_test");
        endtask
    endclass

endpackage
