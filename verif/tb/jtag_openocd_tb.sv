// ============================================
// Ostim BLogic Mikroelektronik
// jtag_openocd_tb.sv  -  soc_top + riscv-dbg, JTAG pinleri OpenOCD'den surulur
// ============================================
// deneme/jtag dali, `+define+JTAG_DEBUG` ile derlenir (make jtag-openocd-build).
// jtag_smoke_tb'den farki: JTAG pinlerini SV bit-bang degil, SimJTAG
// (rtl/debug/vendor/riscv-dbg/tb/SimJTAG.sv) surer; SimJTAG her cevrimde
// `jtag_tick` DPI fonksiyonunu (rtl/debug/tb/jtag_dpi.cpp) cagirir, o da
// TCP 9999 uzerinde OpenOCD remote_bitbang protokolunu konusur.
// Kullanim:
//   cd obj_dir_jtag_ocd && ./jtag_openocd_sim          (terminal 1)
//   openocd -f rtl/debug/openocd/blogic_sim.cfg         (terminal 2)
// Firmware (uart_hello) ISRAM'e $readmemh ile onyuklenir, BOOT_ADDR=0x10000;
// UART TX ilk 145 karakteri coz ve bas -> logda cekirdegin kostugu gorulur
// (3 selamlama: ilk boot, "reset halt"+resume ve "reset run" sonrasi).
// Bitis: OpenOCD 'Q' gonderince (shutdown) SimJTAG exit != 0 -> $finish;
// ayrica 30 s simulasyon zamani bekci (TIMEOUT).
// OpenOCD'siz hizli kontrol: python3 scripts/jtag_bitbang_probe.py [--quit]
// Gun 3: ndmreset soc_top sys_rst_n'e bagli (rst_ni & ~ndmreset) -> OpenOCD
// "reset halt" gecerli: cekirdek reset vektorunde halt, DM/TAP ayakta kalir.
`timescale 1ns / 1ps

module jtag_openocd_tb;
    logic clk = 0, resetn = 0;
    always #10 clk = ~clk;                     // 50 MHz
    initial begin resetn = 0; #200 resetn = 1; end

    logic uart_tx, uart_rx = 1;
    logic jtag_tck, jtag_tms, jtag_tdi, jtag_trst_n, jtag_tdo;
    logic [3:0] qspi_io_o, qspi_io_oe;
    logic [31:0] jtag_exit;

    localparam int unsigned OCD_PORT = 9999;   // blogic_sim.cfg: remote_bitbang port

    soc_top #(.BOOT_ADDR(32'h0001_0000)) dut (
        .clk_i(clk), .rst_ni(resetn),
        .uart_rxd_i(uart_rx), .uart_txd_o(uart_tx),
        .uart1_rxd_i(1'b1), .uart1_txd_o(),
        .gpio_in_i('0), .gpio_out_o(),
        .qspi_sclk_o(), .qspi_cs_no(),
        .qspi_io_o(qspi_io_o), .qspi_io_oe(qspi_io_oe), .qspi_io_i(4'hF),
        .i2c_scl_o(), .i2c_sda_oe_o(), .i2c_sda_i(1'b1),
        .jtag_tck_i(jtag_tck), .jtag_tms_i(jtag_tms), .jtag_tdi_i(jtag_tdi),
        .jtag_trst_ni(jtag_trst_n), .jtag_tdo_o(jtag_tdo)
    );

    // ---------------- OpenOCD remote_bitbang koprusu ----------------
    // TICK_DELAY=1: her 2 sistem cevriminde bir komut bayti islenir
    // (TCK en fazla 12.5 MHz); reset bitince init_done ile calismaya baslar.
    SimJTAG #(.TICK_DELAY(1), .PORT(OCD_PORT)) i_simjtag (
        .clock(clk),
        .reset(~resetn),
        .enable(1'b1),
        .init_done(resetn),
        .jtag_TCK(jtag_tck),
        .jtag_TMS(jtag_tms),
        .jtag_TDI(jtag_tdi),
        .jtag_TRSTn(jtag_trst_n),
        .jtag_TDO_data(jtag_tdo),
        .jtag_TDO_driven(1'b1),
        .exit(jtag_exit)
    );

    // ---------------- UART (115200, CPB=434) ----------------
    localparam int BIT_NS = 8680;
    task automatic uart_read(output logic [7:0] d);
        @(negedge uart_tx); #(BIT_NS + BIT_NS/2);
        for (int i = 0; i < 8; i++) begin d[i] = uart_tx; #BIT_NS; end
    endtask

    // Selamlamalari coz (29 karakter + satir sonu); satir sonunda ya da
    // sinira ulasinca bas -> her ndmreset sonrasi selamlama loga duser.
    // 3 Eylul (bosluk G-09): demo artik "reset halt + resume" ve "reset run"
    // ile firmware'i IKI kez yeniden baslatiyor, arada UART0 TDR'ye
    // debugger'dan bir 'A' yaziliyor -> 58 karakter yetmiyordu, ucuncu
    // selamlama loga hic dusmuyordu (run_jtag_openocd.sh VERDICT'i onu arar).
    localparam int UART_NCHAR = 145;
    string      uart_line = "";
    logic [7:0] uart_ch;
    int         uart_total = 0;

    initial begin
        wait (resetn === 1'b1);
        for (int i = 0; i < UART_NCHAR; i++) begin
            uart_read(uart_ch);
            uart_total++;
            if (uart_ch == 8'h0A || uart_ch == 8'h0D) begin
                $display("[%0t] [JTAG-OPENOCD] UART: '%s'", $time, uart_line);
                $fflush;
                uart_line = "";
            end else begin
                uart_line = {uart_line, string'(uart_ch)};
            end
        end
        if (uart_line.len() != 0)
            $display("[%0t] [JTAG-OPENOCD] UART: '%s'", $time, uart_line);
        $display("[%0t] [JTAG-OPENOCD] UART: ilk %0d karakter alindi", $time, uart_total);
        $fflush;
    end

    // ---------------- Baslangic / bitis ----------------
    initial begin
        $display("[%0t] === JTAG-OPENOCD: soc_top + riscv-dbg + SimJTAG (remote_bitbang :%0d) ===",
                 $time, OCD_PORT);
        $display("[%0t] [JTAG-OPENOCD] baglanti: openocd -f rtl/debug/openocd/blogic_sim.cfg", $time);
        $fflush;
        wait (resetn === 1'b1);
        $display("[%0t] [JTAG-OPENOCD] reset birakildi, SimJTAG etkin", $time);
        $fflush;
    end

    // OpenOCD 'Q' (shutdown) -> jtag_tick sifirdan farkli doner -> exit
    initial begin
        wait (jtag_exit !== 32'd0 && jtag_exit !== 32'bx);
        $display("[%0t] [JTAG-OPENOCD] SimJTAG exit=%0d", $time, jtag_exit);
        $fflush;
        $finish;
    end

    // Bekci: 30 s simulasyon zamani (1 ns birim). Kopru non-blocking oldugu
    // icin sim OpenOCD bosta iken de ilerler; ~9 ms/s hizla bu sinir yaklasik
    // 1 saat duvar saatine denk gelir (etkilesimli demo icin yeterli).
    initial begin
        #(64'd30_000_000_000);
        $display("[%0t] [JTAG-OPENOCD] TIMEOUT: 30 s simulasyon zamani doldu", $time);
        $fflush;
        $finish;
    end
endmodule
