// ============================================
// Ostim BLogic Mikroelektronik
// jtag_smoke_tb.sv  -  riscv-dbg JTAG entegrasyonu: TAP -> DMI -> DM -> hart
// ============================================
// deneme/jtag dali, `+define+JTAG_DEBUG` ile derlenir (make jtag-sim).
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
    localparam int          NSTAGE     = 9;

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

    // ---------------- Test ----------------
    string       received = "", received2 = "";
    logic [7:0]  ch, ch2;
    logic [31:0] idcode, dtmcs, dmstatus, acs, rd, dpc;
    logic [31:0] dpc_a, dpc_b, dcsr, tdata1;
    logic        ok, ok_all, rst_low;
    int          stage_ok = 0;
    int          polls;

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

        if (stage_ok == NSTAGE)
            $display("[%0t] *** TEST SUCCESS *** JTAG: UART+IDCODE+DTMCS+DMI+halt+abstract/progbuf+resume+step/trigger+ndmreset (%0d/%0d)",
                     $time, stage_ok, NSTAGE);
        else
            $error("JTAG SMOKE FAIL: %0d/%0d asama gecti", stage_ok, NSTAGE);
        $finish;
    end

    initial #40_000_000 begin $error("TIMEOUT"); $finish; end
endmodule
