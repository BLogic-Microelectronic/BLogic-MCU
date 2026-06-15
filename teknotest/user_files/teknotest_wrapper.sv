// ============================================
// Ostim BLogic Mikroelektronik
// teknotest_wrapper.sv  -  SoC UART test sarmali
// ============================================
module teknotest_wrapper(
    input  clk_i,
    input  resetn_i,
    input  uart_rx_i,
    output uart_tx_o
);
    // bu testte kullanilmayan pinler
    logic [31:0] gpio_out_unused;
    logic        qspi_sclk_unused, qspi_cs_n_unused;
    logic [3:0]  qspi_io_o_unused, qspi_io_oe_unused;
    logic        uart1_tx_unused;
    logic        i2c_scl_unused, i2c_sda_oe_unused;

    soc_top #(.BOOT_ADDR(32'h0001_0000)) u_soc (
        .clk_i       (clk_i),
        .rst_ni      (resetn_i),
        .uart_rxd_i  (uart_rx_i),
        .uart_txd_o  (uart_tx_o),
        .uart1_rxd_i (1'b1),            // YZ UART bosta
        .uart1_txd_o (uart1_tx_unused),
        .gpio_in_i   (32'd0),
        .gpio_out_o  (gpio_out_unused),
        .qspi_sclk_o (qspi_sclk_unused),
        .qspi_cs_no  (qspi_cs_n_unused),
        .qspi_io_o   (qspi_io_o_unused),
        .qspi_io_i   (4'd0),
        .qspi_io_oe  (qspi_io_oe_unused),
        .i2c_scl_o   (i2c_scl_unused),
        .i2c_sda_oe_o(i2c_sda_oe_unused),
        .i2c_sda_i   (1'b1)             // I2C SDA bosta (pull-up)
    );
endmodule
