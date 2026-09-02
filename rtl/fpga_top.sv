// ============================================
// Ostim BLogic Mikroelektronik
// fpga_top.sv  -  Genesys 2 FPGA ust modulu
// ============================================
`timescale 1ns / 1ps

module fpga_top #(
    // 0x0=bootrom/QSPI flash, 0x10000=SRAM-boot (firmware.hex)
    parameter logic [31:0] BOOT_ADDR = 32'h0000_0000
) (
    // 200 MHz LVDS sistem saati
    input  logic       sysclk_p,
    input  logic       sysclk_n,

    // Aktif-düşük reset butonu
    input  logic       cpu_resetn,

    // USB-UART (host perspektifli: tx_in = host TX = bizim RXD)
    input  logic       uart_tx_in,
    output logic       uart_rx_out,

    // GPIO kaynakları
    input  logic [7:0] sw,
    input  logic       btnc, btnd, btnl, btnr, btnu,
    output logic [7:0] led,
    output logic [7:0] jb,

    // Pmod JA: UART1 (YZ stream) + I2C
    inout  wire  [7:0] ja,

    // Onboard QSPI flash (SCLK = STARTUPE2 üzerinden)
    output logic       QSPI_CSN,
    inout  wire  [3:0] QSPI_D
);

    // Saat: 200 MHz LVDS -> 50 MHz
    logic clk_200_ibuf;
    logic clk_50_mmcm, clk_50;
    logic clk_fb;
    logic mmcm_locked;

    IBUFDS i_ibufds_sysclk (
        .I  (sysclk_p),
        .IB (sysclk_n),
        .O  (clk_200_ibuf)
    );

    // VCO 1000 MHz, CLKOUT0 50 MHz
    MMCME2_BASE #(
        .BANDWIDTH        ("OPTIMIZED"),
        .CLKIN1_PERIOD    (5.000),       // 200 MHz
        .DIVCLK_DIVIDE    (1),
        .CLKFBOUT_MULT_F  (5.000),       // VCO 1000 MHz
        .CLKFBOUT_PHASE   (0.0),
        .CLKOUT0_DIVIDE_F (20.000),      // 50 MHz
        .CLKOUT0_DUTY_CYCLE(0.5),
        .CLKOUT0_PHASE    (0.0),
        .REF_JITTER1      (0.010),
        .STARTUP_WAIT     ("FALSE")
    ) i_mmcm (
        .CLKIN1   (clk_200_ibuf),
        .CLKFBIN  (clk_fb),
        .CLKFBOUT (clk_fb),
        .CLKOUT0  (clk_50_mmcm),
        .CLKOUT0B (), .CLKOUT1 (), .CLKOUT1B (),
        .CLKOUT2  (), .CLKOUT2B (), .CLKOUT3 (), .CLKOUT3B (),
        .CLKOUT4  (), .CLKOUT5 (), .CLKOUT6 (),
        .CLKFBOUTB(),
        .LOCKED   (mmcm_locked),
        .PWRDWN   (1'b0),
        .RST      (1'b0)
    );

    BUFG i_bufg_50 (
        .I (clk_50_mmcm),
        .O (clk_50)
    );

    // Reset: asenkron assert, senkron release (2FF)
    wire  rst_async_n = cpu_resetn & mmcm_locked;
    logic rst_meta_n, rst_sync_n;

    always_ff @(posedge clk_50 or negedge rst_async_n) begin
        if (!rst_async_n) begin
            rst_meta_n <= 1'b0;
            rst_sync_n <= 1'b0;
        end else begin
            rst_meta_n <= 1'b1;
            rst_sync_n <= rst_meta_n;
        end
    end

    // Cevre birimi pin uyarlamalari
    // GPIO
    logic [31:0] gpio_in;
    logic [31:0] gpio_out;
    assign gpio_in = {16'd0,                              // [31:16] kullanilmaz
                      3'b000,                             // [15:13]
                      btnu, btnr, btnl, btnd, btnc,       // [12:8]
                      sw};                                // [7:0]
    // Teshis LED'leri: heartbeat, mmcm_locked, rst_sync_n, gpio_out[4:0]
    logic [25:0] heartbeat_cnt;
    always_ff @(posedge clk_50) heartbeat_cnt <= heartbeat_cnt + 1'b1;

    assign led = {gpio_out[4:0], rst_sync_n, mmcm_locked, heartbeat_cnt[25]};
    assign jb  = gpio_out[15:8];

    // UART1 + I2C @ Pmod JA
    logic uart1_txd;
    logic i2c_scl, i2c_sda_oe;

    assign ja[0] = 1'bz;                              // UART1 RXD (giris)
    assign ja[1] = uart1_txd;                         // UART1 TXD
    assign ja[2] = i2c_scl;                           // I2C SCL
    assign ja[3] = i2c_sda_oe ? 1'b0 : 1'bz;          // I2C SDA (open-drain)
    assign ja[7:4] = 4'bzzzz;                         // bosta

    wire uart1_rxd = ja[0];
    wire i2c_sda_in = ja[3];

    // QSPI flash
    logic       qspi_sclk;
    logic [3:0] qspi_io_o, qspi_io_oe, qspi_io_i;

    genvar gi;
    generate
        for (gi = 0; gi < 4; gi++) begin : g_qspi_io
            assign QSPI_D[gi]   = qspi_io_oe[gi] ? qspi_io_o[gi] : 1'bz;
            assign qspi_io_i[gi] = QSPI_D[gi];
        end
    endgenerate

    // SCLK -> CCLK config pini, sadece STARTUPE2 ile erisilir
    STARTUPE2 #(
        .PROG_USR      ("FALSE"),
        .SIM_CCLK_FREQ (0.0)
    ) i_startupe2 (
        .CFGCLK    (),
        .CFGMCLK   (),
        .EOS       (),
        .PREQ      (),
        .CLK       (1'b0),
        .GSR       (1'b0),
        .GTS       (1'b0),
        .KEYCLEARB (1'b1),
        .PACK      (1'b0),
        .USRCCLKO  (qspi_sclk),   // SoC QSPI SCLK -> flash CCLK
        .USRCCLKTS (1'b0),        // CCLK surekli surulur
        .USRDONEO  (1'b1),
        .USRDONETS (1'b1)
    );

    // SoC
    soc_top #(
        .BOOT_ADDR   (BOOT_ADDR),
        .CLK_FREQ_HZ (50_000_000)
    ) i_soc (
        .clk_i        (clk_50),
        .rst_ni       (rst_sync_n),

        .uart_rxd_i   (uart_tx_in),     // host TX -> SoC RX
        .uart_txd_o   (uart_rx_out),    // SoC TX -> host RX

        .uart1_rxd_i  (uart1_rxd),
        .uart1_txd_o  (uart1_txd),

        .gpio_in_i    (gpio_in),
        .gpio_out_o   (gpio_out),

        .qspi_sclk_o  (qspi_sclk),
        .qspi_cs_no   (QSPI_CSN),
        .qspi_io_o    (qspi_io_o),
        .qspi_io_i    (qspi_io_i),
        .qspi_io_oe   (qspi_io_oe),

        .i2c_scl_o    (i2c_scl),
        .i2c_sda_oe_o (i2c_sda_oe),
        .i2c_sda_i    (i2c_sda_in)
`ifdef JTAG_DEBUG
        ,
        // JTAG_DEBUG (deneme/jtag): kartta harici JTAG pin basligi YOK; dmi_jtag'in
        // TAP'i FPGA'nin kendi tarama zincirine BSCANE2 (USER3/USER4) ile baglanir
        // (build_genesys2_jtag.tcl dmi_jtag_tap.sv yerine ayni modul adini tasiyan
        // dmi_bscane_tap.sv'yi okur). TAP bu pinleri hic okumaz -> sabit baglanir.
        // trst_ni=1: DTM yazmaclari FPGA'da bitstream ile 0'dan baslar; TAP reset
        // BSCANE2.RESET (dmi_clear) uzerinden gelir. Tanim yokken birebir eski.
        .jtag_tck_i   (1'b0),
        .jtag_tms_i   (1'b0),
        .jtag_tdi_i   (1'b0),
        .jtag_trst_ni (1'b1),
        .jtag_tdo_o   ()
`endif
    );

endmodule
