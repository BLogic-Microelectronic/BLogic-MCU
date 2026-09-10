// ============================================
// Ostim BLogic Mikroelektronik
// axi_lite_uvm_pkg.sv  -  AXI-Lite UVM agent paketi
// ============================================

package axi_lite_uvm_pkg;
    import uvm_pkg::*;
    `include "uvm_macros.svh"

    // Transaction (sequence item)
    class axi_lite_seq_item extends uvm_sequence_item;

        rand bit [31:0] addr;
        rand bit [31:0] data;
        rand bit [ 3:0] strb;
        rand bit        rw;     // 0=READ, 1=WRITE

        // Yanit
        bit [31:0] rdata;
        bit [ 1:0] resp;

        `uvm_object_utils_begin(axi_lite_seq_item)
            `uvm_field_int(addr,  UVM_ALL_ON)
            `uvm_field_int(data,  UVM_ALL_ON)
            `uvm_field_int(strb,  UVM_ALL_ON)
            `uvm_field_int(rw,    UVM_ALL_ON)
            `uvm_field_int(rdata, UVM_ALL_ON)
            `uvm_field_int(resp,  UVM_ALL_ON)
        `uvm_object_utils_end

        function new(string name = "axi_lite_seq_item");
            super.new(name);
        endfunction

        // Adres hizalama: 4-byte aligned
        constraint addr_aligned_c { addr[1:0] == 2'b00; }
        constraint strb_default_c { strb == 4'b1111; }

    endclass

    // Monitor: passive protokol check + transaction yakalama
    class axi_lite_monitor extends uvm_monitor;
        `uvm_component_utils(axi_lite_monitor)

        virtual axi_lite_if vif;
        uvm_analysis_port #(axi_lite_seq_item) item_collected_port;

        // Protokol check sayaclari
        int check_count = 0;
        int pass_count  = 0;
        int fail_count  = 0;

        function new(string name, uvm_component parent);
            super.new(name, parent);
            item_collected_port = new("item_collected_port", this);
        endfunction

        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            if (!uvm_config_db #(virtual axi_lite_if)::get(this, "", "vif", vif))
                `uvm_fatal("NOVIF", "Virtual interface bulunamadi")
        endfunction

        task run_phase(uvm_phase phase);
            fork
                monitor_writes();
                monitor_reads();
                protocol_check();
            join
        endtask

        // Write transaction yakalama
        task monitor_writes();
            axi_lite_seq_item txn;
            forever begin
                @(posedge vif.clk);
                if (vif.rst_n && vif.awvalid && vif.awready &&
                    vif.wvalid && vif.wready) begin
                    txn = axi_lite_seq_item::type_id::create("wr_txn");
                    txn.rw   = 1;
                    txn.addr = vif.awaddr;
                    txn.data = vif.wdata;
                    txn.strb = vif.wstrb;
                    // Yanitini bekle
                    wait_for_bresp(txn);
                    item_collected_port.write(txn);
                    `uvm_info("MON", $sformatf("WR addr=0x%08h data=0x%08h resp=%0d",
                              txn.addr, txn.data, txn.resp), UVM_HIGH)
                end
            end
        endtask

        task wait_for_bresp(axi_lite_seq_item txn);
            int timeout = 0;
            while (!(vif.bvalid && vif.bready) && timeout < 100) begin
                @(posedge vif.clk);
                timeout++;
            end
            txn.resp = vif.bresp;
        endtask

        // Read transaction yakalama
        task monitor_reads();
            axi_lite_seq_item txn;
            forever begin
                @(posedge vif.clk);
                if (vif.rst_n && vif.arvalid && vif.arready) begin
                    txn = axi_lite_seq_item::type_id::create("rd_txn");
                    txn.rw   = 0;
                    txn.addr = vif.araddr;
                    // Veri yanitini bekle
                    wait_for_rdata(txn);
                    item_collected_port.write(txn);
                    `uvm_info("MON", $sformatf("RD addr=0x%08h rdata=0x%08h resp=%0d",
                              txn.addr, txn.rdata, txn.resp), UVM_HIGH)
                end
            end
        endtask

        task wait_for_rdata(axi_lite_seq_item txn);
            int timeout = 0;
            while (!(vif.rvalid && vif.rready) && timeout < 100) begin
                @(posedge vif.clk);
                timeout++;
            end
            txn.rdata = vif.rdata;
            txn.resp  = vif.rresp;
        endtask

        // AXI-Lite protokol check
        task protocol_check();
            bit prev_awvalid, prev_wvalid, prev_bvalid;
            bit prev_arvalid, prev_rvalid;
            bit prev_awready, prev_wready, prev_arready;
            bit prev_bready, prev_rready;

            forever begin
                @(posedge vif.clk);
                if (vif.rst_n) begin
                    // AWVALID handshake olmadan dusmemeli
                    if (prev_awvalid && !prev_awready) begin
                        check_count++;
                        if (!vif.awvalid) begin
                            fail_count++;
                            `uvm_error("PROTO", "AW1: AWVALID handshake olmadan dustu")
                        end else
                            pass_count++;
                    end
                    // WVALID handshake olmadan dusmemeli
                    if (prev_wvalid && !prev_wready) begin
                        check_count++;
                        if (!vif.wvalid) begin
                            fail_count++;
                            `uvm_error("PROTO", "W1: WVALID handshake olmadan dustu")
                        end else
                            pass_count++;
                    end
                    // BVALID handshake olmadan dusmemeli
                    if (prev_bvalid && !prev_bready) begin
                        check_count++;
                        if (!vif.bvalid) begin
                            fail_count++;
                            `uvm_error("PROTO", "B1: BVALID handshake olmadan dustu")
                        end else
                            pass_count++;
                    end
                    // ARVALID handshake olmadan dusmemeli
                    if (prev_arvalid && !prev_arready) begin
                        check_count++;
                        if (!vif.arvalid) begin
                            fail_count++;
                            `uvm_error("PROTO", "AR1: ARVALID handshake olmadan dustu")
                        end else
                            pass_count++;
                    end
                    // RVALID handshake olmadan dusmemeli
                    if (prev_rvalid && !prev_rready) begin
                        check_count++;
                        if (!vif.rvalid) begin
                            fail_count++;
                            `uvm_error("PROTO", "R1: RVALID handshake olmadan dustu")
                        end else
                            pass_count++;
                    end
                end
                prev_awvalid = vif.awvalid; prev_awready = vif.awready;
                prev_wvalid  = vif.wvalid;  prev_wready  = vif.wready;
                prev_bvalid  = vif.bvalid;  prev_bready  = vif.bready;
                prev_arvalid = vif.arvalid; prev_arready = vif.arready;
                prev_rvalid  = vif.rvalid;  prev_rready  = vif.rready;
            end
        endtask

        function void report_phase(uvm_phase phase);
            `uvm_info("PROTO_RPT", $sformatf(
                "Protocol Check: %0d kontrol, %0d PASS, %0d FAIL",
                check_count, pass_count, fail_count), UVM_LOW)
            if (fail_count > 0)
                `uvm_error("PROTO_RPT", "PROTOKOL IHLALI TESPIT EDILDI")
            else
                `uvm_info("PROTO_RPT", "PROTOKOL UYUMLU", UVM_LOW)
        endfunction

    endclass

    // Driver: active modda AXI-Lite transaction surer
    class axi_lite_driver extends uvm_driver #(axi_lite_seq_item);
        `uvm_component_utils(axi_lite_driver)

        virtual axi_lite_if vif;

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            if (!uvm_config_db #(virtual axi_lite_if)::get(this, "", "vif", vif))
                `uvm_fatal("NOVIF", "Virtual interface bulunamadi")
        endfunction

        task run_phase(uvm_phase phase);
            axi_lite_seq_item req;
            reset_signals();
            forever begin
                seq_item_port.get_next_item(req);
                if (req.rw)
                    drive_write(req);
                else
                    drive_read(req);
                seq_item_port.item_done();
            end
        endtask

        task reset_signals();
            vif.awvalid <= 0; vif.wvalid <= 0; vif.bready <= 0;
            vif.arvalid <= 0; vif.rready <= 0;
            vif.awaddr  <= 0; vif.wdata  <= 0; vif.wstrb  <= 0;
            vif.araddr  <= 0;
            @(posedge vif.rst_n);
            @(posedge vif.clk);
            `uvm_info("DRV", "Reset tamamlandi", UVM_MEDIUM)
        endtask

        task drive_write(axi_lite_seq_item txn);
            // AW + W ayni anda (GPIO boyle bekliyor)
            @(posedge vif.clk);
            vif.awaddr  <= txn.addr;
            vif.awvalid <= 1;
            vif.wdata   <= txn.data;
            vif.wstrb   <= txn.strb;
            vif.wvalid  <= 1;
            vif.bready  <= 1;

            // Handshake bekle
            @(posedge vif.clk);
            while (!(vif.awready && vif.wready)) @(posedge vif.clk);
            vif.awvalid <= 0;
            vif.wvalid  <= 0;

            // Write yanitini bekle
            while (!vif.bvalid) @(posedge vif.clk);
            txn.resp = vif.bresp;
            vif.bready <= 0;

            `uvm_info("DRV", $sformatf("WR: addr=0x%08h data=0x%08h",
                      txn.addr, txn.data), UVM_HIGH)
        endtask

        task drive_read(axi_lite_seq_item txn);
            @(posedge vif.clk);
            vif.araddr  <= txn.addr;
            vif.arvalid <= 1;
            vif.rready  <= 1;

            // AR handshake bekle
            @(posedge vif.clk);
            while (!vif.arready) @(posedge vif.clk);
            vif.arvalid <= 0;

            // Read datayi bekle
            while (!vif.rvalid) @(posedge vif.clk);
            txn.rdata = vif.rdata;
            txn.resp  = vif.rresp;
            vif.rready <= 0;

            `uvm_info("DRV", $sformatf("RD: addr=0x%08h rdata=0x%08h",
                      txn.addr, txn.rdata), UVM_HIGH)
        endtask

    endclass

    // Sequencer
    typedef uvm_sequencer #(axi_lite_seq_item) axi_lite_sequencer;

    // Agent: active/passive mod
    class axi_lite_agent extends uvm_agent;
        `uvm_component_utils(axi_lite_agent)

        axi_lite_monitor  monitor;
        axi_lite_driver   driver;
        axi_lite_sequencer sequencer;

        uvm_analysis_port #(axi_lite_seq_item) ap;

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            monitor = axi_lite_monitor::type_id::create("monitor", this);
            ap = new("ap", this);

            if (get_is_active() == UVM_ACTIVE) begin
                driver    = axi_lite_driver::type_id::create("driver", this);
                sequencer = axi_lite_sequencer::type_id::create("sequencer", this);
                `uvm_info("AGT", "ACTIVE mod — driver + sequencer olusturuldu", UVM_MEDIUM)
            end else begin
                `uvm_info("AGT", "PASSIVE mod — sadece monitor", UVM_MEDIUM)
            end
        endfunction

        function void connect_phase(uvm_phase phase);
            super.connect_phase(phase);
            monitor.item_collected_port.connect(ap);
            if (get_is_active() == UVM_ACTIVE)
                driver.seq_item_port.connect(sequencer.seq_item_export);
        endfunction

    endclass

    // Temel sequence
    class axi_lite_base_seq extends uvm_sequence #(axi_lite_seq_item);
        `uvm_object_utils(axi_lite_base_seq)
        function new(string name = "axi_lite_base_seq");
            super.new(name);
        endfunction
    endclass

    // Tek yazma
    class axi_lite_write_seq extends axi_lite_base_seq;
        `uvm_object_utils(axi_lite_write_seq)

        bit [31:0] wr_addr;
        bit [31:0] wr_data;

        function new(string name = "axi_lite_write_seq");
            super.new(name);
        endfunction

        task body();
            axi_lite_seq_item txn;
            txn = axi_lite_seq_item::type_id::create("wr_txn");
            start_item(txn);
            txn.rw   = 1;
            txn.addr = wr_addr;
            txn.data = wr_data;
            txn.strb = 4'b1111;
            finish_item(txn);
        endtask
    endclass

    // Tek okuma
    class axi_lite_read_seq extends axi_lite_base_seq;
        `uvm_object_utils(axi_lite_read_seq)

        bit [31:0] rd_addr;
        bit [31:0] rd_data;  // cikis

        function new(string name = "axi_lite_read_seq");
            super.new(name);
        endfunction

        task body();
            axi_lite_seq_item txn;
            txn = axi_lite_seq_item::type_id::create("rd_txn");
            start_item(txn);
            txn.rw   = 0;
            txn.addr = rd_addr;
            finish_item(txn);
            rd_data = txn.rdata;
        endtask
    endclass

    // Constrained random R/W
    class axi_lite_random_seq extends axi_lite_base_seq;
        `uvm_object_utils(axi_lite_random_seq)

        int num_txns = 20;

        function new(string name = "axi_lite_random_seq");
            super.new(name);
        endfunction

        task body();
            axi_lite_seq_item txn;
            for (int i = 0; i < num_txns; i++) begin
                txn = axi_lite_seq_item::type_id::create($sformatf("txn_%0d", i));
                start_item(txn);
                if (!txn.randomize() with {
                    addr inside {32'h00, 32'h04};
                }) begin
                    // Kisitli randomize() calisma aninda SMT cozucuyle (z3) cozulur; cozucu PATH'te
                    // yoksa randomize() 0 doner. Eskiden burada uyari basilip sabit
                    // desene dusuluyordu ve test yine PASS veriyordu - "constrained-random"
                    // iddiasi sessizce yonlu teste donusuyordu. Artik hata: test FAIL olur.
                    `uvm_error("SEQ", "Randomization basarisiz (SMT cozucu z3 PATH'te mi?) - constrained-random kosmadi")
                    txn.addr = (i % 2 == 0) ? 32'h04 : 32'h00;
                    txn.data = i * 32'hDEAD;
                    txn.rw   = (i % 3 != 0) ? 1 : 0;
                    txn.strb = 4'b1111;
                end
                finish_item(txn);
                `uvm_info("SEQ", $sformatf("[%0d/%0d] %s addr=0x%02h data=0x%08h",
                    i+1, num_txns, txn.rw ? "WR" : "RD", txn.addr, txn.rw ? txn.data : txn.rdata), UVM_MEDIUM)
            end
        endtask
    endclass

    // Scoreboard: self-checking GPIO modeli
    class axi_lite_scoreboard extends uvm_scoreboard;
        `uvm_component_utils(axi_lite_scoreboard)

        uvm_analysis_imp #(axi_lite_seq_item, axi_lite_scoreboard) analysis_imp;

        // Dahili GPIO referans modeli
        bit [31:0] gpio_odr_model = 0;
        int match_count = 0;
        int mismatch_count = 0;
        int total_txns = 0;

        function new(string name, uvm_component parent);
            super.new(name, parent);
            analysis_imp = new("analysis_imp", this);
        endfunction

        function void write(axi_lite_seq_item txn);
            total_txns++;

            if (txn.rw) begin
                // ODR register'a yazma
                if (txn.addr[4:0] == 5'h04) begin
                    gpio_odr_model = {16'h0, txn.data[15:0]}; // ODR[15:0], ust 16 bit etkisiz
                    `uvm_info("SB", $sformatf("ODR modeli guncellendi: 0x%08h", gpio_odr_model), UVM_HIGH)
                end
                // Yazma yaniti OKAY olmali
                if (txn.resp == 2'b00)
                    match_count++;
                else begin
                    mismatch_count++;
                    `uvm_error("SB", $sformatf("Yazma yaniti OKAY degil: resp=%0d", txn.resp))
                end
            end else begin
                // ODR okunuyorsa model ile karsilastir
                if (txn.addr[4:0] == 5'h04) begin
                    if (txn.rdata == gpio_odr_model) begin
                        match_count++;
                        `uvm_info("SB", $sformatf("ODR okuma eslesti: 0x%08h", txn.rdata), UVM_HIGH)
                    end else begin
                        mismatch_count++;
                        `uvm_error("SB", $sformatf(
                            "ODR UYUMSUZ! beklenen=0x%08h gercek=0x%08h",
                            gpio_odr_model, txn.rdata))
                    end
                end else begin
                    // IDR okuma: model disi, sadece resp kontrolu
                    if (txn.resp == 2'b00)
                        match_count++;
                    else begin
                        mismatch_count++;
                        `uvm_error("SB", $sformatf("Okuma yaniti OKAY degil: resp=%0d", txn.resp))
                    end
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

    // Coverage
    class axi_lite_coverage extends uvm_subscriber #(axi_lite_seq_item);
        `uvm_component_utils(axi_lite_coverage)

        int wr_count = 0;
        int rd_count = 0;
        bit [31:0] addr_seen[$];

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        function void write(axi_lite_seq_item txn);
            if (txn.rw)
                wr_count++;
            else
                rd_count++;

            // Benzersiz adresleri takip et
            if (!(txn.addr inside {addr_seen}))
                addr_seen.push_back(txn.addr);
        endfunction

        function void report_phase(uvm_phase phase);
            `uvm_info("COV_RPT", $sformatf(
                "Coverage: %0d WR, %0d RD, %0d benzersiz adres",
                wr_count, rd_count, addr_seen.size()), UVM_LOW)
        endfunction

    endclass

    // Environment
    class soc_env extends uvm_env;
        `uvm_component_utils(soc_env)

        axi_lite_agent      agent;
        axi_lite_scoreboard scoreboard;
        axi_lite_coverage   coverage;

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            agent      = axi_lite_agent::type_id::create("agent", this);
            scoreboard = axi_lite_scoreboard::type_id::create("scoreboard", this);
            coverage   = axi_lite_coverage::type_id::create("coverage", this);
            `uvm_info("ENV", "Build tamamlandi", UVM_MEDIUM)
        endfunction

        function void connect_phase(uvm_phase phase);
            super.connect_phase(phase);
            agent.ap.connect(scoreboard.analysis_imp);
            agent.ap.connect(coverage.analysis_export);
            `uvm_info("ENV", "Connect tamamlandi", UVM_MEDIUM)
        endfunction

    endclass

    // Test siniflari

    // Base test
    class soc_base_test extends uvm_test;
        `uvm_component_utils(soc_base_test)

        soc_env env;

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            env = soc_env::type_id::create("env", this);
            // Active mod
            uvm_config_db #(uvm_active_passive_enum)::set(
                this, "env.agent", "is_active", UVM_ACTIVE);
        endfunction


    endclass

    // Directed write-read test
    class gpio_directed_test extends soc_base_test;
        `uvm_component_utils(gpio_directed_test)

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        task run_phase(uvm_phase phase);
            axi_lite_write_seq wr_seq;
            axi_lite_read_seq  rd_seq;

            phase.raise_objection(this, "gpio_directed_test");

            // ODR'ye yaz
            wr_seq = axi_lite_write_seq::type_id::create("wr_seq");
            wr_seq.wr_addr = 32'h04;
            wr_seq.wr_data = 32'h0000_CAFE;
            wr_seq.start(env.agent.sequencer);

            // ODR'den oku, ayni degeri bekle
            rd_seq = axi_lite_read_seq::type_id::create("rd_seq");
            rd_seq.rd_addr = 32'h04;
            rd_seq.start(env.agent.sequencer);

            // Ikinci yazma
            wr_seq = axi_lite_write_seq::type_id::create("wr_seq2");
            wr_seq.wr_addr = 32'h04;
            wr_seq.wr_data = 32'h0000_DEAD;
            wr_seq.start(env.agent.sequencer);

            // IDR oku (giris portu)
            rd_seq = axi_lite_read_seq::type_id::create("rd_seq2");
            rd_seq.rd_addr = 32'h00;
            rd_seq.start(env.agent.sequencer);

            // ODR tekrar oku
            rd_seq = axi_lite_read_seq::type_id::create("rd_seq3");
            rd_seq.rd_addr = 32'h04;
            rd_seq.start(env.agent.sequencer);

            #100;
            phase.drop_objection(this, "gpio_directed_test");
        endtask

    endclass

    // Random test
    class gpio_random_test extends soc_base_test;
        `uvm_component_utils(gpio_random_test)

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        task run_phase(uvm_phase phase);
            axi_lite_random_seq rnd_seq;

            phase.raise_objection(this, "gpio_random_test");

            rnd_seq = axi_lite_random_seq::type_id::create("rnd_seq");
            rnd_seq.num_txns = 50;
            rnd_seq.start(env.agent.sequencer);

            #100;
            phase.drop_objection(this, "gpio_random_test");
        endtask

    endclass

endpackage
