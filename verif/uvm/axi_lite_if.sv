// SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
// SPDX-License-Identifier: GPL-3.0-only
// Licensed under the GNU General Public License version 3 only.
// See the LICENSE file in the repository root for the full license text.

// ============================================
// Ostim BLogic Mikroelektronik
// axi_lite_if.sv  -  UVM testbench AXI-Lite arayuzu
// ============================================
`timescale 1ns/1ns

interface axi_lite_if (input logic clk, input logic rst_n);

    // Write Address
    logic [31:0] awaddr;
    logic        awvalid;
    logic        awready;

    // Write Data
    logic [31:0] wdata;
    logic [ 3:0] wstrb;
    logic        wvalid;
    logic        wready;

    // Write Response
    logic [ 1:0] bresp;
    logic        bvalid;
    logic        bready;

    // Read Address
    logic [31:0] araddr;
    logic        arvalid;
    logic        arready;

    // Read Data
    logic [31:0] rdata;
    logic [ 1:0] rresp;
    logic        rvalid;
    logic        rready;

    // Master (driver) tarafı
    clocking mst_cb @(posedge clk);
        output awaddr, awvalid, wdata, wstrb, wvalid, bready;
        output araddr, arvalid, rready;
        input  awready, wready, bresp, bvalid;
        input  arready, rdata, rresp, rvalid;
    endclocking

    // Monitor tarafı
    clocking mon_cb @(posedge clk);
        input awaddr, awvalid, awready;
        input wdata, wstrb, wvalid, wready;
        input bresp, bvalid, bready;
        input araddr, arvalid, arready;
        input rdata, rresp, rvalid, rready;
    endclocking

endinterface
