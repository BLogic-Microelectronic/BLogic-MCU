/*

Copyright (c) 2014-2017 Alex Forencich

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

*/

// ============================================
// uart.v  -  AXI4-Stream UART ust modulu
//
// Kaynak: Alex Forencich, verilog-uart projesi (MIT lisansi).
// Orijinali: rtl/peripherals/verilog-uart/rtl/uart.v
// Bu dosya Ostim BLogic Mikroelektronik tarafindan SoC'ye entegrasyon
// icin uyarlanmistir; ustteki MIT lisansi ve telif bildirimi gecerlidir.
// ============================================

`timescale 1ns / 1ps

module uart #
(
    parameter DATA_WIDTH = 8
)
(
    input  wire                   clk,
    input  wire                   rst,

    // AXI giris
    input  wire [DATA_WIDTH-1:0]  s_axis_tdata,
    input  wire                   s_axis_tvalid,
    output wire                   s_axis_tready,

    // AXI cikis
    output wire [DATA_WIDTH-1:0]  m_axis_tdata,
    output wire                   m_axis_tvalid,
    input  wire                   m_axis_tready,

    // UART hatti
    input  wire                   rxd,
    output wire                   txd,

    // Durum
    output wire                   tx_busy,
    output wire                   rx_busy,
    output wire                   rx_overrun_error,
    output wire                   rx_frame_error,

    // Ayar
    input  wire [15:0]            prescale

);

uart_tx #(
    .DATA_WIDTH(DATA_WIDTH)
)
uart_tx_inst (
    .clk(clk),
    .rst(rst),
    // AXI giris
    .s_axis_tdata(s_axis_tdata),
    .s_axis_tvalid(s_axis_tvalid),
    .s_axis_tready(s_axis_tready),
    // cikis
    .txd(txd),
    // durum
    .busy(tx_busy),
    // ayar
    .prescale(prescale)
);

uart_rx #(
    .DATA_WIDTH(DATA_WIDTH)
)
uart_rx_inst (
    .clk(clk),
    .rst(rst),
    // AXI cikis
    .m_axis_tdata(m_axis_tdata),
    .m_axis_tvalid(m_axis_tvalid),
    .m_axis_tready(m_axis_tready),
    // giris
    .rxd(rxd),
    // durum
    .busy(rx_busy),
    .overrun_error(rx_overrun_error),
    .frame_error(rx_frame_error),
    // ayar
    .prescale(prescale)
);

endmodule
