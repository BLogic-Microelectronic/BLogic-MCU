module obi_to_axi #(
    parameter int unsigned AXI_ID = 0
)(
    input  logic clk_i,
    input  logic rst_ni,

    // ============================================================
    // OBI Slave Sinyalleri (İşlemciden Gelen)
    // ============================================================
    input  logic        obi_req_i,
    output logic        obi_gnt_o,
    input  logic [31:0] obi_addr_i,
    input  logic        obi_we_i,
    input  logic [ 3:0] obi_be_i,
    input  logic [31:0] obi_wdata_i,
    output logic        obi_rvalid_o,
    output logic [31:0] obi_rdata_o,

    // ============================================================
    // AXI4 Master Sinyalleri (Crossbar'a Giden)
    // ============================================================
    AXI_BUS.Master      axi_mst
);

    // ============================================================
    // FSM Durumları
    // ============================================================
    typedef enum logic [2:0] {
        IDLE,
        WAIT_AW_W,   // AW ve W kanalı onayı bekle (ikisi de henüz kabul edilmedi)
        WAIT_AW,     // Sadece AW onayı bekle (W zaten kabul edildi)
        WAIT_W,      // Sadece W onayı bekle (AW zaten kabul edildi)
        WAIT_B,      // Yazma yanıtı (B) bekle
        WAIT_R       // Okuma verisi (R) bekle
    } state_t;
    state_t state_q, state_d;

    // ============================================================
    // Kayıtlı (registered) adres, veri ve kontrol sinyalleri
    // ============================================================
    // OBI request kabul edildiğinde (gnt verildiğinde) bu değerler
    // register'a alınır. Böylece CPU sonraki cycle'da port sinyallerini
    // değiştirse bile bridge doğru adres/veriyi crossbar'a sunar.
    logic [31:0] addr_q;
    logic [31:0] wdata_q;
    logic [ 3:0] be_q;
    logic        we_q;

    // AW ve W kanallarının ayrı ayrı kabul edilmesini izleyen flag'ler
    logic aw_done_q, aw_done_d;
    logic  w_done_q,  w_done_d;

    // ============================================================
    // OBI request'ini register'a alma
    // ============================================================
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            addr_q  <= '0;
            wdata_q <= '0;
            be_q    <= '0;
            we_q    <= 1'b0;
        end else if (obi_req_i && (obi_gnt_o || state_q == IDLE)) begin
            // Grant verdiğimiz anda request bilgilerini yakala
            addr_q  <= obi_addr_i;
            wdata_q <= obi_wdata_i;
            be_q    <= obi_be_i;
            we_q    <= obi_we_i;
        end
    end

    // AW/W done flag register'ları
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            aw_done_q <= 1'b0;
            w_done_q  <= 1'b0;
        end else begin
            aw_done_q <= aw_done_d;
            w_done_q  <= w_done_d;
        end
    end

    // ============================================================
    // AXI Sabit Atamaları (Single beat, 32-bit, no burst)
    // ============================================================
    // Write Address Channel
    assign axi_mst.aw_id     = AXI_ID;
    assign axi_mst.aw_len    = 8'd0;     // 1 beat
    assign axi_mst.aw_size   = 3'b010;   // 4 bytes
    assign axi_mst.aw_burst  = 2'b01;    // INCR (tek beat'te FIXED ile aynı)
    assign axi_mst.aw_lock   = 1'b0;
    assign axi_mst.aw_cache  = 4'b0000;
    assign axi_mst.aw_prot   = 3'b000;
    assign axi_mst.aw_qos    = 4'b0000;
    assign axi_mst.aw_region = 4'b0000;
    assign axi_mst.aw_user   = '0;
    assign axi_mst.aw_atop   = '0;       // Atomik operasyon yok

    // Read Address Channel
    assign axi_mst.ar_id     = AXI_ID;
    assign axi_mst.ar_len    = 8'd0;
    assign axi_mst.ar_size   = 3'b010;
    assign axi_mst.ar_burst  = 2'b01;
    assign axi_mst.ar_lock   = 1'b0;
    assign axi_mst.ar_cache  = 4'b0000;
    assign axi_mst.ar_prot   = 3'b000;
    assign axi_mst.ar_qos    = 4'b0000;
    assign axi_mst.ar_region = 4'b0000;
    assign axi_mst.ar_user   = '0;

    // Write Data Channel
    assign axi_mst.w_last    = 1'b1;     // Her zaman son beat (tek beat)
    assign axi_mst.w_user    = '0;

    // ============================================================
    // Ana FSM — Kombinasyonel Mantık
    // ============================================================
    always_comb begin
        // Varsayılan çıkışlar
        state_d          = state_q;
        obi_gnt_o        = 1'b0;
        obi_rvalid_o     = 1'b0;
        obi_rdata_o      = axi_mst.r_data;

        // AXI kanal varsayılanları
        axi_mst.aw_valid = 1'b0;
        axi_mst.aw_addr  = addr_q;       // Kayıtlı adres kullan

        axi_mst.w_valid  = 1'b0;
        axi_mst.w_data   = wdata_q;      // Kayıtlı veri kullan
        axi_mst.w_strb   = be_q;         // Kayıtlı byte enable

        axi_mst.b_ready  = 1'b0;

        axi_mst.ar_valid = 1'b0;
        axi_mst.ar_addr  = addr_q;       // Kayıtlı adres kullan

        axi_mst.r_ready  = 1'b0;

        // AW/W done flag varsayılanları
        aw_done_d        = aw_done_q;
        w_done_d         = w_done_q;

        case (state_q)
            // --------------------------------------------------------
            // IDLE: Yeni OBI isteği bekle
            // --------------------------------------------------------
            IDLE: begin
                // IDLE'da adres/veri henüz register'da değil,
                // doğrudan port sinyallerini kullan
                axi_mst.aw_addr = obi_addr_i;
                axi_mst.ar_addr = obi_addr_i;
                axi_mst.w_data  = obi_wdata_i;
                axi_mst.w_strb  = obi_be_i;

                aw_done_d = 1'b0;
                w_done_d  = 1'b0;

                if (obi_req_i) begin
                    if (obi_we_i) begin
                        // === YAZMA İŞLEMİ ===
                        axi_mst.aw_valid = 1'b1;
                        axi_mst.w_valid  = 1'b1;

                        if (axi_mst.aw_ready && axi_mst.w_ready) begin
                            // İkisi de aynı cycle'da kabul edildi
                            obi_gnt_o = 1'b1;
                            state_d   = WAIT_B;
                        end else if (axi_mst.aw_ready) begin
                            // Sadece AW kabul edildi, W hâlâ bekliyor
                            obi_gnt_o = 1'b1;
                            aw_done_d = 1'b1;
                            state_d   = WAIT_W;
                        end else if (axi_mst.w_ready) begin
                            // Sadece W kabul edildi, AW hâlâ bekliyor
                            obi_gnt_o = 1'b1;
                            w_done_d  = 1'b1;
                            state_d   = WAIT_AW;
                        end else begin
                            // İkisi de kabul edilmedi, grant verme
                            // CPU aynı request'i tutmaya devam eder
                            state_d   = WAIT_AW_W;
                        end

                    end else begin
                        // === OKUMA İŞLEMİ ===
                        axi_mst.ar_valid = 1'b1;

                        if (axi_mst.ar_ready) begin
                            obi_gnt_o = 1'b1;
                            state_d   = WAIT_R;
                        end
                        // ar_ready gelmezse IDLE'da kal, CPU req tutmaya devam eder
                    end
                end
            end

            // --------------------------------------------------------
            // WAIT_AW_W: Hem AW hem W onayı bekle
            // --------------------------------------------------------
            WAIT_AW_W: begin
                axi_mst.aw_valid = 1'b1;
                axi_mst.w_valid  = 1'b1;

                if (axi_mst.aw_ready && axi_mst.w_ready) begin
                    obi_gnt_o = 1'b1;
                    state_d   = WAIT_B;
                end else if (axi_mst.aw_ready) begin
                    obi_gnt_o = 1'b1;
                    aw_done_d = 1'b1;
                    state_d   = WAIT_W;
                end else if (axi_mst.w_ready) begin
                    obi_gnt_o = 1'b1;
                    w_done_d  = 1'b1;
                    state_d   = WAIT_AW;
                end
            end

            // --------------------------------------------------------
            // WAIT_AW: Sadece AW kanalı onayı bekle (W zaten gitti)
            // --------------------------------------------------------
            WAIT_AW: begin
                axi_mst.aw_valid = 1'b1;
                // W zaten kabul edildi, tekrar sunma
                if (axi_mst.aw_ready) begin
                    state_d = WAIT_B;
                end
            end

            // --------------------------------------------------------
            // WAIT_W: Sadece W kanalı onayı bekle (AW zaten gitti)
            // --------------------------------------------------------
            WAIT_W: begin
                axi_mst.w_valid = 1'b1;
                // AW zaten kabul edildi, tekrar sunma
                if (axi_mst.w_ready) begin
                    state_d = WAIT_B;
                end
            end

            // --------------------------------------------------------
            // WAIT_B: Yazma yanıtı bekle
            // --------------------------------------------------------
            WAIT_B: begin
                axi_mst.b_ready = 1'b1;
                if (axi_mst.b_valid) begin
                    obi_rvalid_o = 1'b1;  // BUG FIX: OBI yazma yanıtı!
                    state_d      = IDLE;
                end
            end

            // --------------------------------------------------------
            // WAIT_R: Okuma verisi bekle
            // --------------------------------------------------------
            WAIT_R: begin
                axi_mst.r_ready = 1'b1;
                if (axi_mst.r_valid) begin
                    obi_rvalid_o = 1'b1;
                    obi_rdata_o  = axi_mst.r_data;
                    state_d      = IDLE;
                end
            end

            default: state_d = IDLE;
        endcase
    end

    // ============================================================
    // FSM State Register
    // ============================================================
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            state_q <= IDLE;
        end else begin
            state_q <= state_d;
        end
    end

    // ============================================================
    // Debug Assertions (simülasyonda hata yakalama)
    // ============================================================
    `ifndef SYNTHESIS
    // AXI: valid düştüğünde ready gelmeden valid düşmemeli
    assert property (@(posedge clk_i) disable iff (!rst_ni)
        axi_mst.aw_valid && !axi_mst.aw_ready |=> axi_mst.aw_valid
    ) else $error("[OBI2AXI] AW valid prematurely deasserted!");

    assert property (@(posedge clk_i) disable iff (!rst_ni)
        axi_mst.ar_valid && !axi_mst.ar_ready |=> axi_mst.ar_valid
    ) else $error("[OBI2AXI] AR valid prematurely deasserted!");

    assert property (@(posedge clk_i) disable iff (!rst_ni)
        axi_mst.w_valid && !axi_mst.w_ready |=> axi_mst.w_valid
    ) else $error("[OBI2AXI] W valid prematurely deasserted!");
    `endif

endmodule
