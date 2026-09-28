// SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
// SPDX-License-Identifier: GPL-3.0-only
// Licensed under the GNU General Public License version 3 only.
// See the LICENSE file in the repository root for the full license text.

// ============================================
// Ostim BLogic Mikroelektronik
// tb_timer_top.sv  -  Timer UVM testbench ust modulu
// (tb_top.sv ile ayni iskelet; DUT = timer_axil)
// ============================================
`timescale 1ns/1ns

module tb_timer_top;

    import uvm_pkg::*;
    import axi_lite_uvm_pkg::*;
    import periph_uvm_pkg::*;
    `include "uvm_macros.svh"

    // saat ve reset
    logic clk;
    logic rst_n;

    initial begin
        clk = 0;
        forever #5 clk = ~clk;  // 100 MHz
    end

    initial begin
        rst_n = 0;
        #50;
        rst_n = 1;
    end

    axi_lite_if axi_if (.clk(clk), .rst_n(rst_n));

    // DUT: Timer (AXI-Lite slave)
    logic timer_irq;

    timer_axil i_dut (
        .clk_i         (clk),
        .rst_ni        (rst_n),

        .s_axi_awaddr  (axi_if.awaddr),
        .s_axi_awvalid (axi_if.awvalid),
        .s_axi_awready (axi_if.awready),
        .s_axi_wdata   (axi_if.wdata),
        .s_axi_wstrb   (axi_if.wstrb),
        .s_axi_wvalid  (axi_if.wvalid),
        .s_axi_wready  (axi_if.wready),
        .s_axi_bresp   (axi_if.bresp),
        .s_axi_bvalid  (axi_if.bvalid),
        .s_axi_bready  (axi_if.bready),

        .s_axi_araddr  (axi_if.araddr),
        .s_axi_arvalid (axi_if.arvalid),
        .s_axi_arready (axi_if.arready),
        .s_axi_rdata   (axi_if.rdata),
        .s_axi_rresp   (axi_if.rresp),
        .s_axi_rvalid  (axi_if.rvalid),
        .s_axi_rready  (axi_if.rready),

        .timer_irq_o   (timer_irq)
    );

    // UVM baglanti
    initial begin
        uvm_config_db #(virtual axi_lite_if)::set(
            null, "uvm_test_top.env.agent.*", "vif", axi_if);

        run_test();
    end

    // simulasyon zaman asimi korumasi
    initial begin
        #5_000_000;
        `uvm_fatal("TIMEOUT", "Simulasyon zaman asimina ugradi")
    end

endmodule
