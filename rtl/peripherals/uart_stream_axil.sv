// ============================================
// Ostim BLogic Mikroelektronik
// uart_stream_axil.sv  -  YZ veri akışı UART DMA
// ============================================
`timescale 1ns / 1ps

module uart_stream_axil #(
    parameter logic [31:0] DEFAULT_STRM_ADDR = 32'h0003_0000, // AI SRAM giriş
    parameter logic [31:0] DEFAULT_STRM_LEN  = 32'd1960,      // 49*40*1 INT8
    parameter logic [ 3:0] DMA_AXI_ID        = 4'h3
)(
    input  logic        clk_i,
    input  logic        rst_ni,

    // AXI4-Lite slave (CPU CSR)
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

    // AXI4 master (AI SRAM DMA, yalnızca yazma)
    output logic [ 3:0] m_axi_awid,
    output logic [31:0] m_axi_awaddr,
    output logic [ 7:0] m_axi_awlen,
    output logic [ 2:0] m_axi_awsize,
    output logic [ 1:0] m_axi_awburst,
    output logic        m_axi_awvalid,
    input  logic        m_axi_awready,
    output logic [31:0] m_axi_wdata,
    output logic [ 3:0] m_axi_wstrb,
    output logic        m_axi_wlast,
    output logic        m_axi_wvalid,
    input  logic        m_axi_wready,
    input  logic [ 3:0] m_axi_bid,
    input  logic [ 1:0] m_axi_bresp,
    input  logic        m_axi_bvalid,
    output logic        m_axi_bready,
    // Okuma kanalı kullanılmaz, tieoff
    output logic [ 3:0] m_axi_arid,
    output logic [31:0] m_axi_araddr,
    output logic [ 7:0] m_axi_arlen,
    output logic [ 2:0] m_axi_arsize,
    output logic [ 1:0] m_axi_arburst,
    output logic        m_axi_arvalid,
    input  logic        m_axi_arready,
    input  logic [ 3:0] m_axi_rid,
    input  logic [31:0] m_axi_rdata,
    input  logic [ 1:0] m_axi_rresp,
    input  logic        m_axi_rlast,
    input  logic        m_axi_rvalid,
    output logic        m_axi_rready,

    // Fiziksel pinler
    input  logic        rxd_i,
    output logic        txd_o,

    // Durum / kesme
    output logic        stream_active_o, // DMA sahipliği (arbiter'a)
    output logic        irq_o            // DMA bitti kesmesi
);

    // Okuma kanalı tieoff
    assign m_axi_arid    = '0;
    assign m_axi_araddr  = '0;
    assign m_axi_arlen   = '0;
    assign m_axi_arsize  = '0;
    assign m_axi_arburst = '0;
    assign m_axi_arvalid = 1'b0;
    assign m_axi_rready  = 1'b0;

    // Register adresleri
    localparam logic [5:0] ADDR_CPB  = 6'h00;
    localparam logic [5:0] ADDR_STP  = 6'h04;
    localparam logic [5:0] ADDR_RDR  = 6'h08;
    localparam logic [5:0] ADDR_TDR  = 6'h0C;
    localparam logic [5:0] ADDR_CFG  = 6'h10;
    localparam logic [5:0] ADDR_SADR = 6'h14; // STRM_ADDR
    localparam logic [5:0] ADDR_SLEN = 6'h18; // STRM_LEN
    localparam logic [5:0] ADDR_SCTL = 6'h1C; // STRM_CTRL
    localparam logic [5:0] ADDR_SSTA = 6'h20; // STRM_STAT

    // Register değişkenleri
    logic [31:0] uart_cpb;
    logic [ 1:0] uart_stp;
    logic [ 7:0] uart_rdr;
    logic [ 7:0] uart_tdr;
    logic        cfg_tx_en, cfg_rx_done, cfg_tx_done;
    logic [31:0] strm_base;   // DMA başlangıç adresi (sabit)
    logic [31:0] strm_addr;   // ilerleyen DMA adresi
    logic [31:0] strm_len;    // toplam bayt
    logic [31:0] strm_rxcnt;  // alınan bayt sayacı

    // UART core sinyalleri
    logic        tx_busy;
    logic        rx_valid;
    logic [ 7:0] rx_data_out;
    logic        prev_tx_busy;

    // Yazma FSM'inden pulse'lar
    logic        wr_cfg_hit;
    logic [31:0] wr_cfg_data;
    logic        wr_tdr_hit;
    logic        strm_start;  // STRM_CTRL[0] pulse
    logic        strm_abort;  // STRM_CTRL[1] pulse

    // DMA durum
    logic        dma_busy;
    logic        dma_done;
    logic        abort_req;   // uçuştaki yazma bitince durur

    assign stream_active_o = dma_busy;

    // AXI-Lite yazma FSM
    logic       aw_en;
    logic [5:0] write_addr;

    assign s_axi_bresp = 2'b00;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            s_axi_awready <= 1'b0;
            s_axi_wready  <= 1'b0;
            s_axi_bvalid  <= 1'b0;
            aw_en         <= 1'b1;
            write_addr    <= 6'd0;
            uart_cpb      <= 32'd434;   // 50MHz/115200 (SW 1Mbps için 50 yazar)
            uart_stp      <= 2'b00;
            uart_tdr      <= 8'd0;
            strm_len      <= DEFAULT_STRM_LEN;
            wr_cfg_hit    <= 1'b0;
            wr_cfg_data   <= 32'd0;
            wr_tdr_hit    <= 1'b0;
            strm_start    <= 1'b0;
            strm_abort    <= 1'b0;
        end else begin
            wr_cfg_hit <= 1'b0;
            wr_tdr_hit <= 1'b0;
            strm_start <= 1'b0;
            strm_abort <= 1'b0;

            if (s_axi_awvalid && s_axi_wvalid && aw_en) begin
                s_axi_awready <= 1'b1;
                s_axi_wready  <= 1'b1;
                write_addr    <= s_axi_awaddr[5:0];
                aw_en         <= 1'b0;
            end else begin
                s_axi_awready <= 1'b0;
                s_axi_wready  <= 1'b0;
            end

            if (s_axi_wready && s_axi_wvalid && s_axi_awready && s_axi_awvalid) begin
                case (write_addr)
                    ADDR_CPB:  uart_cpb <= s_axi_wdata;
                    ADDR_STP:  uart_stp <= s_axi_wdata[1:0];
                    ADDR_TDR:  begin uart_tdr <= s_axi_wdata[7:0]; wr_tdr_hit <= 1'b1; end
                    ADDR_CFG:  begin wr_cfg_hit <= 1'b1; wr_cfg_data <= s_axi_wdata; end
                    ADDR_SLEN: strm_len <= s_axi_wdata;
                    ADDR_SCTL: begin
                        strm_start <= s_axi_wdata[0];
                        strm_abort <= s_axi_wdata[1];
                    end
                    // ADDR_SADR DMA bloğunda yazılır
                    default: ;
                endcase
            end

            if (s_axi_wready && s_axi_wvalid && s_axi_awready && s_axi_awvalid && !s_axi_bvalid) begin
                s_axi_bvalid <= 1'b1;
            end else if (s_axi_bready && s_axi_bvalid) begin
                s_axi_bvalid <= 1'b0;
                aw_en        <= 1'b1;
            end
        end
    end

    // STRM_ADDR yazma tespiti
    wire wr_fire   = s_axi_wready && s_axi_wvalid && s_axi_awready && s_axi_awvalid;
    wire wr_sadr   = wr_fire && (write_addr == ADDR_SADR);

    // AXI-Lite okuma FSM
    assign s_axi_rresp = 2'b00;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            s_axi_arready <= 1'b0;
            s_axi_rvalid  <= 1'b0;
            s_axi_rdata   <= 32'd0;
        end else begin
            if (s_axi_arvalid && !s_axi_arready)
                s_axi_arready <= 1'b1;
            else
                s_axi_arready <= 1'b0;

            if (s_axi_arready && s_axi_arvalid && !s_axi_rvalid) begin
                s_axi_rvalid <= 1'b1;
                case (s_axi_araddr[5:0])
                    ADDR_CPB:  s_axi_rdata <= uart_cpb;
                    ADDR_STP:  s_axi_rdata <= {30'd0, uart_stp};
                    ADDR_RDR:  s_axi_rdata <= {24'd0, uart_rdr};
                    ADDR_TDR:  s_axi_rdata <= {24'd0, uart_tdr};
                    ADDR_CFG:  s_axi_rdata <= {29'd0, cfg_tx_done, cfg_rx_done, cfg_tx_en};
                    ADDR_SADR: s_axi_rdata <= strm_base;
                    ADDR_SLEN: s_axi_rdata <= strm_len;
                    ADDR_SSTA: s_axi_rdata <= {strm_rxcnt[15:0], 14'd0, dma_done, dma_busy};
                    default:   s_axi_rdata <= 32'd0;
                endcase
            end else if (s_axi_rvalid && s_axi_rready) begin
                s_axi_rvalid <= 1'b0;
            end
        end
    end

    // TX/RX bayrak kontrolü. DMA aktifken RX baytları packer'a gider, RDR güncellenmez.
    logic tx_start;
    assign tx_start = wr_tdr_hit;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            cfg_tx_en    <= 1'b0;
            cfg_tx_done  <= 1'b0;
            cfg_rx_done  <= 1'b0;
            prev_tx_busy <= 1'b0;
            uart_rdr     <= 8'd0;
        end else begin
            prev_tx_busy <= tx_busy;

            // TX bitti (busy düşünce)
            if (prev_tx_busy && !tx_busy) begin
                cfg_tx_done <= 1'b1;
                // UART_CFG[0] auto-clear: gonderim bitince HW '0'a ceker (sartname EK-2, v1.3)
                cfg_tx_en   <= 1'b0;
            end

            // DMA kapalıyken RX'i RDR'ye al
            if (rx_valid && !dma_busy) begin
                uart_rdr    <= rx_data_out;
                cfg_rx_done <= 1'b1;
            end

            if (wr_cfg_hit) begin
                cfg_tx_en <= wr_cfg_data[0];
                if (!wr_cfg_data[1]) cfg_rx_done <= 1'b0;
                if (!wr_cfg_data[2]) cfg_tx_done <= 1'b0;
            end
        end
    end

    // DMA: byte->word packer + AXI4 master yazma
    logic [31:0] word_buf;
    logic [ 3:0] strb_buf;
    logic [ 1:0] bcnt;          // word içi bayt indeksi (0..3)
    logic [31:0] bytes_left;    // kalan bayt

    // Master FSM kuyruğu (tek derinlik, UART RX yavaş)
    logic        wr_pending;
    logic [31:0] wr_word;
    logic [ 3:0] wr_strb;

    typedef enum logic [1:0] { M_IDLE, M_AW, M_B } mst_t;
    mst_t mst;

    assign m_axi_awid    = DMA_AXI_ID;
    assign m_axi_awlen   = 8'd0;        // tek beat
    assign m_axi_awsize  = 3'b010;      // 4 byte
    assign m_axi_awburst = 2'b01;       // INCR
    assign m_axi_wlast   = 1'b1;
    assign m_axi_awaddr  = strm_addr;
    assign m_axi_wdata   = wr_word;
    assign m_axi_wstrb   = wr_strb;
    // AW+W ayni cevrimde surulur: axi_sram_wrapper yazmayi ancak
    // aw_valid && w_valid birlikteyken isler (write_en); iki ready ayni
    // ifade oldugundan handshake'ler hep es zamanli tamamlanir.
    assign m_axi_awvalid = (mst == M_AW);
    assign m_axi_wvalid  = (mst == M_AW);
    assign m_axi_bready  = (mst == M_B);

    // Bu baytın transferin son baytı olup olmadığı
    wire last_byte    = (bytes_left == 32'd1);
    wire flush_now    = rx_valid && dma_busy && (bcnt == 2'd3 || last_byte);

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            dma_busy   <= 1'b0;
            dma_done   <= 1'b0;
            abort_req  <= 1'b0;
            irq_o      <= 1'b0;
            strm_base  <= DEFAULT_STRM_ADDR;
            strm_addr  <= DEFAULT_STRM_ADDR;
            strm_rxcnt <= 32'd0;
            word_buf   <= 32'd0;
            strb_buf   <= 4'd0;
            bcnt       <= 2'd0;
            bytes_left <= 32'd0;
            wr_pending <= 1'b0;
            wr_word    <= 32'd0;
            wr_strb    <= 4'd0;
            mst        <= M_IDLE;
        end else begin
            irq_o <= 1'b0;  // tek cycle pulse

            // CSR yan etkileri
            if (wr_sadr && !dma_busy)
                strm_base <= s_axi_wdata;    // base sadece DMA boştayken

            // START: DMA'yı kur
            if (strm_start && !dma_busy && (strm_len != 32'd0)) begin
                dma_busy   <= 1'b1;
                dma_done   <= 1'b0;
                strm_addr  <= strm_base;
                bytes_left <= strm_len;
                strm_rxcnt <= 32'd0;
                word_buf   <= 32'd0;
                strb_buf   <= 4'd0;
                bcnt       <= 2'd0;
            end

            // ABORT: sahiplik ancak uçuştaki yazma bitince bırakılır, yoksa AW/W
            // valid yüksekken çekilirse protokol ihlali olur.
            if (strm_abort && dma_busy)
                abort_req <= 1'b1;

            // RX baytını packer'a koy
            if (rx_valid && dma_busy && !abort_req && (bytes_left != 32'd0)) begin
                word_buf[bcnt*8 +: 8] <= rx_data_out;
                strb_buf[bcnt]        <= 1'b1;
                bytes_left            <= bytes_left - 32'd1;
                strm_rxcnt            <= strm_rxcnt + 32'd1;

                if (flush_now) begin
                    // dolu word'ü kuyruğa ver
                    wr_word    <= word_buf    | ({24'd0, rx_data_out} << (bcnt*8));
                    wr_strb    <= strb_buf    | (4'd1 << bcnt);
                    wr_pending <= 1'b1;
                    // packer'ı sıfırla
                    word_buf   <= 32'd0;
                    strb_buf   <= 4'd0;
                    bcnt       <= 2'd0;
                end else begin
                    bcnt <= bcnt + 2'd1;
                end
            end

            // AXI master yazma FSM
            case (mst)
                M_IDLE: if (wr_pending) mst <= M_AW;
                M_AW:   if (m_axi_awready && m_axi_wready) mst <= M_B;
                M_B:    if (m_axi_bvalid) begin
                            mst        <= M_IDLE;
                            wr_pending <= 1'b0;
                            strm_addr  <= strm_addr + 32'd4;  // sonraki word
                        end
                default: mst <= M_IDLE;
            endcase

            // Tamamlanma / abort sonlandırma, bus boştayken
            if (dma_busy && !wr_pending && (mst == M_IDLE) &&
                (abort_req || (bytes_left == 32'd0))) begin
                dma_busy  <= 1'b0;
                abort_req <= 1'b0;
                bcnt      <= 2'd0;
                strb_buf  <= 4'd0;
                if (!abort_req) begin
                    dma_done <= 1'b1;
                    irq_o    <= 1'b1;   // abort'ta kesme yok
                end
            end
        end
    end

    // UART çekirdekleri (Alex Forencich)
    uart_tx i_uart_tx (
        .clk           ( clk_i          ),
        .rst           ( !rst_ni        ),
        .s_axis_tdata  ( uart_tdr       ),
        .s_axis_tvalid ( tx_start       ),
        .s_axis_tready (                ),
        .txd           ( txd_o          ),
        .busy          ( tx_busy        ),
        .prescale      ( uart_cpb[18:3] )
    );

    uart_rx i_uart_rx (
        .clk           ( clk_i          ),
        .rst           ( !rst_ni        ),
        .m_axis_tdata  ( rx_data_out    ),
        .m_axis_tvalid ( rx_valid       ),
        .m_axis_tready ( 1'b1           ),
        .rxd           ( rxd_i          ),
        .busy          (                ),
        .overrun_error (                ),
        .frame_error   (                ),
        .prescale      ( uart_cpb[18:3] )
    );

endmodule
