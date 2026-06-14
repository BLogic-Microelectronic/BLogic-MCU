`timescale 1ns / 1ps

// ============================================================
// BLogic MCU — FPGA Top (Digilent Genesys 2, XC7K325T-2FFG900C)
// ============================================================
// Saat zinciri:
//   200 MHz LVDS (AD12/AD11) → IBUFDS → MMCME2_BASE (×5 ÷1, VCO 1 GHz)
//   → CLKOUT0 ÷20 = 50 MHz → BUFG → soc_top
//
// Reset zinciri:
//   cpu_resetn (R19, aktif-düşük buton) AND mmcm_locked
//   → 2FF senkronize release → rst_ni
//   (SoC, MMCM kilitlenene kadar resette tutulur.)
//
// Pin eşleme (fpga/genesys2.xdc ile birebir):
//   USB-UART  : uart_tx_in (Y20, host→FPGA) = UART0 RXD
//               uart_rx_out (Y23, FPGA→host) = UART0 TXD
//   Pmod JA   : ja[0]=UART1 RXD (YZ stream, girş)  ja[1]=UART1 TXD
//               ja[2]=I2C SCL                       ja[3]=I2C SDA (open-drain)
//               ja[7:4]=kullanılmıyor (Hi-Z)
//   GPIO IN   : in[7:0]=sw[7:0], in[12:8]={btnu,btnr,btnl,btnd,btnc},
//               in[15:13]=3'b000
//   GPIO OUT  : led[7:0]=out[7:0], jb[7:0]=out[15:8]
//   QSPI Flash: onboard S25FL256S — CS=U19, D[3:0]=R21/R20/R25/P24.
//               SCLK, 7-serisinde özel CCLK config pinidir; doğrudan IO
//               olarak sürülemez → STARTUPE2.USRCCLKO üzerinden sürülür.
//
// !!! STARTUPE2 bilinen davranışı (UG470): konfigürasyon sonrası
//     USRCCLKO'nun İLK 3 kenarı CCLK pinine YANSIMAZ. Bootrom'un flash'a
//     ilk erişiminden önce en az 1 dummy komut (örn. 8 SCLK'lık no-op /
//     RESET komutu) göndermesi bu yüzden güvenlidir.
// ============================================================

module fpga_top #(
    // Boot kaynagi:
    //   0x0000_0000 = Boot ROM -> QSPI flash (gercek/sartname config, M3)
    //   0x0001_0000 = dogrudan Instruction SRAM'den (firmware.hex) baslat
    //                 (FPGA bring-up / SRAM-boot, M2). build TCL generic ile verir.
    parameter logic [31:0] BOOT_ADDR = 32'h0000_0000
) (
    // 200 MHz LVDS sistem saati
    input  logic       sysclk_p,
    input  logic       sysclk_n,

    // Aktif-düşük reset butonu
    input  logic       cpu_resetn,

    // USB-UART (FT232 — isimler Digilent master XDC ile aynı, host
    // perspektifli: tx_in = host'un TX'i = bizim RXD)
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

    // =========================================================
    // 1. SAAT ÜRETİMİ: 200 MHz LVDS → 50 MHz
    // =========================================================
    logic clk_200_ibuf;
    logic clk_50_mmcm, clk_50;
    logic clk_fb;
    logic mmcm_locked;

    IBUFDS i_ibufds_sysclk (
        .I  (sysclk_p),
        .IB (sysclk_n),
        .O  (clk_200_ibuf)
    );

    // VCO = 200 MHz × 5.0 / 1 = 1000 MHz (Kintex-7 -2: 600–1440 MHz ✓)
    // CLKOUT0 = 1000 / 20.0 = 50 MHz
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

    // =========================================================
    // 2. RESET SENKRONİZASYONU
    // =========================================================
    // Asenkron assert (buton ya da MMCM kilidi düşerse anında reset),
    // senkron release (50 MHz'e 2FF ile hizalanır).
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

    // =========================================================
    // 3. ÇEVRE BİRİMİ PIN UYARLAMALARI
    // =========================================================
    // --- GPIO ---
    logic [31:0] gpio_in;
    logic [31:0] gpio_out;
    assign gpio_in = {16'd0,                              // [31:16] kullanılmaz
                      3'b000,                             // [15:13]
                      btnu, btnr, btnl, btnd, btnc,       // [12:8]
                      sw};                                // [7:0]
    // === TESHIS LED'leri (FPGA bring-up gorunurlugu) ========================
    // CPU'ya BAGIMSIZ donanim durumu; nerede kirildigini tek bakista gosterir.
    //   led[0]   = heartbeat   -> clk_50 calisiyor mu (~1.3s blink). RESETTEN BAGIMSIZ.
    //   led[1]   = mmcm_locked  -> MMCM kilitli mi (1=kilit)
    //   led[2]   = rst_sync_n   -> reset kalkti mi (1=calisma)
    //   led[7:3] = gpio_out[4:0]-> CPU GPIO yaziyor mu (firmware blink)
    logic [25:0] heartbeat_cnt;
    always_ff @(posedge clk_50) heartbeat_cnt <= heartbeat_cnt + 1'b1;

    assign led = {gpio_out[4:0], rst_sync_n, mmcm_locked, heartbeat_cnt[25]};
    assign jb  = gpio_out[15:8];

    // --- UART1 (YZ stream) + I2C @ Pmod JA ---
    logic uart1_txd;
    logic i2c_scl, i2c_sda_oe;

    assign ja[0] = 1'bz;                              // UART1 RXD (giriş)
    assign ja[1] = uart1_txd;                         // UART1 TXD
    assign ja[2] = i2c_scl;                           // I2C SCL (master sürer)
    assign ja[3] = i2c_sda_oe ? 1'b0 : 1'bz;          // I2C SDA (open-drain)
    assign ja[7:4] = 4'bzzzz;                         // boşta

    wire uart1_rxd = ja[0];
    wire i2c_sda_in = ja[3];

    // --- QSPI flash ---
    logic       qspi_sclk;
    logic [3:0] qspi_io_o, qspi_io_oe, qspi_io_i;

    genvar gi;
    generate
        for (gi = 0; gi < 4; gi++) begin : g_qspi_io
            assign QSPI_D[gi]   = qspi_io_oe[gi] ? qspi_io_o[gi] : 1'bz;
            assign qspi_io_i[gi] = QSPI_D[gi];
        end
    endgenerate

    // SCLK → CCLK config pini (yalnızca STARTUPE2 ile erişilir)
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
        .USRCCLKO  (qspi_sclk),   // SoC QSPI SCLK → flash CCLK
        .USRCCLKTS (1'b0),        // CCLK sürekli sürülür
        .USRDONEO  (1'b1),
        .USRDONETS (1'b1)
    );

    // =========================================================
    // 4. SoC
    // =========================================================
    soc_top #(
        .BOOT_ADDR   (BOOT_ADDR),       // param: 0x0=bootrom/flash, 0x10000=SRAM-boot
        .CLK_FREQ_HZ (50_000_000)
    ) i_soc (
        .clk_i        (clk_50),
        .rst_ni       (rst_sync_n),

        .uart_rxd_i   (uart_tx_in),     // host TX → SoC RX
        .uart_txd_o   (uart_rx_out),    // SoC TX → host RX

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
    );

endmodule
