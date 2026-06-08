`timescale 1ns/1ps

module teknotest_tb();

  logic clk    = 1'b0;
  logic resetn = 1'b0;
  logic uart_tx;
  logic uart_rx = 1'b1; // UART line idle high

  // ------------------------------------------------------------
  // UART configuration
  // You can override these with compile defines if you want:
  // +define+UART_BAUD=115200 +define+UART_STOP_BITS=1
  // ------------------------------------------------------------
`ifndef UART_BAUD
  `define UART_BAUD 115200
`endif

`ifndef UART_STOP_BITS
  `define UART_STOP_BITS 1
`endif

  localparam int UART_BAUD_RATE  = `UART_BAUD;
  localparam real UART_STOP_BITS_N = `UART_STOP_BITS;

  // 1 second = 1_000_000_000 ns
  localparam int BIT_TIME_NS     = 1_000_000_000 / UART_BAUD_RATE;
  localparam time TEST_TIMEOUT   = 10ms;

  string expected_string = "Hello World!";
  string received_string = "";

  // ------------------------------------------------------------
  // DUT
  // ------------------------------------------------------------
  teknotest_wrapper dut (
    .clk_i      (clk),
    .resetn_i   (resetn),
    .uart_rx_i  (uart_rx),
    .uart_tx_o  (uart_tx)
  );

  // ------------------------------------------------------------
  // Clock / reset
  // ------------------------------------------------------------
  always #10 clk = ~clk; // 50 MHz clock

  initial begin
    #10000;
    resetn = 1'b1; // Deassert reset after 10 us
  end

  // ------------------------------------------------------------
  // UART write task
  // TB -> DUT
  // 1 start bit, 8 data bits, no parity, parametrized stop bits
  // ------------------------------------------------------------
  task automatic uart_write(input byte unsigned data);
    int i;
    begin
      // Start bit
      uart_rx = 1'b0;
      #(BIT_TIME_NS);

      // Data bits, LSB first
      for (i = 0; i < 8; i++) begin
        uart_rx = data[i];
        #(BIT_TIME_NS);
      end

      // Stop bits
      uart_rx = 1'b1;
      #(UART_STOP_BITS_N * BIT_TIME_NS);
    end
  endtask

  // ------------------------------------------------------------
  // UART read task
  // DUT -> TB
  // Waits for a byte on uart_tx and samples it
  // ------------------------------------------------------------
  task automatic uart_read(output byte unsigned data);
    int i;
    begin
      data = 8'h00;

      // Wait for start bit
      @(negedge uart_tx);

      // Move to center of bit[0]
      #(BIT_TIME_NS + (BIT_TIME_NS/2));

      // Sample 8 data bits, LSB first
      for (i = 0; i < 8; i++) begin
        data[i] = uart_tx;
        #(BIT_TIME_NS);
      end

      // Consume stop bits
      #(UART_STOP_BITS_N * BIT_TIME_NS - (BIT_TIME_NS/2)); // We have already waited half bit time at the for loop above
      
      $display("[%0t] INFO: Read byte 0x%02h ('%s')",
                $time, data, data);
    end
  endtask

  // ------------------------------------------------------------
  // Helper: read one byte and compare
  // ------------------------------------------------------------
  task automatic uart_wait_byte(input byte unsigned expected);
    byte unsigned data;
    begin
      uart_read(data);
      if (data !== expected) begin
        $display("[%0t] ERROR: Expected byte 0x%02h ('%s'), got 0x%02h ('%s')",
                 $time, expected, expected, data, data);
        $finish;
      end
      else begin
        $display("[%0t] INFO: Received expected byte 0x%02h ('%s')",
                 $time, data, data);
      end
    end
  endtask

  // ------------------------------------------------------------
  // Main test
  // Sequence:
  // 1) Wait DUT sends 'R'
  // 2) Send 'A'
  // 3) Expect "Hello World!"
  // ------------------------------------------------------------
  initial begin : test_main
    byte unsigned ch;
    int idx;

    wait (resetn == 1'b1);
    uart_rx = 1'b1;

    fork
      begin : test_flow
        // Step 1: wait 'R'
        uart_wait_byte("R");

        fork
          begin: send_A
            // Step 2: send 'A'
            $display("[%0t] INFO: Sending byte 0x%02h ('A') to DUT", $time, "A");
            uart_write("A");
          end

          begin: receive_msg
            // Step 3: read "Hello World!"
            received_string = "";
            for (idx = 0; idx < expected_string.len(); idx++) begin
              uart_read(ch);
              received_string = {received_string, ch};
            end

            if (received_string == expected_string) begin
              $display("[%0t] TEST SUCCESS: Received expected string \"%s\"", $time, received_string);
              $finish;
            end
            else begin
              $display("[%0t] TEST FAIL: Expected \"%s\", got \"%s\"",
                      $time, expected_string, received_string);
              $finish;
            end
          end
        join
      end

      begin : timeout_watchdog
        #TEST_TIMEOUT;
        $display("[%0t] TEST FAIL: Timeout after %0t", $time, TEST_TIMEOUT);
        $finish;
      end
    join_any

    disable fork;
  end

  // Your user code will be pasted here
  `include "teknotest_tb_user_code.sv"

endmodule