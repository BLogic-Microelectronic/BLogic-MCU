// ============================================
// Ostim BLogic Mikroelektronik
// i2c_system_tb.sv  -  I2C sistem yolu testi
// ============================================
`timescale 1ns / 1ps
module i2c_system_tb;
    logic clk = 0, resetn = 0;
    always #10 clk = ~clk;
    initial begin resetn = 0; #200 resetn = 1; end

    logic uart_tx, uart_rx = 1;
    logic qspi_sclk, qspi_cs_n;
    logic [3:0] qspi_io_o, qspi_io_oe;
    logic scl, dut_sda_oe, slv_sda_oe;
    wire  sda = ~(dut_sda_oe | slv_sda_oe);   // pull-up'li open-drain hat

    soc_top #(.BOOT_ADDR(32'h0001_0000)) dut (
        .clk_i(clk), .rst_ni(resetn),
        .uart_rxd_i(uart_rx), .uart_txd_o(uart_tx),
        .uart1_rxd_i(1'b1), .uart1_txd_o(),
        .qspi_sclk_o(qspi_sclk), .qspi_cs_no(qspi_cs_n),
        .qspi_io_o(qspi_io_o), .qspi_io_oe(qspi_io_oe),
        .qspi_io_i(4'hF),
        .i2c_scl_o(scl), .i2c_sda_oe_o(dut_sda_oe), .i2c_sda_i(sda),
        .gpio_in_i('0)
    );

    i2c_slave_model #(.ADDR(7'h42)) slave (
        .clk_i(clk), .scl_i(scl), .sda_i(sda), .sda_oe_o(slv_sda_oe)
    );

    localparam int BIT_NS = 8680;
    task uart_read(output logic [7:0] d);
        @(negedge uart_tx); #(BIT_NS + BIT_NS/2);
        for (int i = 0; i < 8; i++) begin d[i] = uart_tx; #BIT_NS; end
    endtask

    string received = "";
    logic [7:0] ch;
    initial begin
        @(posedge resetn);
        $display("[%0t] === I2C SISTEM TESTI: NBY/ADR + TX/RX echo + latch + NACK ===", $time);
        forever begin
            uart_read(ch);
            received = {received, string'(ch)};
            if (ch == "\n") begin
                $write("[FW] %s", received);
                if (received == "I2C SYS OK\n") begin
                    $display("*** TEST SUCCESS *** I2C sistem yolu dogrulandi");
                    $finish;
                end
                if (received.substr(0, 3) == "FAIL") begin
                    $error("FW FAIL satiri alindi");
                    $finish;
                end
                received = "";
            end
        end
    end

    initial begin
        #20_000_000;
        $error("TIMEOUT - 'I2C SYS OK' gelmedi. Son satir: %s", received);
        $finish;
    end
endmodule
