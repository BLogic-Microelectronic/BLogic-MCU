// SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
// SPDX-License-Identifier: GPL-3.0-only
// Licensed under the GNU General Public License version 3 only.
// See the LICENSE file in the repository root for the full license text.

// ============================================
// Ostim BLogic Mikroelektronik
// jtag_smoke_tb.sv  -  riscv-dbg JTAG entegrasyonu: TAP -> DMI -> DM -> hart
// ============================================
// JTAG debug altsistemi, teslim cipinin parcasi; JTAG_DEBUG tanimi soc_files.f'ten
// gelir (teslim yapilandirmasi). make jtag-sim = test-all'in 17. bileseni.
// Firmware (uart_hello) ISRAM'e $readmemh ile onyuklenir, BOOT_ADDR=0x10000.
// Asamalar (hepsi gecerse TEST SUCCESS):
//   1) UART: altin dize "Hello World from BLogic MCU!" -> cekirdek kosuyor
//   2) IDCODE: TAP reset sonrasi 32-bit IDCODE == soc_top JTAG_IDCODE
//   3) DTMCS: version==1 (0.13), abits==7
//   4) DMI: dmcontrol.dmactive=1 yaz, dmstatus.version==2 oku (DMI->DM yolu)
//   5) HALT: haltreq -> allhalted; cekirdek debug_halted_o==1
//   6) ABSTRACT/PROGBUF (halt'tayken): x10 yaz/oku round-trip; progbuf ile
//      DSRAM'e sw + lw (x12 == yazilan); dpc firmware bolgesinde; cmderr==0.
//      -> DM'in ROM-DISI sozcukleri (WhereTo/abstract_cmd/progbuf/data0)
//         buyruk ve veri portlarindan gecer, DM<->DSRAM erisimleri araya girer.
//   7) RESUME: resumereq -> allresumeack+allrunning; debug_running_o==1,
//      pc_id firmware bolgesinde (0x0001_xxxx); abstractcs.cmderr==0
//   8) STEP/TRIGGER: halt -> dpc=A; dcsr.step=1 + resumereq -> tek buyruk sonra
//      tekrar debug (dpc=B!=A, dcsr.cause==4); step temizle. Donanim tetikleyici
//      (tselect=0, tdata2=A, tdata1 mcontrol/execute) + resumereq -> uart_hello
//      bosta dongusu A'ya doner -> dpc==A, dcsr.cause==2, debug_halted_o==1;
//      tdata1 geri okunur (execute biti), sonda kapatilir.
//   9) NDMRESET: halt'tayken dmcontrol.ndmreset|haltreq -> sys_rst_n dusuk (DM
//      ayakta); birakinca cekirdek reset vektorunde haltreq ile durur:
//      allhalted, allhavereset==1 -> ackhavereset -> 0, dpc==BOOT_ADDR,
//      dcsr.cause==3; resumereq -> firmware bastan kosar, UART altin dize
//      IKINCI kez okunur (paralel), debug_running_o==1.
//  10) DMI/DTM BUSY [G-01]: op=3, dtmcs.dmistat=3, dmireset + dmihardreset,
//      DM cmdbusy penceresinde data0/command/progbuf -> DTM_BUSY, cmderr=1 W1C
//  11) ISTISNA [G-02]: progbuf illegal / FPR / var olmayan CSR -> cmderr=3,
//      dm_exc_addr (0x0004_0810) yolu beyaz kutu ile kanitlanir, dpc bozulmaz
//  12) NOTSUPPORTED/HALTRESUME [G-03]: aarsize=3, AccessMemory, rezerve regno
//      -> cmderr=2; cekirdek kosarken komut -> cmderr=4; abstractcs W1C
//  13) SBA [G-05]: sbcs kesfi, soc_top tie-off'u (r_err=1) -> sberror=2,
//      sbaccess=3 -> sberror=4, W1C; hic hang yok
//  14) DM KESIF [G-07]: dmcontrol/hartinfo/abstractcs/haltsum/nextdm/progbuf0..8/
//      data1/tinfo/tselect WARL, yanit adres alani, transfer+postexec, haltreq+resumereq
//  15) TAP [G-11]: IR capture 0b00101, BYPASS/tanimsiz IR, Pause/Exit2 (DR ve IR),
//      Idle'siz ardisik tarama, trafik ortasinda TLR(TMS) ve TRST kurtarmasi
//  16) ISRAM YAZMA + EBREAK [G-10]: kod bolgesine debugger yazmasi kosturularak
//      kanitlanir; dcsr.ebreakm ile firmware ebreak'i debug moduna girer (cause=1)
//  17) DM BOLGESI [G-04]: 0x0004_1000+ DSRAM yansimasi, eslenmemis ofsette bayat
//      rdata, debug modu disinda HALTED yazmasi (sahte halted) ve dmactive=0
// JTAG pinleri saf-SV bit-bang ile surulur (TCK 10 MHz, sistem 50 MHz);
// TDO yukselen kenarda orneklenir, TMS/TDI dusen kenardan sonra kurulur.
`timescale 1ns / 1ps

module jtag_smoke_tb;
    logic clk = 0, resetn = 0;
    always #10 clk = ~clk;
    initial begin resetn = 0; #200 resetn = 1; end

    logic uart_tx, uart_rx = 1;
    logic jtag_tck = 0, jtag_tms = 1, jtag_tdi = 0, jtag_trst_n = 0, jtag_tdo;
    logic [3:0] qspi_io_o, qspi_io_oe;

    localparam logic [31:0] EXP_IDCODE = 32'h0B10_61C1;   // soc_top JTAG_IDCODE
    localparam int          NSTAGE     = 17;

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

    // ---------------- UART (115200, CPB=434) ----------------
    localparam int BIT_NS = 8680;
    task automatic uart_read(output logic [7:0] d);
        @(negedge uart_tx); #(BIT_NS + BIT_NS/2);
        for (int i = 0; i < 8; i++) begin d[i] = uart_tx; #BIT_NS; end
    endtask

    // ---------------- JTAG bit-bang ----------------
    localparam int TCK_HALF = 50;   // 10 MHz
    logic tdo_bit;

    task automatic jtag_tick(input logic tms, input logic tdi, output logic tdo);
        jtag_tms = tms; jtag_tdi = tdi;
        #(TCK_HALF); jtag_tck = 1'b1; tdo = jtag_tdo;
        #(TCK_HALF); jtag_tck = 1'b0;
    endtask

    task automatic idle_ticks(input int n);
        for (int i = 0; i < n; i++) jtag_tick(1'b0, 1'b0, tdo_bit);
    endtask

    // TRST + 6x TMS=1 -> Test-Logic-Reset, sonra Run-Test/Idle
    task automatic tap_reset();
        jtag_trst_n = 1'b0;
        jtag_tick(1'b1, 1'b0, tdo_bit); jtag_tick(1'b1, 1'b0, tdo_bit);
        jtag_trst_n = 1'b1;
        for (int i = 0; i < 6; i++) jtag_tick(1'b1, 1'b0, tdo_bit);
        jtag_tick(1'b0, 1'b0, tdo_bit);
    endtask

    // Idle -> Select-DR -> Select-IR -> Capture-IR -> Shift-IR(5) -> Update-IR -> Idle
    task automatic ir_write(input logic [4:0] ir);
        jtag_tick(1'b1, 1'b0, tdo_bit); jtag_tick(1'b1, 1'b0, tdo_bit);
        jtag_tick(1'b0, 1'b0, tdo_bit); jtag_tick(1'b0, 1'b0, tdo_bit);
        for (int i = 0; i < 5; i++) jtag_tick((i == 4), ir[i], tdo_bit);
        jtag_tick(1'b1, 1'b0, tdo_bit);   // Update-IR
        jtag_tick(1'b0, 1'b0, tdo_bit);   // Idle
    endtask

    // Idle -> Select-DR -> Capture-DR -> Shift-DR(n) -> Update-DR -> Idle
    task automatic dr_shift(input int n, input logic [63:0] din, output logic [63:0] dout);
        dout = '0;
        jtag_tick(1'b1, 1'b0, tdo_bit);
        jtag_tick(1'b0, 1'b0, tdo_bit);
        jtag_tick(1'b0, 1'b0, tdo_bit);
        for (int i = 0; i < n; i++) begin
            jtag_tick((i == n-1), din[i], tdo_bit);
            dout[i] = tdo_bit;
        end
        jtag_tick(1'b1, 1'b0, tdo_bit);   // Update-DR
        jtag_tick(1'b0, 1'b0, tdo_bit);   // Idle
    endtask

    // riscv-dbg TAP IR kodlari
    localparam logic [4:0] IR_IDCODE = 5'h01;
    localparam logic [4:0] IR_DTMCS  = 5'h10;
    localparam logic [4:0] IR_DMI    = 5'h11;

    // DMI: {addr[6:0], data[31:0], op[1:0]} = 41 bit (abits=7)
    localparam int DMI_BITS = 41;
    logic [63:0] dr_in, dr_out;

    // dtmcs.dmireset (bit 16): yapiskan busy/hata durumunu temizler
    task automatic dtm_reset();
        ir_write(IR_DTMCS);
        dr_shift(32, 64'h0001_0000, dr_out);
        ir_write(IR_DMI);
        idle_ticks(8);
    endtask

    // DMI yazma: istek + yanit taramasi, op durumu dogrulanir
    task automatic dmi_write(input logic [6:0] addr, input logic [31:0] data);
        logic [1:0] op;
        for (int attempt = 0; attempt < 3; attempt++) begin
            dr_in = {23'd0, addr, data, 2'b10};
            dr_shift(DMI_BITS, dr_in, dr_out);
            idle_ticks(16);
            dr_in = {23'd0, addr, 32'd0, 2'b00};         // nop: yaniti cek
            dr_shift(DMI_BITS, dr_in, dr_out);
            op = dr_out[1:0];
            if (op == 2'b00) return;
            $display("[%0t] DMI write addr=0x%02h: op=%0d (attempt %0d) -> dmireset", $time, addr, op, attempt);
            dtm_reset();
        end
        $error("DMI write basarisiz addr=0x%02h", addr);
    endtask

    // DMI okuma: istek + yanit taramasi
    task automatic dmi_read(input logic [6:0] addr, output logic [31:0] data);
        logic [1:0] op;
        data = 32'hDEAD_BEEF;
        for (int attempt = 0; attempt < 3; attempt++) begin
            dr_in = {23'd0, addr, 32'd0, 2'b01};
            dr_shift(DMI_BITS, dr_in, dr_out);
            idle_ticks(16);
            dr_in = {23'd0, addr, 32'd0, 2'b00};
            dr_shift(DMI_BITS, dr_in, dr_out);
            op   = dr_out[1:0];
            data = dr_out[33:2];
            if (op == 2'b00) return;
            $display("[%0t] DMI read addr=0x%02h: op=%0d (attempt %0d) -> dmireset", $time, addr, op, attempt);
            dtm_reset();
        end
        $error("DMI read basarisiz addr=0x%02h", addr);
    endtask

    // DM yazmac adresleri (RISC-V Debug 0.13)
    localparam logic [6:0] DM_DATA0      = 7'h04;
    localparam logic [6:0] DM_DMCONTROL  = 7'h10;
    localparam logic [6:0] DM_DMSTATUS   = 7'h11;
    localparam logic [6:0] DM_ABSTRACTCS = 7'h16;
    localparam logic [6:0] DM_COMMAND    = 7'h17;
    localparam logic [6:0] DM_PROGBUF0   = 7'h20;
    localparam logic [6:0] DM_PROGBUF1   = 7'h21;

    // Abstract command (cmdtype=0 access register, aarsize=2 -> 32 bit)
    localparam logic [31:0] CMD_AAR32     = 32'h0020_0000;
    localparam logic [31:0] CMD_TRANSFER  = 32'h0002_0000;
    localparam logic [31:0] CMD_WRITE     = 32'h0001_0000;
    localparam logic [31:0] CMD_POSTEXEC  = 32'h0004_0000;
    localparam logic [15:0] REG_X10 = 16'h100A, REG_X11 = 16'h100B, REG_X12 = 16'h100C;
    localparam logic [15:0] REG_DPC = 16'h07B1;
    // Debug/tetikleyici CSR'leri (CV32E40P: tek mcontrol tetikleyici, yalniz
    // execute-adres eslesmesi; tdata1 yalniz debug modunda yazilir, geri okunan
    // deger sabit alanlarla birlesir: type=2, dmode, action=1, m, [u], execute)
    localparam logic [15:0] REG_DCSR    = 16'h07B0;
    localparam logic [15:0] REG_TSELECT = 16'h07A0;
    localparam logic [15:0] REG_TDATA1  = 16'h07A1;
    localparam logic [15:0] REG_TDATA2  = 16'h07A2;
    localparam logic [31:0] TDATA1_EXEC = 32'h2800_104C;   // type=2 mcontrol, dmode, action=1 (debug), m+u, execute
    localparam logic [31:0] DCSR_STEP   = 32'h0000_0004;   // dcsr.step (bit 2)
    localparam logic [31:0] RESET_VEC   = 32'h0001_0000;   // soc_top BOOT_ADDR
    // dcsr.cause kodlari (cv32e40p_pkg DBG_CAUSE_*)
    localparam logic [2:0]  CAUSE_TRIGGER = 3'd2, CAUSE_HALTREQ = 3'd3, CAUSE_STEP = 3'd4;

    // RV32I kodlamalari
    localparam logic [31:0] INSN_SW_X11_X10 = 32'h00B5_2023;   // sw x11, 0(x10)
    localparam logic [31:0] INSN_LW_X12_X10 = 32'h0005_2603;   // lw x12, 0(x10)
    localparam logic [31:0] INSN_EBREAK     = 32'h0010_0073;

    // busy dusene kadar bekle; cmderr==0 degilse temizle ve ok=0 dondur
    task automatic abstract_cmd(input logic [31:0] cmd, output logic ok);
        logic [31:0] acs;
        int n = 0;
        dmi_write(DM_COMMAND, cmd);
        do begin dmi_read(DM_ABSTRACTCS, acs); n++; end while (acs[12] && n < 50);
        ok = !acs[12] && (acs[10:8] == 3'd0);
        if (!ok) begin
            $display("[%0t] abstract cmd 0x%08h: abstractcs=0x%08h (busy=%0d cmderr=%0d)",
                     $time, cmd, acs, acs[12], acs[10:8]);
            dmi_write(DM_ABSTRACTCS, 32'h0000_0700);   // cmderr W1C
        end
    endtask

    task automatic reg_write(input logic [15:0] regno, input logic [31:0] val, output logic ok);
        dmi_write(DM_DATA0, val);
        abstract_cmd(CMD_AAR32 | CMD_TRANSFER | CMD_WRITE | {16'd0, regno}, ok);
    endtask

    task automatic reg_read(input logic [15:0] regno, output logic [31:0] val, output logic ok);
        abstract_cmd(CMD_AAR32 | CMD_TRANSFER | {16'd0, regno}, ok);
        dmi_read(DM_DATA0, val);
    endtask

    task automatic progbuf_exec(input logic [31:0] i0, input logic [31:0] i1, output logic ok);
        dmi_write(DM_PROGBUF0, i0);
        dmi_write(DM_PROGBUF1, i1);
        abstract_cmd(CMD_AAR32 | CMD_POSTEXEC, ok);   // transfer=0: yalniz progbuf kos
    endtask

    // ================================================================
    // Asama 10-17 icin ek adresler/kodlamalar ve yardimci gorevler
    // (test boslugu ID'leri: G-01, G-02, G-03, G-04, G-05, G-07, G-10, G-11)
    // ================================================================
    // Ek DM yazmac adresleri (RISC-V Debug 0.13, dm_pkg dm_csr_e)
    localparam logic [6:0] DM_DATA1        = 7'h05;
    localparam logic [6:0] DM_HARTINFO     = 7'h12;
    localparam logic [6:0] DM_HALTSUM1     = 7'h13;
    localparam logic [6:0] DM_HAWINDOWSEL  = 7'h14;
    localparam logic [6:0] DM_HAWINDOW     = 7'h15;
    localparam logic [6:0] DM_ABSTRACTAUTO = 7'h18;
    localparam logic [6:0] DM_NEXTDM       = 7'h1D;
    localparam logic [6:0] DM_PROGBUF2     = 7'h22;
    localparam logic [6:0] DM_PROGBUF3     = 7'h23;
    localparam logic [6:0] DM_PROGBUF8     = 7'h28;
    localparam logic [6:0] DM_AUTHDATA     = 7'h30;
    localparam logic [6:0] DM_HALTSUM2     = 7'h34;
    localparam logic [6:0] DM_HALTSUM3     = 7'h35;
    localparam logic [6:0] DM_SBCS         = 7'h38;
    localparam logic [6:0] DM_SBADDRESS0   = 7'h39;
    localparam logic [6:0] DM_SBDATA0      = 7'h3C;
    localparam logic [6:0] DM_HALTSUM0     = 7'h40;
    localparam logic [6:0] DM_UNDEF        = 7'h7F;   // tanimsiz DMI adresi

    // DM bolgesi adresleri (soc_top JTAG_DM_BASE = 0x0004_0000)
    localparam logic [31:0] DM_BASE       = 32'h0004_0000;
    localparam logic [31:0] DM_HALTED_A   = DM_BASE + 32'h0000_0100;  // HALTED bayragi
    localparam logic [31:0] DM_DATA0_A    = DM_BASE + 32'h0000_0380;  // bellek-esli data0
    localparam logic [31:0] DM_UNMAPPED_A = DM_BASE + 32'h0000_0004;  // eslenmemis ofset
    localparam logic [31:0] DM_ALIAS_A    = 32'h0004_1000;            // 4 KB pencere DISI
    localparam logic [11:0] DM_EXC_OFF    = 12'h118;                  // dm_mem ExceptionAddr

    // Ek abstract komut bitleri (dm_pkg ac_ar_cmd_t)
    localparam logic [31:0] CMD_AAR64     = 32'h0030_0000;  // aarsize=3, MaxAar=3 -> NotSupported
    localparam logic [31:0] CMD_POSTINC   = 32'h0008_0000;  // aarpostincrement
    localparam logic [31:0] CMD_ACCESSMEM = 32'h0200_0000;  // cmdtype=2 (AccessMemory)
    localparam logic [15:0] REG_F0        = 16'h1020;       // FPR f0 (FPU yok -> istisna)
    localparam logic [15:0] REG_CSR_BAD   = 16'h0F15;       // var olmayan CSR
    localparam logic [15:0] REG_RESERVED  = 16'hC00A;       // regno[15:14] != 0 (rezerve)
    localparam logic [15:0] REG_TINFO     = 16'h07A4;

    // dm_pkg cmderr_e
    localparam logic [2:0] CMDERR_NONE = 3'd0, CMDERR_BUSY = 3'd1, CMDERR_NOTSUP = 3'd2,
                           CMDERR_EXC  = 3'd3, CMDERR_HALTRESUME = 3'd4;
    localparam logic [2:0]  CAUSE_EBREAK  = 3'd1;           // CV32E40P DBG_CAUSE_EBREAK
    localparam logic [31:0] DCSR_EBREAKM  = 32'h0000_8000;  // dcsr.ebreakm (bit 15)

    // Ek RV32I kodlamalari
    localparam logic [31:0] INSN_LI_X11_2047 = 32'h7FF0_0593;  // addi x11, x0, 2047
    localparam logic [31:0] INSN_ADDI_X11_M1 = 32'hFFF5_8593;  // addi x11, x11, -1
    localparam logic [31:0] INSN_BNE_X11_M4  = 32'hFE05_9EE3;  // bne  x11, x0, -4
    localparam logic [31:0] INSN_LUI_X5_40   = 32'h0004_02B7;  // lui  x5, 0x40
    // dm_mem HALTED yazmasinda YAZILAN VERI hart numarasidir (wdata_hartsel):
    // hart 0'i "halted" ilan etmek icin 0 yazilir.
    localparam logic [31:0] INSN_SW_X0_100X5 = 32'h1002_A023;  // sw   x0, 0x100(x5)
    localparam logic [31:0] INSN_J_SELF      = 32'h0000_006F;  // jal  x0, 0
    localparam logic [31:0] INSN_ILLEGAL     = 32'h0000_0000;
    localparam logic [31:0] INSN_NOP_32      = 32'h0000_0013;  // addi x0, x0, 0

    // ---- G-02 beyaz kutu: dm_mem EXCEPTION bayragi yazmasi (DM tabani + 0x118) ----
    // Debug ROM'un istisna girisi (soc_top dm_exc_addr = 0x0004_0810) buraya yazar.
    int dm_exc_writes = 0;
    always @(posedge clk) begin
        if (dut.dm_req && dut.dm_we && (dut.dm_addr[11:0] == DM_EXC_OFF))
            dm_exc_writes <= dm_exc_writes + 1;
    end

    // ---- G-04 beyaz kutu: DM HALTED bayragina (DM tabani + 0x100) yazma sayaci ----
    int dm_halted_writes = 0;
    always @(posedge clk) begin
        if (dut.dm_req && dut.dm_we && (dut.dm_addr[11:0] == 12'h100))
            dm_halted_writes <= dm_halted_writes + 1;
    end

    // ---- ham DMI taramasi: yeniden deneme/dtm_reset YOK (G-01) ----
    // Tek DR taramasi istegi gonderir ve ONCEKI islemin yanitini dondurur.
    task automatic dmi_scan_raw(input logic [6:0] addr, input logic [31:0] data,
                                input logic [1:0] op_in, input int idle_n,
                                output logic [31:0] data_out, output logic [1:0] op_out,
                                output logic [6:0] addr_out);
        dr_in = {23'd0, addr, data, op_in};
        dr_shift(DMI_BITS, dr_in, dr_out);
        if (idle_n > 0) idle_ticks(idle_n);
        data_out = dr_out[33:2];
        op_out   = dr_out[1:0];
        addr_out = dr_out[40:34];
    endtask

    // Ham okuma/yazma: istek taramasi + nop taramasi, hata yolunda yeniden deneme YOK
    task automatic dmi_raw_read(input logic [6:0] addr, output logic [31:0] data_out,
                                output logic [1:0] op_out);
        logic [31:0] d; logic [1:0] o; logic [6:0] a;
        dmi_scan_raw(addr, 32'd0, 2'b01, 16, d, o, a);
        dmi_scan_raw(addr, 32'd0, 2'b00,  0, data_out, op_out, a);
    endtask

    task automatic dmi_raw_write(input logic [6:0] addr, input logic [31:0] data,
                                 output logic [1:0] op_out);
        logic [31:0] d; logic [1:0] o; logic [6:0] a;
        dmi_scan_raw(addr, data,  2'b10, 16, d, o, a);
        dmi_scan_raw(addr, 32'd0, 2'b00,  0, d, op_out, a);
    endtask

    // dtmcs oku/yaz (IR degistirir, sonunda IR_DMI'ye geri doner)
    task automatic dtmcs_read(output logic [31:0] val);
        logic [63:0] o;
        ir_write(IR_DTMCS);
        dr_shift(32, 64'd0, o);
        ir_write(IR_DMI);
        val = o[31:0];
    endtask

    task automatic dtmcs_write(input logic [31:0] val);
        logic [63:0] o;
        ir_write(IR_DTMCS);
        dr_shift(32, {32'd0, val}, o);
        ir_write(IR_DMI);
        idle_ticks(8);
    endtask

    // IR yazarken Capture-IR degerini de dondur (IEEE 1149.1: son iki bit 01) (G-11)
    task automatic ir_write_cap(input logic [4:0] ir, output logic [4:0] cap);
        cap = '0;
        jtag_tick(1'b1, 1'b0, tdo_bit); jtag_tick(1'b1, 1'b0, tdo_bit);
        jtag_tick(1'b0, 1'b0, tdo_bit); jtag_tick(1'b0, 1'b0, tdo_bit);
        for (int i = 0; i < 5; i++) begin
            jtag_tick((i == 4), ir[i], tdo_bit);
            cap[i] = tdo_bit;
        end
        jtag_tick(1'b1, 1'b0, tdo_bit);   // Update-IR
        jtag_tick(1'b0, 1'b0, tdo_bit);   // Idle
    endtask

    // Shift-DR ortasinda Pause-DR/Exit2-DR gecisi (G-11)
    task automatic dr_shift_pause(input int n, input logic [63:0] din, output logic [63:0] dout);
        int half;
        dout = '0;
        half = n / 2;
        jtag_tick(1'b1, 1'b0, tdo_bit);   // Select-DR
        jtag_tick(1'b0, 1'b0, tdo_bit);   // Capture-DR
        jtag_tick(1'b0, 1'b0, tdo_bit);   // Shift-DR
        for (int i = 0; i < half; i++) begin
            jtag_tick((i == half-1), din[i], tdo_bit);   // son bit: Exit1-DR
            dout[i] = tdo_bit;
        end
        jtag_tick(1'b0, 1'b0, tdo_bit);   // Pause-DR
        jtag_tick(1'b0, 1'b0, tdo_bit);   // Pause-DR (bekle)
        jtag_tick(1'b1, 1'b0, tdo_bit);   // Exit2-DR
        jtag_tick(1'b0, 1'b0, tdo_bit);   // Shift-DR (kalan bitler)
        for (int i = half; i < n; i++) begin
            jtag_tick((i == n-1), din[i], tdo_bit);
            dout[i] = tdo_bit;
        end
        jtag_tick(1'b1, 1'b0, tdo_bit);   // Update-DR
        jtag_tick(1'b0, 1'b0, tdo_bit);   // Idle
    endtask

    // Shift-IR ortasinda Pause-IR/Exit2-IR gecisi (G-11)
    task automatic ir_write_pause(input logic [4:0] ir);
        jtag_tick(1'b1, 1'b0, tdo_bit); jtag_tick(1'b1, 1'b0, tdo_bit);
        jtag_tick(1'b0, 1'b0, tdo_bit); jtag_tick(1'b0, 1'b0, tdo_bit);
        for (int i = 0; i < 2; i++) jtag_tick((i == 1), ir[i], tdo_bit);   // Exit1-IR
        jtag_tick(1'b0, 1'b0, tdo_bit);   // Pause-IR
        jtag_tick(1'b0, 1'b0, tdo_bit);   // Pause-IR (bekle)
        jtag_tick(1'b1, 1'b0, tdo_bit);   // Exit2-IR
        jtag_tick(1'b0, 1'b0, tdo_bit);   // Shift-IR
        for (int i = 2; i < 5; i++) jtag_tick((i == 4), ir[i], tdo_bit);
        jtag_tick(1'b1, 1'b0, tdo_bit);   // Update-IR
        jtag_tick(1'b0, 1'b0, tdo_bit);   // Idle
    endtask

    // Update-DR -> Select-DR: Run-Test/Idle'ye ugramadan ardisik iki tarama (G-11)
    task automatic dr_shift_back2back(input int n, output logic [63:0] d1, output logic [63:0] d2);
        d1 = '0; d2 = '0;
        jtag_tick(1'b1, 1'b0, tdo_bit); jtag_tick(1'b0, 1'b0, tdo_bit); jtag_tick(1'b0, 1'b0, tdo_bit);
        for (int i = 0; i < n; i++) begin jtag_tick((i == n-1), 1'b0, tdo_bit); d1[i] = tdo_bit; end
        jtag_tick(1'b1, 1'b0, tdo_bit);   // Update-DR
        jtag_tick(1'b1, 1'b0, tdo_bit);   // Select-DR (Idle YOK)
        jtag_tick(1'b0, 1'b0, tdo_bit);   // Capture-DR
        jtag_tick(1'b0, 1'b0, tdo_bit);   // Shift-DR
        for (int i = 0; i < n; i++) begin jtag_tick((i == n-1), 1'b0, tdo_bit); d2[i] = tdo_bit; end
        jtag_tick(1'b1, 1'b0, tdo_bit);   // Update-DR
        jtag_tick(1'b0, 1'b0, tdo_bit);   // Idle
    endtask

    // Trafik ortasinda 5x TMS=1 -> Test-Logic-Reset -> Idle (G-11)
    task automatic tap_tlr_only();
        for (int i = 0; i < 5; i++) jtag_tick(1'b1, 1'b0, tdo_bit);
        jtag_tick(1'b0, 1'b0, tdo_bit);
    endtask

    // ---- halt/resume yardimcilari (yeni asamalar icin) ----
    task automatic halt_core(output logic ok, output logic [31:0] st);
        int n;
        dmi_write(DM_DMCONTROL, 32'h8000_0001);          // haltreq | dmactive
        n = 0;
        do begin dmi_read(DM_DMSTATUS, st); n++; end while (!st[9] && n < 50);
        ok = st[9];
    endtask

    task automatic resume_core(output logic ok, output logic [31:0] st);
        int n;
        dmi_write(DM_DMCONTROL, 32'h4000_0001);          // resumereq | dmactive
        n = 0;
        do begin dmi_read(DM_DMSTATUS, st); n++; end while (!(st[17] && st[11]) && n < 50);
        dmi_write(DM_DMCONTROL, 32'h0000_0001);
        ok = st[17] && st[11];
    endtask

    // Abstract komutu kos ve cmderr'i TEMIZLEMEDEN dondur (G-02/G-03)
    task automatic cmd_status(input logic [31:0] cmd, output logic [2:0] cmderr,
                              output logic busy_stuck);
        logic [31:0] acs_l;
        int n;
        dmi_write(DM_COMMAND, cmd);
        n = 0;
        do begin dmi_read(DM_ABSTRACTCS, acs_l); n++; end while (acs_l[12] && n < 200);
        busy_stuck = acs_l[12];
        cmderr     = acs_l[10:8];
    endtask

    task automatic cmderr_clear(output logic [2:0] cmderr_after);
        logic [31:0] acs_l;
        dmi_write(DM_ABSTRACTCS, 32'h0000_0700);         // cmderr W1C
        dmi_read (DM_ABSTRACTCS, acs_l);
        cmderr_after = acs_l[10:8];
    endtask

    // progbuf0..3 yaz (G-01/G-04 cok buyruklu diziler)
    task automatic progbuf4_write(input logic [31:0] i0, input logic [31:0] i1,
                                  input logic [31:0] i2, input logic [31:0] i3);
        dmi_write(DM_PROGBUF0, i0);
        dmi_write(DM_PROGBUF1, i1);
        dmi_write(DM_PROGBUF2, i2);
        dmi_write(DM_PROGBUF3, i3);
    endtask

    // progbuf ile 32-bit bellek yaz/oku (x10=adres, x11=veri, x12=okunan) (G-04/G-10)
    task automatic mem_write32(input logic [31:0] addr, input logic [31:0] val, output logic ok);
        logic ok1, ok2, ok3;
        reg_write(REG_X10, addr, ok1);
        reg_write(REG_X11, val,  ok2);
        progbuf_exec(INSN_SW_X11_X10, INSN_EBREAK, ok3);
        ok = ok1 && ok2 && ok3;
    endtask

    task automatic mem_read32(input logic [31:0] addr, output logic [31:0] val, output logic ok);
        logic ok1, ok2, ok3;
        reg_write(REG_X10, addr, ok1);
        progbuf_exec(INSN_LW_X12_X10, INSN_EBREAK, ok2);
        reg_read (REG_X12, val, ok3);
        ok = ok1 && ok2 && ok3;
    endtask

    // ---------------- Test ----------------
    string       received = "", received2 = "";
    logic [7:0]  ch, ch2;
    logic [31:0] idcode, dtmcs, dmstatus, acs, rd, dpc;
    logic [31:0] dpc_a, dpc_b, dcsr, tdata1;
    logic        ok, ok_all, rst_low;
    int          stage_ok = 0;
    int          polls;
    // asama 10-17 degiskenleri
    logic [31:0] rd2, dtmcs2, sbcs_v, dmc_v, hinfo_v;
    logic [31:0] data_raw, dpc0, dpc_cur, base_addr, orig_w, isram_rd;
    logic [31:0] orig4 [0:3];
    logic [1:0]  op_raw;
    logic [6:0]  addr_raw;
    logic [2:0]  cmderr_v, cmderr_after;
    logic        busy_stuck;
    logic [4:0]  ir_cap;
    logic [63:0] d1, d2;
    int          base_idx, exc0;

    // progbuf bellek testi: DSRAM 0x0002_1000 (firmware .data/yigin disinda)
    localparam logic [31:0] TEST_ADDR = 32'h0002_1000;
    localparam logic [31:0] TEST_VAL  = 32'hCAFE_F00D;
    localparam int          TEST_IDX  = 32'h1000 / 4;

    initial begin
        wait (resetn === 1'b1); @(posedge clk);
        $display("[%0t] === JTAG SMOKE: soc_top + riscv-dbg (JTAG_DEBUG) ===", $time);

        // 1) UART altin dize
        for (int i = 0; i < 28; i++) begin
            uart_read(ch);
            received = {received, string'(ch)};
        end
        if (received == "Hello World from BLogic MCU!") begin
            $display("[%0t] [1/%0d] UART OK: '%s'", $time, NSTAGE, received); stage_ok++;
        end else $error("[1/%0d] UART FAIL: '%s'", NSTAGE, received);

        // 2) IDCODE
        tap_reset();
        dr_shift(32, 64'd0, dr_out);
        idcode = dr_out[31:0];
        if (idcode == EXP_IDCODE) begin
            $display("[%0t] [2/%0d] IDCODE OK: 0x%08h", $time, NSTAGE, idcode); stage_ok++;
        end else $error("[2/%0d] IDCODE FAIL: 0x%08h (beklenen 0x%08h)", NSTAGE, idcode, EXP_IDCODE);

        // 3) DTMCS
        ir_write(IR_DTMCS);
        dr_shift(32, 64'd0, dr_out);
        dtmcs = dr_out[31:0];
        if ((dtmcs[3:0] == 4'd1) && (dtmcs[9:4] == 6'd7)) begin
            $display("[%0t] [3/%0d] DTMCS OK: 0x%08h (version=%0d abits=%0d)", $time, NSTAGE, dtmcs, dtmcs[3:0], dtmcs[9:4]); stage_ok++;
        end else $error("[3/%0d] DTMCS FAIL: 0x%08h", NSTAGE, dtmcs);

        // 4) DMI -> DM: dmactive, dmstatus.version
        ir_write(IR_DMI);
        dmi_write(DM_DMCONTROL, 32'h0000_0001);
        dmi_read(DM_DMSTATUS, dmstatus);
        if (dmstatus[3:0] == 4'd2) begin
            $display("[%0t] [4/%0d] DMSTATUS OK: 0x%08h (version=%0d)", $time, NSTAGE, dmstatus, dmstatus[3:0]); stage_ok++;
        end else $error("[4/%0d] DMSTATUS FAIL: 0x%08h", NSTAGE, dmstatus);

        // 5) halt (DM bayragi + cekirdek gozlemi)
        dmi_write(DM_DMCONTROL, 32'h8000_0001);          // haltreq | dmactive
        polls = 0;
        do begin
            dmi_read(DM_DMSTATUS, dmstatus);
            polls++;
        end while (!dmstatus[9] && polls < 50);          // allhalted
        if (dmstatus[9] && (dut.i_cpu.core_i.debug_halted_o === 1'b1)) begin
            $display("[%0t] [5/%0d] HALT OK: dmstatus=0x%08h, %0d poll, core debug_halted_o=1",
                     $time, NSTAGE, dmstatus, polls); stage_ok++;
        end else $error("[5/%0d] HALT FAIL: dmstatus=0x%08h core_halted=%0b", NSTAGE, dmstatus,
                        dut.i_cpu.core_i.debug_halted_o);

        // 6) abstract command + progbuf (halt'tayken)
        ok_all = 1'b1;
        reg_write(REG_X10, 32'hA5A5_5A5A, ok); ok_all &= ok;
        reg_read (REG_X10, rd, ok);            ok_all &= ok;
        if (rd !== 32'hA5A5_5A5A) begin ok_all = 1'b0; $display("      x10 round-trip: 0x%08h", rd); end
        else $display("[%0t]       x10 yaz/oku round-trip OK (0x%08h)", $time, rd);

        reg_write(REG_X10, TEST_ADDR, ok);     ok_all &= ok;
        reg_write(REG_X11, TEST_VAL,  ok);     ok_all &= ok;
        progbuf_exec(INSN_SW_X11_X10, INSN_EBREAK, ok); ok_all &= ok;
        if (dut.i_data_sram.mem[TEST_IDX] !== TEST_VAL) begin
            ok_all = 1'b0;
            $display("      progbuf sw: DSRAM[0x%08h]=0x%08h (beklenen 0x%08h)", TEST_ADDR,
                     dut.i_data_sram.mem[TEST_IDX], TEST_VAL);
        end else $display("[%0t]       progbuf sw -> DSRAM[0x%08h]=0x%08h OK", $time, TEST_ADDR, TEST_VAL);

        reg_write(REG_X12, 32'd0, ok);         ok_all &= ok;
        progbuf_exec(INSN_LW_X12_X10, INSN_EBREAK, ok); ok_all &= ok;
        reg_read (REG_X12, rd, ok);            ok_all &= ok;
        if (rd !== TEST_VAL) begin ok_all = 1'b0; $display("      progbuf lw: x12=0x%08h", rd); end
        else $display("[%0t]       progbuf lw -> x12=0x%08h OK", $time, rd);

        reg_read (REG_DPC, dpc, ok);           ok_all &= ok;
        if (dpc[31:16] !== 16'h0001) begin ok_all = 1'b0; $display("      dpc=0x%08h firmware disinda", dpc); end
        else $display("[%0t]       dpc=0x%08h (firmware bolgesi) OK", $time, dpc);

        if (ok_all) begin
            $display("[%0t] [6/%0d] ABSTRACT/PROGBUF OK", $time, NSTAGE); stage_ok++;
        end else $error("[6/%0d] ABSTRACT/PROGBUF FAIL", NSTAGE);

        // 7) resume (DM bayraklari + cekirdek gozlemi + cmderr)
        dmi_write(DM_DMCONTROL, 32'h4000_0001);          // resumereq | dmactive
        polls = 0;
        do begin
            dmi_read(DM_DMSTATUS, dmstatus);
            polls++;
        end while (!(dmstatus[17] && dmstatus[11]) && polls < 50);  // allresumeack && allrunning
        dmi_write(DM_DMCONTROL, 32'h0000_0001);          // resumereq temizle
        repeat (20) @(posedge clk);
        dmi_read(DM_ABSTRACTCS, acs);
        if (dmstatus[17] && dmstatus[11] &&
            (dut.i_cpu.core_i.debug_running_o === 1'b1) &&
            (dut.i_cpu.core_i.pc_id[31:16] == 16'h0001) && (acs[10:8] == 3'd0)) begin
            $display("[%0t] [7/%0d] RESUME OK: dmstatus=0x%08h, core running, pc_id=0x%08h, cmderr=0",
                     $time, NSTAGE, dmstatus, dut.i_cpu.core_i.pc_id); stage_ok++;
        end else $error("[7/%0d] RESUME FAIL: dmstatus=0x%08h running=%0b pc_id=0x%08h abstractcs=0x%08h",
                        NSTAGE, dmstatus, dut.i_cpu.core_i.debug_running_o, dut.i_cpu.core_i.pc_id, acs);

        // 8) tek adim + donanim tetikleyici (execute-adres kesme noktasi)
        ok_all = 1'b1;
        dmi_write(DM_DMCONTROL, 32'h8000_0001);          // haltreq | dmactive
        polls = 0;
        do begin
            dmi_read(DM_DMSTATUS, dmstatus);
            polls++;
        end while (!dmstatus[9] && polls < 50);          // allhalted
        if (!dmstatus[9]) begin ok_all = 1'b0; $display("      halt: dmstatus=0x%08h", dmstatus); end
        reg_read(REG_DPC, dpc_a, ok);          ok_all &= ok;
        if (dpc_a[31:16] !== 16'h0001) begin ok_all = 1'b0; $display("      dpc A=0x%08h firmware disinda", dpc_a); end
        else $display("[%0t]       halt: dpc A=0x%08h (%0d poll)", $time, dpc_a, polls);

        // tek adim: dcsr.step=1, resumereq (haltreq=0!) -> bir buyruk -> tekrar debug
        reg_read (REG_DCSR, dcsr, ok);             ok_all &= ok;
        reg_write(REG_DCSR, dcsr | DCSR_STEP, ok); ok_all &= ok;
        dmi_write(DM_DMCONTROL, 32'h4000_0001);          // resumereq | dmactive
        polls = 0;
        do begin
            dmi_read(DM_DMSTATUS, dmstatus);
            polls++;
        end while (!(dmstatus[17] && dmstatus[9]) && polls < 50);   // allresumeack && allhalted (yeniden)
        dmi_write(DM_DMCONTROL, 32'h0000_0001);
        reg_read(REG_DPC,  dpc_b, ok);         ok_all &= ok;
        reg_read(REG_DCSR, dcsr,  ok);         ok_all &= ok;
        if (!(dmstatus[17] && dmstatus[9]) || (dpc_b == dpc_a) || (dcsr[8:6] != CAUSE_STEP)) begin
            ok_all = 1'b0;
            $display("      step: dmstatus=0x%08h dpc B=0x%08h dcsr=0x%08h (cause=%0d, beklenen %0d)",
                     dmstatus, dpc_b, dcsr, dcsr[8:6], CAUSE_STEP);
        end else $display("[%0t]       step: dpc A=0x%08h -> B=0x%08h, dcsr=0x%08h cause=%0d (step), %0d poll OK",
                          $time, dpc_a, dpc_b, dcsr, dcsr[8:6], polls);
        reg_write(REG_DCSR, dcsr & ~DCSR_STEP, ok); ok_all &= ok;   // step temizle

        // donanim tetikleyici: tdata2=A, tdata1 execute; resume -> bosta dongusu A'ya doner
        reg_write(REG_TSELECT, 32'd0,       ok); ok_all &= ok;
        reg_write(REG_TDATA2,  dpc_a,       ok); ok_all &= ok;
        reg_write(REG_TDATA1,  TDATA1_EXEC, ok); ok_all &= ok;
        reg_read (REG_TDATA1,  tdata1,      ok); ok_all &= ok;
        if (!tdata1[2] || (tdata1[31:28] != 4'd2)) begin
            ok_all = 1'b0; $display("      tdata1 geri okuma=0x%08h (execute/type beklenmiyor)", tdata1);
        end else $display("[%0t]       trigger kur: tselect=0 tdata2=0x%08h tdata1=0x%08h (type=%0d dmode=%0d action=%0d execute=1) OK",
                          $time, dpc_a, tdata1, tdata1[31:28], tdata1[27], tdata1[15:12]);
        dmi_write(DM_DMCONTROL, 32'h4000_0001);          // resumereq | dmactive
        polls = 0;
        do begin
            dmi_read(DM_DMSTATUS, dmstatus);
            polls++;
        end while (!(dmstatus[17] && dmstatus[9]) && polls < 50);   // allresumeack && allhalted (tetik)
        dmi_write(DM_DMCONTROL, 32'h0000_0001);
        reg_read(REG_DPC,  dpc,  ok);          ok_all &= ok;
        reg_read(REG_DCSR, dcsr, ok);          ok_all &= ok;
        if (!(dmstatus[17] && dmstatus[9]) || (dpc !== dpc_a) || (dcsr[8:6] != CAUSE_TRIGGER) ||
            (dut.i_cpu.core_i.debug_halted_o !== 1'b1)) begin
            ok_all = 1'b0;
            $display("      trigger: dmstatus=0x%08h dpc=0x%08h (A=0x%08h) dcsr=0x%08h (cause=%0d, beklenen %0d) core_halted=%0b",
                     dmstatus, dpc, dpc_a, dcsr, dcsr[8:6], CAUSE_TRIGGER, dut.i_cpu.core_i.debug_halted_o);
        end else $display("[%0t]       trigger hit: dpc=0x%08h == A, dcsr=0x%08h cause=%0d (trigger), core debug_halted_o=1, %0d poll OK",
                          $time, dpc, dcsr, dcsr[8:6], polls);
        reg_write(REG_TDATA1, 32'd0,  ok);     ok_all &= ok;      // tetikleyiciyi kapat
        reg_read (REG_TDATA1, tdata1, ok);     ok_all &= ok;
        if (tdata1[2]) begin ok_all = 1'b0; $display("      tdata1 kapatilamadi: 0x%08h", tdata1); end
        else $display("[%0t]       trigger kapat: tdata1=0x%08h (execute=0)", $time, tdata1);

        if (ok_all) begin
            $display("[%0t] [8/%0d] STEP/TRIGGER OK: A=0x%08h step->B=0x%08h, trigger@A -> dpc=0x%08h cause=2",
                     $time, NSTAGE, dpc_a, dpc_b, dpc); stage_ok++;
        end else $error("[8/%0d] STEP/TRIGGER FAIL", NSTAGE);

        // 9) ndmreset: DM ayakta kalir, SoC resetlenir; haltreq ile reset vektorunde durur
        ok_all = 1'b1;
        // on kosul: DM resetinden kalan havereset=1 bayragini temizle ki ndmreset sonrasi 1 olmasi anlamli olsun
        dmi_write(DM_DMCONTROL, 32'h9000_0001);          // ackhavereset | haltreq | dmactive
        dmi_read(DM_DMSTATUS, dmstatus);
        if (dmstatus[19]) begin ok_all = 1'b0; $display("      on kosul: allhavereset temizlenemedi dmstatus=0x%08h", dmstatus); end
        else $display("[%0t]       on kosul: ackhavereset -> allhavereset=0 (dmstatus=0x%08h)", $time, dmstatus);

        dmi_write(DM_DMCONTROL, 32'h8000_0003);          // haltreq | ndmreset | dmactive
        idle_ticks(32);
        rst_low = (dut.sys_rst_n === 1'b0) && (dut.i_cpu.core_i.debug_halted_o === 1'b0);
        $display("[%0t]       ndmreset=1: sys_rst_n=%0b core debug_halted_o=%0b", $time, dut.sys_rst_n,
                 dut.i_cpu.core_i.debug_halted_o);
        if (!rst_low) begin ok_all = 1'b0; $display("      ndmreset SoC resetini dusurmedi"); end
        idle_ticks(32);
        dmi_write(DM_DMCONTROL, 32'h8000_0001);          // ndmreset birak, haltreq tut
        polls = 0;
        do begin
            dmi_read(DM_DMSTATUS, dmstatus);
            polls++;
        end while (!dmstatus[9] && polls < 50);          // allhalted (reset sonrasi yeniden)
        if (!(dmstatus[9] && dmstatus[19] && (dut.sys_rst_n === 1'b1) &&
              (dut.i_cpu.core_i.debug_halted_o === 1'b1))) begin
            ok_all = 1'b0;
            $display("      reset-halt: dmstatus=0x%08h (allhalted=%0b allhavereset=%0b) sys_rst_n=%0b core_halted=%0b",
                     dmstatus, dmstatus[9], dmstatus[19], dut.sys_rst_n, dut.i_cpu.core_i.debug_halted_o);
        end else $display("[%0t]       reset-halt: dmstatus=0x%08h allhalted=1 allhavereset=1 anyhavereset=%0b (%0d poll), core debug_halted_o=1",
                          $time, dmstatus, dmstatus[18], polls);
        dmi_write(DM_DMCONTROL, 32'h9000_0001);          // ackhavereset | haltreq | dmactive
        dmi_read(DM_DMSTATUS, dmstatus);
        if (dmstatus[19] || !dmstatus[9]) begin ok_all = 1'b0; $display("      ackhavereset: dmstatus=0x%08h", dmstatus); end
        else $display("[%0t]       ackhavereset -> dmstatus=0x%08h (allhavereset=0, allhalted=1)", $time, dmstatus);
        reg_read(REG_DPC,  dpc,  ok);          ok_all &= ok;
        reg_read(REG_DCSR, dcsr, ok);          ok_all &= ok;
        if ((dpc !== RESET_VEC) || (dcsr[8:6] != CAUSE_HALTREQ)) begin
            ok_all = 1'b0;
            $display("      reset-halt: dpc=0x%08h (beklenen 0x%08h) dcsr=0x%08h (cause=%0d, beklenen %0d)",
                     dpc, RESET_VEC, dcsr, dcsr[8:6], CAUSE_HALTREQ);
        end else $display("[%0t]       reset-halt: dpc=0x%08h == BOOT_ADDR, dcsr=0x%08h cause=%0d (haltreq) OK",
                          $time, dpc, dcsr, dcsr[8:6]);

        // resume + UART altin dize IKINCI kez (firmware bastan): ilk karakter resume'dan
        // ~10 us sonra gelir, DMI yoklamasi ~12 us -> UART okuyucu paralel kosar
        received2 = "";
        fork
            begin
                for (int i = 0; i < 28; i++) begin
                    uart_read(ch2);
                    received2 = {received2, string'(ch2)};
                end
            end
            begin
                dmi_write(DM_DMCONTROL, 32'h4000_0001);  // resumereq | dmactive
                polls = 0;
                do begin
                    dmi_read(DM_DMSTATUS, dmstatus);
                    polls++;
                end while (!(dmstatus[17] && dmstatus[11]) && polls < 50);  // allresumeack && allrunning
                dmi_write(DM_DMCONTROL, 32'h0000_0001);  // resumereq temizle
                $display("[%0t]       resume: dmstatus=0x%08h (%0d poll)", $time, dmstatus, polls);
            end
        join
        repeat (20) @(posedge clk);
        if ((received2 == "Hello World from BLogic MCU!") && dmstatus[17] && dmstatus[11] &&
            (dut.i_cpu.core_i.debug_running_o === 1'b1)) begin
            $display("[%0t] [9/%0d] NDMRESET OK: firmware bastan kostu, UART '%s' (2. kez), core running",
                     $time, NSTAGE, received2); stage_ok++;
        end else if (ok_all)
            $error("[9/%0d] NDMRESET FAIL: UART '%s' dmstatus=0x%08h running=%0b", NSTAGE, received2, dmstatus,
                   dut.i_cpu.core_i.debug_running_o);
        else $error("[9/%0d] NDMRESET FAIL (ara kontrol): UART '%s' dmstatus=0x%08h", NSTAGE, received2, dmstatus);

        // ============================================================
        // 10) DMI/DTM "busy" hata yolu  [bosluk G-01]
        //     OpenOCD'nin her gun kullandigi geri-basinc mekanizmasi:
        //     DMI op=3 -> dtmcs.dmistat=3 -> dmireset/dmihardreset -> tekrar.
        //     DM tarafi: cmdbusy iken data0/command/progbuf erisimi DTM_BUSY
        //     dondurur ve abstractcs.cmderr=1 (CmdErrBusy) yapisir; W1C ile silinir.
        // ============================================================
        ok_all = 1'b1;
        halt_core(ok, dmstatus); ok_all &= ok;

        // (a) DTM seviyesi "cok hizli": istek taramasinin hemen ardindan ikinci tarama.
        //     Yanit CDC'den donmeden Capture-DR olursa dmi_jtag error_dmi_busy uretir.
        dmi_scan_raw(DM_DMSTATUS, 32'd0, 2'b01, 0, data_raw, op_raw, addr_raw);
        dmi_scan_raw(DM_DMSTATUS, 32'd0, 2'b01, 0, data_raw, op_raw, addr_raw);
        $display("[%0t]       (a) DMI cok hizli: op=%0d data=0x%08h (op=3 = DTM busy)",
                 $time, op_raw, data_raw);
        // 3 Eylul gozden gecirme: bu satir op'u yalniz BASIYORDU, denetlemiyordu
        // (op != 3 olsa da asama gecerdi). Artik kriter.
        if (op_raw !== 2'b11) begin
            ok_all = 1'b0; $display("      (a) ikinci tarama op=%0d (3 = DTM busy beklenir)", op_raw);
        end
        dtmcs_read(dtmcs2);
        if (dtmcs2[14:12] != 3'd1) begin
            ok_all = 1'b0; $display("      dtmcs.idle=%0d (1 beklenir)", dtmcs2[14:12]);
        end
        dtmcs_write(32'h0001_0000);                      // dmireset
        dtmcs_read(dtmcs2);
        if (dtmcs2[11:10] != 2'b00) begin
            ok_all = 1'b0; $display("      dmireset sonrasi dtmcs=0x%08h (dmistat=0 beklenir)", dtmcs2);
        end else
            $display("[%0t]       (a) -> dmireset: dtmcs=0x%08h dmistat=0 (temiz)", $time, dtmcs2);

        // (b) DM seviyesi: ~4100 cevrimlik progbuf dongusu ile gercek busy penceresi
        //     progbuf0: li x11,2047 / progbuf1: addi x11,x11,-1 / progbuf2: bne x11,x0,-4 / progbuf3: ebreak
        progbuf4_write(INSN_LI_X11_2047, INSN_ADDI_X11_M1, INSN_BNE_X11_M4, INSN_EBREAK);
        dmi_write(DM_COMMAND, CMD_AAR32 | CMD_POSTEXEC);   // yoklama YOK: kasten busy birak

        dmi_raw_read(DM_DATA0, data_raw, op_raw);
        if ((op_raw != 2'b11) || (data_raw !== 32'hB051_B051)) begin
            ok_all = 1'b0;
            $display("      DMI busy (data0 okuma): op=%0d data=0x%08h (3 / 0xB051B051 beklenir)", op_raw, data_raw);
        end else
            $display("[%0t]       (b) DM busy: data0 okuma -> op=3, data=0x%08h (DTM_BUSY isareti)", $time, data_raw);
        dtmcs_read(dtmcs2);
        if (dtmcs2[11:10] != 2'b11) begin
            ok_all = 1'b0; $display("      DTM yapiskan hata: dtmcs=0x%08h (dmistat=3 beklenir)", dtmcs2);
        end else
            $display("[%0t]       (b) DTM yapiskan hata: dtmcs=0x%08h dmistat=3", $time, dtmcs2);
        dtmcs_write(32'h0001_0000);                        // -> dmireset
        $display("[%0t]       (b) -> dmireset", $time);

        dmi_raw_write(DM_COMMAND, CMD_AAR32 | CMD_TRANSFER, op_raw);
        if (op_raw != 2'b11) begin ok_all = 1'b0; $display("      busy iken command yazma: op=%0d (3 beklenir)", op_raw); end
        else $display("[%0t]       (b) busy iken command yazma -> op=3", $time);
        dtmcs_write(32'h0001_0000);                        // -> dmireset

        dmi_raw_write(DM_PROGBUF0, 32'hDEAD_0001, op_raw);
        if (op_raw != 2'b11) begin ok_all = 1'b0; $display("      busy iken progbuf0 yazma: op=%0d (3 beklenir)", op_raw); end
        else $display("[%0t]       (b) busy iken progbuf0 yazma -> op=3", $time);
        dtm_reset();

        // abstractcs okumasi busy iken serbesttir: busy dusene kadar yokla
        polls = 0;
        do begin dmi_read(DM_ABSTRACTCS, acs); polls++; end while (acs[12] && polls < 200);
        if (acs[12] || (acs[10:8] != CMDERR_BUSY)) begin
            ok_all = 1'b0;
            $display("      busy sonrasi abstractcs=0x%08h (busy=%0d cmderr=%0d, 0/1 beklenir, %0d poll)",
                     acs, acs[12], acs[10:8], polls);
        end else
            $display("[%0t]       (b) dongu bitti (%0d poll): abstractcs=0x%08h cmderr=1 (CmdErrBusy)",
                     $time, polls, acs);
        cmderr_clear(cmderr_after);
        if (cmderr_after != CMDERR_NONE) begin
            ok_all = 1'b0; $display("      abstractcs W1C: cmderr=%0d (0 beklenir)", cmderr_after);
        end else $display("[%0t]       (b) abstractcs W1C -> cmderr=0", $time);
        reg_read(REG_X11, rd, ok); ok_all &= ok;
        if (rd !== 32'd0) begin ok_all = 1'b0; $display("      kurtarma: x11=0x%08h (dongu sonu 0 beklenir)", rd); end
        else $display("[%0t]       (b) kurtarma: x11=0 (progbuf dongusu tamamlandi)", $time);

        // (c) ayni senaryo, temizleme dmireset yerine dmihardreset (dtmcs bit 17)
        dmi_write(DM_COMMAND, CMD_AAR32 | CMD_POSTEXEC);
        dmi_raw_read(DM_DATA0, data_raw, op_raw);
        if (op_raw != 2'b11) begin ok_all = 1'b0; $display("      (c) busy kurulamadi: op=%0d", op_raw); end
        dtmcs_write(32'h0002_0000);                        // dmihardreset
        dtmcs_read(dtmcs2);
        if (dtmcs2[11:10] != 2'b00) begin
            ok_all = 1'b0; $display("      dmihardreset sonrasi dtmcs=0x%08h", dtmcs2);
        end else $display("[%0t]       (c) -> dmihardreset: dtmcs=0x%08h dmistat=0", $time, dtmcs2);
        polls = 0;
        do begin dmi_read(DM_ABSTRACTCS, acs); polls++; end while (acs[12] && polls < 200);
        cmderr_clear(cmderr_after);
        dmi_read(DM_DMSTATUS, dmstatus);
        if (acs[12] || (cmderr_after != CMDERR_NONE) || !dmstatus[9]) begin
            ok_all = 1'b0;
            $display("      (c) sonrasi abstractcs=0x%08h cmderr=%0d dmstatus=0x%08h", acs, cmderr_after, dmstatus);
        end else
            $display("[%0t]       (c) dmihardreset sonrasi DMI saglam: dmstatus=0x%08h allhalted=1", $time, dmstatus);

        if (ok_all) begin
            $display("[%0t] [10/%0d] DMI BUSY OK: DTM op=3 + dmistat=3 + dmireset/dmihardreset + CmdErrBusy W1C",
                     $time, NSTAGE); stage_ok++;
        end else $error("[10/%0d] DMI BUSY FAIL", NSTAGE);

        // ============================================================
        // 11) Progbuf/abstract komut ISTISNASI -> cmderr=3  [bosluk G-02]
        //     soc_top dm_exc_addr (0x0004_0810) baglantisi ve dm_mem'in
        //     ExceptionAddr (DM+0x118) yazmasi ilk kez uyarilir.
        // ============================================================
        ok_all = 1'b1;
        reg_read(REG_DPC, dpc0, ok); ok_all &= ok;
        exc0 = dm_exc_writes;
        dmi_write(DM_PROGBUF0, INSN_ILLEGAL);            // 0x00000000: illegal instruction
        dmi_write(DM_PROGBUF1, INSN_EBREAK);
        cmd_status(CMD_AAR32 | CMD_POSTEXEC, cmderr_v, busy_stuck);
        if (busy_stuck || (cmderr_v != CMDERR_EXC)) begin
            ok_all = 1'b0;
            $display("      progbuf istisnasi: cmderr=%0d busy=%0b (3 beklenir)", cmderr_v, busy_stuck);
        end else
            $display("[%0t]       progbuf illegal -> cmderr 3 (CmdErrorException)", $time);
        if (dm_exc_writes <= exc0) begin
            ok_all = 1'b0; $display("      beyaz kutu: DM+0x118 (EXCEPTION) yazmasi gozlenmedi");
        end else
            $display("[%0t]       beyaz kutu: dm_addr=0x%03h EXCEPTION yazmasi %0d kez (dm_exc_addr yolu canli)",
                     $time, DM_EXC_OFF, dm_exc_writes - exc0);
        cmderr_clear(cmderr_after); ok_all &= (cmderr_after == CMDERR_NONE);
        reg_read(REG_DPC, rd, ok); ok_all &= ok;
        dmi_read(DM_DMSTATUS, dmstatus);
        if ((rd !== dpc0) || !dmstatus[9] || (dut.i_cpu.core_i.debug_halted_o !== 1'b1)) begin
            ok_all = 1'b0;
            $display("      istisna sonrasi: dpc=0x%08h (0x%08h bekleniyor) dmstatus=0x%08h halted=%0b",
                     rd, dpc0, dmstatus, dut.i_cpu.core_i.debug_halted_o);
        end else
            $display("[%0t]       istisna dpc'yi bozmadi (0x%08h), cekirdek debug modunda kaldi", $time, rd);
        reg_read(REG_X10, rd, ok);
        if (!ok) begin ok_all = 1'b0; $display("      kurtarma: istisna sonrasi reg_read basarisiz"); end
        else $display("[%0t]       kurtarma: istisna sonrasi x10 okumasi calisiyor (0x%08h)", $time, rd);

        // varyant 1: FPU olmayan cekirdekte FPR erisimi (regno 0x1020 -> fsw) -> istisna
        cmd_status(CMD_AAR32 | CMD_TRANSFER | {16'd0, REG_F0}, cmderr_v, busy_stuck);
        $display("[%0t]       FPR f0 (regno 0x%04h): cmderr=%0d busy=%0b (FPU=0 -> 3 = istisna, NotSupported DEGIL)",
                 $time, REG_F0, cmderr_v, busy_stuck);
        if (busy_stuck || (cmderr_v != CMDERR_EXC)) ok_all = 1'b0;
        cmderr_clear(cmderr_after); ok_all &= (cmderr_after == CMDERR_NONE);

        // varyant 2: var olmayan CSR okumasi (gdb 'info all-registers' bunu yapar)
        cmd_status(CMD_AAR32 | CMD_TRANSFER | {16'd0, REG_CSR_BAD}, cmderr_v, busy_stuck);
        $display("[%0t]       var olmayan CSR (regno 0x%04h): cmderr=%0d busy=%0b (3 beklenir)",
                 $time, REG_CSR_BAD, cmderr_v, busy_stuck);
        if (busy_stuck || (cmderr_v != CMDERR_EXC)) ok_all = 1'b0;
        cmderr_clear(cmderr_after); ok_all &= (cmderr_after == CMDERR_NONE);

        if (ok_all) begin
            $display("[%0t] [11/%0d] CMDERR=3 OK: progbuf illegal + FPR + var olmayan CSR -> istisna, dm_exc_addr kanitli",
                     $time, NSTAGE); stage_ok++;
        end else $error("[11/%0d] CMDERR=3 FAIL", NSTAGE);

        // ============================================================
        // 12) cmderr=2 (NotSupported) ve cmderr=4 (HaltResume)  [bosluk G-03]
        //     OpenOCD her hedefte once aarsize=3 dener ve 2 alip 32 bite doner.
        // ============================================================
        ok_all = 1'b1;
        reg_write(REG_X10, 32'hA5A5_5A5A, ok); ok_all &= ok;

        cmd_status(CMD_AAR64 | CMD_TRANSFER | {16'd0, REG_X10}, cmderr_v, busy_stuck);
        if (busy_stuck || (cmderr_v != CMDERR_NOTSUP)) begin
            ok_all = 1'b0; $display("      aarsize=3: cmderr=%0d busy=%0b (2 beklenir)", cmderr_v, busy_stuck);
        end else $display("[%0t]       aarsize=3 (64 bit) -> cmderr 2 (NotSupported)", $time);
        cmderr_clear(cmderr_after); ok_all &= (cmderr_after == CMDERR_NONE);

        cmd_status(CMD_ACCESSMEM | CMD_AAR32 | CMD_TRANSFER, cmderr_v, busy_stuck);
        if (busy_stuck || (cmderr_v != CMDERR_NOTSUP)) begin
            ok_all = 1'b0; $display("      cmdtype=2: cmderr=%0d busy=%0b (2 beklenir)", cmderr_v, busy_stuck);
        end else $display("[%0t]       cmdtype=2 (AccessMemory) -> cmderr 2 (NotSupported)", $time);
        cmderr_clear(cmderr_after); ok_all &= (cmderr_after == CMDERR_NONE);

        cmd_status(CMD_AAR32 | CMD_TRANSFER | {16'd0, REG_RESERVED}, cmderr_v, busy_stuck);
        if (busy_stuck || (cmderr_v != CMDERR_NOTSUP)) begin
            ok_all = 1'b0; $display("      rezerve regno: cmderr=%0d busy=%0b (2 beklenir)", cmderr_v, busy_stuck);
        end else $display("[%0t]       rezerve regno 0x%04h (regno[15:14]!=0) -> cmderr 2", $time, REG_RESERVED);
        cmderr_clear(cmderr_after); ok_all &= (cmderr_after == CMDERR_NONE);

        // aarpostincrement: dm_mem'de "aarsize<MaxAar && transfer" dallari ONCE gelir,
        // bu yuzden transfer=1 iken postincrement SESSIZCE yok sayilir (belgeleme).
        cmd_status(CMD_AAR32 | CMD_TRANSFER | CMD_POSTINC | {16'd0, REG_X10}, cmderr_v, busy_stuck);
        $display("[%0t]       aarpostincrement (transfer=1): cmderr=%0d busy=%0b -> dm_mem sessizce yok sayar (belgelendi)",
                 $time, cmderr_v, busy_stuck);
        if (busy_stuck) ok_all = 1'b0;
        cmderr_clear(cmderr_after); ok_all &= (cmderr_after == CMDERR_NONE);

        reg_read(REG_X10, rd, ok); ok_all &= ok;
        if (rd !== 32'hA5A5_5A5A) begin
            ok_all = 1'b0; $display("      desteklenmeyen komutlar x10'u bozdu: 0x%08h", rd);
        end else $display("[%0t]       desteklenmeyen komutlar x10'u bozmadi (0x%08h)", $time, rd);

        // aarsize=0/1 (DESTEKLENIR, MaxAar=3): dm_mem sb/sh uretir -> data0'in
        // yalniz alt 1/2 bayti degisir. Bu, axi_dm_slave'in be_o yolunu GERCEK
        // trafikle uyarir (bugune kadar tum DM yazmalari strb=1111 idi) [G-08].
        dmi_write(DM_DATA0, 32'hFFFF_FFFF);
        cmd_status(CMD_TRANSFER | {16'd0, REG_X10}, cmderr_v, busy_stuck);   // aarsize=0 -> sb
        dmi_read(DM_DATA0, rd2);
        if (busy_stuck || (cmderr_v != CMDERR_NONE) || (rd2 !== 32'hFFFF_FF5A)) begin
            ok_all = 1'b0; $display("      aarsize=0: cmderr=%0d data0=0x%08h (0xFFFFFF5A beklenir)", cmderr_v, rd2);
        end else $display("[%0t]       aarsize=0 (sb) -> data0=0x%08h (yalniz bayt 0, be=0001)", $time, rd2);
        dmi_write(DM_DATA0, 32'hFFFF_FFFF);
        cmd_status(32'h0010_0000 | CMD_TRANSFER | {16'd0, REG_X10}, cmderr_v, busy_stuck); // aarsize=1 -> sh
        dmi_read(DM_DATA0, rd2);
        if (busy_stuck || (cmderr_v != CMDERR_NONE) || (rd2 !== 32'hFFFF_5A5A)) begin
            ok_all = 1'b0; $display("      aarsize=1: cmderr=%0d data0=0x%08h (0xFFFF5A5A beklenir)", cmderr_v, rd2);
        end else $display("[%0t]       aarsize=1 (sh) -> data0=0x%08h (alt yari, be=0011)", $time, rd2);

        // cmderr=4: cekirdek KOSARKEN abstract komut
        resume_core(ok, dmstatus); ok_all &= ok;
        cmd_status(CMD_AAR32 | CMD_TRANSFER | {16'd0, REG_X10}, cmderr_v, busy_stuck);
        if (busy_stuck || (cmderr_v != CMDERR_HALTRESUME) ||
            (dut.i_cpu.core_i.debug_running_o !== 1'b1)) begin
            ok_all = 1'b0;
            $display("      kosarken komut: cmderr=%0d busy=%0b running=%0b (4 / 0 / 1 beklenir)",
                     cmderr_v, busy_stuck, dut.i_cpu.core_i.debug_running_o);
        end else
            $display("[%0t]       kosarken abstract komut -> cmderr 4 (HaltResume), cekirdek kosmaya devam", $time);
        cmderr_clear(cmderr_after); ok_all &= (cmderr_after == CMDERR_NONE);
        halt_core(ok, dmstatus); ok_all &= ok;

        if (ok_all) begin
            $display("[%0t] [12/%0d] CMDERR=2/4 OK: aarsize=3 + AccessMemory + rezerve regno -> 2, kosarken komut -> 4, W1C",
                     $time, NSTAGE); stage_ok++;
        end else $error("[12/%0d] CMDERR=2/4 FAIL", NSTAGE);

        // ============================================================
        // 13) SBA (sbcs/sbaddress0/sbdata0) ve soc_top'un hata ile
        //     tamamlayan tie-off'u  [bosluk G-05]
        //     soc_top JTAG blogunda master_gnt=1, r_valid=req gecikmeli,
        //     r_err=1: OpenOCD SBA denerse hang yerine sberror=2 alir.
        // ============================================================
        ok_all = 1'b1;
        dmi_read(DM_SBCS, sbcs_v);
        if ((sbcs_v[31:29] != 3'd1) || !sbcs_v[2] || (sbcs_v[11:5] != 7'd32) ||
            (sbcs_v[14:12] != 3'd0) || sbcs_v[4] || sbcs_v[3]) begin
            ok_all = 1'b0;
            $display("      sbcs=0x%08h (sbversion=%0d sbasize=%0d sbaccess32=%0b sberror=%0d)",
                     sbcs_v, sbcs_v[31:29], sbcs_v[11:5], sbcs_v[2], sbcs_v[14:12]);
        end else
            $display("[%0t]       sbcs=0x%08h: sbversion=1 sbasize=32 sbaccess32=1 sbaccess64/128=0 sberror=0",
                     $time, sbcs_v);

        // 32-bit okuma denemesi: sbreadonaddr=1 + sbaccess=2, sbaddress0 yazmasi tetikler
        dmi_write(DM_SBCS, 32'h0014_0000);
        dmi_write(DM_SBADDRESS0, 32'h0002_1000);
        idle_ticks(16);
        dmi_read(DM_SBCS, sbcs_v);
        if (sbcs_v[21] || (sbcs_v[14:12] != 3'd2)) begin
            ok_all = 1'b0;
            $display("      SBA okuma: sbcs=0x%08h (sbbusy=%0b sberror=%0d, 0/2 beklenir)",
                     sbcs_v, sbcs_v[21], sbcs_v[14:12]);
        end else
            $display("[%0t]       SBA okuma -> sbbusy=0, sberror=2 (r_err tie-off; hang YOK)", $time);
        dmi_read(DM_SBDATA0, rd);                        // hang olmadigini kanitlar (op==0)
        $display("[%0t]       sbdata0 okumasi tamamlandi (0x%08h) - DMI takilmadi", $time, rd);
        dmi_write(DM_SBCS, 32'h0000_7000);               // sberror W1C
        dmi_read(DM_SBCS, sbcs_v);
        if (sbcs_v[14:12] != 3'd0) begin ok_all = 1'b0; $display("      sberror W1C: sbcs=0x%08h", sbcs_v); end
        else $display("[%0t]       sberror W1C -> sberror=0", $time);

        // sbaccess=3 (64 bit) 32-bit veri yolunda: dm_sba 'unsupported size' -> sberror=4
        dmi_write(DM_SBCS, 32'h0016_0000);               // sbreadonaddr=1, sbaccess=3
        dmi_write(DM_SBADDRESS0, 32'h0002_1000);
        idle_ticks(16);
        dmi_read(DM_SBCS, sbcs_v);
        if (sbcs_v[14:12] != 3'd4) begin
            ok_all = 1'b0; $display("      sbaccess=3: sbcs=0x%08h (sberror=4 beklenir)", sbcs_v);
        end else $display("[%0t]       sbaccess=3 (64 bit) -> sberror=4 (desteklenmeyen boyut)", $time);
        // sberror!=0 iken sbaddress0 yazmasi yok sayilir (spec) - belgeleme
        dmi_write(DM_SBADDRESS0, 32'h0002_2000);
        dmi_read(DM_SBADDRESS0, rd);
        $display("[%0t]       sberror!=0 iken sbaddress0 yazmasi: geri okuma 0x%08h (spec: yok sayilir)", $time, rd);
        dmi_write(DM_SBCS, 32'h0000_7000);               // sberror W1C

        // SBA yazma: sbdata0 yazmasi -> Write durumu -> yine r_err -> sberror=2
        dmi_write(DM_SBCS, 32'h0004_0000);               // sbaccess=2, sbreadonaddr=0
        dmi_write(DM_SBADDRESS0, 32'h0002_1000);
        dmi_write(DM_SBDATA0, 32'h5A5A_0F0F);
        idle_ticks(16);
        dmi_read(DM_SBCS, sbcs_v);
        if (sbcs_v[21] || (sbcs_v[14:12] != 3'd2)) begin
            ok_all = 1'b0; $display("      SBA yazma: sbcs=0x%08h (sberror=2 beklenir)", sbcs_v);
        end else $display("[%0t]       SBA yazma -> sberror=2 (tie-off hata ile tamamladi)", $time);
        dmi_write(DM_SBCS, 32'h0000_7000);               // sberror W1C
        dmi_read(DM_SBCS, sbcs_v);
        ok_all &= (sbcs_v[14:12] == 3'd0);

        if (ok_all) begin
            $display("[%0t] [13/%0d] SBA OK: sbcs kesfi + okuma/yazma sberror=2 + sbaccess=3 sberror=4 + W1C, hang yok",
                     $time, NSTAGE); stage_ok++;
        end else $error("[13/%0d] SBA FAIL", NSTAGE);

        // ============================================================
        // 14) DM kesif/geri-okuma yazmaclari (OpenOCD 'examine' yolu)  [bosluk G-07]
        // ============================================================
        ok_all = 1'b1;
        dmi_read(DM_DMCONTROL, dmc_v);
        if (dmc_v[0] !== 1'b1) begin ok_all = 1'b0; $display("      dmcontrol=0x%08h (dmactive=1 beklenir)", dmc_v); end
        else $display("[%0t]       dmcontrol geri okuma=0x%08h (dmactive=1)", $time, dmc_v);

        // hartsel WARL: NrHarts=1 icin hartsel maskesi tamamen sifirdir (dm_csrs:551)
        dmi_write(DM_DMCONTROL, 32'h0001_0001);          // hartsello=1 yazmayi dene
        dmi_read(DM_DMCONTROL, dmc_v);
        dmi_read(DM_DMSTATUS, dmstatus);
        if ((dmc_v[25:16] != 10'd0) || dmstatus[15] || dmstatus[14]) begin
            ok_all = 1'b0;
            $display("      hartsel WARL: dmcontrol=0x%08h dmstatus=0x%08h (hartsel 0, nonexistent 0 beklenir)",
                     dmc_v, dmstatus);
        end else
            $display("[%0t]       hartsel WARL: hartsello=1 yazildi -> geri okuma 0, dmstatus nonexistent=0 (tek hart)",
                     $time);

        // desteklenmeyen/salt-temizlenen dmcontrol bitleri yazilsa da 0 okunur:
        // hartreset(29), ackhavereset(28), hasel(26), setresethaltreq(3), clrresethaltreq(2)
        dmi_write(DM_DMCONTROL, 32'h3400_000D);
        dmi_read (DM_DMCONTROL, dmc_v);
        if (dmc_v[29] || dmc_v[28] || dmc_v[26] || dmc_v[3] || dmc_v[2]) begin
            ok_all = 1'b0; $display("      dmcontrol WARL bitleri: 0x%08h", dmc_v);
        end else
            $display("[%0t]       dmcontrol WARL: hartreset/ackhavereset/hasel/set+clrresethaltreq -> 0 (0x%08h)",
                     $time, dmc_v);
        dmi_write(DM_DMCONTROL, 32'h8000_0001);          // haltreq | dmactive
        dmi_read (DM_DMSTATUS, dmstatus);
        if (!dmstatus[9]) begin ok_all = 1'b0; $display("      WARL testleri sonrasi halt kayboldu: 0x%08h", dmstatus); end

        // hartinfo: soc_top DM_HARTINFO ile dm_mem DataAddr tutarliligi
        dmi_read(DM_HARTINFO, hinfo_v);
        if (hinfo_v !== 32'h0021_2380) begin
            ok_all = 1'b0; $display("      hartinfo=0x%08h (0x00212380 beklenir)", hinfo_v);
        end else
            $display("[%0t]       hartinfo=0x%08h: nscratch=2 dataaccess=1 datasize=2 dataaddr=0x380",
                     $time, hinfo_v);

        dmi_read(DM_ABSTRACTCS, acs);
        if ((acs[3:0] != 4'd2) || (acs[28:24] != 5'd8)) begin
            ok_all = 1'b0; $display("      abstractcs=0x%08h (datacount=2 progbufsize=8 beklenir)", acs);
        end else $display("[%0t]       abstractcs=0x%08h: datacount=2 progbufsize=8", $time, acs);

        // haltsum0..3 (halt'ta bit0=1), nextdm, abstractauto, command okumasi
        dmi_read(DM_HALTSUM0, rd);   ok_all &= rd[0];
        dmi_read(DM_HALTSUM1, rd2);  ok_all &= rd2[0];
        dmi_read(DM_HALTSUM2, rd);   ok_all &= rd[0];
        dmi_read(DM_HALTSUM3, rd2);  ok_all &= rd2[0];
        $display("[%0t]       haltsum0..3 bit0=1 (hart halt'ta)", $time);
        dmi_read(DM_NEXTDM, rd);        ok_all &= (rd == 32'd0);
        dmi_read(DM_ABSTRACTAUTO, rd2); ok_all &= (rd2 == 32'd0);
        dmi_read(DM_COMMAND, rd);       ok_all &= (rd == 32'd0);
        $display("[%0t]       nextdm=0, abstractauto=0, command okumasi=0", $time);

        // tanimsiz DMI adresleri: op==0 ve veri 0 (hata yok, sessiz)
        dmi_read(DM_HAWINDOWSEL, rd);  ok_all &= (rd == 32'd0);
        dmi_read(DM_HAWINDOW,    rd);  ok_all &= (rd == 32'd0);
        dmi_read(DM_AUTHDATA,    rd);  ok_all &= (rd == 32'd0);
        dmi_read(DM_UNDEF,       rd);  ok_all &= (rd == 32'd0);
        $display("[%0t]       tanimsiz DMI adresleri (0x14/0x15/0x30/0x7F): op=0, veri=0", $time);

        // progbuf0..7 geri okuma + progbuf8 (yok) ; data1 yaz/oku
        for (int pb = 0; pb < 8; pb++) dmi_write(7'h20 + 7'(pb), 32'h1000_0000 + 32'(pb));
        for (int pb = 0; pb < 8; pb++) begin
            dmi_read(7'h20 + 7'(pb), rd);
            if (rd !== (32'h1000_0000 + 32'(pb))) begin
                ok_all = 1'b0; $display("      progbuf%0d geri okuma=0x%08h", pb, rd);
            end
        end
        dmi_read(DM_PROGBUF8, rd);
        if (rd !== 32'd0) begin ok_all = 1'b0; $display("      progbuf8 (yok) okuma=0x%08h", rd); end
        else $display("[%0t]       progbuf0..7 yaz/oku esit; progbuf8 (ProgBufSize=8 disi) -> 0", $time);
        dmi_write(DM_DATA1, 32'h1357_9BDF);
        dmi_read (DM_DATA1, rd);
        if (rd !== 32'h1357_9BDF) begin ok_all = 1'b0; $display("      data1 geri okuma=0x%08h", rd); end
        else $display("[%0t]       data1 yaz/oku round-trip OK (0x%08h)", $time, rd);

        // DMI yanit taramasinda adres alani dr_out[40:34] istegin adresini tasir
        dmi_scan_raw(DM_DMSTATUS, 32'd0, 2'b01, 16, data_raw, op_raw, addr_raw);
        dmi_scan_raw(DM_DMSTATUS, 32'd0, 2'b00,  0, data_raw, op_raw, addr_raw);
        if (addr_raw !== DM_DMSTATUS) begin
            ok_all = 1'b0; $display("      yanit adres alani=0x%02h (0x%02h beklenir)", addr_raw, DM_DMSTATUS);
        end else $display("[%0t]       yanit adres alani dr[40:34]=0x%02h == istek adresi", $time, addr_raw);

        // dmstatus sabit bitleri
        dmi_read(DM_DMSTATUS, dmstatus);
        if (!dmstatus[7] || dmstatus[6] || dmstatus[5] || dmstatus[4] || dmstatus[13] || dmstatus[12]) begin
            ok_all = 1'b0; $display("      dmstatus sabit bitleri=0x%08h", dmstatus);
        end else
            $display("[%0t]       dmstatus=0x%08h: authenticated=1 authbusy=0 hasresethaltreq=0 unavail=0",
                     $time, dmstatus);

        // hart tarafi: tdata2 geri okuma, tselect WARL (tek tetikleyici), tinfo
        reg_read (REG_TDATA2, rd, ok);            ok_all &= ok;
        $display("[%0t]       tdata2 geri okuma=0x%08h", $time, rd);
        reg_write(REG_TSELECT, 32'd1, ok);        ok_all &= ok;
        reg_read (REG_TSELECT, rd, ok);           ok_all &= ok;
        if (rd !== 32'd0) begin ok_all = 1'b0; $display("      tselect=1 yazildi, geri okuma=0x%08h (0 beklenir)", rd); end
        else $display("[%0t]       tselect WARL: 1 yazildi -> 0 okundu (tek tetikleyici)", $time);
        reg_read (REG_TINFO, rd, ok);
        $display("[%0t]       tinfo=0x%08h (bit2 = mcontrol tipi destegi: %0b)", $time, rd, rd[2]);

        // transfer + postexec: gdb'nin "yazmac yaz + progbuf kos" kombinasyonu
        dmi_write(DM_PROGBUF0, INSN_SW_X11_X10);
        dmi_write(DM_PROGBUF1, INSN_EBREAK);
        reg_write(REG_X10, TEST_ADDR, ok);        ok_all &= ok;
        dmi_write(DM_DATA0, 32'h1234_5678);
        cmd_status(CMD_AAR32 | CMD_TRANSFER | CMD_WRITE | CMD_POSTEXEC | {16'd0, REG_X11},
                   cmderr_v, busy_stuck);
        if (busy_stuck || (cmderr_v != CMDERR_NONE) ||
            (dut.i_data_sram.mem[TEST_IDX] !== 32'h1234_5678)) begin
            ok_all = 1'b0;
            $display("      transfer+postexec: cmderr=%0d DSRAM=0x%08h", cmderr_v, dut.i_data_sram.mem[TEST_IDX]);
        end else
            $display("[%0t]       transfer+postexec: x11=0x1234_5678 yazildi ve progbuf sw ile DSRAM[0x%08h]'a kondu",
                     $time, TEST_ADDR);

        // resumereq oto-temizleme: resumeack gelince dm_csrs resumereq'i kendisi dusurur
        dmi_write(DM_DMCONTROL, 32'h4000_0001);          // resumereq | dmactive
        polls = 0;
        do begin dmi_read(DM_DMSTATUS, dmstatus); polls++; end
        while (!(dmstatus[17] && dmstatus[11]) && polls < 50);
        dmi_read(DM_DMCONTROL, dmc_v);
        if (dmc_v[30]) begin
            ok_all = 1'b0; $display("      resumereq oto-temizleme: dmcontrol=0x%08h (bit30=0 beklenir)", dmc_v);
        end else
            $display("[%0t]       resumereq oto-temizlendi: dmcontrol=0x%08h bit30=0 (%0d poll)", $time, dmc_v, polls);
        dmi_write(DM_DMCONTROL, 32'h0000_0001);
        halt_core(ok, dmstatus); ok_all &= ok;

        // haltreq + resumereq ayni anda: haltreq kazanir (halt'ta kalir)
        dmi_write(DM_DMCONTROL, 32'hC000_0001);
        idle_ticks(16);
        dmi_read(DM_DMSTATUS, dmstatus);
        dmi_write(DM_DMCONTROL, 32'h8000_0001);
        if (!dmstatus[9] || dmstatus[17]) begin
            ok_all = 1'b0; $display("      haltreq+resumereq: dmstatus=0x%08h", dmstatus);
        end else
            $display("[%0t]       haltreq+resumereq cakismasi: allhalted=1, allresumeack=0 (haltreq kazandi)", $time);

        if (ok_all) begin
            $display("[%0t] [14/%0d] DM KESIF OK: dmcontrol/hartinfo/abstractcs/haltsum/nextdm/progbuf/data1/tinfo + transfer+postexec",
                     $time, NSTAGE); stage_ok++;
        end else $error("[14/%0d] DM KESIF FAIL", NSTAGE);

        // ============================================================
        // 15) TAP seviyesi: IR capture, BYPASS/tanimsiz IR, Pause/Exit2,
        //     Idle'siz ardisik tarama, trafik ortasinda TLR ve TRST  [bosluk G-11]
        //     NOT: FPGA'da TAP dmi_bscane_tap (Xilinx BSCANE2) oldugu icin bu
        //     kapsam yalniz ASIC/sim TAP'ini (dmi_jtag_tap.sv) dogrular.
        // ============================================================
        ok_all = 1'b1;
        ir_write_cap(IR_IDCODE, ir_cap);
        if (ir_cap !== 5'b00101) begin
            ok_all = 1'b0; $display("      IR capture=0b%05b (0b00101 beklenir)", ir_cap);
        end else $display("[%0t]       IR capture=0b%05b (IEEE 1149.1: son iki bit 01)", $time, ir_cap);
        dr_shift(32, 64'd0, dr_out);
        if (dr_out[31:0] !== EXP_IDCODE) begin
            ok_all = 1'b0; $display("      acik IR_IDCODE secimi: 0x%08h", dr_out[31:0]);
        end else $display("[%0t]       acik IR_IDCODE secimi -> 0x%08h", $time, dr_out[31:0]);

        // BYPASS (0x00 / 0x1F) ve tanimsiz IR (0x0A): 1 bitlik yazmac, capture 0
        ir_write(5'h00);
        dr_shift(9, 64'h0A5, dr_out);
        if ((dr_out[8:1] !== 8'hA5) || dr_out[0]) begin
            ok_all = 1'b0; $display("      BYPASS0: dout=0x%03h", dr_out[8:0]);
        end else $display("[%0t]       IR=0x00 BYPASS: 1 bit gecikme, dout[8:1]=0xA5 dout[0]=0", $time);
        ir_write(5'h1F);
        dr_shift(9, 64'h0A5, dr_out);
        ok_all &= ((dr_out[8:1] === 8'hA5) && !dr_out[0]);
        ir_write(5'h0A);
        dr_shift(9, 64'h0A5, dr_out);
        ok_all &= ((dr_out[8:1] === 8'hA5) && !dr_out[0]);
        $display("[%0t]       IR=0x1F ve tanimsiz IR=0x0A da BYPASS'a duser (FSM default dali)", $time);

        // Pause-DR/Exit2-DR: DMI dmstatus okumasi bolunmus taramayla da dogru
        ir_write(IR_DMI);
        dr_in = {23'd0, DM_DMSTATUS, 32'd0, 2'b01};
        dr_shift_pause(DMI_BITS, dr_in, dr_out);
        idle_ticks(16);
        dr_in = {23'd0, DM_DMSTATUS, 32'd0, 2'b00};
        dr_shift_pause(DMI_BITS, dr_in, dr_out);
        if ((dr_out[1:0] !== 2'b00) || !dr_out[11]) begin
            ok_all = 1'b0; $display("      Pause-DR taramasi: op=%0d dmstatus=0x%08h", dr_out[1:0], dr_out[33:2]);
        end else
            $display("[%0t]       Pause-DR/Exit2-DR ile bolunmus DMI taramasi: op=0 dmstatus=0x%08h",
                     $time, dr_out[33:2]);

        // Pause-IR/Exit2-IR: bolunmus IR yazmasi sonrasi dtmcs dogru okunur
        ir_write_pause(IR_DTMCS);
        dr_shift(32, 64'd0, dr_out);
        if ((dr_out[3:0] !== 4'd1) || (dr_out[9:4] !== 6'd7)) begin
            ok_all = 1'b0; $display("      Pause-IR sonrasi dtmcs=0x%08h", dr_out[31:0]);
        end else $display("[%0t]       Pause-IR/Exit2-IR ile bolunmus IR yazmasi -> dtmcs=0x%08h", $time, dr_out[31:0]);

        // Idle'siz ardisik iki DR taramasi (Update-DR -> Select-DR)
        ir_write(IR_IDCODE);
        dr_shift_back2back(32, d1, d2);
        if ((d1[31:0] !== EXP_IDCODE) || (d2[31:0] !== EXP_IDCODE)) begin
            ok_all = 1'b0; $display("      Idle'siz ardisik tarama: 0x%08h / 0x%08h", d1[31:0], d2[31:0]);
        end else $display("[%0t]       Idle'siz ardisik iki tarama (Update-DR -> Select-DR) -> IDCODE x2", $time);

        // Trafik ortasinda Test-Logic-Reset (TMS): IR -> IDCODE, DTM hatasi temiz,
        // dmi_cdc clear + dm_csrs FIFO flush sonrasi DMI yeniden calisir
        ir_write(IR_DMI);
        dmi_scan_raw(DM_DMSTATUS, 32'd0, 2'b01, 0, data_raw, op_raw, addr_raw);   // istek ucusta
        tap_tlr_only();
        dr_shift(32, 64'd0, dr_out);
        if (dr_out[31:0] !== EXP_IDCODE) begin
            ok_all = 1'b0; $display("      TLR sonrasi IR: dr=0x%08h (IDCODE beklenir)", dr_out[31:0]);
        end else $display("[%0t]       trafik ortasinda TLR(TMS): IR -> IDCODE (0x%08h)", $time, dr_out[31:0]);
        ir_write(IR_DTMCS);
        dr_shift(32, 64'd0, dr_out);
        if (dr_out[11:10] !== 2'b00) begin
            ok_all = 1'b0; $display("      TLR sonrasi dtmcs=0x%08h (dmistat=0 beklenir)", dr_out[31:0]);
        end else $display("[%0t]       TLR sonrasi dtmcs=0x%08h dmistat=0 (dmi_clear yolu)", $time, dr_out[31:0]);
        ir_write(IR_DMI);
        dmi_read(DM_DMSTATUS, dmstatus);
        if (!dmstatus[9]) begin ok_all = 1'b0; $display("      TLR sonrasi DMI: dmstatus=0x%08h", dmstatus); end
        else $display("[%0t]       TLR sonrasi DMI saglam: dmstatus=0x%08h (CDC clear + FIFO flush)", $time, dmstatus);

        // Ayni senaryo jtag_trst_n darbesiyle (asenkron TAP reseti)
        dmi_scan_raw(DM_DMSTATUS, 32'd0, 2'b01, 0, data_raw, op_raw, addr_raw);
        tap_reset();
        dr_shift(32, 64'd0, dr_out);
        if (dr_out[31:0] !== EXP_IDCODE) begin
            ok_all = 1'b0; $display("      TRST sonrasi IDCODE=0x%08h", dr_out[31:0]);
        end else $display("[%0t]       trafik ortasinda TRST darbesi -> IDCODE=0x%08h", $time, dr_out[31:0]);
        ir_write(IR_DMI);
        dmi_read(DM_DMSTATUS, dmstatus);
        if (!dmstatus[9] || (dut.i_cpu.core_i.debug_halted_o !== 1'b1)) begin
            ok_all = 1'b0; $display("      TRST sonrasi DMI: dmstatus=0x%08h", dmstatus);
        end else
            $display("[%0t]       TRST sonrasi DMI saglam, cekirdek hala halt'ta (dmstatus=0x%08h)", $time, dmstatus);

        if (ok_all) begin
            $display("[%0t] [15/%0d] TAP OK: IR capture 0b00101 + BYPASS/tanimsiz IR + Pause/Exit2 + Idle'siz tarama + TLR/TRST kurtarma",
                     $time, NSTAGE); stage_ok++;
        end else $error("[15/%0d] TAP FAIL", NSTAGE);

        // ============================================================
        // 16) ISRAM'e JTAG'dan yazma + firmware ebreak ile debug girisi  [bosluk G-10]
        //     gdb 'load' / yama yolu: kod bolgesine debugger yazmasi. Okuma
        //     alias'i yuzunden geri okumayla dogrulanamaz, KOSTURARAK kanitlanir.
        // ============================================================
        ok_all = 1'b1;
        reg_read(REG_DPC, dpc_cur, ok); ok_all &= ok;
        base_addr = dpc_cur & 32'hFFFF_FFFC;             // 4-bayt hizali sozcuk
        base_idx  = int'(base_addr[12:2]);
        orig_w    = dut.i_instr_sram.mem[base_idx];
        $display("[%0t]       ISRAM yamasi: dpc=0x%08h -> hedef sozcuk 0x%08h (mem[%0d]=0x%08h)",
                 $time, dpc_cur, base_addr, base_idx, orig_w);

        mem_write32(base_addr, INSN_EBREAK, ok); ok_all &= ok;
        if (dut.i_instr_sram.mem[base_idx] !== INSN_EBREAK) begin
            ok_all = 1'b0;
            $display("      ISRAM yazma yolu: mem[%0d]=0x%08h (0x%08h beklenir)",
                     base_idx, dut.i_instr_sram.mem[base_idx], INSN_EBREAK);
        end else
            $display("[%0t]       ISRAM yazma yolu OK: mem[%0d]=0x%08h (wr_dest=11 crossbar bacagi)",
                     $time, base_idx, INSN_EBREAK);
        mem_read32(base_addr, isram_rd, ok);
        $display("[%0t]       ayni adresten okuma=0x%08h != 0x%08h -> DSRAM alias (ISRAM veri portundan OKUNAMAZ, belgelendi)",
                 $time, isram_rd, INSN_EBREAK);

        // dcsr.ebreakm: firmware'in ebreak'i debug moduna girsin (OpenOCD varsayilani)
        reg_read (REG_DCSR, dcsr, ok);                    ok_all &= ok;
        reg_write(REG_DCSR, dcsr | DCSR_EBREAKM, ok);     ok_all &= ok;
        reg_write(REG_DPC,  base_addr, ok);               ok_all &= ok;   // ebreak'ten basla
        dmi_write(DM_DMCONTROL, 32'h4000_0001);          // resumereq
        polls = 0;
        do begin dmi_read(DM_DMSTATUS, dmstatus); polls++; end
        while (!(dmstatus[17] && dmstatus[9]) && polls < 50);
        dmi_write(DM_DMCONTROL, 32'h0000_0001);
        reg_read(REG_DPC,  rd,   ok);                     ok_all &= ok;
        reg_read(REG_DCSR, dcsr, ok);                     ok_all &= ok;
        if (!(dmstatus[17] && dmstatus[9]) || (rd !== base_addr) || (dcsr[8:6] != CAUSE_EBREAK) ||
            (dut.i_cpu.core_i.debug_halted_o !== 1'b1)) begin
            ok_all = 1'b0;
            $display("      ebreak girisi: dmstatus=0x%08h dpc=0x%08h (0x%08h) dcsr=0x%08h cause=%0d (1 beklenir)",
                     dmstatus, rd, base_addr, dcsr, dcsr[8:6]);
        end else
            $display("[%0t]       firmware ebreak -> debug modu: dpc=0x%08h, dcsr.cause=%0d (ebreak), %0d poll OK",
                     $time, rd, dcsr[8:6], polls);
        reg_write(REG_DCSR, dcsr & ~DCSR_EBREAKM, ok);    ok_all &= ok;   // ebreakm temizle
        mem_write32(base_addr, orig_w, ok);               ok_all &= ok;   // ISRAM'i geri yukle
        if (dut.i_instr_sram.mem[base_idx] !== orig_w) begin
            ok_all = 1'b0; $display("      ISRAM geri yuklenemedi: mem[%0d]=0x%08h", base_idx, dut.i_instr_sram.mem[base_idx]);
        end
        reg_write(REG_DPC, dpc_cur, ok);                  ok_all &= ok;
        resume_core(ok, dmstatus);                        ok_all &= ok;
        repeat (40) @(posedge clk);
        if ((dut.i_cpu.core_i.debug_running_o !== 1'b1) || (dut.i_cpu.core_i.pc_id[31:16] !== 16'h0001)) begin
            ok_all = 1'b0;
            $display("      ISRAM geri yukleme sonrasi: running=%0b pc_id=0x%08h",
                     dut.i_cpu.core_i.debug_running_o, dut.i_cpu.core_i.pc_id);
        end else
            $display("[%0t]       ISRAM geri yuklendi, firmware normal kosuyor (pc_id=0x%08h)",
                     $time, dut.i_cpu.core_i.pc_id);
        halt_core(ok, dmstatus); ok_all &= ok;

        if (ok_all) begin
            $display("[%0t] [16/%0d] ISRAM YAZMA + EBREAK OK: kod bolgesi yamasi kosturularak kanitlandi, dcsr.ebreakm cause=1",
                     $time, NSTAGE); stage_ok++;
        end else $error("[16/%0d] ISRAM YAZMA + EBREAK FAIL", NSTAGE);

        // ============================================================
        // 17) DM bolgesi korumasiz / sessiz dekod  [bosluk G-04]
        //     (a) 0x0004_1000+ crossbar'da DM DISI -> DSRAM'e SESSIZCE yansir
        //     (b) dm_mem eslenmemis ofset okumasi BAYAT rdata_q dondurur
        //     (c) debug modu DISINDA 0x0004_0100 (HALTED) yazmasi DM'i kandirir
        //     (d) dmactive=0 -> DM tam sifirlanir, 1 ile geri gelir
        //     BILINEN SINIR: ne axi_dm_slave ne crossbar debug_mode nitelendirmesi
        //     yapar (PMP yok). Kalici duzeltme (to_dm'i debug_mode ile nitelendirme
        //     + SLVERR) bu dalin duzenleme kapsami DISI; README 10.10'a izleme
        //     maddesi olarak yazildi.
        // ============================================================
        ok_all = 1'b1;

        // (a) 4 KB pencere disi yansima: 0x0004_1000 -> DSRAM 0x0002_1000
        mem_write32(DM_ALIAS_A, 32'hBEEF_0001, ok); ok_all &= ok;
        if (dut.i_data_sram.mem[TEST_IDX] !== 32'hBEEF_0001) begin
            ok_all = 1'b0;
            $display("      yansima: DSRAM[0x%08h]=0x%08h (0xBEEF0001 beklenir)",
                     TEST_ADDR, dut.i_data_sram.mem[TEST_IDX]);
        end else
            $display("[%0t]       (a) 0x%08h yazmasi SESSIZCE DSRAM 0x%08h'a dustu (hata YOK) - bilinen sinir",
                     $time, DM_ALIAS_A, TEST_ADDR);
        mem_read32(DM_ALIAS_A, rd, ok);
        if (rd !== 32'hBEEF_0001) begin ok_all = 1'b0; $display("      yansima okumasi=0x%08h", rd); end
        else $display("[%0t]       (a) ayni adresten okuma da 0x%08h (alias okumada da gecerli)", $time, rd);

        // (b) dm_mem eslenmemis ofset: rdata_q tutulur -> bayat deger
        // NOT: mem_read32 adresi data0 uzerinden x10'a yukler, bu yuzden
        // 0x0004_0380 okumasi o anki data0 icerigini (= x10 kurulum degeri) dondurur.
        mem_read32(DM_DATA0_A,   rd,  ok);                // bellek-esli data0 (gecerli ofset)
        mem_read32(DM_UNMAPPED_A, rd2, ok);               // eslenmemis ofset
        $display("[%0t]       (b) gecerli ofset 0x%08h -> 0x%08h ; eslenmemis ofset 0x%08h -> 0x%08h",
                 $time, DM_DATA0_A, rd, DM_UNMAPPED_A, rd2);
        $display("[%0t]       (b) eslenmemis DM ofseti HATA URETMEZ: dm_mem son kayitli sozcugunu dondurur (bilinen sinir)",
                 $time);
        // KARAKTERIZASYON DENETIMI (3 Eylul gozden gecirme bulgusu): yalniz
        // $display iceren bir alt-asama HER KOSULDA gecer, yani kapi degildir.
        // OLCULEN davranis: eslenmemis ofset (DM_BASE+0x004) ne SLVERR ne de
        // sifir dondurur; dm_mem'in rdata_q'sunda o an duran sozcuk okunur ve
        // bu, abstract-command getirmesinden kalan 'ebreak' (0x0010_0073)
        // olur. Deger degisirse DM dekodu ya da erisim sirasi degismis
        // demektir -> bu denetim KASTEN FAIL verir; README 10.10'daki
        // "bilinen sinir" maddesiyle birlikte guncelleyin.
        if (rd2 !== 32'h0010_0073) begin
            ok_all = 1'b0;
            $display("      (b) BEKLENEN DEGER DEGISTI: eslenmemis ofset=0x%08h (beklenen 0x00100073 = ebreak)", rd2);
            $display("      (b) -> DM dekodu degismis olabilir (koruma/SLVERR eklendi mi?); README 10.10'u guncelleyin");
        end

        // (c) debug modu DISINDA HALTED bayragina yazma: DM'i "halted" sanmaya zorlar
        for (int w = 0; w < 4; w++) orig4[w] = dut.i_instr_sram.mem[base_idx + w];
        mem_write32(base_addr + 32'd0,  INSN_LUI_X5_40,   ok); ok_all &= ok;  // lui x5,0x40
        mem_write32(base_addr + 32'd4,  INSN_SW_X0_100X5, ok); ok_all &= ok;  // sw  x0,0x100(x5)
        mem_write32(base_addr + 32'd8,  INSN_J_SELF,      ok); ok_all &= ok;  // j   .
        mem_write32(base_addr + 32'd12, INSN_NOP_32,      ok); ok_all &= ok;
        reg_write(REG_DPC, base_addr, ok); ok_all &= ok;
        exc0 = dm_halted_writes;
        dmi_write(DM_DMCONTROL, 32'h4000_0001);          // resumereq
        repeat (1000) @(posedge clk);                    // 20 us
        dmi_write(DM_DMCONTROL, 32'h0000_0001);
        $display("[%0t]       (c) yama kosuyor: pc_id=0x%08h, DM+0x100 yazmasi=%0d, ISRAM=[%08h %08h %08h]",
                 $time, dut.i_cpu.core_i.pc_id, dm_halted_writes - exc0,
                 dut.i_instr_sram.mem[base_idx], dut.i_instr_sram.mem[base_idx+1],
                 dut.i_instr_sram.mem[base_idx+2]);
        dmi_read(DM_DMSTATUS, dmstatus);
        // KARAKTERIZASYON DENETIMI (bkz. (b)): bugunku RTL'de normal kod
        // DM'i kandirabiliyor. Bu, bilinen ve README 10.10'da yazili bir
        // sinirdir; bir kapiya baglanmadan yalniz yazdirilirsa alt-asama
        // anlamsizlasir. Koruma (to_dm'i debug_mode ile nitelendirme) eklenirse
        // burasi KASTEN FAIL verir -> testi ve README maddesini guncelleyin.
        if (dmstatus[9] && (dut.i_cpu.core_i.debug_halted_o === 1'b0)) begin
            $display("[%0t]       (c) SAHTE HALTED: dmstatus.allhalted=1 ama core debug_halted_o=0 -> normal kod DM'i kandirdi (BUGUNKU RTL: BEKLENEN, bilinen sinir)",
                     $time);
        end else begin
            ok_all = 1'b0;
            $display("      (c) SAHTE HALTED GOZLENMEDI: dmstatus=0x%08h core_halted=%0b",
                     dmstatus, dut.i_cpu.core_i.debug_halted_o);
            $display("      (c) -> DM bolgesi korumasi eklenmis olabilir; README 10.10 'bilinen sinir' maddesini ve bu asamayi guncelleyin");
        end
        // sahte halted'a komut verilirse dm_mem Go'da sonsuz busy kalir
        dmi_raw_write(DM_COMMAND, CMD_AAR32 | CMD_TRANSFER | {16'd0, REG_X10}, op_raw);
        polls = 0;
        do begin dmi_read(DM_ABSTRACTCS, acs); polls++; end while (acs[12] && polls < 50);
        if (acs[12])
            $display("[%0t]       (c) sahte halted'a komut -> abstractcs busy TAKILI (%0d poll), yalniz ndmreset kurtarir",
                     $time, polls);
        else
            $display("[%0t]       (c) abstractcs=0x%08h busy takilmadi (%0d poll)", $time, acs, polls);
        // kurtarma: ndmreset + haltreq
        dmi_write(DM_DMCONTROL, 32'h8000_0003);          // haltreq | ndmreset | dmactive
        idle_ticks(32);
        dmi_write(DM_DMCONTROL, 32'h8000_0001);
        polls = 0;
        do begin dmi_read(DM_DMSTATUS, dmstatus); polls++; end while (!dmstatus[9] && polls < 50);
        dmi_write(DM_DMCONTROL, 32'h9000_0001);          // ackhavereset | haltreq
        cmderr_clear(cmderr_after);
        if (!dmstatus[9] || (dut.i_cpu.core_i.debug_halted_o !== 1'b1)) begin
            ok_all = 1'b0;
            $display("      (c) ndmreset kurtarmasi basarisiz: dmstatus=0x%08h halted=%0b",
                     dmstatus, dut.i_cpu.core_i.debug_halted_o);
        end else
            $display("[%0t]       (c) ndmreset kurtarmasi OK: allhalted=1 && core debug_halted_o=1 (%0d poll)",
                     $time, polls);
        for (int w = 0; w < 4; w++) begin
            mem_write32(base_addr + 32'(4*w), orig4[w], ok); ok_all &= ok;
        end
        for (int w = 0; w < 4; w++) begin
            if (dut.i_instr_sram.mem[base_idx + w] !== orig4[w]) begin
                ok_all = 1'b0;
                $display("      (c) ISRAM sozcuk %0d geri yuklenemedi: 0x%08h", w, dut.i_instr_sram.mem[base_idx + w]);
            end
        end
        $display("[%0t]       (c) ISRAM 4 sozcuk geri yuklendi", $time);

        // (d) dmactive 1 -> 0 -> 1 (OpenOCD baslangicta yapar): DM tam sifirlanir
        dmi_write(DM_PROGBUF0, 32'hA5A5_A5A5);
        dmi_write(DM_DMCONTROL, 32'h0000_0000);          // dmactive=0
        dmi_read (DM_DMCONTROL, dmc_v);
        dmi_read (DM_PROGBUF0,  rd);
        dmi_read (DM_ABSTRACTCS, acs);
        if ((dmc_v !== 32'd0) || (rd !== 32'd0) || (acs[10:8] != CMDERR_NONE)) begin
            ok_all = 1'b0;
            $display("      (d) dmactive=0: dmcontrol=0x%08h progbuf0=0x%08h abstractcs=0x%08h", dmc_v, rd, acs);
        end else
            $display("[%0t]       (d) dmactive=0 -> dmcontrol=0, progbuf0=0, cmderr=0 (DM senkron reseti)", $time);
        dmi_write(DM_DMCONTROL, 32'h0000_0001);          // dmactive=1
        dmi_write(DM_DMCONTROL, 32'h8000_0003);          // haltreq | ndmreset (yeniden kesif)
        idle_ticks(32);
        dmi_write(DM_DMCONTROL, 32'h8000_0001);
        polls = 0;
        do begin dmi_read(DM_DMSTATUS, dmstatus); polls++; end while (!dmstatus[9] && polls < 50);
        dmi_write(DM_DMCONTROL, 32'h9000_0001);          // ackhavereset | haltreq
        reg_read(REG_DPC, rd, ok); ok_all &= ok;
        if (!dmstatus[9] || (dut.i_cpu.core_i.debug_halted_o !== 1'b1) || (rd !== RESET_VEC)) begin
            ok_all = 1'b0;
            $display("      (d) dmactive=1 sonrasi: dmstatus=0x%08h halted=%0b dpc=0x%08h",
                     dmstatus, dut.i_cpu.core_i.debug_halted_o, rd);
        end else
            $display("[%0t]       (d) dmactive=1 -> halt/reset yeniden calisiyor: dpc=0x%08h == BOOT_ADDR", $time, rd);

        if (ok_all) begin
            $display("[%0t] [17/%0d] DM BOLGESI OK: 0x0004_1000+ yansimasi, bayat rdata, sahte HALTED ve dmactive=0 belgelendi",
                     $time, NSTAGE); stage_ok++;
        end else $error("[17/%0d] DM BOLGESI FAIL", NSTAGE);

        if (stage_ok == NSTAGE)
            $display("[%0t] *** TEST SUCCESS *** JTAG: UART+IDCODE+DTMCS+DMI+halt+abstract/progbuf+resume+step/trigger+ndmreset+dmi-busy+cmderr2/3/4+SBA+DM-kesif+TAP+ISRAM-ebreak+DM-bolgesi (%0d/%0d)",
                     $time, stage_ok, NSTAGE);
        else
            $error("JTAG SMOKE FAIL: %0d/%0d asama gecti", stage_ok, NSTAGE);
        $finish;
    end

    initial #120_000_000 begin $error("TIMEOUT"); $finish; end
endmodule
