// ============================================
// Ostim BLogic Mikroelektronik
// questa_soc_tb.sv - Questa / ModelSim wrapper for the firmware-driven SoC tests
// ============================================
// The Verilator flow drives soc_top from verif/tb/sim_main.cpp (clock, reset,
// UART loopback, a QSPI flash stub and a UART bit decoder that compares the
// firmware output with a golden string). Questa cannot run that C++ harness,
// so this module reproduces the same environment in SystemVerilog for the
// waveform flow in verif/questa/. Behaviour mirrors sim_main.cpp:
//   - 50 MHz clock (20 ns period), reset released after 10 cycles
//   - UART0 TX -> RX loopback, UART1 TX -> RX loopback, GPIO inputs 0, SDA 1
//   - QSPI flash stub: after 32 SCLK rising edges with CS low the stub drives
//     0xAA on IO1, MSB first (what sw/tests/qspi_test.c expects)
//   - UART0 TX bit decoder at +CPB=<clocks per bit>; every byte is written to
//     the transcript; PASS when the golden string appears
//       +GOLDEN=<string without spaces>   or   +GOLDEN_FILE=<file>
//       default "Hello World from BLogic MCU!\n"
//     FAIL when +MAX_CYCLES= (default 10 000 000) elapses first
//   - +SWEEP_N=<n> +SWEEP0=.. +SWEEP1=.. : baud-sweep mode (uart_baud_sweep):
//     golden "BAUD-OK\n" must appear once per phase and the decoder switches
//     to the next CPB after every match, exactly as sim_main.cpp does
// Not reproduced (Verilator-only): Spike lockstep trace, +UART_RX_FILE host
// injection, riscv-arch-test signature dump, line coverage.
`timescale 1ns / 1ps

module questa_soc_tb;

    // ---------------- DUT ----------------
    logic        clk   = 1'b0;
    logic        rst_n = 1'b0;
    always #10 clk = ~clk;

    logic        uart_rxd, uart_txd, uart1_rxd, uart1_txd;
    logic [31:0] gpio_out;
    logic        qspi_sclk, qspi_cs_n;
    logic [3:0]  qspi_io_o, qspi_io_oe;
    logic [3:0]  qspi_io_i = 4'h0;
    logic        i2c_scl, i2c_sda_oe;

    soc_top dut (
        .clk_i        (clk),
        .rst_ni       (rst_n),
        .uart_rxd_i   (uart_rxd),
        .uart_txd_o   (uart_txd),
        .uart1_rxd_i  (uart1_rxd),
        .uart1_txd_o  (uart1_txd),
        .gpio_in_i    (32'h0),
        .gpio_out_o   (gpio_out),
        .qspi_sclk_o  (qspi_sclk),
        .qspi_cs_no   (qspi_cs_n),
        .qspi_io_o    (qspi_io_o),
        .qspi_io_i    (qspi_io_i),
        .qspi_io_oe   (qspi_io_oe),
        .i2c_scl_o    (i2c_scl),
        .i2c_sda_oe_o (i2c_sda_oe),
        .i2c_sda_i    (1'b1)
`ifdef JTAG_DEBUG
        // TAP idle. trst_ni is held LOW so that the TCK-domain registers of the
        // DTM have a defined value in a 4-state simulator (TCK never toggles
        // here); Verilator starts them at 0 anyway.
        , .jtag_tck_i  (1'b0),
        .jtag_tms_i    (1'b1),
        .jtag_tdi_i    (1'b0),
        .jtag_trst_ni  (1'b0),
        .jtag_tdo_o    ()
`endif
    );

    assign uart_rxd  = uart_txd;    // loopback, as in sim_main.cpp
    assign uart1_rxd = uart1_txd;

    // ---------------- reset ----------------
    initial begin
        rst_n = 1'b0;
        repeat (10) @(posedge clk);
        @(negedge clk) rst_n = 1'b1;
    end

    // ---------------- plusargs ----------------
    int      CPB         = 434;
    longint  max_cycles  = 10_000_000;
    string   golden      = "Hello World from BLogic MCU!\n";
    string   golden_file = "";
    int      sweep_n     = 0;
    int      sweep_cpb [0:7];
    int      sweep_done  = 0;
    int      search_from = 0;

    initial begin
        int    fd;
        string line, key;
        int    tmp;
        void'($value$plusargs("CPB=%d", CPB));
        void'($value$plusargs("MAX_CYCLES=%d", max_cycles));
        void'($value$plusargs("GOLDEN=%s", golden));
        if ($value$plusargs("GOLDEN_FILE=%s", golden_file)) begin
            fd = $fopen(golden_file, "r");
            if (fd == 0) begin
                $display("[SIM] ERROR: cannot open golden file '%s' (cwd must be the test's fw directory)", golden_file);
                $finish;
            end
            void'($fgets(line, fd));
            $fclose(fd);
            if (line.len() > 0 && line.getc(line.len() - 1) == 8'h0A)
                line = line.substr(0, line.len() - 2);
            golden = line;
            $display("[SIM] golden (from file): \"%s\"", golden);
        end
        if ($value$plusargs("SWEEP_N=%d", sweep_n)) begin
            for (int i = 0; i < sweep_n; i++) begin
                key = $sformatf("SWEEP%0d=%%d", i);
                if (!$value$plusargs(key, tmp)) begin
                    $display("[SIM] ERROR: +%s missing", key);
                    $finish;
                end
                sweep_cpb[i] = tmp;
            end
            golden = "BAUD-OK\n";
            CPB    = sweep_cpb[0];
            $display("[SIM] SWEEP mode: %0d phases, receiver CPB list starts at %0d", sweep_n, CPB);
        end
        $display("[SIM] start  cpb=%0d  max_cycles=%0d  golden=\"%s\"", CPB, max_cycles, golden);
    end

    // ---------------- QSPI flash stub (sim_main.cpp) ----------------
    // Evaluated on the falling edge so that the DUT samples a stable value on
    // the next rising edge: same cycle alignment as the C++ loop, which set
    // qspi_io_i before evaluating the rising edge.
    int   flash_bits = 0;
    logic last_sclk  = 1'b0;
    int   bit_idx;
    logic miso;
    always @(negedge clk) begin
        if (qspi_cs_n == 1'b0) begin
            if (!last_sclk && qspi_sclk) flash_bits++;
            last_sclk = qspi_sclk;
            if (flash_bits >= 32) begin
                bit_idx   = 7 - ((flash_bits - 32) % 8);
                miso      = (8'hAA >> bit_idx) & 8'h01;
                qspi_io_i = {2'b00, miso, 1'b0};
            end else begin
                qspi_io_i = 4'h0;
            end
        end else begin
            last_sclk  = 1'b0;
            flash_bits = 0;
            qspi_io_i  = 4'h0;
        end
    end

    // ---------------- UART0 TX decoder (UartBitDecoder) ----------------
    typedef enum int {U_IDLE, U_START, U_DATA, U_STOP} ustate_t;
    ustate_t     ust    = U_IDLE;
    int          uclks  = 0;
    int          ubit   = 0;
    logic [7:0]  usr    = 8'h0;
    string       rx_str = "";
    longint      cyc    = 0;

    // does 'needle' end exactly at the end of 'hay', starting at or after 'from'?
    function automatic int ends_with_from(input string hay, input string needle, input int from);
        int h = hay.len();
        int n = needle.len();
        if (n == 0 || h < n) return -1;
        if (h - n < from) return -1;
        if (hay.substr(h - n, h - 1) == needle) return h - n;
        return -1;
    endfunction

    task automatic pass_out();
        $display("");
        $display("*** TEST SUCCESS *** questa_soc_tb: golden string seen after %0d cycles, %0d UART bytes", cyc, rx_str.len());
        $display("result=PASS");
        $finish;
    endtask

    task automatic fail_out();
        $display("");
        $display("*** TEST FAILED *** questa_soc_tb: golden string not seen within %0d cycles (%0d UART bytes, pc_id=0x%08x)",
                 cyc, rx_str.len(), dut.i_cpu.core_i.pc_id);
        $display("result=FAIL");
        $finish;
    endtask

    task automatic got_byte(input logic [7:0] c);
        int pos;
        rx_str = {rx_str, $sformatf("%c", c)};
        $write("%c", c);
        $fflush();
        if (sweep_n == 0) begin
            if (ends_with_from(rx_str, golden, 0) >= 0) pass_out();
        end else begin
            pos = ends_with_from(rx_str, golden, search_from);
            if (pos >= 0) begin
                search_from = pos + golden.len();
                sweep_done++;
                $display("");
                $display("[SIM] SWEEP phase %0d/%0d OK (receiver CPB=%0d, cycle=%0d)",
                         sweep_done, sweep_n, sweep_cpb[sweep_done - 1], cyc);
                if (sweep_done == sweep_n) pass_out();
                else begin
                    CPB = sweep_cpb[sweep_done];   // new decoder, as in sim_main.cpp
                    ust = U_IDLE;
                end
            end
        end
    endtask

    always @(negedge clk) begin
        cyc++;
        case (ust)
            U_IDLE: if (uart_txd == 1'b0) begin
                uclks = CPB / 2;
                ust   = U_START;
            end
            U_START: begin
                uclks--;
                if (uclks == 0) begin
                    if (uart_txd == 1'b0) begin
                        uclks = CPB; ust = U_DATA; ubit = 0; usr = 8'h0;
                    end else ust = U_IDLE;
                end
            end
            U_DATA: begin
                uclks--;
                if (uclks == 0) begin
                    usr[ubit] = uart_txd;
                    uclks = CPB;
                    ubit++;
                    if (ubit == 8) ust = U_STOP;
                end
            end
            U_STOP: begin
                uclks--;
                if (uclks == 0) begin
                    ust = U_IDLE;
                    got_byte(usr);
                end
            end
        endcase
        if (cyc >= max_cycles) fail_out();
    end

endmodule
