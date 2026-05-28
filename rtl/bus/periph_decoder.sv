`timescale 1ns / 1ps

// ============================================================
// BLogic MCU - Çevre Birimi Adres Çözücü (Peripheral Decoder)
// ============================================================
// Köprüden (Bridge) gelen AXI-Lite sinyallerini adres bitlerinden
// UART, GPIO ve Timer'a yönlendirir.
//
// Adres haritası (0x4000_xxxx bölgesi):
//   0x4000_0000 .. 0x4000_00FF → UART_0
//   0x4000_0100 .. 0x4000_01FF → GPIO
//   0x4000_0200 .. 0x4000_02FF → Timer
//
// Adres decode: bits [11:8] ile seçim yapılır:
//   0x0 → UART
//   0x1 → GPIO
//   0x2 → Timer
//   >= 0x3 → GEÇERSİZ ADRES (Yapay DECERR Yanıtı Üretilir)
// ============================================================

module periph_decoder (
    input  logic        clk_i,
    input  logic        rst_ni,

    // Giriş: Köprüden (Bridge) gelen Saf AXI4-Lite Hattı
    input  logic [31:0] s_awaddr,
    input  logic        s_awvalid,
    output logic        s_awready,
    input  logic [31:0] s_wdata,
    input  logic [ 3:0] s_wstrb,
    input  logic        s_wvalid,
    output logic        s_wready,
    output logic [ 1:0] s_bresp,
    output logic        s_bvalid,
    input  logic        s_bready,
    input  logic [31:0] s_araddr,
    input  logic        s_arvalid,
    output logic        s_arready,
    output logic [31:0] s_rdata,
    output logic [ 1:0] s_rresp,
    output logic        s_rvalid,
    input  logic        s_rready,

    // Çıkış 0: UART_0 (0x4000_0000)
    output logic [31:0] uart_awaddr,  output logic uart_awvalid, input  logic uart_awready,
    output logic [31:0] uart_wdata,   output logic uart_wvalid,  input  logic uart_wready,
    input  logic [ 1:0] uart_bresp,   input  logic uart_bvalid,  output logic uart_bready,
    output logic [31:0] uart_araddr,  output logic uart_arvalid, input  logic uart_arready,
    input  logic [31:0] uart_rdata,   input  logic uart_rvalid,  output logic uart_rready,

    // Çıkış 1: GPIO (0x4000_0100)
    output logic [31:0] gpio_awaddr,  output logic gpio_awvalid, input  logic gpio_awready,
    output logic [31:0] gpio_wdata,   output logic gpio_wvalid,  input  logic gpio_wready,
    input  logic [ 1:0] gpio_bresp,   input  logic gpio_bvalid,  output logic gpio_bready,
    output logic [31:0] gpio_araddr,  output logic gpio_arvalid, input  logic gpio_arready,
    input  logic [31:0] gpio_rdata,   input  logic gpio_rvalid,  output logic gpio_rready,

    // Çıkış 2: Timer (0x4000_0200)
    output logic [31:0] timer_awaddr, output logic timer_awvalid, input  logic timer_awready,
    output logic [31:0] timer_wdata,  output logic timer_wvalid,  input  logic timer_wready,
    input  logic [ 1:0] timer_bresp,  input  logic timer_bvalid,  output logic timer_bready,
    output logic [31:0] timer_araddr, output logic timer_arvalid, input  logic timer_arready,
    input  logic [31:0] timer_rdata,  input  logic timer_rvalid,  output logic timer_rready
);

    // --- Adres Seçim Mantığı ---
    wire [3:0] aw_sel = s_awaddr[11:8];
    wire [3:0] ar_sel = s_araddr[11:8];

    // Response Kanalları İçin Geçmiş Bilgisi ve Hata Takip Register'ları
    logic [3:0] wr_sel_q, rd_sel_q;
    logic       err_aw_pending, err_ar_pending;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            wr_sel_q       <= 4'd0;
            rd_sel_q       <= 4'd0;
            err_aw_pending <= 1'b0;
            err_ar_pending <= 1'b0;
        end else begin
            // --- Yazma Hatası Üretim ve Takip Mekanizması ---
            if (s_awvalid && s_awready) begin
                wr_sel_q <= aw_sel;
                if (aw_sel > 4'h2) err_aw_pending <= 1'b1; // Harita dışı adres
            end else if (s_bvalid && s_bready) begin
                err_aw_pending <= 1'b0; // Yanıt el sıkışınca temizle
            end

            // --- Okuma Hatası Üretim ve Takip Mekanizması ---
            if (s_arvalid && s_arready) begin
                rd_sel_q <= ar_sel;
                if (ar_sel > 4'h2) err_ar_pending <= 1'b1; // Harita dışı adres
            end else if (s_rvalid && s_rready) begin
                err_ar_pending <= 1'b0; // Yanıt el sıkışınca temizle
            end
        end
    end

    // --- Adres ve Veri Broadcast (Hepsine aynı veri hatları gider) ---
    assign uart_awaddr  = s_awaddr;  assign gpio_awaddr  = s_awaddr;  assign timer_awaddr = s_awaddr;
    assign uart_wdata   = s_wdata;   assign gpio_wdata   = s_wdata;   assign timer_wdata  = s_wdata;
    assign uart_wstrb   = s_wstrb;   assign gpio_wstrb   = s_wstrb;   assign timer_wstrb  = s_wstrb;
    assign uart_araddr  = s_araddr;  assign gpio_araddr  = s_araddr;  assign timer_araddr = s_araddr;

    // --- AW / W / AR Valid Decode (Sadece geçerli modüllere valid gider) ---
    assign uart_awvalid  = s_awvalid && (aw_sel == 4'h0);
    assign gpio_awvalid  = s_awvalid && (aw_sel == 4'h1);
    assign timer_awvalid = s_awvalid && (aw_sel == 4'h2);

    assign uart_wvalid   = s_wvalid && (aw_sel == 4'h0);
    assign gpio_wvalid   = s_wvalid && (aw_sel == 4'h1);
    assign timer_wvalid  = s_wvalid && (aw_sel == 4'h2);

    assign uart_arvalid  = s_arvalid && (ar_sel == 4'h0);
    assign gpio_arvalid  = s_arvalid && (ar_sel == 4'h1);
    assign timer_arvalid = s_arvalid && (ar_sel == 4'h2);

    // --- AW / W / AR Ready Mux (Hata durumunda işlemci kilitlenmesin diye 1'b1 verilir) ---
    assign s_awready = (aw_sel == 4'h0) ? uart_awready :
                       (aw_sel == 4'h1) ? gpio_awready :
                       (aw_sel == 4'h2) ? timer_awready : 1'b1; // Geçersiz adreste isteği yut

    assign s_wready  = (aw_sel == 4'h0) ? uart_wready :
                       (aw_sel == 4'h1) ? gpio_wready :
                       (aw_sel == 4'h2) ? timer_wready : 1'b1; // Geçersiz adreste veriyi yut

    assign s_arready = (ar_sel == 4'h0) ? uart_arready :
                       (ar_sel == 4'h1) ? gpio_arready :
                       (ar_sel == 4'h2) ? timer_arready : 1'b1; // Geçersiz adreste isteği yut

    // ============================================================
    // B RESPONSE MUX (Yazma Yanıt Kanalı)
    // ============================================================
    assign s_bresp  = (wr_sel_q == 4'h0) ? uart_bresp :
                      (wr_sel_q == 4'h1) ? gpio_bresp :
                      (wr_sel_q == 4'h2) ? timer_bresp : 2'b11; // 2'b11 = DECERR

    assign s_bvalid = (wr_sel_q == 4'h0) ? uart_bvalid :
                      (wr_sel_q == 4'h1) ? gpio_bvalid :
                      (wr_sel_q == 4'h2) ? timer_bvalid : err_aw_pending;

    assign uart_bready  = s_bready && (wr_sel_q == 4'h0);
    assign gpio_bready  = s_bready && (wr_sel_q == 4'h1);
    assign timer_bready = s_bready && (wr_sel_q == 4'h2);

    // ============================================================
    // R RESPONSE MUX (Okuma Yanıt Kanalı)
    // ============================================================
    assign s_rdata  = (rd_sel_q == 4'h0) ? uart_rdata :
                      (rd_sel_q == 4'h1) ? gpio_rdata :
                      (rd_sel_q == 4'h2) ? timer_rdata : 32'hDEADBEEF; // Sahte Veri

    assign s_rresp  = (rd_sel_q == 4'h0) ? uart_rresp :
                      (rd_sel_q == 4'h1) ? gpio_rresp :
                      (rd_sel_q == 4'h2) ? timer_rresp : 2'b11; // 2'b11 = DECERR

    assign s_rvalid = (rd_sel_q == 4'h0) ? uart_rvalid :
                      (rd_sel_q == 4'h1) ? gpio_rvalid :
                      (rd_sel_q == 4'h2) ? timer_rvalid : err_ar_pending;

    assign uart_rready  = s_rready && (rd_sel_q == 4'h0);
    assign gpio_rready  = s_rready && (rd_sel_q == 4'h1);
    assign timer_rready = s_rready && (rd_sel_q == 4'h2);

endmodule