// ============================================
// Ostim BLogic Mikroelektronik
// qspi_master_axil.sv  -  AXI-Lite QSPI master
// ============================================
`timescale 1ns / 1ps

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

    // register adresleri
    localparam logic [4:0] ADDR_CCR = 5'h00;
    localparam logic [4:0] ADDR_ADR = 5'h04;
    localparam logic [4:0] ADDR_DR  = 5'h08;
    localparam logic [4:0] ADDR_STA = 5'h0C;
    localparam logic [4:0] ADDR_FCR = 5'h10;

    // CCR alanlari
    logic [ 7:0] ccr_instr;
    logic [ 1:0] ccr_data_mode;
    logic        ccr_dir;
    logic [ 4:0] ccr_dummy;
    logic [ 7:0] ccr_data_len;
    logic [ 5:0] ccr_prescaler;
    logic [31:0] qspi_adr;
    logic        cfg_addr4b;   // FCR[2]: 1 = 4-bayt adres fazi
    // FCR[4:3] adres fazi modu: 00=oto, 01=zorla, 10=kapat
    logic [ 1:0] cfg_addr_mode;
    wire addr_phase_en = (cfg_addr_mode == 2'b01) ? 1'b1 :
                         (cfg_addr_mode == 2'b10) ? 1'b0 :
                                                    (ccr_data_mode != 2'b00);
    // veri fazinda kac bit kaydirilir (x1/x2/x4)
    wire  [2:0]  lane_w  = (ccr_data_mode == 2'b11) ? 3'd4 :
                           (ccr_data_mode == 2'b10) ? 3'd2 : 3'd1;
    // MSB-hizali adres; 3B modda ust bayta kaydir
    wire  [31:0] adr_eff = cfg_addr4b ? qspi_adr : {qspi_adr[23:0], 8'h00};

    // FIFO pointer'lari tek blokta tutulur
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

    // SPI engine state
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
    // Yalniz 3 bayt biriktirilir; 4. bayt (nsh) dogrudan FIFO'ya yazilir,
    // bu nedenle 24 bit yeterlidir. Eskiden 32 bit idi ve [31:24] hicbir
    // zaman surulmuyordu -> sentezde 'used but has no driver' uyarisi.
    logic [23:0] rx_word_acc;
    logic [ 1:0] tx_byte_pos;
    logic [31:0] tx_current_word;
    logic        sta_done;
    logic        sta_busy;
    logic [ 3:0] sta_fifo_err;

    wire sclk_tick    = (sclk_cnt >= ccr_prescaler);
    wire sclk_rising  = sclk_tick && (sclk_reg == 1'b0);
    wire sclk_falling = sclk_tick && (sclk_reg == 1'b1);

    assign sclk_o = sclk_reg;
    assign cs_no  = (spi_state == SPI_IDLE || spi_state == SPI_DONE);

    // MODE-0 DUZELTMESI (13 Agu): cikis DUSEN kenarda yazmaclanir.
    // Eski hal io_o'yu bit_cnt/shift_out'tan kombinasyonel suruyordu; ikisi de
    // sclk_rising'de degistigi icin MOSI tam ornekleme aninda degisiyordu
    // (hold~0, kartta sans eseri calisiyordu). Sertlestirilmis spi_flash_model
    // bunu 0x06 (0x03'un 1-bit kaymasi) olarak yakalamisti. tx_io_now ayni
    // deseni hesaplar; tx_io_q dusen kenarda orneklenir, ILK bit CS_ASSERT
    // sirasinda (ilk yukselen kenardan ONCE) yuklenir. RX ve oe degismedi.
    logic [3:0] tx_io_now, tx_io_q;
    always_comb begin
        tx_io_now[0] = shift_out[bit_cnt];
        tx_io_now[1] = 1'b1;
        tx_io_now[2] = 1'b1;   // WP#   (quad veri fazi disinda tieoff)
        tx_io_now[3] = 1'b1;   // HOLD# (quad veri fazi disinda tieoff)
        if (spi_state == SPI_DATA_TX && ccr_data_mode == 2'b10) begin
            tx_io_now[0] = shift_out[bit_cnt-3'd1];
            tx_io_now[1] = shift_out[bit_cnt];
        end else if (spi_state == SPI_DATA_TX && ccr_data_mode == 2'b11) begin
            tx_io_now[0] = shift_out[bit_cnt-3'd3];
            tx_io_now[1] = shift_out[bit_cnt-3'd2];
            tx_io_now[2] = shift_out[bit_cnt-3'd1];
            tx_io_now[3] = shift_out[bit_cnt];
        end
    end
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni)                          tx_io_q <= 4'hF;
        else if (spi_state == SPI_CS_ASSERT)  tx_io_q <= {3'b111, shift_out[7]};
        else if (sclk_falling)                tx_io_q <= tx_io_now;
        // Yazmaca alma yan etkisi: x4 yazmadan sonra son nibble tx_io_q'da
        // ASILI kalir; io_oe[3:2] aktif faz disinda 1 oldugu icin WP#/HOLD#
        // eski VERI bitleriyle surulur (kombinasyonel surumde bu iki hat
        // quad DATA_TX disinda sabit 1'di). Gercek cipte CS# dusukken /HOLD
        // dususu transferi dondurur, /WP dususu koruma durumunu degistirir.
        // Aktif olmayan durumlarda tieoff'a don:
        else if (spi_state == SPI_IDLE || spi_state == SPI_DONE ||
                 spi_state == SPI_CS_DEASSERT)
                                              tx_io_q <= 4'hF;
    end
    assign io_o = tx_io_q;
    always_comb begin
        io_oe[0] = (spi_state == SPI_SEND_CMD || spi_state == SPI_SEND_ADDR ||
                    spi_state == SPI_DATA_TX  || spi_state == SPI_DUMMY);
        io_oe[1] = 1'b0;
        io_oe[2] = 1'b1;
        io_oe[3] = 1'b1;
        if (ccr_data_mode == 2'b10) begin
            if (spi_state == SPI_DATA_TX)      io_oe[1] = 1'b1;
            else if (spi_state == SPI_DATA_RX) io_oe[0] = 1'b0;
            if (spi_state == SPI_DUMMY)        io_oe[0] = 1'b0; // bus turnaround
        end else if (ccr_data_mode == 2'b11) begin
            if (spi_state == SPI_DATA_TX) begin
                io_oe[1] = 1'b1;  // io_o[3:2] veri mux'tan surulur
            end else if (spi_state == SPI_DATA_RX) begin
                io_oe[0] = 1'b0; io_oe[2] = 1'b0; io_oe[3] = 1'b0;
            end
            if (spi_state == SPI_DUMMY) io_oe[0] = 1'b0; // bus turnaround
        end
    end

    // AXI FSM'den SPI engine'e giden pulse'lar
    logic        cmd_start;        // CCR yazildi, transaction baslat
    logic        cmd_clr_sta;      // CCR[31], status temizle
    logic        cmd_tx_push;      // DR yazildi, TX FIFO push
    logic [31:0] cmd_tx_data;
    logic        cmd_rx_pop;       // DR okundu, RX FIFO pop
    logic        cmd_rx_flush;     // FCR[0]
    logic        cmd_tx_flush;     // FCR[1]

    // tum state + FIFO pointer'lar tek always_ff'te
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

            // FIFO flush (en yuksek oncelik)
            if (cmd_rx_flush) begin
                rx_wr_ptr <= '0;
                rx_rd_ptr <= '0;
            end
            if (cmd_tx_flush) begin
                tx_wr_ptr <= '0;
                tx_rd_ptr <= '0;
            end

            // TX FIFO push (DR yazma)
            if (cmd_tx_push && !cmd_tx_flush) begin
                if (!tx_full) begin
                    tx_fifo[tx_wr_ptr[FIFO_AW-1:0]] <= cmd_tx_data;
                    tx_wr_ptr <= tx_wr_ptr + 1;
                end else begin
                    sta_fifo_err <= 4'b0010;
                end
            end

            // RX FIFO pop (DR okuma)
            if (cmd_rx_pop && !cmd_rx_flush) begin
                if (!rx_empty)
                    rx_rd_ptr <= rx_rd_ptr + 1;
                else
                    sta_fifo_err <= 4'b0001;
            end

            // status temizle
            if (cmd_clr_sta) begin
                sta_done     <= 1'b0;
                sta_fifo_err <= 4'b0;
            end

            // SPI clock uretici
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

            // SPI FSM
            case (spi_state)
                SPI_IDLE: begin
                    sta_busy <= 1'b0;
                    if (cmd_start) begin
                        // cmd_start burada surulmez, Vivado xelab multi-driver hatasi cikmasin
                        // synthesis translate_off
                        $display("[%0t QSPI] IDLE->CS_ASSERT instr=%02x adr=%06x", $time, ccr_instr, qspi_adr);
                        // synthesis translate_on
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
                            if (addr_phase_en) begin
                                spi_state <= SPI_SEND_ADDR;
                                bit_cnt   <= 3'd7;
                                addr_byte <= 2'd0;
                                shift_out <= adr_eff[31:24];
                            end else if (ccr_data_mode == 2'b00) begin
                                // komut-only (WREN/WRDI/CLSR/RESET)
                                spi_state <= SPI_CS_DEASSERT;
                            end else if (ccr_dummy > 0) begin
                                // adressiz + dummy + veri
                                spi_state <= SPI_DUMMY;
                                dummy_cnt <= ccr_dummy;
                            end else if (ccr_dir) begin
                                // adressiz yazma (WRR)
                                spi_state <= SPI_DATA_TX;
                                bit_cnt   <= 3'd7;
                                tx_current_word <= tx_fifo[tx_rd_ptr[FIFO_AW-1:0]];
                                shift_out <= tx_fifo[tx_rd_ptr[FIFO_AW-1:0]][7:0];
                                tx_byte_pos <= 2'd1;
                            end else begin
                                // adressiz okuma (RDID/RDSR/RDCR/RES)
                                spi_state <= SPI_DATA_RX;
                                bit_cnt   <= 3'd7;
                                shift_in  <= '0;
                            end
                        end else
                            bit_cnt <= bit_cnt - 1;
                    end
                end

                SPI_SEND_ADDR: begin
                    if (sclk_rising) begin
                        if (bit_cnt == 0) begin
                            if (addr_byte == (cfg_addr4b ? 2'd3 : 2'd2)) begin
                                if (ccr_data_mode == 2'b00) begin
                                    // adresli/verisiz komut (SE)
                                    spi_state <= SPI_CS_DEASSERT;
                                end else if (ccr_dummy > 0) begin
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
                                    2'd0: shift_out <= adr_eff[23:16];
                                    2'd1: shift_out <= adr_eff[15:8];
                                    2'd2: shift_out <= adr_eff[7:0];
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
                    // gercek flash icin yukselen kenarda ornekle (mode-0);
                    // dusen kenarda ornekleyince tCO yuzunden 1 bit kayiyordu
                    if (sclk_rising) begin : rx_samp
                        logic [7:0] nsh;
                        case (ccr_data_mode)
                            2'b10:   nsh = {shift_in[5:0], io_i[1], io_i[0]};
                            2'b11:   nsh = {shift_in[3:0], io_i[3], io_i[2], io_i[1], io_i[0]};
                            default: nsh = {shift_in[6:0], io_i[1]};
                        endcase
                        shift_in <= nsh;

                        if (bit_cnt < lane_w) begin
                            case (rx_byte_pos)
                                2'd0: rx_word_acc[ 7: 0] <= nsh;
                                2'd1: rx_word_acc[15: 8] <= nsh;
                                2'd2: rx_word_acc[23:16] <= nsh;
                                2'd3: begin
                                    if (!rx_full) begin
                                        rx_fifo[rx_wr_ptr[FIFO_AW-1:0]] <= {nsh, rx_word_acc[23:0]};
                                        rx_wr_ptr <= rx_wr_ptr + 1;
                                    end
                                end
                            endcase
                            rx_byte_pos <= rx_byte_pos + 1;

                            if (data_byte_cnt >= {1'b0, ccr_data_len}) begin
                                if (rx_byte_pos != 2'd3 && !rx_full) begin
                                        // eksik word (nsh = son bayt)
                                        case (rx_byte_pos)
                                            2'd0: rx_fifo[rx_wr_ptr[FIFO_AW-1:0]] <= {24'd0, nsh};
                                            2'd1: rx_fifo[rx_wr_ptr[FIFO_AW-1:0]] <= {16'd0, nsh, rx_word_acc[7:0]};
                                            2'd2: rx_fifo[rx_wr_ptr[FIFO_AW-1:0]] <= {8'd0, nsh, rx_word_acc[15:0]};
                                            // rx_byte_pos == 2'd3 disaridaki guard ile zaten elenmistir;
                                            // bu dal erisilemez (eskiden rx_word_acc[31:24]'u okuyan tek yerdi).
                                            default: ;
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
                            bit_cnt <= bit_cnt - lane_w;
                    end
                end

                SPI_DATA_TX: begin
                    if (sclk_rising) begin
                        if (bit_cnt < lane_w) begin
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
                            bit_cnt <= bit_cnt - lane_w;
                    end
                end

                SPI_CS_DEASSERT: spi_state <= SPI_DONE;

                SPI_DONE: begin
                    sta_done  <= 1'b1;
                    sta_busy  <= 1'b0;
                    // synthesis translate_off
                    $display("[%0t QSPI] DONE", $time);
                    // synthesis translate_on
                    spi_state <= SPI_IDLE;
                end

                default: spi_state <= SPI_IDLE;
            endcase
        end
    end

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
            cfg_addr4b    <= 1'b0;
            cfg_addr_mode <= 2'b00;
        end else begin
            // pulse'lar varsayilan 0
            cmd_start    <= 1'b0;
            cmd_clr_sta  <= 1'b0;
            cmd_tx_push  <= 1'b0;
            cmd_rx_flush <= 1'b0;
            cmd_tx_flush <= 1'b0;

            // AW + W yakala
            if (s_axi_awvalid && s_axi_wvalid && aw_en) begin
                s_axi_awready <= 1'b1;
                s_axi_wready  <= 1'b1;
                write_addr    <= s_axi_awaddr[4:0];
                aw_en         <= 1'b0;
            end else begin
                s_axi_awready <= 1'b0;
                s_axi_wready  <= 1'b0;
            end

            // veri yazma
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
                        else if (!sta_busy) begin
                            cmd_start   <= 1'b1;
                            // synthesis translate_off
                            $display("[%0t QSPI] CCR write ccr=%08x adr=%08x", $time, s_axi_wdata, qspi_adr);
                            // synthesis translate_on
                        end
                    end
                    ADDR_ADR: qspi_adr <= s_axi_wdata;
                    ADDR_DR: begin
                        cmd_tx_push <= 1'b1;
                        cmd_tx_data <= s_axi_wdata;
                    end
                    ADDR_FCR: begin
                        if (s_axi_wdata[0]) cmd_rx_flush <= 1'b1;
                        if (s_axi_wdata[1]) cmd_tx_flush <= 1'b1;
                        cfg_addr4b    <= s_axi_wdata[2];   // 4B adres modu
                        cfg_addr_mode <= s_axi_wdata[4:3]; // adres fazi modu
                    end
                    default: ;
                endcase
            end

            // B yaniti
            if (s_axi_wready && s_axi_wvalid && s_axi_awready && s_axi_awvalid && !s_axi_bvalid)
                s_axi_bvalid <= 1'b1;
            else if (s_axi_bready && s_axi_bvalid) begin
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
                    ADDR_ADR: s_axi_rdata <= qspi_adr;
                    ADDR_DR: begin
                        s_axi_rdata <= rx_empty ? 32'h0 : rx_fifo[rx_rd_ptr[FIFO_AW-1:0]];
                        if (!rx_empty) cmd_rx_pop <= 1'b1;
                    end
                    ADDR_STA: s_axi_rdata <= {20'd0, sta_fifo_err,
                                               tx_empty, tx_full,
                                               rx_empty, rx_full,
                                               2'd0, sta_busy, sta_done};
                    ADDR_FCR: s_axi_rdata <= {27'd0, cfg_addr_mode, cfg_addr4b, 2'b00};
                    default:  s_axi_rdata <= 32'd0;
                endcase
            end else if (s_axi_rvalid && s_axi_rready)
                s_axi_rvalid <= 1'b0;
        end
    end

endmodule

