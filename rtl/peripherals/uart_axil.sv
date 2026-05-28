`timescale 1ns / 1ps

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

    // Yazma FSM'inden flag kontrol sinyalleri
    logic        wr_cfg_hit;  // CFG register'ına yazma yapıldı mı?
    logic [31:0] wr_cfg_data; // CFG'ye yazılan veri

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
            
            // 50MHz / (115200 * 8) ≈ 54
            uart_cpb      <= 32'd54; 
            uart_stp      <= 2'b00;
            uart_tdr      <= 8'd0;
            wr_cfg_hit    <= 1'b0;
            wr_cfg_data   <= 32'd0;
        end else begin
            wr_cfg_hit <= 1'b0;

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
                    ADDR_TDR: uart_tdr <= s_axi_wdata[7:0];
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

            // --- TX DONE: tx_busy düşen kenarı ---
            if (prev_tx_busy && !tx_busy) begin
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

    assign tx_start = (cfg_tx_en && !prev_tx_en);

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
        .prescale      ( uart_cpb[15:0]   )
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
        .prescale      ( uart_cpb[15:0]   )
    );

endmodule
