`timescale 1ns/1ps

// ============================================================
// BLogic AI Accelerator — Standalone TB
// ============================================================
// İskelet sırası:
//   A — boilerplate + AXI4 slave SRAM + sanity (DUT yok)        [v]
//   B — AXI-Lite master driver task'leri                         [v]
//   C — DUT instance + reset → STATUS oku                        [v]
//   D — preload + run_scenario("yes") + argmax karşılaştırma     [v]  <-- ŞU AN
//   E — tensor-level diff + 4 senaryo (bonus)
//
// Bu adımı yeşil yakarsak TEKNOFEST min ödül kriteri #4 kapanıyor:
//   "AI accelerator üzerinde en az 1 senaryo PASS."
// ============================================================

module ai_accel_tb;

  // -------------------------------------------------------------
  // Saat / reset
  // -------------------------------------------------------------
  logic clk   = 1'b0;
  logic rst_n = 1'b0;
  always #5 clk = ~clk;   // 100 MHz

  // -------------------------------------------------------------
  // AI SRAM modeli
  // -------------------------------------------------------------
  // RTL'de AI_SRAM_BASE = 0x0003_0000, 30 KB (7680 word).
  // TB'de 8K word (32 KB) — güvenli üst sınır.
  localparam logic [31:0] AI_SRAM_BASE = 32'h0003_0000;
  localparam int          AI_MEM_WORDS = 8192;
  logic [31:0] ai_mem [0:AI_MEM_WORDS-1];

  // Byte adresi → word indeksi
  function automatic int unsigned word_idx(input logic [31:0] byte_addr);
    return (byte_addr - AI_SRAM_BASE) >> 2;
  endfunction

  // -------------------------------------------------------------
  // AXI4 Master sinyalleri (DUT → TB SRAM)
  // -------------------------------------------------------------
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

  // -------------------------------------------------------------
  // AXI-Lite Slave (CSR) sinyalleri — TB master, DUT slave
  // -------------------------------------------------------------
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

  // -------------------------------------------------------------
  // IRQ / busy
  // -------------------------------------------------------------
  logic irq, busy;

  // -------------------------------------------------------------
  // DUT instance
  // -------------------------------------------------------------
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

  // -------------------------------------------------------------
  // AXI4 Slave SRAM FSM
  // -------------------------------------------------------------
  typedef enum logic [2:0] {
    S_IDLE, S_R_DRIVE, S_W_DATA, S_W_RESP
  } slv_state_t;
  slv_state_t slv;

  logic [31:0] saved_awaddr, saved_araddr;
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
    end else begin
      m_awready <= 1'b0;
      m_wready  <= 1'b0;
      m_arready <= 1'b0;

      unique case (slv)
        S_IDLE: begin
          if (m_arvalid) begin
            saved_araddr <= m_araddr;
            saved_arid   <= m_arid;
            m_arready    <= 1'b1;
            slv          <= S_R_DRIVE;
          end else if (m_awvalid) begin
            saved_awaddr <= m_awaddr;
            saved_awid   <= m_awid;
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

  // =============================================================
  // AXI-Lite master driver task'leri
  // =============================================================
  task automatic csr_write(input logic [4:0] addr, input logic [31:0] data);
    fork
      begin: aw_ph
        @(posedge clk);
        s_awaddr  <= {27'd0, addr};
        s_awvalid <= 1'b1;
        do @(posedge clk); while (!s_awready);
        s_awvalid <= 1'b0;
      end
      begin: w_ph
        @(posedge clk);
        s_wdata  <= data;
        s_wstrb  <= 4'hF;
        s_wvalid <= 1'b1;
        do @(posedge clk); while (!s_wready);
        s_wvalid <= 1'b0;
      end
    join
    s_bready <= 1'b1;
    do @(posedge clk); while (!s_bvalid);
    s_bready <= 1'b0;
  endtask

  task automatic csr_read(input logic [4:0] addr, output logic [31:0] data);
    @(posedge clk);
    s_araddr  <= {27'd0, addr};
    s_arvalid <= 1'b1;
    s_rready  <= 1'b1;
    do @(posedge clk); while (!s_arready);
    s_arvalid <= 1'b0;
    do @(posedge clk); while (!s_rvalid);
    data = s_rdata;
    @(posedge clk);
    s_rready <= 1'b0;
  endtask

  // =============================================================
  // ADIM D — Preload task'leri
  // =============================================================
  // Statik ağırlıkları yükle (her senaryoda aynı kalıyor, model
  // ağırlıkları konvolüsyon eğitiminden gelen sabit değerler).
  // $readmemh'in 3. ve 4. parametresi WORD indeksi, byte değil.
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

    $display("[PRELOAD] statik agirliklar yuklendi (conv_w@17A8, conv_bias@1BA8, fc_w@1BC8, fc_bias@5A48)");
  endtask

  // Senaryo-spesifik girişi yükle. INPUT bölgesi 0x0000 ofsetinden
  // başlar, 490 word (1960 byte) sürer. Verilator dinamik string
  // path kabul etmediği için case ile literal yol kullanıyoruz.
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
      default:   $fatal(1, "[PRELOAD] bilinmeyen senaryo: %s", scenario);
    endcase

    $display("[PRELOAD] %s input'u yüklendi (0x30000'den 1960 byte)",
             scenario);
  endtask

  // =============================================================
  // ADIM D — Golden referans okuyucu
  // =============================================================
  // output_<senaryo>.hex tek bir 32-bit word içerir; little-endian
  // sıralamada bu 4 INT8 byte fc_out[0..3]'tür ([silence, unknown,
  // yes, no]). Argmax indeksini hesapla.
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
      default:   $fatal(1, "[GOLDEN] bilinmeyen senaryo: %s", scenario);
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

    $display("[GOLDEN-%s] fc_out = [%0d, %0d, %0d, %0d] → argmax=%0d",
             scenario,
             $signed(b[0]), $signed(b[1]), $signed(b[2]), $signed(b[3]),
             argmax);
    return argmax;
  endfunction

  // =============================================================
  // ADIM D — Senaryo koştur
  // =============================================================
  // 1) Inputu yükle
  // 2) DATA_ADDR ve OUT_ADDR'ı yaz
  // 3) CTRL.START (=1) pulse'la
  // 4) IRQ'yu watchdog ile bekle
  // 5) STATUS[7:4] ve RESULT memory cell'inden argmax oku
  // 6) Golden output_*.hex argmax'ı ile karşılaştır
  task automatic run_scenario(input string scenario, output int local_errors);
    logic [31:0] st;
    logic [31:0] result_word;
    int unsigned rtl_argmax;
    int unsigned expected_argmax;
    int unsigned mem_argmax;
    bit irq_seen;

    local_errors = 0;

    $display("\n========== SENARYO: %s ==========", scenario);

    preload_input(scenario);

    // CSR setup
    csr_write(5'h08, AI_SRAM_BASE);                  // DATA_ADDR = 0x30000
    csr_write(5'h0C, AI_SRAM_BASE + 32'h5A58);       // OUT_ADDR  = 0x35A58

    // START pulse'u
    $display("[%s] CTRL.START yazılıyor...", scenario);
    csr_write(5'h00, 32'h0000_0001);

    // IRQ bekle — 10 ms watchdog
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
      $display("[%s] FAIL: IRQ 10ms içinde gelmedi (timeout)", scenario);
      local_errors++;
      return;
    end

    $display("[%s] IRQ alındı, sonuç okunuyor...", scenario);

    // STATUS oku — DONE=1, RESULT alanında argmax bekliyoruz
    csr_read(5'h04, st);
    $display("[%s] STATUS = 0x%08h (BUSY=%0d DONE=%0d RESULT=%0d)",
             scenario, st, st[0], st[1], st[7:4]);
    if (st[1] !== 1'b1) begin
      $display("[%s] FAIL: STATUS.DONE 1 değil", scenario);
      local_errors++;
    end
    rtl_argmax = st[7:4];

    // Belleğe yazılan RESULT word'ünü oku (cross-check)
    result_word = ai_mem[word_idx(AI_SRAM_BASE + 32'h5A58)];
    mem_argmax  = result_word[31:0] & 32'hFF;   // alt byte argmax indeksi
    $display("[%s] mem[0x35A58] = 0x%08h (argmax byte=%0d)",
             scenario, result_word, mem_argmax);

    if (mem_argmax !== rtl_argmax) begin
      $display("[%s] FAIL: STATUS.RESULT (%0d) ile mem.RESULT (%0d) uyuşmuyor",
               scenario, rtl_argmax, mem_argmax);
      local_errors++;
    end

    // Golden referans
    expected_argmax = read_expected_argmax(scenario);

    if (rtl_argmax === expected_argmax) begin
      $display("[%s] PASS: rtl_argmax=%0d, expected=%0d ✓",
               scenario, rtl_argmax, expected_argmax);
    end else begin
      $display("[%s] FAIL: rtl_argmax=%0d, expected=%0d ✗",
               scenario, rtl_argmax, expected_argmax);
      local_errors++;
    end

    // Conv katmanı tensor-level doğrulama (Adım E)
    begin
      int ce;
      verify_conv_out(scenario, ce);
      local_errors += ce;
    end

    // DONE bayrağını CLEAR_DONE ile temizle (sonraki senaryoya hazır)
    csr_write(5'h00, 32'h0000_0002);
  endtask

  // =============================================================
  // ADIM E — conv_out tensor-level diff
  // =============================================================
  // DUT conv katmanı çıkışını AI SRAM'e (CONV_OUT_OFF=0x07A8, 1000 word)
  // yazar. Golden conv_out_<senaryo>.hex ile word-word karşılaştır.
  // Argmax'tan çok daha güçlü: ara tensörün her byte'ı doğru olmalı.
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
      default:   $fatal(1, "[CONVDIFF] bilinmeyen senaryo: %s", scenario);
    endcase

    base = word_idx(AI_SRAM_BASE + 32'h07A8);
    for (int i = 0; i < 1000; i++) begin
      got = ai_mem[base + i];
      if (got !== golden_conv[i]) begin
        conv_errors++;
        if (first_mismatch < 0) first_mismatch = i;
      end
    end

    if (conv_errors == 0)
      $display("[%s] CONV_OUT tensor diff: PASS (1000/1000 word eslesti)", scenario);
    else
      $display("[%s] CONV_OUT tensor diff: FAIL (%0d/1000 farkli, ilk fark word[%0d] got=0x%08h exp=0x%08h)",
               scenario, conv_errors, first_mismatch,
               ai_mem[base+first_mismatch], golden_conv[first_mismatch]);
  endtask

  // =============================================================
  // ADIM D — Hex preload spot check
  // =============================================================
  // weights_conv.hex'in ilk satırı "FF0CC8EF" idi. CONV_W ofsetinde
  // bu değeri bulamazsak ya yol yanlış ya da $readmemh sessiz hata
  // verdi. Erken yakala.
  task automatic verify_preload_spot_checks();
    logic [31:0] expected_first_conv_w  = 32'hFF0CC8EF;
    logic [31:0] expected_first_fc_w    = 32'hD2DE2523;
    logic [31:0] got;
    int          spot_err = 0;

    got = ai_mem[word_idx(AI_SRAM_BASE + 32'h17A8)];
    if (got !== expected_first_conv_w) begin
      $display("[SPOT] FAIL conv_w ilk word: got=0x%08h exp=0x%08h",
               got, expected_first_conv_w);
      spot_err++;
    end

    got = ai_mem[word_idx(AI_SRAM_BASE + 32'h1BC8)];
    if (got !== expected_first_fc_w) begin
      $display("[SPOT] FAIL fc_w ilk word: got=0x%08h exp=0x%08h",
               got, expected_first_fc_w);
      spot_err++;
    end

    if (spot_err == 0)
      $display("[SPOT] PASS preload spot-check'leri tutuyor");
    else
      $fatal(1, "[SPOT] Preload verisi yuklenememis, dosya yollarini kontrol et (repo kokunden mi calistiriyorsun?)");
  endtask

  // =============================================================
  // Ana akış
  // =============================================================
  int total_errors = 0;

  initial begin
    // TB master sinyallerini sıfırla
    s_awaddr  = 32'd0; s_awvalid = 1'b0;
    s_wdata   = 32'd0; s_wstrb   = 4'd0; s_wvalid  = 1'b0;
    s_bready  = 1'b0;
    s_araddr  = 32'd0; s_arvalid = 1'b0;
    s_rready  = 1'b0;

    // AI mem'i sıfırla
    for (int i = 0; i < AI_MEM_WORDS; i++) ai_mem[i] = 32'd0;

    // Reset
    rst_n = 1'b0;
    repeat (10) @(posedge clk);
    rst_n = 1'b1;
    repeat (5) @(posedge clk);

    $display("[INFO] Reset bitti, preload başlıyor...");

    // Statik ağırlıkları yükle ve spot-check
    preload_static_weights();
    verify_preload_spot_checks();

    // 4 senaryoyu sırayla koştur (Adım E)
    begin
      string scen [0:3];
      int e;
      scen[0] = "yes"; scen[1] = "no"; scen[2] = "unknown"; scen[3] = "silence";
      for (int s = 0; s < 4; s++) begin
        run_scenario(scen[s], e);
        total_errors += e;
      end
    end

    // Final
    if (total_errors == 0)
      $display("\n[ADIM E] PASS — 4/4 senaryo argmax + conv_out tensor diff TEMIZ. Min #4 fazlasiyla kapandi.\n");
    else
      $display("\n[ADIM E] FAIL: toplam %0d hata\n", total_errors);

    #100;
    $finish;
  end

  // Watchdog: tüm simülasyon en fazla 50 ms sürer (5M cycle @100MHz)
  initial begin
    #50_000_000;
    $display("[WATCHDOG] 50ms genel timeout, $finish");
    $finish;
  end

endmodule
