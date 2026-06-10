`timescale 1ns / 1ps
// I2C slave modeli (echo): master'in yazdigi son transaction'i saklar,
// okuma istendiginde ayni baytlari geri verir. 7-bit adres, MSB-first.
// Tel kurali (blok TB ile ayni): sda_oe=1 -> hatti 0'a cek.
module i2c_slave_model #(
    parameter logic [6:0] ADDR  = 7'h42,
    parameter int         DEPTH = 8
)(
    input  logic clk_i,
    input  logic scl_i,
    input  logic sda_i,
    output logic sda_oe_o
);
    logic scl_q, sda_q;
    always_ff @(posedge clk_i) begin
        scl_q <= scl_i;
        sda_q <= sda_i;
    end
    wire scl_rise = ( scl_i & ~scl_q);
    wire scl_fall = (~scl_i &  scl_q);
    wire start_c  = (~sda_i &  sda_q) & scl_i & scl_q;
    wire stop_c   = ( sda_i & ~sda_q) & scl_i & scl_q;

    logic [7:0] mem [0:DEPTH-1];
    int unsigned wr_ptr, rd_ptr, wr_base;

    typedef enum logic [2:0] {IDLE, A_BITS, A_ACK, W_BITS, W_ACK,
                              R_BITS, R_MACK} st_t;
    st_t st;
    logic [7:0] sh, tx_byte;
    logic [3:0] bcnt;
    logic       rw_bit;

    always_ff @(posedge clk_i) begin
        if (start_c) begin
            st <= A_BITS; bcnt <= 4'd0; sh <= 8'd0; sda_oe_o <= 1'b0;
        end else if (stop_c) begin
            st <= IDLE; sda_oe_o <= 1'b0;
        end else begin
            case (st)
                IDLE: sda_oe_o <= 1'b0;

                A_BITS: if (scl_rise) begin
                    sh <= {sh[6:0], sda_i}; bcnt <= bcnt + 4'd1;
                end else if (scl_fall && bcnt == 4'd8) begin
                    if (sh[7:1] == ADDR) begin
                        rw_bit <= sh[0]; sda_oe_o <= 1'b1; st <= A_ACK;
                    end else st <= IDLE;
                end

                A_ACK: if (scl_fall) begin
                    bcnt <= 4'd0;
                    if (rw_bit) begin
                        rd_ptr   <= wr_base;
                        tx_byte  <= mem[wr_base % DEPTH];
                        sda_oe_o <= ~mem[wr_base % DEPTH][7];
                        st       <= R_BITS;
                    end else begin
                        sda_oe_o <= 1'b0;
                        wr_base  <= wr_ptr;
                        st       <= W_BITS;
                    end
                end

                W_BITS: if (scl_rise) begin
                    sh <= {sh[6:0], sda_i}; bcnt <= bcnt + 4'd1;
                end else if (scl_fall && bcnt == 4'd8) begin
                    mem[wr_ptr % DEPTH] <= sh;
                    wr_ptr <= wr_ptr + 1;
                    sda_oe_o <= 1'b1;
                    st <= W_ACK;
                end

                W_ACK: if (scl_fall) begin
                    sda_oe_o <= 1'b0; bcnt <= 4'd0; st <= W_BITS;
                end

                R_BITS: if (scl_fall) begin
                    if (bcnt == 4'd7) begin
                        bcnt <= 4'd0; sda_oe_o <= 1'b0; st <= R_MACK;
                    end else begin
                        sda_oe_o <= ~tx_byte[6 - bcnt];
                        bcnt <= bcnt + 4'd1;
                    end
                end

                R_MACK: if (scl_rise) begin
                    rd_ptr <= rd_ptr + 1;
                    if (!sda_i) tx_byte <= mem[(rd_ptr + 1) % DEPTH];
                end else if (scl_fall) begin
                    if (sda_q) st <= IDLE;
                    else begin
                        sda_oe_o <= ~mem[rd_ptr % DEPTH][7];
                        st <= R_BITS;
                    end
                end
                default: st <= IDLE;
            endcase
        end
    end
    initial begin st = IDLE; sda_oe_o = 0; wr_ptr = 0; rd_ptr = 0; wr_base = 0; end
endmodule
