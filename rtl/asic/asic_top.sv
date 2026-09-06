// ============================================
// Ostim BLogic Mikroelektronik
// asic_top.sv  -  ASIC ust seviye sarmalayici
// ============================================
// fpga_top'in ASIC karsiligi: MMCM/BUFG/IOBUF yok.
// - clk_i / rst_ni dogrudan pad'lerden gelir (saat uretimi pad-ring/harici)
// - QSPI SCLK duz cikis (registered, ic saat degil)
// - I2C open-drain surusu pad hucresinde yapilir (i2c_sda_oe_o -> OD pad)
// - SRAM'ler axi_sram_wrapper icindeki davranissal dizilerdir; PnR'da
//   makro degisimi o sinirdan yapilir, bu katman degismez.
`timescale 1ns / 1ps

module asic_top (
    input  logic        clk_i,
    input  logic        rst_ni,

    input  logic        uart_rxd_i,
    output logic        uart_txd_o,
    input  logic        uart1_rxd_i,
    output logic        uart1_txd_o,

    input  logic [31:0] gpio_in_i,
    output logic [31:0] gpio_out_o,

    output logic        qspi_sclk_o,
    output logic        qspi_cs_no,
    output logic [ 3:0] qspi_io_o,
    input  logic [ 3:0] qspi_io_i,
    output logic [ 3:0] qspi_io_oe,

    output logic        i2c_scl_o,
    output logic        i2c_sda_oe_o,
    input  logic        i2c_sda_i
`ifdef JTAG_DEBUG
    ,
    // JTAG TAP pinleri (16 -> 21 port) - JTAG_DEBUG teslim yapilandirmasinda
    // ACIK (asic/config.yaml, filelist.f; design.sdc: jtag_tck 100 ns, clk ile
    // asenkron grup, jtag_trst_ni false path). ifdef yalniz izolasyon kaniti:
    // tanim yokken port listesi ve mantik 73d8dcd ile birebir (soc_top gibi).
    input  logic        jtag_tck_i,
    input  logic        jtag_tms_i,
    input  logic        jtag_tdi_i,
    input  logic        jtag_trst_ni,
    output logic        jtag_tdo_o
`endif
);

    soc_top #(
        .BOOT_ADDR        (32'h0000_0000),
        .INSTR_SRAM_BYTES (8192),           // sartname sabiti
        .DATA_SRAM_BYTES  (8192),           // sartname sabiti
        .CLK_FREQ_HZ      (50_000_000)
    ) i_soc (
        .clk_i        (clk_i),
        .rst_ni       (rst_ni),
        .uart_rxd_i   (uart_rxd_i),
        .uart_txd_o   (uart_txd_o),
        .uart1_rxd_i  (uart1_rxd_i),
        .uart1_txd_o  (uart1_txd_o),
        .gpio_in_i    (gpio_in_i),
        .gpio_out_o   (gpio_out_o),
        .qspi_sclk_o  (qspi_sclk_o),
        .qspi_cs_no   (qspi_cs_no),
        .qspi_io_o    (qspi_io_o),
        .qspi_io_i    (qspi_io_i),
        .qspi_io_oe   (qspi_io_oe),
        .i2c_scl_o    (i2c_scl_o),
        .i2c_sda_oe_o (i2c_sda_oe_o),
        .i2c_sda_i    (i2c_sda_i)
`ifdef JTAG_DEBUG
        ,
        .jtag_tck_i   (jtag_tck_i),
        .jtag_tms_i   (jtag_tms_i),
        .jtag_tdi_i   (jtag_tdi_i),
        .jtag_trst_ni (jtag_trst_ni),
        .jtag_tdo_o   (jtag_tdo_o)
`endif
    );

endmodule
