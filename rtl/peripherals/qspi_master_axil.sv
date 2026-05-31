`timescale 1ns / 1ps

// ============================================================
// BLogic MCU — QSPI Master (Multi-Driver Bug Düzeltilmiş)
// ============================================================
// Tüm FIFO pointer'ları ve state TEK always_ff bloğunda.
// Vivado multi-driven net hatası artık oluşmaz.
//
// Register Map (EK-2):
//   0x00  QSPI_CCR  — Communication Configuration Register (RW)
//   0x04  QSPI_ADR  — Address Register (RW)
//   0x08  QSPI_DR   — Data Register (RW, FIFO arkasında)
//   0x0C  QSPI_STA  — Status Register (RO)
//   0x10  QSPI_FCR  — FIFO Control Register (RW)
// ============================================================

module qspi_master_axil (
    input  logic        clk_i,
    input  logic        rst_ni,

    // AXI4-Lite Slave
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

    // QSPI Fiziksel Pinler
    output logic        sclk_o,
    output logic        cs_no,
    output logic [ 3:0] io_o,
    input  logic [ 3:0] io_i,
    output logic [ 3:0] io_oe
);

    // =========================================================
    // 1. REGISTER ADRESLERİ
    // =========================================================
    localparam logic [4:0] ADDR_CCR = 5'h00;
    localparam logic [4:0] ADDR_ADR = 5'h04;
    localparam logic [4:0] ADDR_DR  = 5'h08;
    localparam logic [4:0] ADDR_STA = 5'h0C;
    localparam logic [4:0] ADDR_FCR = 5'h10;

    // =========================================================
    // 2. CCR ALANLARI
    // =========================================================
    logic [ 7:0] ccr_instr;
    logic [ 1:0] ccr_data_mode;
    logic        ccr_dir;
    logic [ 4:0] ccr_dummy;
    logic [ 7:0] ccr_data_len;
    logic [ 5:0] ccr_prescaler;
    logic [23:0] qspi_adr;

    // =========================================================
    // 3. FIFO — TEK BLOKTA YÖNETİLEN POINTER'LAR
    // =========================================================
    localparam int FIFO_DEPTH = 64;
    localparam int FIFO_AW    = 6;

    logic [31:0] tx_fifo [0:FIFO_DEPTH-1];
    logic [31:0] rx_fifo [0:FIFO_DEPTH-1];
    logic [FIFO_AW:0] tx_wr_ptr, tx_rd_ptr;
    logic [FIFO_AW:0] rx_wr_ptr, rx_rd_ptr;

    wire [FIFO_AW:0] tx_count = tx_wr_ptr - tx_rd_ptr;
    wire [FIFO_AW:0] rx_count = rx_wr_ptr - rx_rd_ptr;
    wire tx_full  = (tx_count == FIFO_DEPTH);
    wire tx_empty = (tx_count == 0);
    wire rx_full  = (rx_count == FIFO_DEPTH);
    wire rx_empty = (rx_count == 0);

    // =========================================================
    // 4. SPI ENGINE STATE
    // =========================================================
    typedef enum logic [3:0] {
        SPI_IDLE, SPI_CS_ASSERT, SPI_SEND_CMD, SPI_SEND_ADDR,
        SPI_DUMMY, SPI_DATA_TX, SPI_DATA_RX, SPI_CS_DEASSERT, SPI_DONE
    } spi_state_t;

    spi_state_t  spi_state;
    logic [ 5:0] sclk_cnt;
    logic        sclk_reg;
    logic [ 2:0] bit_cnt;
    logic [ 1:0] addr_byte;
    logic [ 4:0] dummy_cnt;
    logic [ 8:0] data_byte_cnt;
    logic [ 7:0] shift_out;
    logic [ 7:0] shift_in;
    logic [ 1:0] rx_byte_pos;
    logic [31:0] rx_word_acc;
    logic [ 1:0] tx_byte_pos;
    logic [31:0] tx_current_word;
    logic        sta_done;
    logic        sta_busy;
    logic [ 3:0] sta_fifo_err;

    // SPI clock tick
    wire sclk_tick    = (sclk_cnt >= ccr_prescaler);
    wire sclk_rising  = sclk_tick && (sclk_reg == 1'b0);
    wire sclk_falling = sclk_tick && (sclk_reg == 1'b1);

    assign sclk_o = sclk_reg;
    assign cs_no  = (spi_state == SPI_IDLE || spi_state == SPI_DONE);

    // SPI I/O
    assign io_o[0] = shift_out[bit_cnt];
    assign io_o[1] = 1'b1;
    assign io_o[2] = 1'b1;
    assign io_o[3] = 1'b1;
    assign io_oe[0] = (spi_state == SPI_SEND_CMD || spi_state == SPI_SEND_ADDR ||
                       spi_state == SPI_DATA_TX  || spi_state == SPI_DUMMY);
    assign io_oe[1] = 1'b0;
    assign io_oe[2] = 1'b1;
    assign io_oe[3] = 1'b1;

    // =========================================================
    // 5. AXI YAZMA/OKUMA — Komut sinyalleri (pulse)
    // =========================================================
    // AXI FSM'den SPI engine'e giden pulse sinyalleri
    logic        cmd_start;        // CCR'ye yazıldı → transaction başlat
    logic        cmd_clr_sta;      // CCR[31] → status temizle
    logic        cmd_tx_push;      // DR'ye yazıldı → TX FIFO'ya push
    logic [31:0] cmd_tx_data;      // Push edilecek veri
    logic        cmd_rx_pop;       // DR okundu → RX FIFO'dan pop
    logic        cmd_rx_flush;     // FCR[0] → RX FIFO flush
    logic        cmd_tx_flush;     // FCR[1] → TX FIFO flush

    // =========================================================
    // 6. TEK MASTER always_ff — TÜM STATE + FIFO POINTER'LAR
    // =========================================================
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            spi_state     <= SPI_IDLE;
            sclk_cnt      <= '0;
            sclk_reg      <= 1'b0;
            bit_cnt       <= '0;
            addr_byte     <= '0;
            dummy_cnt     <= '0;
            data_byte_cnt <= '0;
            shift_out     <= '0;
            shift_in      <= '0;
            rx_byte_pos   <= '0;
            rx_word_acc   <= '0;
            tx_byte_pos   <= '0;
            tx_current_word <= '0;
            sta_done      <= 1'b0;
            sta_busy      <= 1'b0;
            sta_fifo_err  <= 4'b0;
            tx_wr_ptr     <= '0;
            tx_rd_ptr     <= '0;
            rx_wr_ptr     <= '0;
            rx_rd_ptr     <= '0;
        end else begin

            // --- FIFO flush komutları (en yüksek öncelik) ---
            if (cmd_rx_flush) begin
                rx_wr_ptr <= '0;
                rx_rd_ptr <= '0;
            end
            if (cmd_tx_flush) begin
                tx_wr_ptr <= '0;
                tx_rd_ptr <= '0;
            end

            // --- TX FIFO push (AXI DR yazma) ---
            if (cmd_tx_push && !cmd_tx_flush) begin
                if (!tx_full) begin
                    tx_fifo[tx_wr_ptr[FIFO_AW-1:0]] <= cmd_tx_data;
                    tx_wr_ptr <= tx_wr_ptr + 1;
                end else begin
                    sta_fifo_err <= 4'b0010;
                end
            end

            // --- RX FIFO pop (AXI DR okuma) ---
            if (cmd_rx_pop && !cmd_rx_flush) begin
                if (!rx_empty)
                    rx_rd_ptr <= rx_rd_ptr + 1;
                else
                    sta_fifo_err <= 4'b0001;
            end

            // --- Status clear ---
            if (cmd_clr_sta) begin
                sta_done     <= 1'b0;
                sta_fifo_err <= 4'b0;
            end

            // --- SPI Clock üretici ---
            if (spi_state == SPI_IDLE || spi_state == SPI_CS_ASSERT ||
                spi_state == SPI_CS_DEASSERT || spi_state == SPI_DONE) begin
                sclk_cnt <= '0;
                sclk_reg <= 1'b0;
            end else begin
                if (sclk_tick) begin
                    sclk_cnt <= '0;
                    sclk_reg <= ~sclk_reg;
                end else begin
                    sclk_cnt <= sclk_cnt + 1;
                end
            end

            // --- SPI FSM ---
            case (spi_state)
                SPI_IDLE: begin
                    sta_busy <= 1'b0;
                    if (cmd_start) begin
                        spi_state     <= SPI_CS_ASSERT;
                        sta_busy      <= 1'b1;
                        sta_done      <= 1'b0;
                        bit_cnt       <= '0;
                        addr_byte     <= '0;
                        dummy_cnt     <= '0;
                        data_byte_cnt <= '0;
                        rx_byte_pos   <= '0;
                        tx_byte_pos   <= '0;
                        shift_out     <= ccr_instr;
                    end
                end

                SPI_CS_ASSERT: begin
                    spi_state <= SPI_SEND_CMD;
                    bit_cnt   <= 3'd7;
                end

                SPI_SEND_CMD: begin
                    if (sclk_rising) begin
                        if (bit_cnt == 0) begin
                            if (ccr_data_mode == 2'b00)
                                spi_state <= SPI_CS_DEASSERT;
                            else begin
                                spi_state <= SPI_SEND_ADDR;
                                bit_cnt   <= 3'd7;
                                addr_byte <= 2'd0;
                                shift_out <= qspi_adr[23:16];
                            end
                        end else
                            bit_cnt <= bit_cnt - 1;
                    end
                end

                SPI_SEND_ADDR: begin
                    if (sclk_rising) begin
                        if (bit_cnt == 0) begin
                            if (addr_byte == 2'd2) begin
                                if (ccr_dummy > 0) begin
                                    spi_state <= SPI_DUMMY;
                                    dummy_cnt <= ccr_dummy;
                                end else if (ccr_dir) begin
                                    spi_state <= SPI_DATA_TX;
                                    bit_cnt   <= 3'd7;
                                    tx_current_word <= tx_fifo[tx_rd_ptr[FIFO_AW-1:0]];
                                    shift_out <= tx_fifo[tx_rd_ptr[FIFO_AW-1:0]][7:0];
                                    tx_byte_pos <= 2'd1;
                                end else begin
                                    spi_state <= SPI_DATA_RX;
                                    bit_cnt   <= 3'd7;
                                    shift_in  <= '0;
                                end
                            end else begin
                                addr_byte <= addr_byte + 1;
                                bit_cnt   <= 3'd7;
                                case (addr_byte)
                                    2'd0: shift_out <= qspi_adr[15:8];
                                    2'd1: shift_out <= qspi_adr[7:0];
                                    default: shift_out <= '0;
                                endcase
                            end
                        end else
                            bit_cnt <= bit_cnt - 1;
                    end
                end

                SPI_DUMMY: begin
                    if (sclk_rising) begin
                        if (dummy_cnt <= 1) begin
                            if (ccr_dir) begin
                                spi_state <= SPI_DATA_TX;
                                bit_cnt   <= 3'd7;
                                tx_current_word <= tx_fifo[tx_rd_ptr[FIFO_AW-1:0]];
                                shift_out <= tx_fifo[tx_rd_ptr[FIFO_AW-1:0]][7:0];
                                tx_byte_pos <= 2'd1;
                            end else begin
                                spi_state <= SPI_DATA_RX;
                                bit_cnt   <= 3'd7;
                                shift_in  <= '0;
                            end
                        end else
                            dummy_cnt <= dummy_cnt - 1;
                    end
                end

                SPI_DATA_RX: begin
                    if (sclk_falling)
                        shift_in <= {shift_in[6:0], io_i[1]};

                    if (sclk_rising) begin
                        if (bit_cnt == 0) begin
                            case (rx_byte_pos)
                                2'd0: rx_word_acc[ 7: 0] <= shift_in;
                                2'd1: rx_word_acc[15: 8] <= shift_in;
                                2'd2: rx_word_acc[23:16] <= shift_in;
                                2'd3: begin
                                    if (!rx_full) begin
                                        rx_fifo[rx_wr_ptr[FIFO_AW-1:0]] <= {shift_in, rx_word_acc[23:0]};
                                        rx_wr_ptr <= rx_wr_ptr + 1;
                                    end
                                end
                            endcase
                            rx_byte_pos <= rx_byte_pos + 1;

                            if (data_byte_cnt >= {1'b0, ccr_data_len}) begin
                                if (rx_byte_pos != 2'd3 && !rx_full) begin
                                        // FIX: shift_in dahil partial word
                                        case (rx_byte_pos)
                                            2'd0: rx_fifo[rx_wr_ptr[FIFO_AW-1:0]] <= {24'd0, shift_in};
                                            2'd1: rx_fifo[rx_wr_ptr[FIFO_AW-1:0]] <= {16'd0, shift_in, rx_word_acc[7:0]};
                                            2'd2: rx_fifo[rx_wr_ptr[FIFO_AW-1:0]] <= {8'd0, shift_in, rx_word_acc[15:0]};
                                            default: rx_fifo[rx_wr_ptr[FIFO_AW-1:0]] <= rx_word_acc;
                                        endcase
                                        rx_wr_ptr <= rx_wr_ptr + 1;
                                end
                                spi_state <= SPI_CS_DEASSERT;
                            end else begin
                                data_byte_cnt <= data_byte_cnt + 1;
                                bit_cnt       <= 3'd7;
                                shift_in      <= '0;
                            end
                        end else
                            bit_cnt <= bit_cnt - 1;
                    end
                end

                SPI_DATA_TX: begin
                    if (sclk_rising) begin
                        if (bit_cnt == 0) begin
                            if (data_byte_cnt >= {1'b0, ccr_data_len})
                                spi_state <= SPI_CS_DEASSERT;
                            else begin
                                data_byte_cnt <= data_byte_cnt + 1;
                                bit_cnt       <= 3'd7;
                                case (tx_byte_pos)
                                    2'd0: shift_out <= tx_current_word[ 7: 0];
                                    2'd1: shift_out <= tx_current_word[15: 8];
                                    2'd2: shift_out <= tx_current_word[23:16];
                                    2'd3: begin
                                        shift_out <= tx_current_word[31:24];
                                        if (tx_rd_ptr != tx_wr_ptr) begin
                                            tx_rd_ptr <= tx_rd_ptr + 1;
                                            tx_current_word <= tx_fifo[(tx_rd_ptr[FIFO_AW-1:0]) + 1];
                                        end
                                    end
                                endcase
                                tx_byte_pos <= tx_byte_pos + 1;
                            end
                        end else
                            bit_cnt <= bit_cnt - 1;
                    end
                end

                SPI_CS_DEASSERT: spi_state <= SPI_DONE;

                SPI_DONE: begin
                    sta_done  <= 1'b1;
                    sta_busy  <= 1'b0;
                    spi_state <= SPI_IDLE;
                end

                default: spi_state <= SPI_IDLE;
            endcase
        end
    end

    // =========================================================
    // 7. AXI-LITE YAZMA FSM (CCR/ADR/DR/FCR kontrolü)
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
            write_addr    <= '0;
            ccr_instr     <= '0;
            ccr_data_mode <= '0;
            ccr_dir       <= 1'b0;
            ccr_dummy     <= '0;
            ccr_data_len  <= '0;
            ccr_prescaler <= 6'd1;
            qspi_adr      <= '0;
            cmd_start     <= 1'b0;
            cmd_clr_sta   <= 1'b0;
            cmd_tx_push   <= 1'b0;
            cmd_tx_data   <= '0;
            cmd_rx_flush  <= 1'b0;
            cmd_tx_flush  <= 1'b0;
        end else begin
            // Pulse sinyallerini varsayılan olarak temizle
            cmd_start    <= 1'b0;
            cmd_clr_sta  <= 1'b0;
            cmd_tx_push  <= 1'b0;
            cmd_rx_flush <= 1'b0;
            cmd_tx_flush <= 1'b0;

            // AW + W yakalama
            if (s_axi_awvalid && s_axi_wvalid && aw_en) begin
                s_axi_awready <= 1'b1;
                s_axi_wready  <= 1'b1;
                write_addr    <= s_axi_awaddr[4:0];
                aw_en         <= 1'b0;
            end else begin
                s_axi_awready <= 1'b0;
                s_axi_wready  <= 1'b0;
            end

            // Veri yazma
            if (s_axi_wready && s_axi_wvalid && s_axi_awready && s_axi_awvalid) begin
                case (write_addr)
                    ADDR_CCR: begin
                        ccr_instr     <= s_axi_wdata[7:0];
                        ccr_data_mode <= s_axi_wdata[9:8];
                        ccr_dir       <= s_axi_wdata[10];
                        ccr_dummy     <= s_axi_wdata[15:11];
                        ccr_data_len  <= s_axi_wdata[23:16];
                        ccr_prescaler <= s_axi_wdata[30:25];
                        if (s_axi_wdata[31]) cmd_clr_sta <= 1'b1;
                        else if (!sta_busy)  cmd_start   <= 1'b1;
                    end
                    ADDR_ADR: qspi_adr <= s_axi_wdata[23:0];
                    ADDR_DR: begin
                        cmd_tx_push <= 1'b1;
                        cmd_tx_data <= s_axi_wdata;
                    end
                    ADDR_FCR: begin
                        if (s_axi_wdata[0]) cmd_rx_flush <= 1'b1;
                        if (s_axi_wdata[1]) cmd_tx_flush <= 1'b1;
                    end
                    default: ;
                endcase
            end

            // B yanıtı
            if (s_axi_wready && s_axi_wvalid && s_axi_awready && s_axi_awvalid && !s_axi_bvalid)
                s_axi_bvalid <= 1'b1;
            else if (s_axi_bready && s_axi_bvalid) begin
                s_axi_bvalid <= 1'b0;
                aw_en        <= 1'b1;
            end
        end
    end

    // =========================================================
    // 8. AXI-LITE OKUMA FSM
    // =========================================================
    assign s_axi_rresp = 2'b00;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            s_axi_arready <= 1'b0;
            s_axi_rvalid  <= 1'b0;
            s_axi_rdata   <= '0;
            cmd_rx_pop    <= 1'b0;
        end else begin
            cmd_rx_pop <= 1'b0;

            if (s_axi_arvalid && !s_axi_arready)
                s_axi_arready <= 1'b1;
            else
                s_axi_arready <= 1'b0;

            if (s_axi_arready && s_axi_arvalid && !s_axi_rvalid) begin
                s_axi_rvalid <= 1'b1;
                case (s_axi_araddr[4:0])
                    ADDR_CCR: s_axi_rdata <= {1'b0, ccr_prescaler, 1'b0,
                                               ccr_data_len, ccr_dummy, ccr_dir,
                                               ccr_data_mode, ccr_instr};
                    ADDR_ADR: s_axi_rdata <= {8'd0, qspi_adr};
                    ADDR_DR: begin
                        s_axi_rdata <= rx_empty ? 32'h0 : rx_fifo[rx_rd_ptr[FIFO_AW-1:0]];
                        if (!rx_empty) cmd_rx_pop <= 1'b1;
                    end
                    ADDR_STA: s_axi_rdata <= {20'd0, sta_fifo_err,
                                               tx_empty, tx_full,
                                               rx_empty, rx_full,
                                               2'd0, sta_busy, sta_done};
                    ADDR_FCR: s_axi_rdata <= 32'd0;
                    default:  s_axi_rdata <= 32'd0;
                endcase
            end else if (s_axi_rvalid && s_axi_rready)
                s_axi_rvalid <= 1'b0;
        end
    end

endmodule

