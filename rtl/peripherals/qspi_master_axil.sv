`timescale 1ns / 1ps

// ============================================================
// BLogic MCU — QSPI Master Çevre Birimi
// ============================================================
// TEKNOFEST EK-2 şartnamesindeki register haritasına uygun.
// SPI Mode 0 (CPOL=0, CPHA=0), SDR, x1 veri modu destekli.
// x2/x4 veri modları DTR raporunda planlanacak.
//
// Register Map (EK-2):
//   0x00  QSPI_CCR  — Communication Configuration Register (RW)
//   0x04  QSPI_ADR  — Address Register (RW)
//   0x08  QSPI_DR   — Data Register (RW, FIFO arkasında)
//   0x0C  QSPI_STA  — Status Register (RO)
//   0x10  QSPI_FCR  — FIFO Control Register (RW)
//
// Fiziksel Pinler:
//   sclk_o    — SPI Clock
//   cs_no     — Chip Select (active low)
//   io_o[3:0] — Data out (MOSI = io_o[0] for x1)
//   io_i[3:0] — Data in  (MISO = io_i[1] for x1)
//   io_oe[3:0]— Output enable per pin
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
    // 1. REGISTER ADRESLERİ (EK-2)
    // =========================================================
    localparam logic [4:0] ADDR_CCR = 5'h00;
    localparam logic [4:0] ADDR_ADR = 5'h04;
    localparam logic [4:0] ADDR_DR  = 5'h08;
    localparam logic [4:0] ADDR_STA = 5'h0C;
    localparam logic [4:0] ADDR_FCR = 5'h10;

    // =========================================================
    // 2. REGISTER ALANLARI
    // =========================================================
    // CCR alanları
    logic [ 7:0] ccr_instr;       // [7:0]   Instruction value
    logic [ 1:0] ccr_data_mode;   // [9:8]   00=no data, 01=x1, 10=x2, 11=x4
    logic        ccr_dir;         // [10]    0=read, 1=write
    logic [ 4:0] ccr_dummy;       // [15:11] Dummy cycle count
    logic [ 7:0] ccr_data_len;    // [23:16] Data length (len+1 bytes)
    logic [ 5:0] ccr_prescaler;   // [30:25] Clock prescaler
    logic        ccr_clr_sta;     // [31]    Clear status

    logic [23:0] qspi_adr;        // Address register

    // Status register alanları
    logic        sta_done;        // [0] Transaction complete
    logic        sta_busy;        // [1] Busy
    logic        sta_rx_full;     // [4] RX FIFO full
    logic        sta_rx_empty;    // [5] RX FIFO empty
    logic        sta_tx_full;     // [6] TX FIFO full
    logic        sta_tx_empty;    // [7] TX FIFO empty
    logic [ 3:0] sta_fifo_err;    // [11:8] FIFO error

    // =========================================================
    // 3. FIFO (64 x 32-bit)
    // =========================================================
    localparam int FIFO_DEPTH = 64;
    localparam int FIFO_AW    = 6;  // $clog2(64)

    // TX FIFO
    logic [31:0] tx_fifo [0:FIFO_DEPTH-1];
    logic [FIFO_AW:0] tx_wr_ptr, tx_rd_ptr;
    wire  [FIFO_AW:0] tx_count = tx_wr_ptr - tx_rd_ptr;
    assign sta_tx_full  = (tx_count == FIFO_DEPTH);
    assign sta_tx_empty = (tx_count == 0);

    // RX FIFO
    logic [31:0] rx_fifo [0:FIFO_DEPTH-1];
    logic [FIFO_AW:0] rx_wr_ptr, rx_rd_ptr;
    wire  [FIFO_AW:0] rx_count = rx_wr_ptr - rx_rd_ptr;
    assign sta_rx_full  = (rx_count == FIFO_DEPTH);
    assign sta_rx_empty = (rx_count == 0);

    // =========================================================
    // 4. SPI ENGINE — FSM
    // =========================================================
    typedef enum logic [3:0] {
        SPI_IDLE,
        SPI_CS_ASSERT,     // CS düşür
        SPI_SEND_CMD,      // 8-bit instruction gönder
        SPI_SEND_ADDR,     // 24-bit adres gönder
        SPI_DUMMY,         // Dummy cycle'lar
        SPI_DATA_TX,       // Flash'a veri yaz (page program)
        SPI_DATA_RX,       // Flash'tan veri oku
        SPI_CS_DEASSERT,   // CS kaldır
        SPI_DONE
    } spi_state_t;
    spi_state_t spi_state, spi_next;

    // SPI clock bölücü
    logic [5:0]  sclk_cnt;
    logic        sclk_tick;    // Prescaler'a göre SPI clock tick
    logic        sclk_reg;
    logic        sclk_phase;   // 0=rising, 1=falling

    // SPI veri sayaçları
    logic [ 2:0] bit_cnt;      // 0-7 bit sayacı
    logic [ 1:0] addr_byte;    // 0-2 adres byte sayacı
    logic [ 4:0] dummy_cnt;    // Dummy cycle sayacı
    logic [ 8:0] data_byte_cnt;// Veri byte sayacı (0-255)
    logic [ 7:0] shift_out;    // TX shift register
    logic [ 7:0] shift_in;     // RX shift register
    logic [ 1:0] rx_byte_pos;  // RX word içindeki byte pozisyonu (0-3)
    logic [31:0] rx_word_acc;  // RX word biriktirici

    // Transaction başlatma sinyali
    logic        start_transaction;

    // TX FIFO'dan veri çekme
    logic [ 1:0] tx_byte_pos;
    logic [31:0] tx_current_word;

    // =========================================================
    // 5. SPI CLOCK ÜRETİCİ
    // =========================================================
    assign sclk_tick = (sclk_cnt >= ccr_prescaler);

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            sclk_cnt   <= '0;
            sclk_reg   <= 1'b0;
            sclk_phase <= 1'b0;
        end else if (spi_state == SPI_IDLE || spi_state == SPI_CS_ASSERT ||
                     spi_state == SPI_CS_DEASSERT || spi_state == SPI_DONE) begin
            sclk_cnt   <= '0;
            sclk_reg   <= 1'b0;
            sclk_phase <= 1'b0;
        end else begin
            if (sclk_tick) begin
                sclk_cnt   <= '0;
                sclk_reg   <= ~sclk_reg;
                sclk_phase <= sclk_reg; // rising edge sonrası phase=1
            end else begin
                sclk_cnt <= sclk_cnt + 1;
            end
        end
    end

    // SPI Mode 0: SCLK idle'da LOW
    assign sclk_o = sclk_reg;
    assign cs_no  = (spi_state == SPI_IDLE || spi_state == SPI_DONE);

    // =========================================================
    // 6. SPI ENGINE FSM
    // =========================================================
    // Rising edge'de veri süreriz, falling edge'de örnekleriz (Mode 0)
    wire sclk_rising  = sclk_tick && sclk_reg == 1'b0;  // tick anında reg=0 → yükselecek
    wire sclk_falling = sclk_tick && sclk_reg == 1'b1;  // tick anında reg=1 → düşecek

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            spi_state     <= SPI_IDLE;
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
        end else begin
            // Status clear
            if (ccr_clr_sta) sta_done <= 1'b0;

            case (spi_state)
                SPI_IDLE: begin
                    sta_busy <= 1'b0;
                    if (start_transaction) begin
                        spi_state     <= SPI_CS_ASSERT;
                        sta_busy      <= 1'b1;
                        sta_done      <= 1'b0;
                        bit_cnt       <= '0;
                        addr_byte     <= '0;
                        dummy_cnt     <= '0;
                        data_byte_cnt <= '0;
                        rx_byte_pos   <= '0;
                        tx_byte_pos   <= '0;
                        shift_out     <= ccr_instr;  // İlk byte = instruction
                    end
                end

                SPI_CS_ASSERT: begin
                    // CS düştükten 1 cycle sonra komut göndermeye başla
                    spi_state <= SPI_SEND_CMD;
                    bit_cnt   <= 3'd7;  // MSB first, 7'den 0'a
                end

                SPI_SEND_CMD: begin
                    if (sclk_rising) begin
                        // Rising edge: sonraki bit'i hazırla
                        if (bit_cnt == 0) begin
                            // Komut bitti
                            if (ccr_data_mode == 2'b00) begin
                                // Veri modu yok (sadece instruction — WREN, WRDI, RESET gibi)
                                spi_state <= SPI_CS_DEASSERT;
                            end else begin
                                // Adres gönder
                                spi_state <= SPI_SEND_ADDR;
                                bit_cnt   <= 3'd7;
                                addr_byte <= 2'd0;
                                shift_out <= qspi_adr[23:16]; // MSByte first
                            end
                        end else begin
                            bit_cnt <= bit_cnt - 1;
                        end
                    end
                end

                SPI_SEND_ADDR: begin
                    if (sclk_rising) begin
                        if (bit_cnt == 0) begin
                            if (addr_byte == 2'd2) begin
                                // 3 byte adres bitti
                                if (ccr_dummy > 0) begin
                                    spi_state <= SPI_DUMMY;
                                    dummy_cnt <= ccr_dummy;
                                end else if (ccr_dir) begin
                                    spi_state <= SPI_DATA_TX;
                                    bit_cnt   <= 3'd7;
                                    // TX FIFO'dan ilk word'ü çek
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
                        end else begin
                            bit_cnt <= bit_cnt - 1;
                        end
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
                        end else begin
                            dummy_cnt <= dummy_cnt - 1;
                        end
                    end
                end

                SPI_DATA_RX: begin
                    // Falling edge'de MISO'yu örnekle
                    if (sclk_falling) begin
                        shift_in <= {shift_in[6:0], io_i[1]}; // MISO = io_i[1]
                    end

                    if (sclk_rising) begin
                        if (bit_cnt == 0) begin
                            // 1 byte tamamlandı — RX word'e biriktir
                            case (rx_byte_pos)
                                2'd0: rx_word_acc[ 7: 0] <= shift_in;
                                2'd1: rx_word_acc[15: 8] <= shift_in;
                                2'd2: rx_word_acc[23:16] <= shift_in;
                                2'd3: begin
                                    // 4 byte = 1 word tamamlandı, RX FIFO'ya yaz
                                    rx_word_acc[31:24] <= shift_in;
                                    if (!sta_rx_full) begin
                                        rx_fifo[rx_wr_ptr[FIFO_AW-1:0]] <= {shift_in, rx_word_acc[23:0]};
                                        rx_wr_ptr <= rx_wr_ptr + 1;
                                    end else begin
                                        sta_fifo_err <= 4'b0010; // TX FIFO full error (reuse for RX)
                                    end
                                end
                            endcase
                            rx_byte_pos <= rx_byte_pos + 1;

                            if (data_byte_cnt >= {1'b0, ccr_data_len}) begin
                                // Tüm veri okundu
                                // Son word'ü FIFO'ya yaz (4'ün katı değilse)
                                if (rx_byte_pos != 2'd3 && !sta_rx_full) begin
                                    case (rx_byte_pos)
                                        2'd0: rx_fifo[rx_wr_ptr[FIFO_AW-1:0]] <= {24'h0, shift_in};
                                        2'd1: rx_fifo[rx_wr_ptr[FIFO_AW-1:0]] <= {16'h0, shift_in, rx_word_acc[7:0]};
                                        2'd2: rx_fifo[rx_wr_ptr[FIFO_AW-1:0]] <= {8'h0,  shift_in, rx_word_acc[15:0]};
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
                        end else begin
                            bit_cnt <= bit_cnt - 1;
                        end
                    end
                end

                SPI_DATA_TX: begin
                    if (sclk_rising) begin
                        if (bit_cnt == 0) begin
                            if (data_byte_cnt >= {1'b0, ccr_data_len}) begin
                                spi_state <= SPI_CS_DEASSERT;
                            end else begin
                                data_byte_cnt <= data_byte_cnt + 1;
                                bit_cnt       <= 3'd7;

                                // Sonraki byte'ı seç
                                case (tx_byte_pos)
                                    2'd0: shift_out <= tx_current_word[ 7: 0];
                                    2'd1: shift_out <= tx_current_word[15: 8];
                                    2'd2: shift_out <= tx_current_word[23:16];
                                    2'd3: begin
                                        shift_out <= tx_current_word[31:24];
                                        // Sonraki word'ü FIFO'dan çek
                                        if (tx_rd_ptr != tx_wr_ptr) begin
                                            tx_rd_ptr <= tx_rd_ptr + 1;
                                            tx_current_word <= tx_fifo[(tx_rd_ptr[FIFO_AW-1:0]) + 1];
                                        end
                                    end
                                endcase
                                tx_byte_pos <= tx_byte_pos + 1;
                            end
                        end else begin
                            bit_cnt <= bit_cnt - 1;
                        end
                    end
                end

                SPI_CS_DEASSERT: begin
                    spi_state <= SPI_DONE;
                end

                SPI_DONE: begin
                    sta_done  <= 1'b1;
                    sta_busy  <= 1'b0;
                    spi_state <= SPI_IDLE;
                end

                default: spi_state <= SPI_IDLE;
            endcase
        end
    end

    // SPI I/O: x1 modunda MOSI = io_o[0], MSB first
    assign io_o[0]  = shift_out[bit_cnt]; // MOSI
    assign io_o[1]  = 1'b1;              // MISO (input — high-Z için 1)
    assign io_o[2]  = 1'b1;              // WP#
    assign io_o[3]  = 1'b1;              // HOLD#

    // Output enable: x1'de sadece MOSI aktif
    assign io_oe[0] = (spi_state == SPI_SEND_CMD || spi_state == SPI_SEND_ADDR ||
                       spi_state == SPI_DATA_TX || spi_state == SPI_DUMMY);
    assign io_oe[1] = 1'b0;  // MISO her zaman input
    assign io_oe[2] = 1'b1;  // WP# her zaman output (pulled high)
    assign io_oe[3] = 1'b1;  // HOLD# her zaman output (pulled high)

    // =========================================================
    // 7. AXI-LITE YAZMA FSM
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
            ccr_prescaler <= 6'd1;  // Varsayılan: clk/2
            ccr_clr_sta   <= 1'b0;
            qspi_adr      <= '0;
            start_transaction <= 1'b0;
            sta_fifo_err  <= '0;
            tx_wr_ptr     <= '0;
            tx_rd_ptr     <= '0;
            rx_wr_ptr     <= '0;
            rx_rd_ptr     <= '0;
        end else begin
            start_transaction <= 1'b0;
            ccr_clr_sta       <= 1'b0;

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
                        ccr_clr_sta   <= s_axi_wdata[31];
                        // CCR'ye yazma = transaction başlat
                        if (!sta_busy) start_transaction <= 1'b1;
                    end
                    ADDR_ADR: qspi_adr <= s_axi_wdata[23:0];
                    ADDR_DR: begin
                        // TX FIFO'ya yaz
                        if (!sta_tx_full) begin
                            tx_fifo[tx_wr_ptr[FIFO_AW-1:0]] <= s_axi_wdata;
                            tx_wr_ptr <= tx_wr_ptr + 1;
                        end else begin
                            sta_fifo_err <= 4'b0010; // TX full error
                        end
                    end
                    ADDR_FCR: begin
                        if (s_axi_wdata[0]) begin
                            rx_rd_ptr <= '0; rx_wr_ptr <= '0; // RX flush
                        end
                        if (s_axi_wdata[1]) begin
                            tx_rd_ptr <= '0; tx_wr_ptr <= '0; // TX flush
                        end
                    end
                endcase
            end

            // B yanıtı
            if (s_axi_wready && s_axi_wvalid && s_axi_awready && s_axi_awvalid && !s_axi_bvalid) begin
                s_axi_bvalid <= 1'b1;
            end else if (s_axi_bready && s_axi_bvalid) begin
                s_axi_bvalid <= 1'b0;
                aw_en        <= 1'b1;
            end
        end
    end

    // =========================================================
    // 8. AXI-LITE OKUMA FSM
    // =========================================================
    assign s_axi_rresp = 2'b00;

    logic [31:0] dr_read_data;
    assign dr_read_data = sta_rx_empty ? 32'h0 : rx_fifo[rx_rd_ptr[FIFO_AW-1:0]];

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            s_axi_arready <= 1'b0;
            s_axi_rvalid  <= 1'b0;
            s_axi_rdata   <= '0;
        end else begin
            if (s_axi_arvalid && !s_axi_arready) begin
                s_axi_arready <= 1'b1;
            end else begin
                s_axi_arready <= 1'b0;
            end

            if (s_axi_arready && s_axi_arvalid && !s_axi_rvalid) begin
                s_axi_rvalid <= 1'b1;
                case (s_axi_araddr[4:0])
                    ADDR_CCR: s_axi_rdata <= {ccr_clr_sta, ccr_prescaler, 1'b0,
                                               ccr_data_len, ccr_dummy, ccr_dir,
                                               ccr_data_mode, ccr_instr};
                    ADDR_ADR: s_axi_rdata <= {8'd0, qspi_adr};
                    ADDR_DR: begin
                        s_axi_rdata <= dr_read_data;
                        // RX FIFO'dan oku (pointer ilerlet)
                        if (!sta_rx_empty) rx_rd_ptr <= rx_rd_ptr + 1;
                    end
                    ADDR_STA: s_axi_rdata <= {20'd0, sta_fifo_err,
                                               sta_tx_empty, sta_tx_full,
                                               sta_rx_empty, sta_rx_full,
                                               2'd0, sta_busy, sta_done};
                    ADDR_FCR: s_axi_rdata <= 32'd0;
                    default:  s_axi_rdata <= 32'd0;
                endcase
            end else if (s_axi_rvalid && s_axi_rready) begin
                s_axi_rvalid <= 1'b0;
            end
        end
    end

endmodule