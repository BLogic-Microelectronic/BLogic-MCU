// ============================================
// Ostim BLogic Mikroelektronik
// qspi_modes_tb.sv  -  QSPI x1/x2/x4 mod testi
// ============================================
`timescale 1ns / 1ps
// Firmware Instr SRAM'den kosar, flash'i dort modda okuyup UART'a basar.
module qspi_modes_tb;
    logic clk = 0, resetn = 0;
    always #10 clk = ~clk;
    initial begin resetn = 0; #200 resetn = 1; end

    logic uart_tx, uart_rx = 1;
    logic qspi_sclk, qspi_cs_n;
    logic [3:0] qspi_io_o, qspi_io_oe, qspi_io_i;

    soc_top #(.BOOT_ADDR(32'h0001_0000)) dut (
        .clk_i(clk), .rst_ni(resetn),
        .uart_rxd_i(uart_rx), .uart_txd_o(uart_tx),
        .uart1_rxd_i(1'b1), .uart1_txd_o(),
        .qspi_sclk_o(qspi_sclk), .qspi_cs_no(qspi_cs_n),
        .qspi_io_o(qspi_io_o), .qspi_io_oe(qspi_io_oe),
        .qspi_io_i(qspi_io_i),
        .gpio_in_i('0)
    );

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
        for (int i = 0; i < 8; i++) begin d[i] = uart_tx; #BIT_NS; end
    endtask

    string received = "";
    logic [7:0] ch;
    initial begin
        @(posedge resetn);
        $display("[%0t] === QSPI MODES TEST: x1/x2/x4 + 4B adres ===", $time);
        forever begin
            uart_read(ch);
            received = {received, string'(ch)};
            if (ch == "\n") begin
                $write("[FW] %s", received);
                if (received == "QSPI MODES OK\n") begin
                    $display("*** TEST SUCCESS *** x1/x2/x4 + 4B adresleme dogrulandi");
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
        #60_000_000;
        $error("TIMEOUT - 'QSPI MODES OK' gelmedi. Son satir: %s", received);
        $finish;
    end
endmodule
