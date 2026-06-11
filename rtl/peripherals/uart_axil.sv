`timescale 1ns / 1ps

// ============================================================
// EK-2 CPB semantigi (Sartname):
//   UART baud = clk / UART_CPB  ->  yazilim CPB = clk/baud yazar.
//   Forencich uart_tx/uart_rx cekirdekleri 8x ornekleme prescale
//   (= clk/(baud*8)) bekledigi icin prescale portlarina
//   uart_cpb[18:3] (yani CPB/8, asagi yuvarlama) baglanir.
//   Ornek @50MHz: 115200 -> CPB=434 (presc 54), 1Mbps -> CPB=50 (presc 6),
//                 9600   -> CPB=5208 (presc 651).
// EK-2 UART_STP[1:0] (stop-bit): "00"=1, "01"=1.5, "1X"=2 stop.
// Cekirdek sabit 1 stop uretir; 0.5/1 bitlik ek sure asagidaki
// 4b bolumundeki wrapper sayaci ile (hat '1' tutulup TX_DONE
// geciktirilerek ve yeni TDR baslatmasi bekletilerek) saglanir.
// ============================================================
module uart_axil (
    input  logic        clk_i,
    input  logic        rst_ni,
    
    // AXI4-Lite Slave Arayüzü
    input  logic [31:0] s_axi_awaddr,
    input  logic        s_axi_awvalid,
    output logic        s_axi_awready,
    input  logic [31:0] s_axi_wdata,
    input  logic [ 3:0] s_axi_wstrb,
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

    // Fiziksel Pinler
    input  logic        rxd_i,
    output logic        txd_o
);

    // =========================================================
    // 1. REGISTER ADRESLERİ (Kesin Şartname Uyumlu)
    // =========================================================
    localparam logic [4:0] ADDR_CPB = 5'h00; // Clock-per-bit (baud rate)
    localparam logic [4:0] ADDR_STP = 5'h04; // Stop-bit ayarı
    localparam logic [4:0] ADDR_RDR = 5'h08; // Read Data Register
    localparam logic [4:0] ADDR_TDR = 5'h0C; // Transmit Data Register
    localparam logic [4:0] ADDR_CFG = 5'h10; // Configuration Register

    // Register Değişkenleri
    logic [31:0] uart_cpb;
    logic [ 1:0] uart_stp;
    logic [ 7:0] uart_rdr;
    logic [ 7:0] uart_tdr;
    
    // CFG bayrakları
    logic cfg_tx_en;    // Bit 0: TX başlat
    logic cfg_rx_done;  // Bit 1: RX verisi hazır
    logic cfg_tx_done;  // Bit 2: TX tamamlandı

    // UART core sinyalleri
    logic        tx_busy;
    logic        rx_valid;
    logic [ 7:0] rx_data_out;

    // Kenar yakalama
    logic prev_tx_en;
    logic prev_tx_busy;
    logic tx_start;

    // EK-2 STP stop-bit uzatma sinyalleri (bolum 4b)
    logic [15:0] stp_presc;
    logic [19:0] stp_ext_cnt;
    logic        stp_extending;
    logic        tx_pending;
    logic        tx_pending_fire;
    logic        tx_done_set;
    logic        stp_ext_load;
    logic        stp_hold;

    // Yazma FSM'inden flag kontrol sinyalleri
    logic        wr_cfg_hit;  // CFG register'ına yazma yapıldı mı?
    logic [31:0] wr_cfg_data;
    logic        wr_tdr_hit; // CFG'ye yazılan veri

    // =========================================================
    // 2. AXI-LITE YAZMA (WRITE) FSM
    // =========================================================
    logic aw_en;
    logic [4:0] write_addr;

    assign s_axi_bresp = 2'b00;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            s_axi_awready <= 1'b0;
            s_axi_wready  <= 1'b0;
            s_axi_bvalid  <= 1'b0;
            aw_en         <= 1'b1;
            write_addr    <= 5'd0;
            
            // EK-2: CPB = clk/baud -> 50MHz/115200 = 434 (donanim prescale = CPB>>3 = 54)
            uart_cpb      <= 32'd434;
            uart_stp      <= 2'b00;
            uart_tdr      <= 8'd0;
            wr_cfg_hit    <= 1'b0;
            wr_cfg_data   <= 32'd0;
            wr_tdr_hit    <= 1'b0;
        end else begin
            wr_cfg_hit <= 1'b0;
            wr_tdr_hit <= 1'b0;

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

            // Veri Yazma İşlemi
            if (s_axi_wready && s_axi_wvalid && s_axi_awready && s_axi_awvalid) begin
                case (write_addr)
                    ADDR_CPB: uart_cpb <= s_axi_wdata;
                    ADDR_STP: uart_stp <= s_axi_wdata[1:0];
                    ADDR_TDR: begin uart_tdr <= s_axi_wdata[7:0]; wr_tdr_hit <= 1'b1; end
                    ADDR_CFG: begin
                        wr_cfg_hit  <= 1'b1;
                        wr_cfg_data <= s_axi_wdata;
                    end
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
    // 3. AXI-LITE OKUMA (READ) FSM
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
                        ADDR_CPB: s_axi_rdata <= uart_cpb;
                        ADDR_STP: s_axi_rdata <= {30'd0, uart_stp};
                        ADDR_RDR: s_axi_rdata <= {24'd0, uart_rdr};
                        ADDR_TDR: s_axi_rdata <= {24'd0, uart_tdr};
                        ADDR_CFG: s_axi_rdata <= {29'd0, cfg_tx_done, cfg_rx_done, cfg_tx_en};
                        default:  s_axi_rdata <= 32'd0;
                    endcase
            end else if (s_axi_rvalid && s_axi_rready) begin
                s_axi_rvalid <= 1'b0;
            end
        end
    end

    // =========================================================
    // 4. FLAG CONTROLLER
    // =========================================================
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            cfg_tx_en    <= 1'b0;
            cfg_tx_done  <= 1'b0;
            cfg_rx_done  <= 1'b0;
            prev_tx_en   <= 1'b0;
            prev_tx_busy <= 1'b0;
            uart_rdr     <= 8'd0;
        end else begin
            prev_tx_en   <= cfg_tx_en;
            prev_tx_busy <= tx_busy;

            // --- TX DONE: stop suresi tamamlandi (1 stop + STP uzatmasi) ---
            if (tx_done_set) begin
                cfg_tx_done <= 1'b1;
            end

            // --- RX DONE: Geçerli veri geldi ---
            if (rx_valid) begin
                uart_rdr    <= rx_data_out;
                cfg_rx_done <= 1'b1;
            end

            // --- SOFTWARE WRITE ---
            if (wr_cfg_hit) begin
                cfg_tx_en <= wr_cfg_data[0];
                if (!wr_cfg_data[1]) cfg_rx_done <= 1'b0;
                if (!wr_cfg_data[2]) cfg_tx_done <= 1'b0;
            end
        end
    end

    // =========================================================
    // 4b. EK-2 STOP-BIT UZATMA (UART_STP[1:0])
    // =========================================================
    //   "00" -> 1   stop (cekirdek varsayilani, ek sure yok)
    //   "01" -> 1.5 stop (+ yarim bit = presc*4 clk)
    //   "1X" -> 2   stop (+ tam   bit = presc*8 clk)
    // Cekirdek busy dusunce (1 stop biti tam bitti) sayac yuklenir;
    // sayac calisirken hat zaten '1' kalir (stop seviyesi devam eder),
    // TX_DONE sayac bitince kurulur, uzatmada gelen TDR yazisi
    // tutulup (tx_pending) sayac sonunda baslatilir. Boylece stop
    // suresi yazilim davranisindan bagimsiz olarak DONANIMDA garanti.
    assign stp_presc    = uart_cpb[18:3];
    assign stp_ext_load = prev_tx_busy && !tx_busy && (uart_stp != 2'b00);
    assign stp_hold     = stp_extending || stp_ext_load;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            stp_ext_cnt     <= 20'd0;
            stp_extending   <= 1'b0;
            tx_pending      <= 1'b0;
            tx_pending_fire <= 1'b0;
            tx_done_set     <= 1'b0;
        end else begin
            tx_done_set     <= 1'b0;
            tx_pending_fire <= 1'b0;

            // Uzatma penceresinde gelen TDR istegini tut
            if (wr_tdr_hit && stp_hold)
                tx_pending <= 1'b1;

            if (stp_ext_load) begin
                // Cekirdegin 1 stop biti bitti -> ek sureyi baslat
                stp_extending <= 1'b1;
                if (uart_stp[1])
                    stp_ext_cnt <= {1'b0, stp_presc, 3'b000};   // "1X": +1 bit
                else
                    stp_ext_cnt <= {2'b00, stp_presc, 2'b00};   // "01": +0.5 bit
            end else if (stp_extending) begin
                if (stp_ext_cnt > 20'd1) begin
                    stp_ext_cnt <= stp_ext_cnt - 20'd1;
                end else begin
                    stp_extending <= 1'b0;
                    stp_ext_cnt   <= 20'd0;
                    tx_done_set   <= 1'b1;
                    if (tx_pending) begin
                        tx_pending      <= 1'b0;
                        tx_pending_fire <= 1'b1;
                    end
                end
            end else if (prev_tx_busy && !tx_busy) begin
                tx_done_set <= 1'b1;   // "00": 1 stop, hemen done
            end
        end
    end

    // Yeni cerceve ancak stop suresi (uzatma dahil) dolunca baslayabilir
    assign tx_start = (wr_tdr_hit && !stp_hold) || tx_pending_fire;

    // =========================================================
    // 5. UART ÇEKİRDEK BAĞLANTILARI (Alex Forencich Gerçek Portları)
    // =========================================================
    uart_tx i_uart_tx (
        .clk           ( clk_i            ),
        .rst           ( !rst_ni          ), // Active-High Reset Dönüşümü!
        .s_axis_tdata  ( uart_tdr         ),
        .s_axis_tvalid ( tx_start         ),
        .s_axis_tready (                  ), // AXI-Stream Ready (Kullanılmıyor)
        .txd           ( txd_o            ),
        .busy          ( tx_busy          ),
        .prescale      ( uart_cpb[18:3]   )  // EK-2: prescale = CPB/8
    );

    uart_rx i_uart_rx (
        .clk           ( clk_i            ),
        .rst           ( !rst_ni          ), // Active-High Reset Dönüşümü!
        .m_axis_tdata  ( rx_data_out      ),
        .m_axis_tvalid ( rx_valid         ),
        .m_axis_tready ( 1'b1             ), // Alıcı her zaman hazır
        .rxd           ( rxd_i            ),
        .busy          (                  ), 
        .overrun_error (                  ),
        .frame_error   (                  ),
        .prescale      ( uart_cpb[18:3]   )  // EK-2: prescale = CPB/8
    );

endmodule
