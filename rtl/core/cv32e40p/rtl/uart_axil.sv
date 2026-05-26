`timescale 1ns / 1ps

module uart_axil (
    input  logic clk_i,
    input  logic rst_ni,

    // ============================================================
    // AXI4-Lite Slave Sinyalleri (Crossbar'dan gelen periph_lite hattı)
    // ============================================================
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

    // ============================================================
    // Fiziksel Dış Dünya Pinleri (FPGA Pinlerine Gidecek)
    // ============================================================
    input  logic rxd_i,
    output logic txd_o
);

    // İç sinyaller
    logic [7:0] tx_data;
    logic       tx_valid;
    logic       tx_ready;
    logic [7:0] rx_data;
    logic       rx_valid;
    logic       tx_busy;
    logic [15:0] prescale_reg;

    // Aktif düşük reset çevirici
    logic rst;
    assign rst = ~rst_ni;

    // --------------------------------------------------------
    // AXI-Lite YAZMA İşlemi (Çok Basit FSM)
    // --------------------------------------------------------
    assign s_axi_awready = 1'b1;
    assign s_axi_wready  = 1'b1;
    assign s_axi_bresp   = 2'b00; // Hata yok (OKAY)

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            s_axi_bvalid <= 1'b0;
            tx_valid     <= 1'b0;
            tx_data      <= 8'd0;
            // 50 MHz saat hızında 115200 Baud Rate için varsayılan çarpan (~27)
            prescale_reg <= 16'd27; 
        end else begin
            s_axi_bvalid <= 1'b0;
            tx_valid     <= 1'b0;

            if (s_axi_awvalid && s_axi_wvalid) begin
                s_axi_bvalid <= 1'b1; 
                
                // Offset 0x00: TX_DATA (Ekrana karakter basma)
                if (s_axi_awaddr[7:0] == 8'h00) begin
                    tx_data  <= s_axi_wdata[7:0];
                    tx_valid <= 1'b1;
                end
                // Offset 0x08: PRESCALE (Baud Rate Ayarlama Register'ı)
                else if (s_axi_awaddr[7:0] == 8'h08) begin
                    prescale_reg <= s_axi_wdata[15:0];
                end
            end
        end
    end

    // --------------------------------------------------------
    // AXI-Lite OKUMA İşlemi
    // --------------------------------------------------------
    assign s_axi_arready = 1'b1;
    assign s_axi_rresp   = 2'b00;

    logic [7:0] rx_buffer;
    logic       rx_data_ready;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            s_axi_rvalid  <= 1'b0;
            s_axi_rdata   <= 32'd0;
            rx_buffer     <= 8'd0;
            rx_data_ready <= 1'b0;
        end else begin
            // UART'tan dış dünyadan byte gelirse buffera at
            if (rx_valid) begin
                rx_buffer     <= rx_data;
                rx_data_ready <= 1'b1;
            end

            s_axi_rvalid <= 1'b0;
            
            if (s_axi_arvalid) begin
                s_axi_rvalid <= 1'b1;
                
                // Offset 0x00: RX_DATA (Gelen veriyi okuma)
                if (s_axi_araddr[7:0] == 8'h00) begin
                    s_axi_rdata   <= {24'd0, rx_buffer};
                    rx_data_ready <= 1'b0; // Okunduğu an bayrağı temizle
                end
                // Offset 0x04: STATUS (Bit 0: TX_BUSY, Bit 1: RX_READY)
                else if (s_axi_araddr[7:0] == 8'h04) begin
                    s_axi_rdata <= {30'd0, rx_data_ready, tx_busy};
                end
                else begin
                    s_axi_rdata <= 32'd0;
                end
            end
        end
    end

    // --------------------------------------------------------
    // Alex Forencich Çekirdek UART Modülünün Çağrılması
    // --------------------------------------------------------
    uart #(
        .DATA_WIDTH(8)
    ) i_uart (
        .clk             ( clk_i ),
        .rst             ( rst ),
        
        .s_axis_tdata    ( tx_data ),
        .s_axis_tvalid   ( tx_valid ),
        .s_axis_tready   ( tx_ready ),
        
        .m_axis_tdata    ( rx_data ),
        .m_axis_tvalid   ( rx_valid ),
        .m_axis_tready   ( 1'b1 ), 
        
        .rxd             ( rxd_i ),
        .txd             ( txd_o ),
        
        .tx_busy         ( tx_busy ),
        .rx_busy         ( /* unused */ ),
        .rx_overrun_error( /* unused */ ),
        .rx_frame_error  ( /* unused */ ),
        .prescale        ( prescale_reg )
    );

endmodule
