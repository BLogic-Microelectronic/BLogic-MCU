module axi_sram_wrapper #(
    parameter int unsigned AXI_ID_WIDTH   = 5,
    parameter int unsigned AXI_ADDR_WIDTH = 32,
    parameter int unsigned AXI_DATA_WIDTH = 32,
    parameter int unsigned SRAM_BYTES     = 8192,          // Varsayılan: 8 KB
    parameter string       INIT_FILE      = ""             // Hex dosya yolu ("" = sıfırla)
)(
    input  logic clk_i,
    input  logic rst_ni,

    // Crossbar'dan Gelen AXI Slave Portu
    AXI_BUS.Slave slv
);

    // ============================================================
    // 1. ADRES HESAPLAMA SABİTLERİ
    // ============================================================
    localparam int unsigned SRAM_WORDS   = SRAM_BYTES / 4;
    localparam int unsigned ADDR_LSB     = 2;                       // Byte→Word: alt 2 bit atla
    localparam int unsigned WORD_IDX_W   = $clog2(SRAM_WORDS);     // 8KB→11 bit, 30KB→13 bit
    localparam int unsigned ADDR_MSB     = ADDR_LSB + WORD_IDX_W - 1;

    // ============================================================
    // 2. HAFIZA (MEMORY) TANIMLAMASI
    // ============================================================
    logic [31:0] mem [0:SRAM_WORDS-1];

    // --- Memory Init (Simülasyon + FPGA) ---
    initial begin
        // Önce tüm belleği sıfırla (X propagation'ı önle)
        for (int i = 0; i < SRAM_WORDS; i++) begin
            mem[i] = 32'h0000_0000;
        end
        // Hex dosyası varsa yükle
        if (INIT_FILE != "") begin
            $readmemh(INIT_FILE, mem);
            $display("[SRAM_INIT %m] %s yuklendi, mem[0]=%08x mem[1]=%08x", INIT_FILE, mem[0], mem[1]);
        end
    end

    // ============================================================
    // 3. ADRES HESAPLAMA (Bit Maskeleme)
    // ============================================================
    // Crossbar tam adresi geçirir (örn: 0x0001_0004).
    // Sadece SRAM içindeki offset'i çıkarıyoruz:
    //   0x0001_0004 → bits[12:2] = 1 → mem[1]
    logic [WORD_IDX_W-1:0] wr_word_idx;
    logic [WORD_IDX_W-1:0] rd_word_idx;

    assign wr_word_idx = slv.aw_addr[ADDR_MSB:ADDR_LSB];
    assign rd_word_idx = slv.ar_addr[ADDR_MSB:ADDR_LSB];

    // ============================================================
    // 4. YAZMA (WRITE) KONTROLÜ
    // ============================================================
    logic write_en;
    assign write_en = slv.aw_valid && slv.w_valid && slv.aw_ready && slv.w_ready;

    // AW ve W kanalları: Yanıt kanalı boşsa veya tüketiliyorsa kabul et
    assign slv.aw_ready = !slv.b_valid || slv.b_ready;
    assign slv.w_ready  = !slv.b_valid || slv.b_ready;

    // Byte-enable maskelemeli yazma
    always_ff @(posedge clk_i) begin
        if (write_en) begin
            if (slv.w_strb[0]) mem[wr_word_idx][ 7: 0] <= slv.w_data[ 7: 0];
            if (slv.w_strb[1]) mem[wr_word_idx][15: 8] <= slv.w_data[15: 8];
            if (slv.w_strb[2]) mem[wr_word_idx][23:16] <= slv.w_data[23:16];
            if (slv.w_strb[3]) mem[wr_word_idx][31:24] <= slv.w_data[31:24];
        end
    end

    // Yazma Yanıtı (B Channel)
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            slv.b_valid <= 1'b0;
            slv.b_id    <= '0;
        end else if (write_en) begin
            slv.b_valid <= 1'b1;
            slv.b_id    <= slv.aw_id;
        end else if (slv.b_valid && slv.b_ready) begin
            slv.b_valid <= 1'b0;
        end
    end

    assign slv.b_resp = 2'b00;  // OKAY
    assign slv.b_user = '0;

    // ============================================================
    // 5. OKUMA (READ) KONTROLÜ
    // ============================================================
    logic read_en;
    assign read_en = slv.ar_valid && slv.ar_ready;

    assign slv.ar_ready = !slv.r_valid || slv.r_ready;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            slv.r_valid <= 1'b0;
            slv.r_id    <= '0;
            slv.r_data  <= '0;
        end else if (read_en) begin
            slv.r_valid <= 1'b1;
            slv.r_id    <= slv.ar_id;
            slv.r_data  <= mem[rd_word_idx];
        end else if (slv.r_valid && slv.r_ready) begin
            slv.r_valid <= 1'b0;
        end
    end

    assign slv.r_resp = 2'b00;  // OKAY
    assign slv.r_last = 1'b1;   // Tek beat (burst yok)
    assign slv.r_user = '0;

endmodule

