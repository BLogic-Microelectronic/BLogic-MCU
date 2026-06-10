`timescale 1ns / 1ps

// ============================================================
// BLogic MCU - I2C Master (AXI4-Lite Slave)
// TEKNOFEST 2026 Şartname EK-2 yazmaç seti — SCL sabit 400 kHz
// ------------------------------------------------------------
// Yazmaç haritası (base: 0x4000_0400, periph_decoder slot 0x4):
//   0x00 I2C_NBY (RW) : Bayt sayısı 1-4. Aralık dışı yazımlar
//                       yuvarlanır (0→1, >4→4) — şartname gereği.
//   0x04 I2C_ADR (RW) : [6:0] 7-bit slave adresi.
//   0x08 I2C_RDR (RO) : Okunan veri. İlk gelen bayt [7:0]'a,
//                       ikinci bayt [15:8]'e... yazılır.
//   0x0C I2C_TDR (RW) : Gönderilecek veri. [7:0] önce gider.
//   0x10 I2C_CFG (RW) :
//        [0] TX enable    — '1' iken transfer başlar
//        [1] TX done      — HW '1' yapar, SW '0' yazarak temizler
//        [2] RX enable    — '1' iken okuma başlar
//        [3] RX done      — HW '1' yapar, SW '0' yazarak temizler
//        [4] NACK flag    — (takım tanımlı ek bit) slave ACK
//                           vermezse HW '1' yapar, SW '0' ile siler
//   TX ve RX aynı anda enable edilirse TX önceliklidir
//   (şartnamedeki örnek davranış birebir uygulanmıştır).
// ------------------------------------------------------------
// Pin bağlantısı (üst seviyede / fpga_top'ta):
//   assign i2c_scl = scl_o;                      // push-pull (tek master)
//   assign i2c_sda = sda_oe_o ? 1'b0 : 1'bz;     // open-drain
//   assign sda_i   = i2c_sda;
// ------------------------------------------------------------
// Bilinçli sadeleştirmeler (iskelet kapsamı):
//   - Clock stretching yok (slave SCL'i tutamaz)        → TODO
//   - Repeated START yok (her işlem START..STOP)        → TODO
//   - Transfer sırasında enable değişimi aborta yol
//     açmaz; işlem tamamlanana kadar sürer              → TODO
//   - NACK durumunda STOP üretilir, done + NACK flag
//     set edilir (SW polling'de kilitlenmesin diye)
//   - NBY/ADR/TDR transfer başında latch'lenir; işlem
//     ortasında AXI yazmaları transferi bozmaz
// ============================================================

module i2c_master_axil #(
    parameter int unsigned CLK_FREQ_HZ = 50_000_000,  // sistem saati
    parameter int unsigned SCL_FREQ_HZ = 400_000      // şartname: sabit 400 kHz
)(
    input  logic        clk_i,
    input  logic        rst_ni,

    // AXI4-Lite Slave Arayüzü (timer_axil ile aynı kalıp)
    input  logic [31:0] s_axi_awaddr,
    input  logic        s_axi_awvalid,
    output logic        s_axi_awready,
    input  logic [31:0] s_axi_wdata,
    input  logic [ 3:0] s_axi_wstrb,    // not: tam-word yazım varsayılır (timer ile aynı)
    input  logic        s_axi_wvalid,
    output logic        s_axi_wready,
    output logic [ 1:0] s_axi_bresp,
    output logic        s_axi_bvalid,
    input  logic        s_axi_bready,

    input  logic [31:0] s_axi_araddr,
    input  logic        s_axi_arvalid,
    output logic        s_axi_arready,
    output logic [31:0] s_axi_rdata,
    output logic [ 1:0] s_axi_rresp,
    output logic        s_axi_rvalid,
    input  logic        s_axi_rready,

    // I2C pinleri
    output logic        scl_o,      // push-pull SCL (boşta '1')
    output logic        sda_oe_o,   // 1 = SDA'yı '0'a çek (open-drain sürücü)
    input  logic        sda_i       // SDA geri okuma
);

    // =========================================================
    // 1. REGISTER ADRESLERİ (TEKNOFEST EK-2 Şartnamesi)
    // =========================================================
    localparam logic [4:0] ADDR_NBY = 5'h00;
    localparam logic [4:0] ADDR_ADR = 5'h04;
    localparam logic [4:0] ADDR_RDR = 5'h08;  // RO
    localparam logic [4:0] ADDR_TDR = 5'h0C;
    localparam logic [4:0] ADDR_CFG = 5'h10;

    // SCL çeyrek-periyot böleni: 4 faz/bit
    // 50 MHz / (400 kHz * 4) = 31.25 → 31  (SCL ≈ 403 kHz, tolerans içinde)
    localparam int unsigned QDIV = CLK_FREQ_HZ / (SCL_FREQ_HZ * 4);

    // =========================================================
    // 2. YAZMAÇLAR
    // =========================================================
    logic [ 2:0] i2c_nby;    // 1..4 (yazımda kıskaçlanır)
    logic [ 6:0] i2c_adr;
    logic [31:0] i2c_tdr;
    logic [31:0] i2c_rdr;    // motor (engine) bloğu yazar
    logic        tx_en, rx_en;
    logic        tx_done, rx_done, nack_err;  // motor bloğu set eder

    // Yazma FSM'den motora giden temizleme pulse'ları
    logic clr_txd_hit, clr_rxd_hit, clr_nck_hit;

    // =========================================================
    // 3. AXI-LITE YAZMA (WRITE) FSM — timer_axil kalıbı
    // =========================================================
    logic       aw_en;
    logic [4:0] write_addr;

    assign s_axi_bresp = 2'b00;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            s_axi_awready <= 1'b0;
            s_axi_wready  <= 1'b0;
            s_axi_bvalid  <= 1'b0;
            aw_en         <= 1'b1;
            write_addr    <= 5'd0;
            i2c_nby       <= 3'd1;
            i2c_adr       <= 7'd0;
            i2c_tdr       <= 32'd0;
            tx_en         <= 1'b0;
            rx_en         <= 1'b0;
            clr_txd_hit   <= 1'b0;
            clr_rxd_hit   <= 1'b0;
            clr_nck_hit   <= 1'b0;
        end else begin
            // Varsayılan: pulse sinyallerini temizle
            clr_txd_hit <= 1'b0;
            clr_rxd_hit <= 1'b0;
            clr_nck_hit <= 1'b0;

            // Adres + Veri Yakalama
            if (s_axi_awvalid && s_axi_wvalid && aw_en) begin
                s_axi_awready <= 1'b1;
                s_axi_wready  <= 1'b1;
                write_addr    <= s_axi_awaddr[4:0];
                aw_en         <= 1'b0;
            end else begin
                s_axi_awready <= 1'b0;
                s_axi_wready  <= 1'b0;
            end

            // Veri Yazma
            if (s_axi_wready && s_axi_wvalid && s_axi_awready && s_axi_awvalid) begin
                case (write_addr)
                    // NBY: 0→1, >4→4 yuvarlama (şartname)
                    ADDR_NBY: i2c_nby <= (s_axi_wdata == 32'd0) ? 3'd1 :
                                         (s_axi_wdata >  32'd4) ? 3'd4 :
                                                                  s_axi_wdata[2:0];
                    ADDR_ADR: i2c_adr <= s_axi_wdata[6:0];
                    ADDR_TDR: i2c_tdr <= s_axi_wdata;
                    ADDR_CFG: begin
                        tx_en <= s_axi_wdata[0];
                        rx_en <= s_axi_wdata[2];
                        // done/nack bitleri: SW '0' yazarak temizler,
                        // '1' yazarak SET EDEMEZ (HW set önceliklidir)
                        if (!s_axi_wdata[1]) clr_txd_hit <= 1'b1;
                        if (!s_axi_wdata[3]) clr_rxd_hit <= 1'b1;
                        if (!s_axi_wdata[4]) clr_nck_hit <= 1'b1;
                    end
                    // I2C_RDR Read-Only, yazma etkisiz
                    default: ;
                endcase
            end

            // Yanıt Gönderme
            if (s_axi_wready && s_axi_wvalid && s_axi_awready && s_axi_awvalid && !s_axi_bvalid) begin
                s_axi_bvalid <= 1'b1;
            end else if (s_axi_bready && s_axi_bvalid) begin
                s_axi_bvalid <= 1'b0;
                aw_en        <= 1'b1;
            end
        end
    end

    // =========================================================
    // 4. AXI-LITE OKUMA (READ) FSM — timer_axil kalıbı
    // =========================================================
    assign s_axi_rresp = 2'b00;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            s_axi_arready <= 1'b0;
            s_axi_rvalid  <= 1'b0;
            s_axi_rdata   <= 32'd0;
        end else begin
            if (s_axi_arvalid && !s_axi_arready) begin
                s_axi_arready <= 1'b1;
            end else begin
                s_axi_arready <= 1'b0;
            end

            if (s_axi_arready && s_axi_arvalid && !s_axi_rvalid) begin
                s_axi_rvalid <= 1'b1;
                case (s_axi_araddr[4:0])
                    ADDR_NBY: s_axi_rdata <= {29'd0, i2c_nby};
                    ADDR_ADR: s_axi_rdata <= {25'd0, i2c_adr};
                    ADDR_RDR: s_axi_rdata <= i2c_rdr;
                    ADDR_TDR: s_axi_rdata <= i2c_tdr;
                    ADDR_CFG: s_axi_rdata <= {27'd0, nack_err, rx_done, rx_en, tx_done, tx_en};
                    default:  s_axi_rdata <= 32'd0;
                endcase
            end else if (s_axi_rvalid && s_axi_rready) begin
                s_axi_rvalid <= 1'b0;
            end
        end
    end

    // =========================================================
    // 5. I2C MOTOR (ENGINE) — 4 faz/bit zamanlaması
    // ---------------------------------------------------------
    //   faz 0: SCL=0, SDA hazırla (çıkış biti sür / giriş için bırak)
    //   faz 1: SCL yüksel
    //   faz 2: SCL=1, örnekleme noktası
    //   faz 3: SCL düş
    //   START: SCL=1 iken SDA düşer | STOP: SCL=1 iken SDA yükselir
    // =========================================================
    typedef enum logic [2:0] {
        S_IDLE, S_START, S_BITS, S_ACK, S_STOP
    } i2c_state_e;

    i2c_state_e state;

    logic [$clog2(QDIV)-1:0] q_cnt;
    logic [1:0] phase;
    logic [2:0] bit_cnt;
    logic [1:0] data_idx;     // 0..3: aktif veri baytı
    logic [2:0] nby_lat;      // transfer başında latch'lenen NBY
    logic [6:0] adr_lat;
    logic [31:0] tdr_lat;
    logic [7:0] shreg;        // ortak kaydırmalı yazmaç (adres+veri)
    logic       is_read;      // 1 = RX işlemi
    logic       addr_phase;   // 1 = adres baytı gönderiliyor
    logic       nack_seen;
    logic       scl_q, sda_pull;

    // Başlatma koşulları (TX öncelikli — şartname örneği)
    wire tx_go = tx_en && !tx_done;
    wire rx_go = rx_en && !rx_done && !tx_go;

    // Bit yönü: adres baytı her zaman çıkış; veri TX'te çıkış, RX'te giriş
    wire out_bit  = addr_phase || !is_read;
    // ACK yönü: RX veri baytından sonra master ACK/NACK sürer
    wire ack_drv  = !addr_phase && is_read;
    wire last_byt = ({1'b0, data_idx} == (nby_lat - 3'd1));
    wire tick     = (q_cnt == QDIV[$clog2(QDIV)-1:0] - 1'b1);

    // TDR'den bayt seçimi (LSB önce — şartname)
    function automatic logic [7:0] tdr_byte(input logic [31:0] w, input logic [1:0] idx);
        case (idx)
            2'd0:    tdr_byte = w[ 7: 0];
            2'd1:    tdr_byte = w[15: 8];
            2'd2:    tdr_byte = w[23:16];
            default: tdr_byte = w[31:24];
        endcase
    endfunction

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            state      <= S_IDLE;
            q_cnt      <= '0;
            phase      <= 2'd0;
            bit_cnt    <= 3'd0;
            data_idx   <= 2'd0;
            nby_lat    <= 3'd1;
            adr_lat    <= 7'd0;
            tdr_lat    <= 32'd0;
            shreg      <= 8'd0;
            is_read    <= 1'b0;
            addr_phase <= 1'b0;
            nack_seen  <= 1'b0;
            scl_q      <= 1'b1;
            sda_pull   <= 1'b0;
            i2c_rdr    <= 32'd0;
            tx_done    <= 1'b0;
            rx_done    <= 1'b0;
            nack_err   <= 1'b0;
        end else begin
            // SW temizleme pulse'ları (aynı cycle HW set ile çakışırsa
            // aşağıdaki case'teki atamalar — yani HW set — kazanır)
            if (clr_txd_hit) tx_done  <= 1'b0;
            if (clr_rxd_hit) rx_done  <= 1'b0;
            if (clr_nck_hit) nack_err <= 1'b0;

            if (state == S_IDLE) begin
                scl_q    <= 1'b1;
                sda_pull <= 1'b0;
                q_cnt    <= '0;
                phase    <= 2'd0;
                if (tx_go || rx_go) begin
                    is_read    <= rx_go;
                    nby_lat    <= i2c_nby;
                    adr_lat    <= i2c_adr;
                    tdr_lat    <= i2c_tdr;
                    shreg      <= {i2c_adr, rx_go};  // adres + R/W̅ biti
                    addr_phase <= 1'b1;
                    data_idx   <= 2'd0;
                    nack_seen  <= 1'b0;
                    if (rx_go) i2c_rdr <= 32'd0;     // eski baytlar kalmasın
                    state      <= S_START;
                end
            end else if (tick) begin
                q_cnt <= '0;
                case (state)
                    // ---------------- START ----------------
                    S_START: case (phase)
                        2'd0: phase <= 2'd1;                          // hazırlık: SCL=1, SDA serbest
                        2'd1: begin sda_pull <= 1'b1; phase <= 2'd2; end  // SDA düşer → START
                        2'd2: phase <= 2'd3;
                        2'd3: begin
                            scl_q   <= 1'b0;
                            bit_cnt <= 3'd7;
                            phase   <= 2'd0;
                            state   <= S_BITS;
                        end
                    endcase

                    // ------------- 8 BİT KAYDIRMA -------------
                    S_BITS: case (phase)
                        2'd0: begin
                            if (out_bit) sda_pull <= ~shreg[7];  // '0' biti = hatta çek
                            else         sda_pull <= 1'b0;       // giriş: hattı bırak
                            phase <= 2'd1;
                        end
                        2'd1: begin scl_q <= 1'b1; phase <= 2'd2; end
                        2'd2: begin
                            if (!out_bit) shreg <= {shreg[6:0], sda_i};  // örnekle
                            phase <= 2'd3;
                        end
                        2'd3: begin
                            scl_q <= 1'b0;
                            if (out_bit) shreg <= {shreg[6:0], 1'b0};
                            phase <= 2'd0;
                            if (bit_cnt == 3'd0) state <= S_ACK;
                            else                 bit_cnt <= bit_cnt - 3'd1;
                        end
                    endcase

                    // ---------------- ACK FAZI ----------------
                    S_ACK: case (phase)
                        2'd0: begin
                            if (ack_drv) begin
                                // RX: alınan baytı RDR'ye yerleştir (LSB önce)
                                case (data_idx)
                                    2'd0:    i2c_rdr[ 7: 0] <= shreg;
                                    2'd1:    i2c_rdr[15: 8] <= shreg;
                                    2'd2:    i2c_rdr[23:16] <= shreg;
                                    default: i2c_rdr[31:24] <= shreg;
                                endcase
                                // Master ACK = SDA'yı çek; son baytta NACK = bırak
                                sda_pull <= last_byt ? 1'b0 : 1'b1;
                            end else begin
                                sda_pull <= 1'b0;  // slave ACK için hattı bırak
                            end
                            phase <= 2'd1;
                        end
                        2'd1: begin scl_q <= 1'b1; phase <= 2'd2; end
                        2'd2: begin
                            if (!ack_drv && sda_i) nack_seen <= 1'b1;  // slave NACK
                            phase <= 2'd3;
                        end
                        2'd3: begin
                            scl_q <= 1'b0;
                            phase <= 2'd0;
                            if (!ack_drv && (nack_seen || sda_i)) begin
                                state <= S_STOP;            // NACK → işlemi sonlandır
                            end else if (addr_phase) begin
                                addr_phase <= 1'b0;
                                bit_cnt    <= 3'd7;
                                shreg      <= is_read ? 8'd0 : tdr_byte(tdr_lat, 2'd0);
                                state      <= S_BITS;
                            end else if (last_byt) begin
                                state <= S_STOP;            // tüm baytlar bitti
                            end else begin
                                data_idx <= data_idx + 2'd1;
                                bit_cnt  <= 3'd7;
                                shreg    <= is_read ? 8'd0
                                                    : tdr_byte(tdr_lat, data_idx + 2'd1);
                                state    <= S_BITS;
                            end
                        end
                    endcase

                    // ---------------- STOP ----------------
                    S_STOP: case (phase)
                        2'd0: begin sda_pull <= 1'b1; phase <= 2'd1; end  // SDA'yı düşük tut
                        2'd1: begin scl_q    <= 1'b1; phase <= 2'd2; end
                        2'd2: begin sda_pull <= 1'b0; phase <= 2'd3; end  // SDA yükselir → STOP
                        2'd3: begin
                            // İşlem bitti: done (+ varsa NACK) bayraklarını kaldır.
                            // NACK'te de done set edilir ki SW polling'de takılmasın;
                            // hata ayrımı CFG[4]'ten yapılır.
                            if (nack_seen) nack_err <= 1'b1;
                            if (is_read)   rx_done  <= 1'b1;
                            else           tx_done  <= 1'b1;
                            phase <= 2'd0;
                            state <= S_IDLE;
                        end
                    endcase

                    default: state <= S_IDLE;
                endcase
            end else begin
                q_cnt <= q_cnt + 1'b1;
            end
        end
    end

    assign scl_o    = scl_q;
    assign sda_oe_o = sda_pull;

endmodule
