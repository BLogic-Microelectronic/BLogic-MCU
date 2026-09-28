// SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
// SPDX-License-Identifier: GPL-3.0-only
// Licensed under the GNU General Public License version 3 only.
// See the LICENSE file in the repository root for the full license text.

// ============================================
// Ostim BLogic Mikroelektronik
// teknotest_tb.sv  -  UART hello-world testbench
// ============================================
`timescale 1ns/1ps

module teknotest_tb();

  logic clk    = 1'b0;
  logic resetn = 1'b0;
  logic uart_tx;
  logic uart_rx = 1'b1; // UART hatti boşta high

  // UART ayarlari; compile define ile ezilebilir (+define+UART_BAUD=...)
`ifndef UART_BAUD
  `define UART_BAUD 115200
`endif

`ifndef UART_STOP_BITS
  `define UART_STOP_BITS 1
`endif

  localparam int UART_BAUD_RATE  = `UART_BAUD;
  localparam real UART_STOP_BITS_N = `UART_STOP_BITS;

  // 1 saniye = 1_000_000_000 ns
  localparam int BIT_TIME_NS     = 1_000_000_000 / UART_BAUD_RATE;
  localparam time TEST_TIMEOUT   = 10ms;

  string expected_string = "Hello World!";
  string received_string = "";

  // DUT
  teknotest_wrapper dut (
    .clk_i      (clk),
    .resetn_i   (resetn),
    .uart_rx_i  (uart_rx),
    .uart_tx_o  (uart_tx)
  );

  // Saat / reset
  always #10 clk = ~clk; // 50 MHz

  initial begin
    #10000;
    resetn = 1'b1; // 10 us sonra reset birak
  end

  // UART yaz (TB -> DUT): 1 start, 8 data, parity yok, parametrik stop
  task automatic uart_write(input byte unsigned data);
    int i;
    begin
      // start bit
      uart_rx = 1'b0;
      #(BIT_TIME_NS);

      // data bitleri, LSB first
      for (i = 0; i < 8; i++) begin
        uart_rx = data[i];
        #(BIT_TIME_NS);
      end

      // stop bit
      uart_rx = 1'b1;
      #(UART_STOP_BITS_N * BIT_TIME_NS);
    end
  endtask

  // UART oku (DUT -> TB): uart_tx'te byte bekle ve ornekle
  task automatic uart_read(output byte unsigned data);
    int i;
    begin
      data = 8'h00;

      // start biti bekle
      @(negedge uart_tx);

      // bit[0] ortasina git
      #(BIT_TIME_NS + (BIT_TIME_NS/2));

      // 8 data bitini ornekle, LSB first
      for (i = 0; i < 8; i++) begin
        data[i] = uart_tx;
        #(BIT_TIME_NS);
      end

      // stop bitlerini tuket; for icinde yarim bit zaten beklendi
      #(UART_STOP_BITS_N * BIT_TIME_NS - (BIT_TIME_NS/2));
      
      $display("[%0t] INFO: Read byte 0x%02h ('%s')",
                $time, data, data);
    end
  endtask

  // Bir byte oku ve karsilastir
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

  // Ana test: DUT 'R' yollar, biz 'A' gondeririz, "Hello World!" bekleriz
  initial begin : test_main
    byte unsigned ch;
    int idx;

    wait (resetn == 1'b1);
    uart_rx = 1'b1;

    fork
      begin : test_flow
        // 'R' bekle
        uart_wait_byte("R");

        fork
          begin: send_A
            // 'A' gonder
            $display("[%0t] INFO: Sending byte 0x%02h ('A') to DUT", $time, "A");
            uart_write("A");
          end

          begin: receive_msg
            // "Hello World!" oku
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

  // Kullanici kodu buraya gelir
  `include "teknotest_tb_user_code.sv"

endmodule