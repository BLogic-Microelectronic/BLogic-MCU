// ============================================
// Ostim BLogic Mikroelektronik
// axi_dm_slave.sv  -  iki AXI4 slave portunu riscv-dbg dm_top'un tek
//                     senkron bellek portuna tahkim eden kopru
// ============================================
// JTAG debug altsistemi, teslim cipinin parcasi (JTAG_DEBUG teslim
// yapilandirmasinda ACIK: soc_files.f, asic/config.yaml, build_genesys2.tcl).
// Debug Module (dm_top) tek portlu, SRAM benzeri bir
// bellek arayuzu sunar: req/we/addr/be/wdata T'de, rdata T+1'de (dm_mem
// icinde kayitli; bir sonraki OKUMAYA kadar tutulur). Cekirdek debug
// ROM'unda kosarken ayni cevrimde hem buyruk getirebilir (instr_slv) hem
// de Halted/Going bayraklarina yazip data0'i okuyabilir (data_slv); bu
// yuzden iki AXI portu tek DM portuna sabit oncelikle tahkim edilir:
//   veri yazma > veri okuma > buyruk okuma
//
// ISTEK YAZMACI (3 Eylul 2026, SS zamanlama bulgusu):
//   Ilk surum istegi (adres/veri/req) DM'e KOMBINASYONEL gecirirdi. VM1'de
//   JTAG_DEBUG'li tam akis (rtl/debug/asic_jtag_sentez/full/) SS kosesinde
//   en kotu yolun cekirdegin komut-getirme adres yolu (id_stage -> csr ->
//   controller.pc_mux -> if_stage) + crossbar + bu kopru -> dm_mem oldugunu
//   gosterdi: -11,98 ns (teslim -9,08), en kotu 1000 SS yolunun 140'i DM
//   ucunda. Bu surumde kabul edilen istek ONCE yazmaca alinir, DM'e bir
//   cevrim sonra sunulur; boylece crossbar'dan gelen tum yollar bu modulun
//   yazmaclarinda biter (axi_sram_wrapper'daki gibi). Bedel: DM erisimi
//   1 cevrim gec (adres T, DM'de T+1, yanit T+2). Debug ROM / program buffer
//   erisimleri gecikmeye duyarsizdir; OpenOCD/gdb protokolu etkilenmez.
//   Yanit tuketilene kadar (r_valid && !r_ready, b_valid && !b_ready) ve
//   yazmacta istek varken (req_q) yeni istek kabul edilmez: DM'in tek rdata
//   yazmaci ezilmez, adres DM'e sabit sunulur (dm_mem'in okuma secicileri
//   addr_i'yi her cevrim ornekler).
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

    // ---- istek yazmaci ----
    logic                    req_q, we_q, instr_q;
    logic [31:0]             addr_q, wdata_q;
    logic [ 3:0]             be_q;
    logic [AXI_ID_WIDTH-1:0] id_q;

    // Tuketilmemis yanit varken ya da yazmacta istek beklerken yeni istek yok
    logic resp_pending, busy;
    assign resp_pending = (instr_slv.r_valid && !instr_slv.r_ready) ||
                          (data_slv.r_valid  && !data_slv.r_ready)  ||
                          (data_slv.b_valid  && !data_slv.b_ready);
    assign busy = req_q || resp_pending;

    // ---- veri yazma (en yuksek oncelik) ----
    // AW ve W ATOMIK kabul edilir: her ready, kardes kanalin valid'ine de
    // baglidir (AXI: ready valid'e bagli olabilir, tersi olamaz). Boylece
    // AW'yi W'den once gonderen bir master'in AW'si "kabul edilip" dusmez.
    logic dw_en, dr_en, ir_en;
    assign data_slv.aw_ready = !busy && data_slv.w_valid;
    assign data_slv.w_ready  = !busy && data_slv.aw_valid;
    assign dw_en = data_slv.aw_valid && data_slv.w_valid && !busy;

    // ---- veri okuma ----
    assign data_slv.ar_ready = !busy && !dw_en;
    assign dr_en = data_slv.ar_valid && data_slv.ar_ready;

    // ---- buyruk okuma (en dusuk oncelik) ----
    // NOT: buyruk portunun ar_ready'si (= cekirdege instr_gnt) veri portunun
    // valid'ine kombinasyonel baglidir (dw_en/dr_en). Dongu yok (valid hicbir
    // yerde ready'ye bagli degil); bu, her AXI slave'in ar_ready -> obi gnt
    // yoluyla ayni siniftadir (axi_sram_wrapper).
    assign instr_slv.ar_ready = !busy && !dw_en && !dr_en;
    assign ir_en = instr_slv.ar_valid && instr_slv.ar_ready;

    // ---- kabul edilen istek yazmaca alinir ----
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            req_q   <= 1'b0;
            we_q    <= 1'b0;
            instr_q <= 1'b0;
            addr_q  <= 32'h0;
            wdata_q <= 32'h0;
            be_q    <= 4'b1111;
            id_q    <= '0;
        end else begin
            req_q <= dw_en || dr_en || ir_en;
            if (dw_en || dr_en || ir_en) begin
                we_q    <= dw_en;
                instr_q <= ir_en;
                addr_q  <= dw_en ? data_slv.aw_addr
                         : dr_en ? data_slv.ar_addr
                                 : instr_slv.ar_addr;
                wdata_q <= data_slv.w_data;
                be_q    <= dw_en ? data_slv.w_strb : 4'b1111;
                id_q    <= dw_en ? data_slv.aw_id
                         : dr_en ? data_slv.ar_id
                                 : instr_slv.ar_id;
            end
        end
    end

    // ---- DM portu: tamamen yazmactan surulur ----
    // Adres, bir sonraki istek kabul edilene kadar TUTULUR (dm_mem'in
    // fwd_rom_q / word_enable32_q secicileri addr_i'yi req'siz de ornekler;
    // degisen adres bekleyen rdata'yi bozardi).
    assign dm_req_o   = req_q;
    assign dm_we_o    = req_q && we_q;
    assign dm_addr_o  = addr_q;
    assign dm_be_o    = be_q;
    assign dm_wdata_o = wdata_q;

    // ---- veri B kanali (yazma DM'de T+1, yanit T+2) ----
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            data_slv.b_valid <= 1'b0;
            data_slv.b_id    <= '0;
        end else if (req_q && we_q) begin
            data_slv.b_valid <= 1'b1;
            data_slv.b_id    <= id_q;
        end else if (data_slv.b_valid && data_slv.b_ready) begin
            data_slv.b_valid <= 1'b0;
        end
    end
    assign data_slv.b_resp = 2'b00;
    assign data_slv.b_user = '0;

    // ---- veri R kanali (okuma DM'de T+1, rdata T+2'de gecerli) ----
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            data_slv.r_valid <= 1'b0;
            data_slv.r_id    <= '0;
        end else if (req_q && !we_q && !instr_q) begin
            data_slv.r_valid <= 1'b1;
            data_slv.r_id    <= id_q;
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
        end else if (req_q && instr_q) begin
            instr_slv.r_valid <= 1'b1;
            instr_slv.r_id    <= id_q;
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

    // ---- sozlesme denetimleri (yalniz simulasyon, sentez etkisiz) ----
    // Bugunku master'lar (obi_to_axi) r_ready'yi her zaman yuksek tuttugu
    // icin resp_pending pratikte nadiren 1 olur; bu denetimler, ileride bir
    // master degisirse tutma sozlesmesinin sessizce bozulmamasi icindir.
    // 3 Eylul (test boslugu G-08): ikinci denetim
    //   busy |-> !(dw_en || dr_en || ir_en)
    // YAPISAL TOTOLOJIYDI (her *_en zaten !busy ile carpiliyor), yani hicbir
    // sey dogrulamiyordu. Yerine istek/yanit ZAMANLAMA sozlesmesi kondu:
    //   - kabul edilen istek TEK cevrim DM'e sunulur (adres T, DM'de T+1),
    //   - ve o istegin yaniti bir sonraki cevrimde (T+2) uc kanaldan TAM
    //     BIRINDE gorunur.
    // Ayrica resp_pending icin cover eklendi: verif/tb/axi_dm_slave_tb.sv
    // (make jtag-bridge-sim) bunu vurur, jtag_smoke_tb VURMAZ - bu, birim
    // TB'nin neden gerektiginin kanitidir.
`ifndef SYNTHESIS
    assert property (@(posedge clk_i) disable iff (!rst_ni)
        resp_pending |-> (!dm_req_o && $stable(dm_addr_o)))
        else $error("axi_dm_slave: yanit beklenirken DM istegi/adresi degisti");
    assert property (@(posedge clk_i) disable iff (!rst_ni)
        req_q |-> ##1 !req_q)
        else $error("axi_dm_slave: DM istegi bir cevrimden uzun surdu");
    assert property (@(posedge clk_i) disable iff (!rst_ni)
        req_q |-> ##1 $onehot({instr_slv.r_valid && instr_q,
                               data_slv.r_valid  && !we_q && !instr_q,
                               data_slv.b_valid  && we_q}))
        else $error("axi_dm_slave: istegin yaniti T+2'de tam bir kanalda cikmadi");
    assert property (@(posedge clk_i) disable iff (!rst_ni)
        !(instr_slv.r_valid && data_slv.r_valid))
        else $error("axi_dm_slave: iki portta ayni anda okuma yaniti");

    cover property (@(posedge clk_i) disable iff (!rst_ni) resp_pending);
    cover property (@(posedge clk_i) disable iff (!rst_ni)
        req_q && we_q && (dm_be_o != 4'b1111));
`endif

endmodule
