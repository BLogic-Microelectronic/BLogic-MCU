// ============================================
// Ostim BLogic Mikroelektronik
// boot_rom.sv  -  salt-okunur boot ROM (AXI4 slave)
// ============================================
// Icerik sabittir, bu nedenle SRAM makrosu yerine mantiga sentezlenir.
// Zamanlama axi_sram_wrapper ile birebir aynidir: adres T aninda,
// veri T+1'de (r_valid ile birlikte).
// Yazma kanali protokol geregi kabul edilir ancak icerik degismez.
`timescale 1ns / 1ps

module boot_rom #(
    parameter int unsigned AXI_ID_WIDTH = 5,
    parameter int unsigned ROM_WORDS    = 32
)(
    input  logic clk_i,
    input  logic rst_ni,
    AXI_BUS.Slave slv
);
    localparam int unsigned ADDR_LSB   = 2;
    localparam int unsigned WORD_IDX_W = (ROM_WORDS > 1) ? $clog2(ROM_WORDS) : 1;
    localparam int unsigned ADDR_MSB   = ADDR_LSB + WORD_IDX_W - 1;

    logic [WORD_IDX_W-1:0] rd_word_idx;
    assign rd_word_idx = slv.ar_addr[ADDR_MSB:ADDR_LSB];

    // --- ROM icerigi (bootrom.hex'ten uretilir) ---
    logic [31:0] rom_word;
    always_comb begin
        rom_word = 32'h0000_0000;
        case (rd_word_idx)
`include "bootrom_content.svh"
            default: rom_word = 32'h0000_0000;
        endcase
    end

    // --- Yazma kanali: kabul edilir, icerik degismez ---
    logic write_en;
    assign write_en = slv.aw_valid && slv.w_valid && slv.aw_ready && slv.w_ready;
    assign slv.aw_ready = !slv.b_valid || slv.b_ready;
    assign slv.w_ready  = !slv.b_valid || slv.b_ready;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            slv.b_valid <= 1'b0;
            slv.b_id    <= '0;
        end else if (write_en) begin
            slv.b_valid <= 1'b1;
            slv.b_id    <= slv.aw_id;
        end else if (slv.b_valid && slv.b_ready) begin
            slv.b_valid <= 1'b0;
        end
    end
    assign slv.b_resp = 2'b00;
    assign slv.b_user = '0;

    // --- Okuma ---
    logic read_en;
    assign read_en = slv.ar_valid && slv.ar_ready;
    assign slv.ar_ready = !slv.r_valid || slv.r_ready;

    logic [31:0] rdata_q;
    always_ff @(posedge clk_i) begin
        if (read_en) rdata_q <= rom_word;
    end

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            slv.r_valid <= 1'b0;
            slv.r_id    <= '0;
        end else if (read_en) begin
            slv.r_valid <= 1'b1;
            slv.r_id    <= slv.ar_id;
        end else if (slv.r_valid && slv.r_ready) begin
            slv.r_valid <= 1'b0;
        end
    end

    assign slv.r_data = rdata_q;
    assign slv.r_resp = 2'b00;
    assign slv.r_last = 1'b1;
    assign slv.r_user = '0;

endmodule
