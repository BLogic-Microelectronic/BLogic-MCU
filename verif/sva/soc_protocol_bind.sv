// SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
// SPDX-License-Identifier: GPL-3.0-only
// Licensed under the GNU General Public License version 3 only.
// See the LICENSE file in the repository root for the full license text.

// ============================================
// Ostim BLogic Mikroelektronik
// soc_protocol_bind.sv  -  protocol checker baglama
// ============================================

module soc_protocol_bind (
    input logic        clk,
    input logic        rst_n,

    // Periph bus (AXI-Lite köprü çıkışı)
    input logic [31:0] lite_awaddr,
    input logic        lite_awvalid,
    input logic        lite_awready,
    input logic [31:0] lite_wdata,
    input logic [ 3:0] lite_wstrb,
    input logic        lite_wvalid,
    input logic        lite_wready,
    input logic [ 1:0] lite_bresp,
    input logic        lite_bvalid,
    input logic        lite_bready,
    input logic [31:0] lite_araddr,
    input logic        lite_arvalid,
    input logic        lite_arready,
    input logic [31:0] lite_rdata,
    input logic [ 1:0] lite_rresp,
    input logic        lite_rvalid,
    input logic        lite_rready,

    // UART AXI-Lite
    input logic [31:0] uart_awaddr,  input logic uart_awvalid, input logic uart_awready,
    input logic [31:0] uart_wdata,   input logic [3:0] uart_wstrb,
    input logic        uart_wvalid,  input logic uart_wready,
    input logic [ 1:0] uart_bresp,   input logic uart_bvalid,  input logic uart_bready,
    input logic [31:0] uart_araddr,  input logic uart_arvalid, input logic uart_arready,
    input logic [31:0] uart_rdata,   input logic [1:0] uart_rresp,
    input logic        uart_rvalid,  input logic uart_rready,

    // GPIO AXI-Lite
    input logic [31:0] gpio_awaddr,  input logic gpio_awvalid, input logic gpio_awready,
    input logic [31:0] gpio_wdata,   input logic [3:0] gpio_wstrb,
    input logic        gpio_wvalid,  input logic gpio_wready,
    input logic [ 1:0] gpio_bresp,   input logic gpio_bvalid,  input logic gpio_bready,
    input logic [31:0] gpio_araddr,  input logic gpio_arvalid, input logic gpio_arready,
    input logic [31:0] gpio_rdata,   input logic [1:0] gpio_rresp,
    input logic        gpio_rvalid,  input logic gpio_rready,

    // Timer AXI-Lite
    input logic [31:0] timer_awaddr,  input logic timer_awvalid, input logic timer_awready,
    input logic [31:0] timer_wdata,   input logic [3:0] timer_wstrb,
    input logic        timer_wvalid,  input logic timer_wready,
    input logic [ 1:0] timer_bresp,   input logic timer_bvalid,  input logic timer_bready,
    input logic [31:0] timer_araddr,  input logic timer_arvalid, input logic timer_arready,
    input logic [31:0] timer_rdata,   input logic [1:0] timer_rresp,
    input logic        timer_rvalid,  input logic timer_rready,

    // QSPI AXI-Lite
    input logic [31:0] qspi_awaddr,  input logic qspi_awvalid, input logic qspi_awready,
    input logic [31:0] qspi_wdata,   input logic [3:0] qspi_wstrb,
    input logic        qspi_wvalid,  input logic qspi_wready,
    input logic [ 1:0] qspi_bresp,   input logic qspi_bvalid,  input logic qspi_bready,
    input logic [31:0] qspi_araddr,  input logic qspi_arvalid, input logic qspi_arready,
    input logic [31:0] qspi_rdata,   input logic [1:0] qspi_rresp,
    input logic        qspi_rvalid,  input logic qspi_rready,

    // I2C AXI-Lite
    input logic [31:0] i2c_awaddr,  input logic i2c_awvalid, input logic i2c_awready,
    input logic [31:0] i2c_wdata,   input logic [3:0] i2c_wstrb,
    input logic        i2c_wvalid,  input logic i2c_wready,
    input logic [ 1:0] i2c_bresp,   input logic i2c_bvalid,  input logic i2c_bready,
    input logic [31:0] i2c_araddr,  input logic i2c_arvalid, input logic i2c_arready,
    input logic [31:0] i2c_rdata,   input logic [1:0] i2c_rresp,
    input logic        i2c_rvalid,  input logic i2c_rready,

    // UART_1 / YZ stream AXI-Lite
    input logic [31:0] uart1_awaddr,  input logic uart1_awvalid, input logic uart1_awready,
    input logic [31:0] uart1_wdata,   input logic [3:0] uart1_wstrb,
    input logic        uart1_wvalid,  input logic uart1_wready,
    input logic [ 1:0] uart1_bresp,   input logic uart1_bvalid,  input logic uart1_bready,
    input logic [31:0] uart1_araddr,  input logic uart1_arvalid, input logic uart1_arready,
    input logic [31:0] uart1_rdata,   input logic [1:0] uart1_rresp,
    input logic        uart1_rvalid,  input logic uart1_rready,

    // AI hızlandırıcı CSR AXI-Lite
    input logic [31:0] ai_awaddr,  input logic ai_awvalid, input logic ai_awready,
    input logic [31:0] ai_wdata,   input logic [3:0] ai_wstrb,
    input logic        ai_wvalid,  input logic ai_wready,
    input logic [ 1:0] ai_bresp,   input logic ai_bvalid,  input logic ai_bready,
    input logic [31:0] ai_araddr,  input logic ai_arvalid, input logic ai_arready,
    input logic [31:0] ai_rdata,   input logic [1:0] ai_rresp,
    input logic        ai_rvalid,  input logic ai_rready,

    // AI hızlandırıcı AXI4 master (AI SRAM)
    input logic [ 3:0] aim_awid,
    input logic [31:0] aim_awaddr,
    input logic [ 7:0] aim_awlen,
    input logic [ 2:0] aim_awsize,
    input logic [ 1:0] aim_awburst,
    input logic        aim_awvalid,  input logic aim_awready,
    input logic [31:0] aim_wdata,
    input logic [ 3:0] aim_wstrb,
    input logic        aim_wlast,
    input logic        aim_wvalid,   input logic aim_wready,
    input logic [ 3:0] aim_bid,
    input logic [ 1:0] aim_bresp,
    input logic        aim_bvalid,   input logic aim_bready,
    input logic [ 3:0] aim_arid,
    input logic [31:0] aim_araddr,
    input logic [ 7:0] aim_arlen,
    input logic [ 2:0] aim_arsize,
    input logic [ 1:0] aim_arburst,
    input logic        aim_arvalid,  input logic aim_arready,
    input logic [ 3:0] aim_rid,
    input logic [31:0] aim_rdata,
    input logic [ 1:0] aim_rresp,
    input logic        aim_rlast,
    input logic        aim_rvalid,   input logic aim_rready,

    // UART_1 stream DMA AXI4 master (yalnız yazma; okuma tieoff)
    input logic [ 3:0] stm_awid,
    input logic [31:0] stm_awaddr,
    input logic [ 7:0] stm_awlen,
    input logic [ 2:0] stm_awsize,
    input logic [ 1:0] stm_awburst,
    input logic        stm_awvalid,  input logic stm_awready,
    input logic [31:0] stm_wdata,
    input logic [ 3:0] stm_wstrb,
    input logic        stm_wlast,
    input logic        stm_wvalid,   input logic stm_wready,
    input logic [ 3:0] stm_bid,
    input logic [ 1:0] stm_bresp,
    input logic        stm_bvalid,   input logic stm_bready
);

    // Periph bus (tüm periph trafiği)
    axi_lite_protocol_checker #(.INTF_NAME("PERIPH_BUS")) i_chk_periph (
        .clk(clk), .rst_n(rst_n),
        .awvalid(lite_awvalid), .awready(lite_awready), .awaddr(lite_awaddr),
        .wvalid(lite_wvalid),   .wready(lite_wready),   .wdata(lite_wdata),   .wstrb(lite_wstrb),
        .bvalid(lite_bvalid),   .bready(lite_bready),   .bresp(lite_bresp),
        .arvalid(lite_arvalid), .arready(lite_arready), .araddr(lite_araddr),
        .rvalid(lite_rvalid),   .rready(lite_rready),   .rdata(lite_rdata),   .rresp(lite_rresp)
    );

    // UART_0 (0x4000_0000)
    axi_lite_protocol_checker #(.INTF_NAME("UART_0")) i_chk_uart (
        .clk(clk), .rst_n(rst_n),
        .awvalid(uart_awvalid), .awready(uart_awready), .awaddr(uart_awaddr),
        .wvalid(uart_wvalid),   .wready(uart_wready),   .wdata(uart_wdata),   .wstrb(uart_wstrb),
        .bvalid(uart_bvalid),   .bready(uart_bready),   .bresp(uart_bresp),
        .arvalid(uart_arvalid), .arready(uart_arready), .araddr(uart_araddr),
        .rvalid(uart_rvalid),   .rready(uart_rready),   .rdata(uart_rdata),   .rresp(uart_rresp)
    );

    // GPIO (0x4000_0100)
    axi_lite_protocol_checker #(.INTF_NAME("GPIO")) i_chk_gpio (
        .clk(clk), .rst_n(rst_n),
        .awvalid(gpio_awvalid), .awready(gpio_awready), .awaddr(gpio_awaddr),
        .wvalid(gpio_wvalid),   .wready(gpio_wready),   .wdata(gpio_wdata),   .wstrb(gpio_wstrb),
        .bvalid(gpio_bvalid),   .bready(gpio_bready),   .bresp(gpio_bresp),
        .arvalid(gpio_arvalid), .arready(gpio_arready), .araddr(gpio_araddr),
        .rvalid(gpio_rvalid),   .rready(gpio_rready),   .rdata(gpio_rdata),   .rresp(gpio_rresp)
    );

    // Timer (0x4000_0200)
    axi_lite_protocol_checker #(.INTF_NAME("TIMER")) i_chk_timer (
        .clk(clk), .rst_n(rst_n),
        .awvalid(timer_awvalid), .awready(timer_awready), .awaddr(timer_awaddr),
        .wvalid(timer_wvalid),   .wready(timer_wready),   .wdata(timer_wdata),   .wstrb(timer_wstrb),
        .bvalid(timer_bvalid),   .bready(timer_bready),   .bresp(timer_bresp),
        .arvalid(timer_arvalid), .arready(timer_arready), .araddr(timer_araddr),
        .rvalid(timer_rvalid),   .rready(timer_rready),   .rdata(timer_rdata),   .rresp(timer_rresp)
    );

    // QSPI (0x4000_0500)
    axi_lite_protocol_checker #(.INTF_NAME("QSPI")) i_chk_qspi (
        .clk(clk), .rst_n(rst_n),
        .awvalid(qspi_awvalid), .awready(qspi_awready), .awaddr(qspi_awaddr),
        .wvalid(qspi_wvalid),   .wready(qspi_wready),   .wdata(qspi_wdata),   .wstrb(qspi_wstrb),
        .bvalid(qspi_bvalid),   .bready(qspi_bready),   .bresp(qspi_bresp),
        .arvalid(qspi_arvalid), .arready(qspi_arready), .araddr(qspi_araddr),
        .rvalid(qspi_rvalid),   .rready(qspi_rready),   .rdata(qspi_rdata),   .rresp(qspi_rresp)
    );

    // I2C (0x4000_0400)
    axi_lite_protocol_checker #(.INTF_NAME("I2C")) i_chk_i2c (
        .clk(clk), .rst_n(rst_n),
        .awvalid(i2c_awvalid), .awready(i2c_awready), .awaddr(i2c_awaddr),
        .wvalid(i2c_wvalid),   .wready(i2c_wready),   .wdata(i2c_wdata),   .wstrb(i2c_wstrb),
        .bvalid(i2c_bvalid),   .bready(i2c_bready),   .bresp(i2c_bresp),
        .arvalid(i2c_arvalid), .arready(i2c_arready), .araddr(i2c_araddr),
        .rvalid(i2c_rvalid),   .rready(i2c_rready),   .rdata(i2c_rdata),   .rresp(i2c_rresp)
    );

    // UART_1 / YZ stream (0x4000_0300)
    axi_lite_protocol_checker #(.INTF_NAME("UART_1_STREAM")) i_chk_uart1 (
        .clk(clk), .rst_n(rst_n),
        .awvalid(uart1_awvalid), .awready(uart1_awready), .awaddr(uart1_awaddr),
        .wvalid(uart1_wvalid),   .wready(uart1_wready),   .wdata(uart1_wdata),   .wstrb(uart1_wstrb),
        .bvalid(uart1_bvalid),   .bready(uart1_bready),   .bresp(uart1_bresp),
        .arvalid(uart1_arvalid), .arready(uart1_arready), .araddr(uart1_araddr),
        .rvalid(uart1_rvalid),   .rready(uart1_rready),   .rdata(uart1_rdata),   .rresp(uart1_rresp)
    );

    // AI hızlandırıcı CSR (0x4000_0600)
    axi_lite_protocol_checker #(.INTF_NAME("AI_CSR")) i_chk_ai_csr (
        .clk(clk), .rst_n(rst_n),
        .awvalid(ai_awvalid), .awready(ai_awready), .awaddr(ai_awaddr),
        .wvalid(ai_wvalid),   .wready(ai_wready),   .wdata(ai_wdata),   .wstrb(ai_wstrb),
        .bvalid(ai_bvalid),   .bready(ai_bready),   .bresp(ai_bresp),
        .arvalid(ai_arvalid), .arready(ai_arready), .araddr(ai_araddr),
        .rvalid(ai_rvalid),   .rready(ai_rready),   .rdata(ai_rdata),   .rresp(ai_rresp)
    );

    // AI hızlandırıcı AXI4 master (AI SRAM)
    axi4_protocol_checker #(
        .INTF_NAME("AI_AXI4_MST"), .ID_WIDTH(4), .ADDR_WIDTH(32), .DATA_WIDTH(32)
    ) i_chk_ai_master (
        .clk(clk), .rst_n(rst_n),
        .awid(aim_awid), .awaddr(aim_awaddr), .awlen(aim_awlen),
        .awsize(aim_awsize), .awburst(aim_awburst),
        .awvalid(aim_awvalid), .awready(aim_awready),
        .wdata(aim_wdata), .wstrb(aim_wstrb), .wlast(aim_wlast),
        .wvalid(aim_wvalid), .wready(aim_wready),
        .bid(aim_bid), .bresp(aim_bresp),
        .bvalid(aim_bvalid), .bready(aim_bready),
        .arid(aim_arid), .araddr(aim_araddr), .arlen(aim_arlen),
        .arsize(aim_arsize), .arburst(aim_arburst),
        .arvalid(aim_arvalid), .arready(aim_arready),
        .rid(aim_rid), .rdata(aim_rdata), .rresp(aim_rresp),
        .rlast(aim_rlast), .rvalid(aim_rvalid), .rready(aim_rready)
    );

    // UART_1 stream DMA AXI4 master (yalnız yazma; okuma kanalı sabit 0)
    axi4_protocol_checker #(
        .INTF_NAME("STRM_AXI4_MST"), .ID_WIDTH(4), .ADDR_WIDTH(32), .DATA_WIDTH(32)
    ) i_chk_strm_master (
        .clk(clk), .rst_n(rst_n),
        .awid(stm_awid), .awaddr(stm_awaddr), .awlen(stm_awlen),
        .awsize(stm_awsize), .awburst(stm_awburst),
        .awvalid(stm_awvalid), .awready(stm_awready),
        .wdata(stm_wdata), .wstrb(stm_wstrb), .wlast(stm_wlast),
        .wvalid(stm_wvalid), .wready(stm_wready),
        .bid(stm_bid), .bresp(stm_bresp),
        .bvalid(stm_bvalid), .bready(stm_bready),
        .arid(4'd0), .araddr(32'd0), .arlen(8'd0),
        .arsize(3'd0), .arburst(2'd0),
        .arvalid(1'b0), .arready(1'b0),
        .rid(4'd0), .rdata(32'd0), .rresp(2'd0),
        .rlast(1'b0), .rvalid(1'b0), .rready(1'b0)
    );

endmodule
