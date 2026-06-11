`timescale 1ns / 1ps
// ============================================================
// Simulasyon SPI/QSPI flash modeli v2
//   Desteklenen komutlar:
//     0x03 READ   : 3B adres, dummy=0, veri x1 (IO1)
//     0x3B DOR    : 3B adres, dummy=8, veri x2 (IO1:IO0)
//     0x6B QOR    : 3B adres, dummy=8, veri x4 (IO3:IO0)
//     0x13 READ4B : 4B adres, dummy=0, veri x1 (IO1)
//   FLASH_SIZE disi adresler: adres-essiz deterministik veri
//     hi_byte = a[7:0]^a[15:8]^a[23:16]^a[31:24]^0xC3
//   (4B adreslemenin ust baytinin telde tasindigini kanitlamak icin;
//    alias'lanan okuma memory[] rampasina duser ve yakalanir)
//   Zamanlama sozlesmesi (v1'den korunur): girisler posedge sclk'de
//   orneklenir, cikis kombinasyonel surulur (master falling'de ornekler).
// ============================================================
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
    logic [39:0] in_sr;            // cmd(8) + adres(<=32)
    logic [5:0]  in_bit_cnt;
    logic [2:0]  abytes;           // 3 / 4
    logic [3:0]  dummy_left;
    logic [2:0]  width;            // 1 / 2 / 4
    logic [3:0]  steps_per_byte;   // 8 / 4 / 2
    logic [31:0] read_addr;
    logic [3:0]  out_step;

    wire [5:0] cap_total = 6'd8 + {abytes, 3'b000};   // 8 + 8*abytes
    // Post-kenar ornekleme sozlesmesi: flash, master'in ayni sistem-clock
    // kenarinda guncellenen sclk_reg'ini dinler; her posedge'de kenar-SONRASI
    // deger orneklenir -> ilk ornek cmd bit6'dir (bit7 gozlenemez; mevcut
    // komut setinde 0x03/0x3B/0x6B/0x13 icin bit7=0).
    wire [7:0] cmd_new   = {1'b0, in_sr[5:0], io_in[0]};

    always @(posedge sclk or posedge cs_n) begin
        if (cs_n) begin
            phase <= PH_CAPTURE; in_sr <= '0; in_bit_cnt <= '0;
            abytes <= 3'd3; dummy_left <= '0; width <= 3'd1;
            steps_per_byte <= 4'd8; read_addr <= '0; out_step <= '0;
        end else begin
            case (phase)
                PH_CAPTURE: begin
                    in_sr      <= {in_sr[38:0], io_in[0]};
                    in_bit_cnt <= in_bit_cnt + 1;
                    if (in_bit_cnt == 6'd6) begin
                        case (cmd_new)
                            8'h03: begin abytes <= 3'd3; dummy_left <= 4'd0; width <= 3'd1; steps_per_byte <= 4'd8; end
                            8'h3B: begin abytes <= 3'd3; dummy_left <= 4'd8; width <= 3'd2; steps_per_byte <= 4'd4; end
                            8'h6B: begin abytes <= 3'd3; dummy_left <= 4'd8; width <= 3'd4; steps_per_byte <= 4'd2; end
                            8'h13: begin abytes <= 3'd4; dummy_left <= 4'd0; width <= 3'd1; steps_per_byte <= 4'd8; end
                            default: begin
                                abytes <= 3'd3; dummy_left <= 4'd0; width <= 3'd1; steps_per_byte <= 4'd8;
                                $display("[FLASH] uyari: desteksiz cmd 0x%02h", cmd_new);
                            end
                        endcase
                    end
                    if (in_bit_cnt == cap_total - 6'd1) begin
                        // Bu kenardaki io_in artik master surusu degil (oe dustu);
                        // adres tamamen in_sr icindedir (v1 ile ayni hizalama).
                        read_addr <= (abytes == 3'd4) ? in_sr[31:0]
                                                      : {8'd0, in_sr[23:0]};
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

    // Cikis surme: kombinasyonel; quad nibble MSB once, IO3=MSB
    // FLASH_SIZE icinde: yuklu memory[] (mevcut davranis, boot dahil).
    // Disinda (orn. 16MB+ siniri otesi): adres-essiz formul. Ust bayti
    // dusuren/stuck-0 yapan bir RTL hatasi adresi memory[] bolgesine
    // alias'lar -> beklenen formul verisi yerine rampa gelir -> FAIL.
    wire [7:0] hi_byte  = read_addr[7:0] ^ read_addr[15:8]
                        ^ read_addr[23:16] ^ read_addr[31:24] ^ 8'hC3;
    wire [7:0] cur_byte = (read_addr < FLASH_SIZE)
                        ? memory[read_addr[AB-1:0]]
                        : hi_byte;
    always_comb begin
        io_out    = 4'b1111;
        io_oe_out = 4'b0000;
        if (!cs_n && phase == PH_DATA) begin
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
