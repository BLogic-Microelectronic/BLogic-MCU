module axi_sram_wrapper #(
    parameter int unsigned AXI_ID_WIDTH   = 5,
    parameter int unsigned AXI_ADDR_WIDTH = 32,
    parameter int unsigned AXI_DATA_WIDTH = 32,
    parameter int unsigned SRAM_BYTES     = 8192,          // Varsayılan: 8 KB
    parameter string       INIT_FILE      = "",            // Hex dosya yolu ("" = sıfırla)
    // Okuma verisini bir cevrim kaydet. sky130 SRAM makrosunun dout'u DUSEN
    // kenarda gecerli oldugu icin tuketiciye yarim cevrim kaliyor; bu yazmac
    // pencereyi ikiye ayirir. Bedeli +1 cevrim gecikme ve yarim okuma verimi,
    // o yuzden VARSAYILAN KAPALI - ayrinti asagida, 5. bolum.
    parameter bit          REG_RDATA      = 1'b0
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
`ifndef ASIC_SRAM_MACRO
    // Davranissal bellek: simulasyon ve FPGA yolu
    logic [31:0] mem [0:SRAM_WORDS-1];

    // --- Memory Init (Simülasyon + FPGA) ---
    // ASIC sentezinde bu blok yoktur: yukaridaki `ifndef ASIC_SRAM_MACRO
    // zaten dislar (ASIC'te icerik SRAM makrolarina bootloader ile yuklenir).
    //
    // DIKKAT: Burada `ifndef SYNTHESIS KULLANILMAZ. Vivado sentezi SYNTHESIS
    // makrosunu kendisi tanimlar; o koruma bu blogu FPGA sentezinden de
    // disliyordu ve bitstream'deki tum BRAM'ler sifir kaliyordu (instr/data
    // SRAM + AI agirliklari). Sonuc: kartta CPU 0x10000'den sifir getirip
    // hicbir sey yapmiyordu, UART sessiz kaliyordu. $readmemh'in initial
    // blogunda BRAM INIT'i uretmesi Vivado'nun desteklenen yontemidir (UG901).
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
`endif

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

    logic read_en;
    assign read_en = slv.ar_valid && slv.ar_ready;

    // AW ve W kanalları: Yanıt kanalı boşsa veya tüketiliyorsa kabul et
    assign slv.aw_ready = !slv.b_valid || slv.b_ready;
    assign slv.w_ready  = !slv.b_valid || slv.b_ready;

    // Okuma verisi kaynagi: iki yolda register'in yeri farklidir.
    //   davranissal -> kombinasyonel dizi okumasi disarida kaydedilir
    //   makro       -> adres iceride kaydedilir, dout bir cevrim sonra gecerli
    logic [31:0] rdata_src;

`ifndef ASIC_SRAM_MACRO
    // Byte-enable maskelemeli yazma (davranissal)
    always_ff @(posedge clk_i) begin
        if (write_en) begin
            if (slv.w_strb[0]) mem[wr_word_idx][ 7: 0] <= slv.w_data[ 7: 0];
            if (slv.w_strb[1]) mem[wr_word_idx][15: 8] <= slv.w_data[15: 8];
            if (slv.w_strb[2]) mem[wr_word_idx][23:16] <= slv.w_data[23:16];
            if (slv.w_strb[3]) mem[wr_word_idx][31:24] <= slv.w_data[31:24];
        end
    end

    logic [31:0] rdata_q;
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni)      rdata_q <= 32'h0;
        else if (read_en) rdata_q <= mem[rd_word_idx];
    end
    assign rdata_src = rdata_q;
`else
    // ASIC yolu: sky130 SRAM makro bankasi (512-word bankalar)
    sram_macro_bank #(.WORDS(SRAM_WORDS)) u_sram (
        .clk_i   (clk_i),
        .we_i    (write_en),
        .waddr_i (wr_word_idx),
        .wmask_i (slv.w_strb),
        .wdata_i (slv.w_data),
        .re_i    (read_en),
        .raddr_i (rd_word_idx),
        .rdata_o (rdata_src)
    );
`endif

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
    //
    // REG_RDATA = 0 : okuma verisi dogrudan surulur (varsayilan, eski davranis)
    // REG_RDATA = 1 : okuma verisi bir cevrim KAYDEDILIR
    //
    // NEDEN (6 Agustos 2026, "C kohortu"):
    // sky130 SRAM makrosunun .lib'inde her iki okuma portu da dusen kenarda:
    //   bus(dout0) -> related_pin "clk0", timing_type falling_edge
    //   bus(dout1) -> related_pin "clk1", timing_type falling_edge
    // Yani okuma verisi cevrimin ORTASINDA gecerli oluyor ve tuketiciye
    // periyodun sadece YARISI kaliyor. 20 ns periyotta butce 10 ns; olculen
    // ihtiyac 13,1 ns (ILK kosusu, yolda short yok) -> slack -3,094 ns ve
    // 888 ihlal. Makronun kendi erisimi 0,383-0,529 ns, yani SRAM yavas degil;
    // sorun tamamen kenar secimi.
    //
    // Bu yazmac pencereyi ikiye ayirir:
    //   makro dout -> yazmac : yarim cevrim (erisim 0,53 ns, bol bol yeter)
    //   yazmac     -> tuketici: TAM cevrim
    //
    // BEDELI: okuma gecikmesi +1 cevrim ve ar_ready bir cevrim bloke edildigi
    // icin okuma verimi 1/cevrim -> 1/2 cevrim. Bu yuzden VARSAYILAN KAPALI;
    // yalnizca AI SRAM ornek(ler)inde acilir (soc_top.sv). Buyruk/veri SRAM'i
    // acilirsa CPU'nun her getirmesi yavaslar - bilerek disarida birakildi.
    //
    // DIKKAT: r_data kaydirilirsa r_valid de AYNI miktarda kaydirilmali,
    // yoksa tuketici veriyi bir cevrim erken orneklerdi.

    logic                    rvalid_set;  // r_valid'i kuran olay
    logic [31:0]             rdata_out;   // tuketiciye giden okuma verisi
    logic [AXI_ID_WIDTH-1:0] rid_next;    // r_valid ile birlikte yazilan ID

    generate
    if (REG_RDATA) begin : g_reg_rdata
        // Makro cikisi yukselen kenarda kaydedilir
        logic [31:0] rdata_reg;
        always_ff @(posedge clk_i or negedge rst_ni) begin
            if (!rst_ni) rdata_reg <= 32'h0;
            else         rdata_reg <= rdata_src;
        end

        // read_en bir cevrim geciktirilir -> r_valid de bir cevrim gec kurulur
        logic read_en_q;
        logic [AXI_ID_WIDTH-1:0] ar_id_q;
        always_ff @(posedge clk_i or negedge rst_ni) begin
            if (!rst_ni) begin
                read_en_q <= 1'b0;
                ar_id_q   <= '0;
            end else begin
                read_en_q <= read_en;
                if (read_en) ar_id_q <= slv.ar_id;
            end
        end

        assign rvalid_set   = read_en_q;
        assign rdata_out    = rdata_reg;
        assign rid_next     = ar_id_q;
        // Ucustaki okuma varken yeni AR kabul etme - yoksa rdata_reg ezilir
        assign slv.ar_ready = !read_en_q && (!slv.r_valid || slv.r_ready);
    end else begin : g_comb_rdata
        assign rvalid_set   = read_en;
        assign rdata_out    = rdata_src;
        assign rid_next     = slv.ar_id;
        assign slv.ar_ready = !slv.r_valid || slv.r_ready;
    end
    endgenerate

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            slv.r_valid <= 1'b0;
            slv.r_id    <= '0;
        end else if (rvalid_set) begin
            slv.r_valid <= 1'b1;
            slv.r_id    <= rid_next;
        end else if (slv.r_valid && slv.r_ready) begin
            slv.r_valid <= 1'b0;
        end
    end

    assign slv.r_data = rdata_out;
    assign slv.r_resp = 2'b00;  // OKAY
    assign slv.r_last = 1'b1;   // Tek beat (burst yok)
    assign slv.r_user = '0;

endmodule

