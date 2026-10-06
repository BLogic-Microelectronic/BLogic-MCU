// SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
// SPDX-License-Identifier: GPL-3.0-only
// Licensed under the GNU General Public License version 3 only.
// See the LICENSE file in the repository root for the full license text.

// ============================================
// Ostim BLogic Mikroelektronik
// ai_accel_tb.sv  -  AI hizlandirici test bench
// ============================================
`timescale 1ns/1ps

module ai_accel_tb;
  import tb_log_pkg::*;
  BusLog blog;                        // bus_trace.log, bus_summary.tsv
  longint unsigned mem_rd_n = 0, mem_wr_n = 0;   // accelerator accesses to the AI SRAM model

  // Saat / reset
  logic clk   = 1'b0;
  logic rst_n = 1'b0;
  always #5 clk = ~clk;   // 100 MHz

  // AI SRAM modeli. RTL'de 30 KB, TB'de 32 KB guvenli ust sinir.
  localparam logic [31:0] AI_SRAM_BASE = 32'h0003_0000;
  localparam int          AI_MEM_WORDS = 8192;
  logic [31:0] ai_mem [0:AI_MEM_WORDS-1];

  // Byte adresi -> word indeksi
  function automatic int unsigned word_idx(input logic [31:0] byte_addr);
    return (byte_addr - AI_SRAM_BASE) >> 2;
  endfunction

  // AXI4 Master sinyalleri (DUT -> TB SRAM)
  logic [ 3:0] m_awid;
  logic [31:0] m_awaddr;
  logic [ 7:0] m_awlen;
  logic [ 2:0] m_awsize;
  logic [ 1:0] m_awburst;
  logic        m_awvalid, m_awready;
  logic [31:0] m_wdata;
  logic [ 3:0] m_wstrb;
  logic        m_wlast, m_wvalid, m_wready;
  logic [ 3:0] m_bid;
  logic [ 1:0] m_bresp;
  logic        m_bvalid, m_bready;
  logic [ 3:0] m_arid;
  logic [31:0] m_araddr;
  logic [ 7:0] m_arlen;
  logic [ 2:0] m_arsize;
  logic [ 1:0] m_arburst;
  logic        m_arvalid, m_arready;
  logic [ 3:0] m_rid;
  logic [31:0] m_rdata;
  logic [ 1:0] m_rresp;
  logic        m_rlast, m_rvalid, m_rready;

  // AXI-Lite Slave (CSR) sinyalleri. TB master, DUT slave.
  logic [31:0] s_awaddr;
  logic        s_awvalid, s_awready;
  logic [31:0] s_wdata;
  logic [ 3:0] s_wstrb;
  logic        s_wvalid,  s_wready;
  logic [ 1:0] s_bresp;
  logic        s_bvalid,  s_bready;
  logic [31:0] s_araddr;
  logic        s_arvalid, s_arready;
  logic [31:0] s_rdata;
  logic [ 1:0] s_rresp;
  logic        s_rvalid,  s_rready;

  // IRQ / busy
  logic irq, busy;

  // DUT instance
  ai_accelerator #(
    .CONV_SHIFT(11),
    .FC_SHIFT  (11)
  ) dut (
    .clk_i  (clk),
    .rst_ni (rst_n),

    // AXI-Lite Slave (CSR)
    .s_axi_awaddr (s_awaddr),
    .s_axi_awvalid(s_awvalid),
    .s_axi_awready(s_awready),
    .s_axi_wdata  (s_wdata),
    .s_axi_wstrb  (s_wstrb),
    .s_axi_wvalid (s_wvalid),
    .s_axi_wready (s_wready),
    .s_axi_bresp  (s_bresp),
    .s_axi_bvalid (s_bvalid),
    .s_axi_bready (s_bready),
    .s_axi_araddr (s_araddr),
    .s_axi_arvalid(s_arvalid),
    .s_axi_arready(s_arready),
    .s_axi_rdata  (s_rdata),
    .s_axi_rresp  (s_rresp),
    .s_axi_rvalid (s_rvalid),
    .s_axi_rready (s_rready),

    // AXI4 Master (SRAM)
    .m_axi_awid   (m_awid),
    .m_axi_awaddr (m_awaddr),
    .m_axi_awlen  (m_awlen),
    .m_axi_awsize (m_awsize),
    .m_axi_awburst(m_awburst),
    .m_axi_awvalid(m_awvalid),
    .m_axi_awready(m_awready),
    .m_axi_wdata  (m_wdata),
    .m_axi_wstrb  (m_wstrb),
    .m_axi_wlast  (m_wlast),
    .m_axi_wvalid (m_wvalid),
    .m_axi_wready (m_wready),
    .m_axi_bid    (m_bid),
    .m_axi_bresp  (m_bresp),
    .m_axi_bvalid (m_bvalid),
    .m_axi_bready (m_bready),
    .m_axi_arid   (m_arid),
    .m_axi_araddr (m_araddr),
    .m_axi_arlen  (m_arlen),
    .m_axi_arsize (m_arsize),
    .m_axi_arburst(m_arburst),
    .m_axi_arvalid(m_arvalid),
    .m_axi_arready(m_arready),
    .m_axi_rid    (m_rid),
    .m_axi_rdata  (m_rdata),
    .m_axi_rresp  (m_rresp),
    .m_axi_rlast  (m_rlast),
    .m_axi_rvalid (m_rvalid),
    .m_axi_rready (m_rready),

    .busy_o(busy),
    .irq_o (irq)
  );

  // AXI4 Slave SRAM FSM
  typedef enum logic [2:0] {
    S_IDLE, S_R_DRIVE, S_W_DATA, S_W_RESP
  } slv_state_t;
  slv_state_t slv;

  logic [31:0] saved_awaddr, saved_araddr;
  // Performans olcumu: ilk okuma -> son yazma penceresi.
  // perf_armed task'tan, zaman damgalari FF'den yazilir (tek surucu).
  bit          perf_armed = 1'b0;
  int unsigned perf_cyc;
  int unsigned perf_t_start;
  logic        perf_first_seen;
  int unsigned perf_t_first, perf_t_last;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) perf_cyc <= 0;
    else        perf_cyc <= perf_cyc + 1;
  end

  logic [ 3:0] saved_awid,   saved_arid;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      slv       <= S_IDLE;
      m_awready <= 1'b0;
      m_wready  <= 1'b0;
      m_bvalid  <= 1'b0;
      m_bresp   <= 2'b00;
      m_bid     <= 4'd0;
      m_arready <= 1'b0;
      m_rvalid  <= 1'b0;
      m_rresp   <= 2'b00;
      m_rlast   <= 1'b0;
      m_rid     <= 4'd0;
      m_rdata   <= 32'd0;
      perf_first_seen <= 1'b0;
    end else begin
      if (!perf_armed) perf_first_seen <= 1'b0;
      m_awready <= 1'b0;
      m_wready  <= 1'b0;
      m_arready <= 1'b0;

      unique case (slv)
        S_IDLE: begin
          if (m_arvalid) begin
            saved_araddr <= m_araddr;
            if (perf_armed && !perf_first_seen) begin
              perf_first_seen <= 1'b1;
              perf_t_first    <= perf_cyc;
            end
            saved_arid   <= m_arid;
            mem_rd_n     <= mem_rd_n + 1;
            m_arready    <= 1'b1;
            slv          <= S_R_DRIVE;
          end else if (m_awvalid) begin
            saved_awaddr <= m_awaddr;
            saved_awid   <= m_awid;
            mem_wr_n     <= mem_wr_n + 1;
            m_awready    <= 1'b1;
            slv          <= S_W_DATA;
          end
        end
        S_R_DRIVE: begin
          m_rdata  <= ai_mem[word_idx(saved_araddr)];
          m_rid    <= saved_arid;
          m_rresp  <= 2'b00;
          m_rlast  <= 1'b1;
          m_rvalid <= 1'b1;
          if (m_rvalid && m_rready) begin
            m_rvalid <= 1'b0;
            m_rlast  <= 1'b0;
            slv      <= S_IDLE;
          end
        end
        S_W_DATA: begin
          if (m_wvalid) begin
            int unsigned idx;
            idx = word_idx(saved_awaddr);
            if (m_wstrb[0]) ai_mem[idx][ 7: 0] <= m_wdata[ 7: 0];
            if (m_wstrb[1]) ai_mem[idx][15: 8] <= m_wdata[15: 8];
            if (m_wstrb[2]) ai_mem[idx][23:16] <= m_wdata[23:16];
            if (m_wstrb[3]) ai_mem[idx][31:24] <= m_wdata[31:24];
            if (perf_armed) perf_t_last <= perf_cyc;
            m_wready <= 1'b1;
            slv      <= S_W_RESP;
          end
        end
        S_W_RESP: begin
          m_bid    <= saved_awid;
          m_bresp  <= 2'b00;
          m_bvalid <= 1'b1;
          if (m_bvalid && m_bready) begin
            m_bvalid <= 1'b0;
            slv      <= S_IDLE;
          end
        end
        default: slv <= S_IDLE;
      endcase
    end
  end

  // AXI-Lite master driver task'leri
  // K14: DUT'un awready'si kayitli ve aw_en ARM cevriminde temizleniyor
  // (ai_accelerator.sv:907-916), yakalama bir sonraki kenarda awready && awvalid
  // istiyor (satir 919). Surme/birakma ve ornekleme negedge'e alindi; transfer
  // arada gecen posedge'de gerceklesir. RTL'e dokunulmadi.
  task automatic csr_write(input logic [4:0] addr, input logic [31:0] data);
    @(negedge clk);
    s_awaddr  <= {27'd0, addr};
    s_awvalid <= 1'b1;
    s_wdata   <= data;
    s_wstrb   <= 4'hF;
    s_wvalid  <= 1'b1;
    do @(negedge clk); while (!(s_awready && s_wready));
    @(posedge clk);
    @(negedge clk);
    s_awvalid <= 1'b0;
    s_wvalid  <= 1'b0;
    s_bready  <= 1'b1;
    while (!s_bvalid) @(negedge clk);
    blog.access(perf_cyc, 1'b1, 32'h4000_0600 + {27'd0, addr}, "", data, 4'hF, s_bresp);
    @(posedge clk);
    @(negedge clk);
    s_bready  <= 1'b0;
  endtask

  // K14: ayni yaris okuma yolunda da var.
  task automatic csr_read(input logic [4:0] addr, output logic [31:0] data);
    @(negedge clk);
    s_araddr  <= {27'd0, addr};
    s_arvalid <= 1'b1;
    s_rready  <= 1'b1;
    do @(negedge clk); while (!s_arready);
    @(posedge clk);
    @(negedge clk);
    s_arvalid <= 1'b0;
    while (!s_rvalid) @(negedge clk);
    data = s_rdata;
    blog.access(perf_cyc, 1'b0, 32'h4000_0600 + {27'd0, addr}, "", data, 4'hF, s_rresp);
    @(posedge clk);
    @(negedge clk);
    s_rready  <= 1'b0;
  endtask

  // Statik agirliklari yukle (her senaryoda ayni).
  // $readmemh'in son iki parametresi word indeksi, byte degil.
  task automatic preload_static_weights();
    int unsigned base;

    base = word_idx(AI_SRAM_BASE + 32'h17A8);   // CONV_W, 160 word
    $readmemh("sw/ai_model/golden_vectors/weights_conv.hex",
              ai_mem, base, base + 160 - 1);

    base = word_idx(AI_SRAM_BASE + 32'h1BA8);   // CONV_BIAS, 8 word
    $readmemh("sw/ai_model/golden_vectors/bias_conv.hex",
              ai_mem, base, base + 8 - 1);

    base = word_idx(AI_SRAM_BASE + 32'h1BC8);   // FC_W, 4000 word
    $readmemh("sw/ai_model/golden_vectors/weights_fc.hex",
              ai_mem, base, base + 4000 - 1);

    base = word_idx(AI_SRAM_BASE + 32'h5A48);   // FC_BIAS, 4 word
    $readmemh("sw/ai_model/golden_vectors/bias_fc.hex",
              ai_mem, base, base + 4 - 1);

    $display("[PRELOAD] static weights loaded (conv_w at 0x17A8, conv_bias at 0x1BA8, fc_w at 0x1BC8, fc_bias at 0x5A48)");
  endtask

  // Senaryo girisini yukle. 0x0000 ofsetinden 490 word.
  // NOT: Verilator dinamik string yol kabul etmiyor, case ile literal yol.
  task automatic preload_input(input string scenario);
    int unsigned base;
    base = word_idx(AI_SRAM_BASE + 32'h0000);

    case (scenario)
      "yes":     $readmemh("sw/ai_model/golden_vectors/input_yes.hex",
                           ai_mem, base, base + 490 - 1);
      "no":      $readmemh("sw/ai_model/golden_vectors/input_no.hex",
                           ai_mem, base, base + 490 - 1);
      "unknown": $readmemh("sw/ai_model/golden_vectors/input_unknown.hex",
                           ai_mem, base, base + 490 - 1);
      "silence": $readmemh("sw/ai_model/golden_vectors/input_silence.hex",
                           ai_mem, base, base + 490 - 1);
      // gercek 1 sn WAV kaynakli oznitelikler
      "yes_real": $readmemh("sw/ai_model/golden_vectors/input_yes_real.hex",
                           ai_mem, base, base + 490 - 1);
      "no_real":  $readmemh("sw/ai_model/golden_vectors/input_no_real.hex",
                           ai_mem, base, base + 490 - 1);
      default:   $fatal(1, "[PRELOAD] unknown scenario: %s", scenario);
    endcase

    $display("[PRELOAD] input of %s loaded (1960 bytes at 0x30000)",
             scenario);
  endtask

  // Golden referans okuyucu. output_*.hex tek word, little-endian
  // 4 INT8 bayt = fc_out[silence, unknown, yes, no]. Argmax'i dondur.
  function automatic int unsigned read_expected_argmax(input string scenario);
    logic [31:0] tmp_mem [0:0];
    logic signed [7:0] b [0:3];
    int unsigned argmax;
    logic signed [7:0] best;

    case (scenario)
      "yes":     $readmemh("sw/ai_model/golden_vectors/output_yes.hex",     tmp_mem);
      "no":      $readmemh("sw/ai_model/golden_vectors/output_no.hex",      tmp_mem);
      "unknown": $readmemh("sw/ai_model/golden_vectors/output_unknown.hex", tmp_mem);
      "silence": $readmemh("sw/ai_model/golden_vectors/output_silence.hex", tmp_mem);
      "yes_real": $readmemh("sw/ai_model/golden_vectors/output_yes_real.hex", tmp_mem);
      "no_real":  $readmemh("sw/ai_model/golden_vectors/output_no_real.hex",  tmp_mem);
      default:   $fatal(1, "[GOLDEN] unknown scenario: %s", scenario);
    endcase

    b[0] = tmp_mem[0][ 7: 0];   // silence
    b[1] = tmp_mem[0][15: 8];   // unknown
    b[2] = tmp_mem[0][23:16];   // yes
    b[3] = tmp_mem[0][31:24];   // no

    argmax = 0;
    best   = b[0];
    for (int i = 1; i < 4; i++) begin
      if ($signed(b[i]) > $signed(best)) begin
        best   = b[i];
        argmax = i;
      end
    end

    $display("[GOLDEN-%s] fc_out = [%0d, %0d, %0d, %0d], argmax=%0d",
             scenario,
             $signed(b[0]), $signed(b[1]), $signed(b[2]), $signed(b[3]),
             argmax);
    return argmax;
  endfunction

  // Senaryo kostur: input yukle, CSR kur, START, IRQ bekle,
  // argmax'i oku ve golden ile karsilastir.
  task automatic run_scenario(input string scenario, output int local_errors);
    logic [31:0] st;
    logic [31:0] result_word;
    int unsigned rtl_argmax;
    int unsigned expected_argmax;
    int unsigned mem_argmax;
    bit irq_seen;

    local_errors = 0;

    $display("\n========== SCENARIO: %s ==========", scenario);
    blog.note(perf_cyc, {"scenario ", scenario, ": load the input, set DATA_ADDR and OUT_ADDR, START, wait for the interrupt, compare"});

    preload_input(scenario);

    // CSR setup
    csr_write(5'h08, AI_SRAM_BASE);                  // DATA_ADDR = 0x30000
    csr_write(5'h0C, AI_SRAM_BASE + 32'h5A58);       // OUT_ADDR  = 0x35A58

    // olcum penceresini kur
    perf_t_start = perf_cyc;
    perf_armed   = 1'b1;

    // START pulse'u
    $display("[%s] writing CTRL.START", scenario);
    csr_write(5'h00, 32'h0000_0001);

    // IRQ bekle, 10 ms watchdog
    irq_seen = 1'b0;
    fork
      begin: wait_irq
        wait (irq == 1'b1);
        irq_seen = 1'b1;
      end
      begin: wait_timeout
        #10_000_000;   // 10 ms = 1M cycle @100MHz
      end
    join_any
    disable fork;

    if (!irq_seen) begin
      $display("[%s] FAIL: no interrupt within 10 ms (timeout)", scenario);
      blog.check(perf_cyc, {"[", scenario, "] interrupt within 10 ms of START"}, 1'b0);
      local_errors++;
      return;
    end

    $display("[%s] interrupt received, reading the result", scenario);
    blog.check(perf_cyc, {"[", scenario, "] interrupt within 10 ms of START"}, 1'b1);

    // STATUS oku, DONE=1 ve RESULT alaninda argmax bekliyoruz
    csr_read(5'h04, st);
    $display("[%s] STATUS = 0x%08h (BUSY=%0d DONE=%0d RESULT=%0d)",
             scenario, st, st[0], st[1], st[7:4]);
    blog.check(perf_cyc, {"[", scenario, "] STATUS.DONE is 1"}, st[1] === 1'b1, $sformatf("STATUS = 0x%08h", st));
    if (st[1] !== 1'b1) begin
      $display("[%s] FAIL: STATUS.DONE is not 1", scenario);
      local_errors++;
    end
    rtl_argmax = st[7:4];

    // perf penceresi raporu
    perf_armed = 1'b0;
    $display("[PERF-HW] %s: first read to last write = %0d cycles | START to this point = %0d cycles",
             scenario, perf_t_last - perf_t_first, perf_cyc - perf_t_start);

    // Bellege yazilan RESULT word'unu oku (cross-check)
    result_word = ai_mem[word_idx(AI_SRAM_BASE + 32'h5A58)];
    mem_argmax  = result_word[31:0] & 32'hFF;   // alt byte argmax indeksi
    $display("[%s] mem[0x35A58] = 0x%08h (argmax byte=%0d)",
             scenario, result_word, mem_argmax);

    blog.check(perf_cyc, {"[", scenario, "] class in STATUS.RESULT equals the class written to memory at OUT_ADDR"},
               mem_argmax === rtl_argmax, $sformatf("STATUS %0d, memory %0d", rtl_argmax, mem_argmax));
    if (mem_argmax !== rtl_argmax) begin
      $display("[%s] FAIL: STATUS.RESULT (%0d) and the result in memory (%0d) differ",
               scenario, rtl_argmax, mem_argmax);
      local_errors++;
    end

    // Golden referans
    expected_argmax = read_expected_argmax(scenario);

    blog.check(perf_cyc, {"[", scenario, "] class equals the golden reference"},
               rtl_argmax === expected_argmax, $sformatf("RTL %0d, expected %0d", rtl_argmax, expected_argmax));
    if (rtl_argmax === expected_argmax) begin
      $display("[%s] PASS: rtl_argmax=%0d, expected=%0d",
               scenario, rtl_argmax, expected_argmax);
    end else begin
      $display("[%s] FAIL: rtl_argmax=%0d, expected=%0d",
               scenario, rtl_argmax, expected_argmax);
      local_errors++;
    end

    // Conv katmani tensor-level dogrulama
    begin
      int ce;
      verify_conv_out(scenario, ce);
      local_errors += ce;
    end

    // DONE bayragini temizle
    csr_write(5'h00, 32'h0000_0002);
  endtask

  // conv_out tensor diff. DUT conv cikisini 0x07A8'e (1000 word)
  // yazar; golden conv_out_*.hex ile word-word karsilastir.
  task automatic verify_conv_out(input string scenario, output int conv_errors);
    logic [31:0] golden_conv [0:999];
    logic [31:0] got;
    int unsigned base;
    int          first_mismatch;
    conv_errors    = 0;
    first_mismatch = -1;

    case (scenario)
      "yes":     $readmemh("sw/ai_model/golden_vectors/conv_out_yes.hex",     golden_conv);
      "no":      $readmemh("sw/ai_model/golden_vectors/conv_out_no.hex",      golden_conv);
      "unknown": $readmemh("sw/ai_model/golden_vectors/conv_out_unknown.hex", golden_conv);
      "silence": $readmemh("sw/ai_model/golden_vectors/conv_out_silence.hex", golden_conv);
      "yes_real": $readmemh("sw/ai_model/golden_vectors/conv_out_yes_real.hex", golden_conv);
      "no_real":  $readmemh("sw/ai_model/golden_vectors/conv_out_no_real.hex",  golden_conv);
      default:   $fatal(1, "[CONVDIFF] unknown scenario: %s", scenario);
    endcase

    base = word_idx(AI_SRAM_BASE + 32'h07A8);
    for (int i = 0; i < 1000; i++) begin
      got = ai_mem[base + i];
      if (got !== golden_conv[i]) begin
        conv_errors++;
        if (first_mismatch < 0) first_mismatch = i;
      end
    end

    blog.check(perf_cyc, {"[", scenario, "] convolution output (1000 words at 0x307A8) equals the golden tensor"},
               conv_errors == 0, $sformatf("%0d of 1000 words differ", conv_errors));
    if (conv_errors == 0)
      $display("[%s] CONV_OUT tensor diff: PASS (1000 of 1000 words equal)", scenario);
    else
      $display("[%s] CONV_OUT tensor diff: FAIL (%0d of 1000 words differ, first at word[%0d] got=0x%08h exp=0x%08h)",
               scenario, conv_errors, first_mismatch,
               ai_mem[base+first_mismatch], golden_conv[first_mismatch]);
  endtask

  // Hex preload spot-check. Beklenen ilk word'leri bulamazsak
  // yol yanlis ya da $readmemh sessizce hata verdi; erken yakala.
  task automatic verify_preload_spot_checks();
    logic [31:0] expected_first_conv_w  = 32'h095C1EFA;
    logic [31:0] expected_first_fc_w    = 32'h0AFDF9FF;
    logic [31:0] got;
    int          spot_err = 0;

    got = ai_mem[word_idx(AI_SRAM_BASE + 32'h17A8)];
    if (got !== expected_first_conv_w) begin
      $display("[SPOT] FAIL first conv_w word: got=0x%08h exp=0x%08h",
               got, expected_first_conv_w);
      spot_err++;
    end

    got = ai_mem[word_idx(AI_SRAM_BASE + 32'h1BC8)];
    if (got !== expected_first_fc_w) begin
      $display("[SPOT] FAIL first fc_w word: got=0x%08h exp=0x%08h",
               got, expected_first_fc_w);
      spot_err++;
    end

    if (spot_err == 0) begin
      $display("[SPOT] PASS: the first weight words are where they should be");
      blog.check(perf_cyc, "weights loaded: first conv_w and fc_w words match the expected values", 1'b1);
    end else begin
      blog.fail(perf_cyc, "weights loaded: first conv_w and fc_w words match the expected values");
      $fatal(1, "[SPOT] The weight files were not loaded; check the file paths (the simulation must run from the repository root)");
    end
  endtask

  // Dogruluk penceresi: SW(tflite) vs RTL toplu kosu.
  // run_accuracy_window.py 40 ornek uretir; SW argmax'i
  // acc_batch_expected.hex word'lerinden gelir. Dosyalar yoksa atlanir.
  parameter  int BATCH_N = 40;   // K3: -GBATCH_N=1000 ile buyutulur
  parameter  longint SIM_TIMEOUT_MS = 250;   // 64-bit sart: ms*1e6 ns 32-bit'e sigmiyor  // K3: buyuk batch icin -GSIM_TIMEOUT_MS ile artirilir
  localparam int BATCH_W = 490;

  logic [31:0] batch_inputs   [0:BATCH_N*BATCH_W-1];
  logic [31:0] batch_expected [0:BATCH_N-1];

  function automatic int unsigned argmax_of_word(input logic [31:0] w);
    logic signed [7:0] b [0:3];
    int unsigned am;
    logic signed [7:0] best;
    b[0] = w[ 7: 0]; b[1] = w[15: 8]; b[2] = w[23:16]; b[3] = w[31:24];
    am = 0; best = b[0];
    for (int i = 1; i < 4; i++)
      if ($signed(b[i]) > $signed(best)) begin best = b[i]; am = i; end
    return am;
  endfunction

  task automatic run_accuracy_batch(output int batch_errors);
    int fd_i, fd_e;
    int unsigned in_base;
    logic [31:0] st;
    int unsigned sw_am, rtl_am;
    int match_cnt;
    bit irq_seen;

    batch_errors = 0;
    fd_i = $fopen("sw/ai_model/golden_vectors/acc_batch_inputs.hex", "r");
    fd_e = $fopen("sw/ai_model/golden_vectors/acc_batch_expected.hex", "r");
    if (fd_i == 0 || fd_e == 0) begin
      if (fd_i != 0) $fclose(fd_i);
      if (fd_e != 0) $fclose(fd_e);
      $display("\n[BATCH] skipped: acc_batch_*.hex not found; run python3 sw/ai_model/run_accuracy_window.py first");
      return;
    end
    $fclose(fd_i);
    $fclose(fd_e);
    $readmemh("sw/ai_model/golden_vectors/acc_batch_inputs.hex",   batch_inputs);
    $readmemh("sw/ai_model/golden_vectors/acc_batch_expected.hex", batch_expected);

    $display("\n[BATCH] STEP F: %0d samples, RTL against the software (TFLite) reference", BATCH_N);
    blog.note(perf_cyc, $sformatf("accuracy batch: %0d samples, RTL class against the TFLite reference class", BATCH_N));
    in_base   = word_idx(AI_SRAM_BASE + 32'h0000);
    match_cnt = 0;

    for (int i = 0; i < BATCH_N; i++) begin
      for (int k = 0; k < BATCH_W; k++)
        ai_mem[in_base + k] = batch_inputs[i*BATCH_W + k];

      csr_write(5'h08, AI_SRAM_BASE);                  // DATA_ADDR
      csr_write(5'h0C, AI_SRAM_BASE + 32'h5A58);       // OUT_ADDR
      csr_write(5'h00, 32'h0000_0001);                 // START

      irq_seen = 1'b0;
      fork
        begin
          wait (irq == 1'b1);
          irq_seen = 1'b1;
        end
        begin
          #10_000_000;   // 10 ms watchdog
        end
      join_any
      disable fork;

      if (!irq_seen) begin
        $display("[BATCH-%0d] FAIL: IRQ timeout", i);
        blog.check(perf_cyc, $sformatf("[batch %0d] interrupt within 10 ms of START", i), 1'b0);
        batch_errors++;
        continue;
      end

      csr_read(5'h04, st);
      rtl_am = st[7:4];
      sw_am  = argmax_of_word(batch_expected[i]);

      if (rtl_am == sw_am) begin
        match_cnt++;
        $display("[BATCH-%0d] sw=%0d rtl=%0d OK", i, sw_am, rtl_am);
        blog.check(perf_cyc, $sformatf("[batch %0d] RTL class equals the software class", i), 1'b1, $sformatf("class %0d", rtl_am));
      end else begin
        batch_errors++;
        $display("[BATCH-%0d] sw=%0d rtl=%0d DIFF", i, sw_am, rtl_am);
        blog.check(perf_cyc, $sformatf("[batch %0d] RTL class equals the software class", i), 1'b0, $sformatf("software %0d, RTL %0d", sw_am, rtl_am));
      end

      csr_write(5'h00, 32'h0000_0002);                 // DONE clear
    end

    $display("[BATCH] class match: %0d/%0d", match_cnt, BATCH_N);
    if (match_cnt == BATCH_N)
      $display("[BATCH] PASS: |accuracy SW - accuracy RTL| = 0 points, limit 10 points (EK-1 window)");
    else
      $display("[BATCH] WARNING: %0d samples differ; upper bound of the accuracy difference %0d/%0d",
               BATCH_N - match_cnt, BATCH_N - match_cnt, BATCH_N);
  endtask

  int total_errors = 0;

  initial begin
    // TB master sinyallerini sifirla
    s_awaddr  = 32'd0; s_awvalid = 1'b0;
    s_wdata   = 32'd0; s_wstrb   = 4'd0; s_wvalid  = 1'b0;
    s_bready  = 1'b0;
    s_araddr  = 32'd0; s_arvalid = 1'b0;
    s_rready  = 1'b0;

    // AI mem'i sifirla
    for (int i = 0; i < AI_MEM_WORDS; i++) ai_mem[i] = 32'd0;

    // Reset
    rst_n = 1'b0;
    repeat (10) @(posedge clk);
    rst_n = 1'b1;
    repeat (5) @(posedge clk);

    begin
      string pfx;
      pfx = "";
      void'($value$plusargs("LOGDIR=%s", pfx));
      blog = new(pfx, "ai_accel_tb register accesses (make ai)",
                 "testbench AXI-Lite master -> ai_accelerator CSRs (shown at their SoC addresses 0x4000_06xx); accelerator AXI4 master -> AI SRAM model (counted only)",
                 "cycle");
    end
    $display("[INFO] Reset done, loading the weights");

    // Statik agirliklari yukle ve spot-check
    preload_static_weights();
    verify_preload_spot_checks();

    // senaryolari sirayla kostur
    begin
      string scen [0:5];
      int e;
      // gercek ses oznitelikleri once, sentetikler sonra
      scen[0] = "yes_real"; scen[1] = "no_real";
      scen[2] = "yes"; scen[3] = "no"; scen[4] = "unknown"; scen[5] = "silence";
      for (int s = 0; s < 6; s++) begin
        run_scenario(scen[s], e);
        total_errors += e;
      end
    end

    // dogruluk penceresi batch'i (dosyalar varsa)
    begin
      int be;
      run_accuracy_batch(be);
      total_errors += be;
    end

    blog.summary_line("", "");
    blog.summary_line($sformatf("Accelerator accesses to the AI SRAM model: %0d reads, %0d writes", mem_rd_n, mem_wr_n),
                      $sformatf("mem\tAI SRAM (accelerator AXI4 master)\t%0d\t%0d", mem_rd_n, mem_wr_n));
    blog.close();
    if (total_errors == 0)
      $display("\n[STEP E] PASS: 6 of 6 scenarios (2 recorded audio inputs, 4 synthetic); class and convolution output tensor identical to the reference. Closes minimum requirement 4 and the EK-3 AI test.\n");
    else
      $display("\n[STEP E] FAIL: %0d errors in total\n", total_errors);

    #100;
    $finish;
  end

  // Genel watchdog: tum simulasyon en fazla 250 ms surer
  initial begin
    #(SIM_TIMEOUT_MS * 64'd1_000_000);
    $display("[WATCHDOG] overall timeout of %0d ms: THE SIMULATION DID NOT FINISH", SIM_TIMEOUT_MS);
    blog.fail(perf_cyc, $sformatf("simulation finished within %0d ms", SIM_TIMEOUT_MS));
    $fatal(1, "[WATCHDOG] overall timeout");
    $finish;
  end

endmodule
