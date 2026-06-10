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
        .qspi_sclk_o(qspi_sclk), .qspi_cs_no(qspi_cs_n),
        .qspi_io_o(qspi_io_o), .qspi_io_oe(qspi_io_oe),
        .qspi_io_i(qspi_io_i),
        .gpio_in_i('0)
        // NOT: soc_top'un diger port'larini buraya ekle (Berkin'in mevcut wrapper'inden bak)
    );

    // Flash model v2: 4-lane arayuz (x1 boot yolu davranissal olarak birebir)
    wire [3:0] flash_out, flash_oe;
    spi_flash_model #(.INIT_FILE("flash.hex")) flash (
        .sclk(qspi_sclk), .cs_n(qspi_cs_n),
        .io_in (qspi_io_o & qspi_io_oe),
        .io_out(flash_out), .io_oe_out(flash_oe)
    );
    genvar gi;
    generate for (gi = 0; gi < 4; gi++) begin : g_io
        assign qspi_io_i[gi] = qspi_io_oe[gi] ? qspi_io_o[gi]
                              : flash_oe[gi]  ? flash_out[gi] : 1'b1;
    end endgenerate

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

        // FIX: alici, 'A' gonderiminden ONCE arm edilmeli. Firmware 'A'nin
        // stop bitinde (RX_DONE ~9.5 bit) cevabi basiyor; sirali kod 'H'nin
        // start kenarini kaciriyor ve hat ortasinda hizasiz kilitleniyordu.
        fork
            begin
                for (int i = 0; i < 12; i++) begin
                    uart_read(ch);
                    received = {received, string'(ch)};
                end
            end
            uart_write("A");
        join

        if (received == "Hello World!")
            $display("[%0t] *** TEST SUCCESS *** QSPI boot akisi: '%s'", $time, received);
        else
            $error("FAIL: alinan='%s'", received);
        $finish;
    end

    initial #60_000_000 begin $error("TIMEOUT"); $finish; end
endmodule
