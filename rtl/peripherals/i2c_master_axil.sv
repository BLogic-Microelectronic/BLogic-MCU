// SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
// SPDX-License-Identifier: GPL-3.0-only
// Licensed under the GNU General Public License version 3 only.
// See the LICENSE file in the repository root for the full license text.

// ============================================
// Ostim BLogic Mikroelektronik
// i2c_master_axil.sv  -  AXI4-Lite I2C master
// ============================================

`timescale 1ns / 1ps

module i2c_master_axil #(
    parameter int unsigned CLK_FREQ_HZ = 50_000_000,  // sistem saati
    parameter int unsigned SCL_FREQ_HZ = 400_000      // sabit 400 kHz
)(
    input  logic        clk_i,
    input  logic        rst_ni,

    // AXI4-Lite slave arayuzu
    input  logic [31:0] s_axi_awaddr,
    input  logic        s_axi_awvalid,
    output logic        s_axi_awready,
    input  logic [31:0] s_axi_wdata,
    input  logic [ 3:0] s_axi_wstrb,    // tam-word yazim varsayilir
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
    output logic        scl_o,      // push-pull SCL (bosta '1')
    output logic        sda_oe_o,   // 1 = SDA'yi '0'a cek (open-drain)
    input  logic        sda_i       // SDA geri okuma
);

    // Register adresleri
    localparam logic [4:0] ADDR_NBY = 5'h00;
    localparam logic [4:0] ADDR_ADR = 5'h04;
    localparam logic [4:0] ADDR_RDR = 5'h08;  // RO
    localparam logic [4:0] ADDR_TDR = 5'h0C;
    localparam logic [4:0] ADDR_CFG = 5'h10;

    // SCL ceyrek-periyot boleni (4 faz/bit)
    localparam int unsigned QDIV = CLK_FREQ_HZ / (SCL_FREQ_HZ * 4);

    // Yazmaclar
    logic [ 2:0] i2c_nby;    // 1..4 (yazimda kiskaclanir)
    logic [ 6:0] i2c_adr;
    logic [31:0] i2c_tdr;
    logic [31:0] i2c_rdr;    // motor blogu yazar
    logic        tx_en, rx_en;
    logic        tx_done, rx_done, nack_err;  // motor blogu set eder

    // Yazma FSM'den motora giden temizleme pulse'lari
    logic clr_txd_hit, clr_rxd_hit, clr_nck_hit;

    // AXI-Lite yazma FSM
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
            // pulse'lari temizle
            clr_txd_hit <= 1'b0;
            clr_rxd_hit <= 1'b0;
            clr_nck_hit <= 1'b0;

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
                    // NBY: 0->1, >4->4 yuvarla
                    ADDR_NBY: i2c_nby <= (s_axi_wdata == 32'd0) ? 3'd1 :
                                         (s_axi_wdata >  32'd4) ? 3'd4 :
                                                                  s_axi_wdata[2:0];
                    ADDR_ADR: i2c_adr <= s_axi_wdata[6:0];
                    ADDR_TDR: i2c_tdr <= s_axi_wdata;
                    ADDR_CFG: begin
                        tx_en <= s_axi_wdata[0];
                        rx_en <= s_axi_wdata[2];
                        // done/nack flagleri sadece SW '0' ile temizlenir, HW oncelikli
                        if (!s_axi_wdata[1]) clr_txd_hit <= 1'b1;
                        if (!s_axi_wdata[3]) clr_rxd_hit <= 1'b1;
                        if (!s_axi_wdata[4]) clr_nck_hit <= 1'b1;
                    end
                    // RDR salt-okunur
                    default: ;
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

    // I2C motoru (4 faz/bit)
    typedef enum logic [2:0] {
        S_IDLE, S_START, S_BITS, S_ACK, S_STOP
    } i2c_state_e;

    i2c_state_e state;

    logic [$clog2(QDIV)-1:0] q_cnt;
    logic [1:0] phase;
    logic [2:0] bit_cnt;
    logic [1:0] data_idx;     // 0..3: aktif veri bayti
    logic [2:0] nby_lat;      // transfer basinda latch'lenen NBY
    logic [6:0] adr_lat;
    logic [31:0] tdr_lat;
    logic [7:0] shreg;        // ortak kaydirmali yazmac (adres+veri)
    logic       is_read;      // 1 = RX islemi
    logic       addr_phase;   // 1 = adres bayti gonderiliyor
    logic       nack_seen;
    logic       scl_q, sda_pull;

    // baslatma kosullari (TX oncelikli)
    wire tx_go = tx_en && !tx_done;
    wire rx_go = rx_en && !rx_done && !tx_go;

    // bit yonu: adres her zaman cikis, veri TX'te cikis RX'te giris
    wire out_bit  = addr_phase || !is_read;
    // RX veri baytindan sonra master ACK/NACK surer
    wire ack_drv  = !addr_phase && is_read;
    wire last_byt = ({1'b0, data_idx} == (nby_lat - 3'd1));
    wire tick     = (q_cnt == QDIV[$clog2(QDIV)-1:0] - 1'b1);

    // TDR'den bayt sec (LSB once)
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
            // SW temizleme pulse'lari (HW set ayni cycle'da kazanir)
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
                    shreg      <= {i2c_adr, rx_go};  // adres + R/W biti
                    addr_phase <= 1'b1;
                    data_idx   <= 2'd0;
                    nack_seen  <= 1'b0;
                    if (rx_go) i2c_rdr <= 32'd0;     // eski baytlar kalmasin
                    state      <= S_START;
                end
            end else if (tick) begin
                q_cnt <= '0;
                case (state)
                    S_START: case (phase)
                        2'd0: phase <= 2'd1;                          // SCL=1, SDA serbest
                        2'd1: begin sda_pull <= 1'b1; phase <= 2'd2; end  // SDA duser -> START
                        2'd2: phase <= 2'd3;
                        2'd3: begin
                            scl_q   <= 1'b0;
                            bit_cnt <= 3'd7;
                            phase   <= 2'd0;
                            state   <= S_BITS;
                        end
                    endcase

                    // 8 bit kaydirma
                    S_BITS: case (phase)
                        2'd0: begin
                            if (out_bit) sda_pull <= ~shreg[7];  // '0' biti = hatta cek
                            else         sda_pull <= 1'b0;       // giris: hatti birak
                            phase <= 2'd1;
                        end
                        2'd1: begin scl_q <= 1'b1; phase <= 2'd2; end
                        2'd2: begin
                            if (!out_bit) shreg <= {shreg[6:0], sda_i};  // ornekle
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

                    S_ACK: case (phase)
                        2'd0: begin
                            if (ack_drv) begin
                                // RX: alinan bayti RDR'ye yaz (LSB once)
                                case (data_idx)
                                    2'd0:    i2c_rdr[ 7: 0] <= shreg;
                                    2'd1:    i2c_rdr[15: 8] <= shreg;
                                    2'd2:    i2c_rdr[23:16] <= shreg;
                                    default: i2c_rdr[31:24] <= shreg;
                                endcase
                                // master ACK = SDA cek, son baytta NACK = birak
                                sda_pull <= last_byt ? 1'b0 : 1'b1;
                            end else begin
                                sda_pull <= 1'b0;  // slave ACK icin hatti birak
                            end
                            phase <= 2'd1;
                        end
                        2'd1: begin scl_q <= 1'b1; phase <= 2'd2; end
                        2'd2: begin
                            if (!ack_drv && sda_i) nack_seen <= 1'b1;  // slave NACK verdi
                            phase <= 2'd3;
                        end
                        2'd3: begin
                            scl_q <= 1'b0;
                            phase <= 2'd0;
                            if (!ack_drv && (nack_seen || sda_i)) begin
                                state <= S_STOP;            // NACK -> sonlandir
                            end else if (addr_phase) begin
                                addr_phase <= 1'b0;
                                bit_cnt    <= 3'd7;
                                shreg      <= is_read ? 8'd0 : tdr_byte(tdr_lat, 2'd0);
                                state      <= S_BITS;
                            end else if (last_byt) begin
                                state <= S_STOP;            // tum baytlar bitti
                            end else begin
                                data_idx <= data_idx + 2'd1;
                                bit_cnt  <= 3'd7;
                                shreg    <= is_read ? 8'd0
                                                    : tdr_byte(tdr_lat, data_idx + 2'd1);
                                state    <= S_BITS;
                            end
                        end
                    endcase

                    S_STOP: case (phase)
                        2'd0: begin sda_pull <= 1'b1; phase <= 2'd1; end  // SDA'yi dusuk tut
                        2'd1: begin scl_q    <= 1'b1; phase <= 2'd2; end
                        2'd2: begin sda_pull <= 1'b0; phase <= 2'd3; end  // SDA yukselir -> STOP
                        2'd3: begin
                            // NACK'te de done set edilir ki SW polling'de takilmasin
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
