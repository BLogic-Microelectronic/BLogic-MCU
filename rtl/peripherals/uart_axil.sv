// ============================================
// Ostim BLogic Mikroelektronik
// uart_axil.sv  -  AXI-Lite UART cevre birimi
// ============================================
`timescale 1ns / 1ps

// CPB = clk/baud; cekirdek 8x prescale ister, o yuzden CPB/8 baglanir.
// STP[1:0]: 00=1 stop, 01=1.5, 1X=2. Ek sure asagidaki sayacla uretiliyor.
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

    // Register adresleri
    localparam logic [4:0] ADDR_CPB = 5'h00; // baud rate
    localparam logic [4:0] ADDR_STP = 5'h04; // stop-bit
    localparam logic [4:0] ADDR_RDR = 5'h08; // okuma verisi
    localparam logic [4:0] ADDR_TDR = 5'h0C; // gonderme verisi
    localparam logic [4:0] ADDR_CFG = 5'h10; // konfigurasyon

    logic [31:0] uart_cpb;
    logic [ 1:0] uart_stp;
    logic [ 7:0] uart_rdr;
    logic [ 7:0] uart_tdr;
    
    // CFG bayraklari
    logic cfg_tx_en;    // bit 0: TX baslat
    logic cfg_rx_done;  // bit 1: RX hazir
    logic cfg_tx_done;  // bit 2: TX bitti

    logic        tx_busy;
    logic        rx_valid;
    logic [ 7:0] rx_data_out;

    logic prev_tx_en;
    logic prev_tx_busy;
    logic tx_start;

    // stop-bit uzatma sinyalleri
    logic [15:0] stp_presc;
    logic [19:0] stp_ext_cnt;
    logic        stp_extending;
    logic        tx_pending;
    logic        tx_pending_fire;
    logic        tx_done_set;
    logic        stp_ext_load;
    logic        stp_hold;

    logic        wr_cfg_hit;
    logic [31:0] wr_cfg_data;
    logic        wr_tdr_hit;

    // AXI-Lite yazma FSM
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
            
            // 50MHz/115200 = 434
            uart_cpb      <= 32'd434;
            uart_stp      <= 2'b00;
            uart_tdr      <= 8'd0;
            wr_cfg_hit    <= 1'b0;
            wr_cfg_data   <= 32'd0;
            wr_tdr_hit    <= 1'b0;
        end else begin
            wr_cfg_hit <= 1'b0;
            wr_tdr_hit <= 1'b0;

            // adres + veri yakala
            if (s_axi_awvalid && s_axi_wvalid && aw_en) begin
                s_axi_awready <= 1'b1;
                s_axi_wready  <= 1'b1;
                write_addr    <= s_axi_awaddr[4:0];
                aw_en         <= 1'b0;
            end else begin
                s_axi_awready <= 1'b0;
                s_axi_wready  <= 1'b0;
            end

            // veri yaz
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

            // yanit gonder
            if (s_axi_wready && s_axi_wvalid && s_axi_awready && s_axi_awvalid && !s_axi_bvalid) begin
                s_axi_bvalid <= 1'b1;
            end else if (s_axi_bready && s_axi_bvalid) begin
                s_axi_bvalid <= 1'b0;
                aw_en        <= 1'b1;
            end
        end
    end

    // AXI-Lite okuma FSM
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

    // Bayrak kontrol
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

            // stop suresi bitti
            if (tx_done_set) begin
                cfg_tx_done <= 1'b1;
            end

            // gecerli veri geldi
            if (rx_valid) begin
                uart_rdr    <= rx_data_out;
                cfg_rx_done <= 1'b1;
            end

            // yazilim yazmasi
            // UART_CFG[0] auto-clear: gonderim bitince HW '0'a ceker (sartname EK-2, v1.3)
            if (tx_done_set) cfg_tx_en <= 1'b0;

            if (wr_cfg_hit) begin
                cfg_tx_en <= wr_cfg_data[0];
                if (!wr_cfg_data[1]) cfg_rx_done <= 1'b0;
                if (!wr_cfg_data[2]) cfg_tx_done <= 1'b0;
            end
        end
    end

    // Stop-bit uzatma: 00=1, 01=+0.5 bit, 1X=+1 bit.
    // Cekirdek busy dusunce sayac yuklenir, hat '1' kalir, bitince TX_DONE kurulur.
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

            // uzatma sirasinda gelen TDR istegini tut
            if (wr_tdr_hit && stp_hold)
                tx_pending <= 1'b1;

            if (stp_ext_load) begin
                // 1 stop biti bitti, ek sureyi baslat
                stp_extending <= 1'b1;
                if (uart_stp[1])
                    stp_ext_cnt <= {1'b0, stp_presc, 3'b000};   // +1 bit
                else
                    stp_ext_cnt <= {2'b00, stp_presc, 2'b00};   // +0.5 bit
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
                tx_done_set <= 1'b1;   // 1 stop, hemen done
            end
        end
    end

    // yeni cerceve ancak stop suresi dolunca baslar
    assign tx_start = (wr_tdr_hit && !stp_hold) || tx_pending_fire;

    // UART cekirdek baglantilari (Alex Forencich)
    uart_tx i_uart_tx (
        .clk           ( clk_i            ),
        .rst           ( !rst_ni          ), // active-high reset
        .s_axis_tdata  ( uart_tdr         ),
        .s_axis_tvalid ( tx_start         ),
        .s_axis_tready (                  ),
        .txd           ( txd_o            ),
        .busy          ( tx_busy          ),
        .prescale      ( uart_cpb[18:3]   )  // prescale = CPB/8
    );

    uart_rx i_uart_rx (
        .clk           ( clk_i            ),
        .rst           ( !rst_ni          ), // active-high reset
        .m_axis_tdata  ( rx_data_out      ),
        .m_axis_tvalid ( rx_valid         ),
        .m_axis_tready ( 1'b1             ), // alici hep hazir
        .rxd           ( rxd_i            ),
        .busy          (                  ),
        .overrun_error (                  ),
        .frame_error   (                  ),
        .prescale      ( uart_cpb[18:3]   )  // prescale = CPB/8
    );

endmodule
