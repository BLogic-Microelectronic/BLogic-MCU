// ============================================
// Ostim BLogic Mikroelektronik
// cv32e40p_clock_gate_asic.sv  -  ASIC saat kapisi (Blokaj 6 cozumu)
// ============================================
// Vendor'un cv32e40p_sim_clock_gate.sv dosyasi kendi basliginda
// "It must not be used for ASIC synthesis" der: icerigi always_latch + AND'dir
// ve tasarimdaki tek latch'i uretir. sleep_unit bu modulu kosulsuz instantiate
// ettigi icin CPU'nun tum saati buradan gecer.
//
// Varsayilan (USE_SKY130_ICG tanimsiz): saat kapisi devre disi.
//   clk_o = clk_i, en_i yok sayilir. clock_en yalnizca guc tasarrufu icindir,
//   kapatilmamasi islevsel hata uretmez. Latch kalkar, tek saat domeni korunur,
//   CTS/STA icin ek kisit gerekmez. Bedeli: uyku modunda dinamik guc.
//
// USE_SKY130_ICG tanimliysa: gercek sky130 ICG hucresi (dlclkp) kullanilir.
//   Guc avantaji korunur; SDC'ye gated clock kisitlari eklenmelidir.
`timescale 1ns / 1ps

module cv32e40p_clock_gate (
    input  logic clk_i,
    input  logic en_i,
    input  logic scan_cg_en_i,
    output logic clk_o
);

`ifdef USE_SKY130_ICG
    logic gate_en;
    assign gate_en = en_i | scan_cg_en_i;

    sky130_fd_sc_hd__dlclkp_1 u_icg (
        .CLK (clk_i),
        .GATE(gate_en),
        .GCLK(clk_o)
    );
`else
    // Saat kapisi devre disi - Blokaj 6 varsayilan cozumu
    assign clk_o = clk_i;

    // synthesis translate_off
    logic unused_en;
    assign unused_en = en_i | scan_cg_en_i;
    // synthesis translate_on
`endif

endmodule
