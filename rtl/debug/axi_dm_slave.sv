// ============================================
// Ostim BLogic Mikroelektronik
// axi_dm_slave.sv  -  iki AXI4 slave portunu riscv-dbg dm_top'un tek
//                     senkron bellek portuna tahkim eden kopru
// ============================================
// deneme/jtag dali. Debug Module (dm_top) tek portlu, SRAM benzeri bir
// bellek arayuzu sunar: req/we/addr/be/wdata T'de, rdata T+1'de (dm_mem
// icinde kayitli; bir sonraki OKUMAYA kadar tutulur). Cekirdek debug
// ROM'unda kosarken ayni cevrimde hem buyruk getirebilir (instr_slv) hem
// de Halted/Going bayraklarina yazip data0'i okuyabilir (data_slv); bu
// yuzden iki AXI portu tek DM portuna sabit oncelikle tahkim edilir:
//   veri yazma > veri okuma > buyruk okuma
// Zamanlama sozlesmesi axi_sram_wrapper/boot_rom ile aynidir: adres T,
// veri T+1 (r_valid ile). Okuma yaniti tuketilene kadar yeni okuma
// kabul edilmez (DM'in tek rdata yazmaci ezilmesin).
`timescale 1ns / 1ps

module axi_dm_slave #(
    parameter int unsigned AXI_ID_WIDTH = 4
)(
    input  logic        clk_i,
    input  logic        rst_ni,

    AXI_BUS.Slave       instr_slv,   // buyruk yolu: salt okunur
    AXI_BUS.Slave       data_slv,    // veri yolu: okuma + yazma

    // dm_top slave portu
    output logic        dm_req_o,
    output logic        dm_we_o,
    output logic [31:0] dm_addr_o,
    output logic [ 3:0] dm_be_o,
    output logic [31:0] dm_wdata_o,
    input  logic [31:0] dm_rdata_i
);

    // Tuketilmemis okuma yaniti varken DM'e yeni okuma verilmez
    logic rd_pending;
    assign rd_pending = (instr_slv.r_valid && !instr_slv.r_ready) ||
                        (data_slv.r_valid  && !data_slv.r_ready);

    // ---- veri yazma ----
    // AW ve W ATOMIK kabul edilir: her ready, kardes kanalin valid'ine de
    // baglidir (AXI: ready valid'e bagli olabilir, tersi olamaz). Boylece
    // AW'yi W'den once gonderen bir master'in AW'si "kabul edilip" dusmez.
    // Yazma, tuketilmemis okuma yaniti varken de bekletilir: dm_mem'in okuma
    // secicileri (fwd_rom_q, word_enable32_q) req'siz de addr_i'yi ornekler,
    // yani araya giren yazma bekleyen r_data'yi bozardi.
    logic dw_en;
    assign data_slv.aw_ready = !rd_pending && data_slv.w_valid  &&
                               (!data_slv.b_valid || data_slv.b_ready);
    assign data_slv.w_ready  = !rd_pending && data_slv.aw_valid &&
                               (!data_slv.b_valid || data_slv.b_ready);
    assign dw_en = data_slv.aw_valid && data_slv.w_valid &&
                   data_slv.aw_ready && data_slv.w_ready;

    // ---- veri okuma ----
    logic dr_en;
    assign data_slv.ar_ready = !rd_pending && !dw_en;
    assign dr_en = data_slv.ar_valid && data_slv.ar_ready;

    // ---- buyruk okuma (en dusuk oncelik) ----
    // NOT: buyruk portunun ar_ready'si (= cekirdege instr_gnt) burada veri
    // portunun valid/adres dekoduna kombinasyonel bagli olur (dw_en/dr_en).
    // Dongu yok (valid hicbir yerde ready'ye bagli degil); STA acisindan
    // yeni bir yol: data adres dekodu -> ir ar_ready -> crossbar -> obi gnt.
    logic ir_en;
    assign instr_slv.ar_ready = !rd_pending && !dw_en && !dr_en;
    assign ir_en = instr_slv.ar_valid && instr_slv.ar_ready;

    // ---- DM portu ----
    // dm_mem'in okuma secicileri (word_enable32_q, fwd_rom_q) addr_i'yi
    // HER cevrim ornekler (req olmasa da). Bu yuzden adres, son istegin
    // adresinde TUTULUR; yoksa yanit beklerken degisen adres rdata_o'yu
    // bozardi. Yeni istek geldiginde onun adresi surulur ve kaydedilir.
    logic [31:0] dm_addr_sel, dm_addr_q;
    assign dm_req_o    = dw_en || dr_en || ir_en;
    assign dm_we_o     = dw_en;
    assign dm_addr_sel = dw_en ? data_slv.aw_addr
                       : dr_en ? data_slv.ar_addr
                               : instr_slv.ar_addr;
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni)        dm_addr_q <= 32'h0;
        else if (dm_req_o)  dm_addr_q <= dm_addr_sel;
    end
    assign dm_addr_o  = dm_req_o ? dm_addr_sel : dm_addr_q;
    assign dm_be_o    = dw_en ? data_slv.w_strb : 4'b1111;
    assign dm_wdata_o = data_slv.w_data;

    // ---- veri B kanali ----
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            data_slv.b_valid <= 1'b0;
            data_slv.b_id    <= '0;
        end else if (dw_en) begin
            data_slv.b_valid <= 1'b1;
            data_slv.b_id    <= data_slv.aw_id;
        end else if (data_slv.b_valid && data_slv.b_ready) begin
            data_slv.b_valid <= 1'b0;
        end
    end
    assign data_slv.b_resp = 2'b00;
    assign data_slv.b_user = '0;

    // ---- veri R kanali ----
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            data_slv.r_valid <= 1'b0;
            data_slv.r_id    <= '0;
        end else if (dr_en) begin
            data_slv.r_valid <= 1'b1;
            data_slv.r_id    <= data_slv.ar_id;
        end else if (data_slv.r_valid && data_slv.r_ready) begin
            data_slv.r_valid <= 1'b0;
        end
    end
    assign data_slv.r_data = dm_rdata_i;
    assign data_slv.r_resp = 2'b00;
    assign data_slv.r_last = 1'b1;
    assign data_slv.r_user = '0;

    // ---- buyruk R kanali ----
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            instr_slv.r_valid <= 1'b0;
            instr_slv.r_id    <= '0;
        end else if (ir_en) begin
            instr_slv.r_valid <= 1'b1;
            instr_slv.r_id    <= instr_slv.ar_id;
        end else if (instr_slv.r_valid && instr_slv.r_ready) begin
            instr_slv.r_valid <= 1'b0;
        end
    end
    assign instr_slv.r_data = dm_rdata_i;
    assign instr_slv.r_resp = 2'b00;
    assign instr_slv.r_last = 1'b1;
    assign instr_slv.r_user = '0;

    // ---- buyruk portu yazmaz ----
    assign instr_slv.aw_ready = 1'b0;
    assign instr_slv.w_ready  = 1'b0;
    assign instr_slv.b_valid  = 1'b0;
    assign instr_slv.b_id     = '0;
    assign instr_slv.b_resp   = 2'b00;
    assign instr_slv.b_user   = '0;

    // ---- sozlesme denetimleri (yalniz simulasyon) ----
    // Bugunku master'lar (obi_to_axi) r_ready'yi her zaman yuksek tuttugu
    // icin rd_pending pratikte hic 1 olmaz; bu denetimler, ileride bir master
    // degisirse tutma sozlesmesinin sessizce bozulmamasi icindir.
`ifndef SYNTHESIS
    assert property (@(posedge clk_i) disable iff (!rst_ni)
        rd_pending |-> (!dm_req_o && $stable(dm_addr_o)))
        else $error("axi_dm_slave: yanit beklenirken DM istegi/adresi degisti");
    assert property (@(posedge clk_i) disable iff (!rst_ni)
        !(instr_slv.r_valid && data_slv.r_valid))
        else $error("axi_dm_slave: iki portta ayni anda okuma yaniti");
`endif

endmodule
