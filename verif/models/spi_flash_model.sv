`timescale 1ns / 1ps
// Simulasyon icin minimal SPI flash modeli - sadece READ (0x03) destekler.

module spi_flash_model #(
    parameter int FLASH_SIZE = 8192,
    parameter     INIT_FILE  = ""
)(
    input  wire sclk, cs_n, mosi,
    output wire miso
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

    logic [31:0] cmd_addr_sr;
    logic [5:0]  in_bit_cnt;
    logic [23:0] read_addr;
    logic [2:0]  out_bit_cnt;
    logic        in_data_phase;

    always @(posedge sclk or posedge cs_n) begin
        if (cs_n) begin
            cmd_addr_sr <= 0; in_bit_cnt <= 0; read_addr <= 0;
            out_bit_cnt <= 0; in_data_phase <= 0;
        end else if (!in_data_phase) begin
            cmd_addr_sr <= {cmd_addr_sr[30:0], mosi};
            in_bit_cnt  <= in_bit_cnt + 1;
            if (in_bit_cnt == 31) begin
                in_data_phase <= 1;
                read_addr     <= {cmd_addr_sr[22:0], mosi};
                out_bit_cnt   <= 0;
                if (cmd_addr_sr[31:24] != 8'h03)
                    $display("[FLASH] uyari: desteksiz cmd 0x%02h", cmd_addr_sr[31:24]);
            end
        end else begin
            if (out_bit_cnt == 7) begin
                read_addr   <= read_addr + 1;
                out_bit_cnt <= 0;
            end else
                out_bit_cnt <= out_bit_cnt + 1;
        end
    end

    assign miso = (!cs_n && in_data_phase)
                ? memory[read_addr[AB-1:0]][7 - out_bit_cnt]
                : 1'b0;
endmodule
