`timescale 1ns / 1ps
// Min Kriter #2 self-check: QSPI boot akisi dogrulamasi

module boot_flow_test_tb;
    logic clk = 0, resetn = 0;
    always #10 clk = ~clk;
    initial begin resetn = 0; #200 resetn = 1; end

    logic uart_tx, uart_rx = 1;
    logic qspi_sclk, qspi_cs_n;
    logic [3:0] qspi_io_o, qspi_io_oe, qspi_io_i;

    // GERCEK boot: BOOT_ADDR = 0x00000000 (Boot ROM)
    soc_top #(.BOOT_ADDR(32'h0000_0000)) dut (
        .clk_i(clk), .rst_ni(resetn),
        .uart_rxd_i(uart_rx), .uart_txd_o(uart_tx),
        .qspi_sclk_o(qspi_sclk), .qspi_csn_o(qspi_cs_n),
        .qspi_io_o(qspi_io_o), .qspi_io_oe(qspi_io_oe),
        .qspi_io_i(qspi_io_i),
        .gpio_in_i('0)
        // NOT: soc_top'un diger port'larini buraya ekle (Berkin'in mevcut wrapper'inden bak)
    );

    wire flash_mosi = qspi_io_oe[0] ? qspi_io_o[0] : 1'b1;
    wire flash_miso;
    spi_flash_model #(.INIT_FILE("flash.hex")) flash (
        .sclk(qspi_sclk), .cs_n(qspi_cs_n),
        .mosi(flash_mosi), .miso(flash_miso)
    );
    assign qspi_io_i = {2'b00, flash_miso, 1'b0};

    localparam int BIT_NS = 8680;
    task uart_read(output logic [7:0] d);
        @(negedge uart_tx); #(BIT_NS + BIT_NS/2);
        for (int i=0;i<8;i++) begin d[i]=uart_tx; #BIT_NS; end
    endtask
    task uart_write(input logic [7:0] d);
        uart_rx=0; #BIT_NS;
        for (int i=0;i<8;i++) begin uart_rx=d[i]; #BIT_NS; end
        uart_rx=1; #BIT_NS;
    endtask

    string received = "";
    logic [7:0] ch;
    initial begin
        wait(resetn===1); @(posedge clk);
        $display("[%0t] === BOOT FLOW TEST: CPU @ 0x00000000 (Boot ROM) ===", $time);

        uart_read(ch);
        if (ch !== "R") begin $error("'R' bekleniyordu, 0x%02h alindi", ch); $finish; end
        $display("[%0t] 'R' alindi -> bootloader+firmware calisti", $time);

        uart_write("A");

        for (int i = 0; i < 12; i++) begin
            uart_read(ch);
            received = {received, string'(ch)};
        end

        if (received == "Hello World!")
            $display("[%0t] *** TEST SUCCESS *** QSPI boot akisi: '%s'", $time, received);
        else
            $error("FAIL: alinan='%s'", received);
        $finish;
    end

    initial #100_000_000 begin $error("TIMEOUT"); $finish; end
endmodule
