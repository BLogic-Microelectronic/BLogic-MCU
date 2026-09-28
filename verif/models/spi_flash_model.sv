// SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
// SPDX-License-Identifier: GPL-3.0-only
// Licensed under the GNU General Public License version 3 only.
// See the LICENSE file in the repository root for the full license text.

// ============================================
// Ostim BLogic Mikroelektronik
// spi_flash_model.sv  -  Simulasyon SPI/QSPI flash modeli
// ============================================
`timescale 1ns / 1ps
module spi_flash_model #(
    parameter int FLASH_SIZE = 8192,
    parameter     INIT_FILE  = ""
)(
    input  wire        sclk,
    input  wire        cs_n,
    input  wire  [3:0] io_in,
    output logic [3:0] io_out,
    output logic [3:0] io_oe_out
);
    localparam int AB = $clog2(FLASH_SIZE);
    logic [7:0] memory [0:FLASH_SIZE-1];

    initial begin
        for (int i = 0; i < FLASH_SIZE; i++) memory[i] = 8'hFF;
        if (INIT_FILE != "") begin
            $readmemh(INIT_FILE, memory);
            $display("[FLASH] %s yuklendi (%0d byte)", INIT_FILE, FLASH_SIZE);
        end
    end

    typedef enum logic [1:0] {PH_CAPTURE, PH_DUMMY, PH_DATA} phase_e;
    phase_e      phase;
    logic        cmd_err;      // sertlestirme: desteksiz komut kilidi
    logic [39:0] in_sr;            // cmd(8) + adres(<=32)
    logic [5:0]  in_bit_cnt;
    logic [2:0]  abytes;           // 3 / 4
    logic [3:0]  dummy_left;
    logic [2:0]  width;            // 1 / 2 / 4
    logic [3:0]  steps_per_byte;   // 8 / 4 / 2
    logic [31:0] read_addr;
    logic [3:0]  out_step;

    wire [5:0] cap_total = 6'd8 + {abytes, 3'b000};   // 8 + 8*abytes
    // SERTLESTIRME (11 Agu): bit7 uydurmasi kaldirildi. Durust mode-0
    // orneklemesi: 8 bitin 8'i de yukselen kenarda alinan gercek orneklerdir.
    // Duzeltilmemis RTL (MOSI yukselen kenarda degisir) bu modelde FAIL eder
    // ve etmelidir - kalici regresyon tuzagi.
    wire [7:0] cmd_new   = {in_sr[6:0], io_in[0]};

    always @(posedge sclk or posedge cs_n) begin
        if (cs_n) begin
            phase <= PH_CAPTURE; in_sr <= '0; in_bit_cnt <= '0;
            abytes <= 3'd3; dummy_left <= '0; width <= 3'd1; cmd_err <= 1'b0;
            steps_per_byte <= 4'd8; read_addr <= '0; out_step <= '0;
        end else begin
            case (phase)
                PH_CAPTURE: begin
                    in_sr      <= {in_sr[38:0], io_in[0]};
                    in_bit_cnt <= in_bit_cnt + 1;
                    if (in_bit_cnt == 6'd7) begin
                        case (cmd_new)
                            8'h03: begin abytes <= 3'd3; dummy_left <= 4'd0; width <= 3'd1; steps_per_byte <= 4'd8; end
                            8'h3B: begin abytes <= 3'd3; dummy_left <= 4'd8; width <= 3'd2; steps_per_byte <= 4'd4; end
                            8'h6B: begin abytes <= 3'd3; dummy_left <= 4'd8; width <= 3'd4; steps_per_byte <= 4'd2; end
                            8'h13: begin abytes <= 3'd4; dummy_left <= 4'd0; width <= 3'd1; steps_per_byte <= 4'd8; end
                            default: begin
                                cmd_err <= 1'b1;
                                $error("[FLASH] DESTEKSIZ KOMUT 0x%02h - model veri DONDURMEZ (sertlestirilmis)", cmd_new);
                            end
                        endcase
                    end
                    if (in_bit_cnt == cap_total - 6'd1) begin
                        // adres = onceki ornekler + BU kenardaki CANLI bit.
                        // Eski hal son biti kaciriyor, cmd bit0'i adres
                        // MSB'sine sizdiriyordu (read_addr=0x800000|A>>1);
                        // bir-gec cerceve bunu maskeliyordu. T1 kaniti:
                        // A=0x100 -> 0x800080 -> hi_byte 43,42,41,40.
                        read_addr <= (abytes == 3'd4) ? {in_sr[30:0], io_in[0]}
                                                      : {8'd0, in_sr[22:0], io_in[0]};
                        out_step  <= '0;
                        phase     <= (dummy_left != 0) ? PH_DUMMY : PH_DATA;
                    end
                end
                PH_DUMMY: begin
                    dummy_left <= dummy_left - 4'd1;
                    if (dummy_left == 4'd1) phase <= PH_DATA;
                end
                PH_DATA: begin
                    if (out_step == steps_per_byte - 4'd1) begin
                        out_step  <= '0;
                        read_addr <= read_addr + 1;
                    end else
                        out_step <= out_step + 4'd1;
                end
                default: phase <= PH_CAPTURE;
            endcase
        end
    end

    // kombinasyonel cikis; FLASH_SIZE disinda adres-essiz formul
    wire [7:0] hi_byte  = read_addr[7:0] ^ read_addr[15:8]
                        ^ read_addr[23:16] ^ read_addr[31:24] ^ 8'hC3;
    wire [7:0] cur_byte = (read_addr < FLASH_SIZE)
                        ? memory[read_addr[AB-1:0]]
                        : hi_byte;
    always_comb begin
        io_out    = 4'b1111;
        io_oe_out = 4'b0000;
        if (!cs_n && phase == PH_DATA && !cmd_err) begin
            case (width)
                3'd2: begin
                    io_oe_out = 4'b0011;
                    io_out[1] = cur_byte[7 - {out_step[1:0], 1'b0}];
                    io_out[0] = cur_byte[6 - {out_step[1:0], 1'b0}];
                end
                3'd4: begin
                    io_oe_out = 4'b1111;
                    io_out    = (out_step[0] == 1'b0) ? cur_byte[7:4] : cur_byte[3:0];
                end
                default: begin
                    io_oe_out = 4'b0010;
                    io_out[1] = cur_byte[3'd7 - out_step[2:0]];
                end
            endcase
        end
    end
endmodule
