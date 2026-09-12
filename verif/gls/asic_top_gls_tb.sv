// ============================================
// Ostim BLogic Mikroelektronik
// asic_top_gls_tb.sv  -  teslim netlistinin kapi seviyesi benzetimi
// ============================================
// asic_top_boot_tb.sv'nin netlist surumu. DUT, RUN_hold035_2026-09-09'un
// yerlesim sonrasi guc pinli netlistidir (asic/results/netlist/
// asic_top_powered.v.gz, dolgu hucreleri verif/gls/strip_fillers.py ile
// ayiklanmis), sky130_fd_sc_hd hucre modelleri ve teslim edilen OpenRAM
// modelleriyle. SDF'li kosuda nom_tt_025C_1v80 SDF'i DUT'a yuklenir.
//
// Saat dogrulanmis calisma frekansidir: 37,000 ns (27,0 MHz), 50 MHz degil.
// Firmware UART_CPB=434 yazar; bit suresi 8*floor(434/8) = 432 saat, yani
// 432 x 37 ns. TB'nin surdugu girisler (reset, UART RX) saatin dusen kenarinda
// degisir: yukselen kenardaki kurulum/tutma pencerelerine asenkron giris
// sokup senkronizator ilk katinda yapay zamanlama ihlali uretmemek icin.
//
// Protokol asic_top_boot_tb ile ayni: 'R' -> 'A' -> tam 12 karakter
// ("Hello World!"). Firmware ai_boot_macro_test.c -DCHECK_ARGMAX: conv_out
// 1000 sozcuk FNV-1a sagtoplami + FC argmax == 2 tutmazsa selamlamayi basmaz.
`timescale 1ns / 1ps

module asic_top_gls_tb;
    parameter real TCLK   = 37.0;              // ns, dogrulanmis 27,0 MHz
    localparam real BIT_NS = 432.0 * TCLK;     // UART bit suresi (CPB=434)

    logic clk = 0, resetn = 0;
    always #(TCLK/2.0) clk = ~clk;

    wire VPWR = 1'b1;
    wire VGND = 1'b0;

    logic uart_tx, uart_rx = 1;
    logic qspi_sclk, qspi_cs_n;
    logic [3:0] qspi_io_o, qspi_io_oe, qspi_io_i;
    logic jtag_tdo;

    asic_top dut (
        .VPWR(VPWR), .VGND(VGND),
        .clk_i(clk), .rst_ni(resetn),
        .uart_rxd_i(uart_rx), .uart_txd_o(uart_tx),
        .uart1_rxd_i(1'b1), .uart1_txd_o(),
        .gpio_in_i('0), .gpio_out_o(),
        .qspi_sclk_o(qspi_sclk), .qspi_cs_no(qspi_cs_n),
        .qspi_io_o(qspi_io_o), .qspi_io_oe(qspi_io_oe),
        .qspi_io_i(qspi_io_i),
        .i2c_scl_o(), .i2c_sda_oe_o(), .i2c_sda_i(1'b1),
        // JTAG TAP bagli degil: trst_n=0 TAP'i resette tutar (DM pasif)
        .jtag_tck_i(1'b0), .jtag_tms_i(1'b0), .jtag_tdi_i(1'b0),
        .jtag_trst_ni(1'b0), .jtag_tdo_o(jtag_tdo)
    );

    wire [3:0] flash_out, flash_oe;
    spi_flash_model #(.FLASH_SIZE(131072), .INIT_FILE("flash.hex")) flash (
        .sclk(qspi_sclk), .cs_n(qspi_cs_n),
        .io_in (qspi_io_o & qspi_io_oe),
        .io_out(flash_out), .io_oe_out(flash_oe)
    );
    genvar gi;
    generate for (gi = 0; gi < 4; gi++) begin : g_io
        assign qspi_io_i[gi] = qspi_io_oe[gi] === 1'b1 ? qspi_io_o[gi]
                              : flash_oe[gi]   ? flash_out[gi] : 1'b1;
    end endgenerate

    // reset: 10 saat, dusen kenarda birak
    initial begin
        resetn = 0;
        repeat (10) @(negedge clk);
        resetn = 1;
    end

    task automatic uart_read(output logic [7:0] d);
        @(negedge uart_tx); #(BIT_NS + BIT_NS/2.0);
        for (int i = 0; i < 8; i++) begin d[i] = uart_tx; #(BIT_NS); end
    endtask
    task automatic uart_write(input logic [7:0] d);
        @(negedge clk);                      // 432 x TCLK sonra da dusen kenar
        uart_rx = 0; #(BIT_NS);
        for (int i = 0; i < 8; i++) begin uart_rx = d[i]; #(BIT_NS); end
        uart_rx = 1; #(BIT_NS);
    endtask

    // ilerleme: her 5 ms benzetim zamaninda bir satir (duvar saati disaridan olculur)
    initial forever begin
        #5_000_000;
        $display("[%0t] ilerleme: cs_n=%b sclk=%b uart_tx=%b", $time, qspi_cs_n, qspi_sclk, uart_tx);
    end

    // X denetimi: resetten sonra UART TX ve QSPI CS hattinda X/Z olmamali
    initial begin
        wait (resetn === 1'b1);
        repeat (20) @(posedge clk);
        forever begin
            @(posedge clk);
            if ($isunknown({uart_tx, qspi_cs_n, qspi_sclk}))
                $display("[%0t] UYARI: cikis pininde X/Z: uart_tx=%b cs_n=%b sclk=%b",
                         $time, uart_tx, qspi_cs_n, qspi_sclk);
        end
    end

    string received = "";
    logic [7:0] ch;
    initial begin
        wait (resetn === 1'b1);
        wait (uart_tx === 1'b1);
        $display("[%0t] === ASIC NETLIST (GLS) BOOT+YZ TESTI, TCLK=%0.3f ns ===", $time, TCLK);
        $display("[%0t] reset birakildi; ilk QSPI islemi bekleniyor", $time);
        fork
            begin
                wait (qspi_cs_n === 1'b0);
                $display("[%0t] ilk QSPI CS# dusus - boot ROM flash'a eristi", $time);
            end
        join_none

        uart_read(ch);
        if (ch !== "R") begin
            $display("[%0t] FAIL: 'R' bekleniyordu, 0x%02h alindi", $time, ch);
            $finish;
        end
        $display("[%0t] 'R' alindi -> bootloader+firmware calisti", $time);

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
            $display("[%0t] *** TEST SUCCESS *** asic_top NETLIST: boot + YZ cikarimi bit-tam, argmax dahil ('%s')", $time, received);
        else
            $display("[%0t] FAIL: alinan='%s'", $time, received);
        $finish;
    end

    // boot ~51 ms + cikarim ~9 ms (50 MHz'te) -> 37 ns'de x1,85; genis pay
    initial begin
        #300_000_000;
        $display("[%0t] FAIL: TIMEOUT", $time);
        $finish;
    end
endmodule
