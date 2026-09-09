> **STATUS (6 September 2026): Option B - JTAG IS PART OF THE DELIVERED CHIP.** The
> riscv-dbg based JTAG debug subsystem (TAP + DTM/CDC + DM + the `axi_dm_slave`
> bridge) has been taken into the delivery configuration: the `JTAG_DEBUG`,
> `FC1_FIX` and `I2C_SDA_SYNC` defines are ON in `soc_files.f`, `asic/config.yaml` +
> `asic/filelist.f` and `rtl/fpga/build_genesys2.tcl`; `design.sdc` carries
> `jtag_tck` (100 ns) + the asynchronous clock group + the TAP pin budgets; the four
> CTS settings of the 3-4 September sweep are in `config.yaml`; `asic_top` has
> 21 ports. The delivered ASIC run is `RUN_hold035_2026-09-09` (VM1, commit 248069b
> plus the five hold-repair / signoff-SDC lines of `asic/README.md` 9.7; verified
> operating frequency 27.0 MHz). It supersedes `RUN_final_2026-09-06` of 6 September,
> which together with the 14 August signed run (JTAG-less RTL, 73d8dcd) is now a
> historical reference.
> The earlier "Option A" framing (behind a define, off in the delivery, an optional
> variant alongside it) was ABANDONED; the `ifdef`s remain only as the isolation
> proof (`make jtag-equiv`). Known open finding: the DM region is unprotected
> outside debug mode (documented limitation, asic/README 9.9/9). Everything below
> is the historical working log; the statements "is not merged", "asic/ is not
> touched" and "the delivered chip has no JTAG" were the rules of that period.

# deneme/jtag — Working Plan and Guard Rails

Purpose: demonstrate the riscv-dbg based JTAG debug integration on a
PROTOTYPE branch (OpenOCD halt/resume/register/memory/breakpoint demo).
The delivered chip has NO JTAG and this branch DOES NOT CHANGE that statement.

## Guard rails (must not be violated)
1. This branch IS NOT MERGED into main; not a single file leaks into the
   delivery package.
2. The `asic/` directory is not touched from this branch either (including
   config, RTL list, reports, results, checksums).
3. All runs are done on VMs; the asic flow is not run on the local machine.
4. Every RTL change is reported with its rationale in the commit message.

## Timebox (3 working days, with a go/no-go)
- Day 1: vendor riscv-dbg; `debug_req_i` + `dm_halt_addr_i` connected to
  the DM; DM slave region on the crossbar (progbuf-only, NO SBA);
  clean build + smoke sim.
- Day 2: dmi_jtag TAP simulation + halt/resume/register read over OpenOCD
  remote_bitbang. GO/NO-GO: if there is no halt/resume by the evening,
  the experiment is closed and we go back to the presentation.
- Day 3: memory access + breakpoint + demo log/screenshot; with the time
  left over, an FPGA trial (the bitstream is written ONLY with Berk's
  permission).
- Presentation gate: if the presentation is not finished by September 6,
  the experiment stops that day.

## Three separate commits proposed within the branch scope
1. JTAG integration (the go/no-go depends on this).
2. FC-1 single-line fix: during `ST_FC_FETCH_W_WAIT`, `co_re` is
   re-driven with the same address (asic/README 9.5); evidence:
   `make asic-top-sim` with the FC argmax check enabled, PASS.
3. A 2FF synchronizer on the `i2c_sda_i` input (README 9.9/3 note);
   evidence: `make i2c-sys`.

## NOT to be done on this branch
- outstanding/pipeline in obi_to_axi (the verification load blows the timebox)
- an RX FIFO on UART0 (breaks EK-2 fidelity)
- retiming for the SS corner (corner physics, not an RTL patch)
- registering io_oe (a deliberate decision rejected by measurement, 9.9/7)

## Status log

### Day 1 (September 2, 2026) - GO/NO-GO GATE PASSED EARLY
- riscv-dbg @ 21a5fbe + common_cells v1.38.0 (4 cdc files + headers) +
  tech_cells_generic v0.2.3 (tc_clk) were vendored: `rtl/debug/vendor/`,
  source/pin/license record in `rtl/debug/VENDOR.md`, file list
  `rtl/debug/jtag_files.f` (soc_files.f UNCHANGED).
- The integration is entirely under `ifdef JTAG_DEBUG`; existing behavior was
  verified without the define via `make sim` (uart_hello PASS) and
  `make lint` (clean).
  - `rtl/bus/soc_axi_interconnect.sv`: instruction (3rd AR leg + 3-way R mux)
    and data (AW/W/AR legs, wr/rd_to_dm registered flags) paths for the DM
    region 0x0004_0000; without the define the flags are constant 0.
  - `rtl/debug/axi_dm_slave.sv` (new): arbitrates the two AXI ports onto
    dm_top's single memory port (data write > data read > instruction read),
    and holds the address from the most recent request (the dm_mem selectors
    sample addr on every cycle).
  - `rtl/soc_top.sv`: jtag_tck/tms/tdi/trst_n/tdo ports, dmi_jtag + dm_top,
    debug_req_i / dm_halt_addr (0x40800) / dm_exception_addr (0x40810),
    an SBA tie-off that completes with an error (progbuf-only),
    IDCODE 0x0B1061C1.
- `make jtag-sim` (verif/tb/jtag_smoke_tb.sv, pure-SV bit-bang): the first
  version **5/5 PASS** (UART, IDCODE, DTMCS v1/abits 7, DMI->DM dmstatus v2,
  haltreq -> allhalted (1 poll) -> resumereq -> allresumeack+allrunning);
  10 protocol checkers, 0 violations. The Day-2 go/no-go criterion
  (halt/resume) was therefore met on Day 1.
- Adversarial RTL review (3 lenses, 0 blockers): bit-identity of the crossbar
  without the define was PROVEN with a `verilator -E` diff (12 lines of
  difference, all folding to constant 0). The warnings were applied:
  axi_dm_slave writes are gated by rd_pending as well, AW/W acceptance is
  atomic (ready depends on the sibling valid), 2 SVA contract checks; the
  crossbar DM window comment was corrected to 64 KB/16x alias; the file mode
  (755) was reverted.
- The TB was extended to **7 stages** (the review's warning that "the non-ROM
  DM path is never exercised"): an x10 write/read round-trip with an abstract
  command while halted, `sw` + `lw` to DSRAM 0x2_1000 via progbuf
  (x12 == what was written), dpc in the firmware region, cmderr==0; core-side
  observation of `debug_halted_o` / `debug_running_o` / `pc_id`. -> The
  WhereTo/abstract_cmd/progbuf/data0 words pass through the instruction and
  data ports, and DM<->DSRAM accesses interleave with them.
- On the same branch, as separate commits (scripts/commit_jtag_gun1.sh): the
  FC-1 fix (`make asic-top-sim` with the argmax check ON, PASS) and the
  `i2c_sda_i` 2FF synchronizer (`make i2c-sys` PASS + `i2c_soc_test` PASS;
  no A/B difference).
- DPI feasibility CONFIRMED: `import "DPI-C"` works with Verilator 5.049
  `--binary --timing` (mini test outside the repo, r=42). One condition:
  because Verilator compiles `.c` files with g++, the names get mangled
  (undefined reference) -> the vendor `remote_bitbang.c` / `sim_jtag.c` must
  be compiled through a `.cpp` that wraps them in `extern "C"`.
- Remaining (Days 2-3): the OpenOCD remote_bitbang DPI bridge (SimJTAG +
  `rtl/debug/openocd/blogic_sim.cfg` ready; the DPI smoke test passed),
  GPR/memory access via abstract command in the TB, ndmreset -> SoC reset,
  optional FPGA (bitstream only with Berk's permission). OpenOCD is not
  installed on WSL (`sudo apt install openocd`, 0.12 with RISC-V support).

### Day 2 (September 2, 2026) - OPENOCD END-TO-END DEMO PASS
- Bridge: `rtl/debug/tb/jtag_dpi.cpp` (DPI-C, extern "C") wraps the vendor
  `remote_bitbang.c`; `jtag_tick` is non-blocking (accept / recv
  MSG_DONTWAIT) -> the sim advances while OpenOCD is idle (the firmware runs,
  UART 'Hello World from BLogic MCU!' at 2.5 ms of sim time). The vendor
  `sim_jtag.c` was not taken: it busy-waits until a client connects and until
  every byte arrives.
  TB `verif/tb/jtag_openocd_tb.sv`: soc_top + SimJTAG (TCP 9999), UART decoder,
  30 s sim-time watchdog, 'Q' (shutdown) -> SimJTAG exit -> $finish.
  Build with `make jtag-openocd-build` (obj_dir_jtag_ocd/jtag_openocd_sim; the
  sim is run from inside the Mdir, the hex files come from there). Raw protocol
  probe `scripts/jtag_bitbang_probe.py` (IDCODE 0x0B1061C1 OK).
- Runner: `make jtag-openocd` -> `scripts/run_jtag_openocd.sh`: starts the sim
  in the background (builds it first if the binary is missing or older than any
  RTL / TB / firmware source - `scripts/jtag_sim_stale.sh`, added 6 September
  after a stale 2 September binary produced a `run=0` FAIL), waits for port
  9999 (<=60 s), runs
  `timeout 900 openocd -f blogic_sim.cfg -f demo_halt_regs_mem.tcl`, waits for the sim to finish by itself on 'Q'
  (<=30 s, otherwise kills it), logs to `logs/jtag/sim.log` +
  `logs/jtag/openocd.log`, VERDICT PASS/FAIL (exit 0/1). ~18 s wall clock in
  total (119 ms of sim time, ~6 ms/s).
- The OpenOCD 0.12 demo (`rtl/debug/openocd/demo_halt_regs_mem.tcl`: halt,
  register read/write, memory via progbuf, resume/halt) came out **PASS**;
  evidence log `rtl/debug/openocd/demo_run_2026-09-02.log` (a copy of
  openocd.log):
  ```
  Info : JTAG tap: blogic.cpu tap/device found: 0x0b1061c1 (mfg: 0x0e0 (Truevision), part: 0xb106, ver: 0x0)
  Info : datacount=2 progbufsize=8
  Info :  hart 0: XLEN=32, misa=0x40001104
  == DEMO: registers ==
  pc (/32): 0x0001011e
  a0 (/32): 0x00000000
  -- a0 yaz 0x12345678 --
  a0 (/32): 0x12345678
  -- a0 geri oku --
  a0 (/32): 0x12345678
  == DEMO: memory (progbuf) ==
  0x00021000: cafef00d
  0x00021000: cafef00d 11223344
  == DEMO: resume/halt ==
  pc (/32): 0x0001011c
  == DEMO: done ==
  ```
  That is: halt (cfg) -> read pc/a0 -> write a0 with an abstract command +
  read it back -> mww/mdw to DSRAM 0x2_1000 via progbuf (no SBA, cfg
  `set_mem_access progbuf`) -> resume, halt 200 ms later, pc in the uart_hello
  infinite loop (0x1011c/0x1011e) -> shutdown. The Day-3 "memory access" item
  was thus also met over OpenOCD; breakpoint and FPGA remain.
- Learned: in OpenOCD 0.12 the output of `reg`/`mdw` inside a `-f` file is
  collected as the Tcl result and DOES NOT reach the log (`-c "reg pc"` is
  printed at the top level); on the first run the markers were there but the
  values were not -> every command that produces output was wrapped in
  `echo [string trimright [reg pc]]`. ndmreset is not connected to the SoC
  reset: not "reset"/"reset halt" but "halt" (that is how the cfg and the tcl
  are written).
- Note: the exception `!rtl/debug/openocd/demo_run_*.log` was added to
  `.gitignore`; the evidence log is tracked with a plain `git add`
  (a within-branch change).
- Reproduction (WSL, repository root): `export PATH=/opt/riscv/bin:$PATH` ;
  `make jtag-openocd` (requires OpenOCD 0.12 + iproute2 `ss` + coreutils
  `timeout`). Manually: `cd obj_dir_jtag_ocd && ./jtag_openocd_sim`
  (terminal 1),
  `openocd -f rtl/debug/openocd/blogic_sim.cfg -f rtl/debug/openocd/demo_halt_regs_mem.tcl`
  (terminal 2).

### Day 3 (September 2, 2026) - NDMRESET + BREAKPOINT: TB 9/9, OPENOCD DEMO PASS
- `rtl/soc_top.sv`: system reset `sys_rst_n = rst_ni & ~ndmreset` (only under
  `ifdef JTAG_DEBUG`; without the define `sys_rst_n = rst_ni`, logic identical
  one-to-one). The core, the obi_to_axi bridges, the crossbar, axi_dm_slave,
  the AXI-Lite bridge + periph_decoder, UART0/1, GPIO, timer, QSPI, I2C
  (+2FF sync.), the AI accelerator, ai_sram_arbiter, the boot ROM, the
  ISRAM/DSRAM/AI-SRAM wrappers and the protocol checkers run on sys_rst_n;
  dm_top + dmi_jtag stay on rst_ni (otherwise the reset request would erase
  itself). ndmreset_ack_i = ndmreset_o. Result: dmcontrol.ndmreset really does
  reset the SoC, the DM/TAP stay up, the SRAM contents are preserved (only the
  wrapper registers are reset), and the firmware runs again from the reset
  vector (BOOT_ADDR 0x1_0000). `make lint` clean.
- `make jtag-sim` **9/9 PASS** (verif/tb/jtag_smoke_tb.sv, NSTAGE=9; stages
  1-7 untouched):
  ```
  [8/9] STEP/TRIGGER OK: A=0x0001011a step->B=0x0001011c, trigger@A -> dpc=0x0001011a cause=2
  [9/9] NDMRESET OK: firmware bastan kostu, UART 'Hello World from BLogic MCU!' (2. kez), core running
  *** TEST SUCCESS *** JTAG: UART+IDCODE+DTMCS+DMI+halt+abstract/progbuf+resume+step/trigger+ndmreset (9/9)
  ```
  Stage 8: dcsr.step=1 + resume -> dpc=B, dcsr cause=4; tselect=0, tdata2=A,
  write tdata1=0x2800104C (read-back 0x28001044: the u bit is WARL 0 with
  PULP_SECURE=0; the TB checks type==2 and the execute bit) -> resume ->
  dpc==A, cause=2 (trigger), debug_halted_o=1; tdata1 is turned off with
  execute=0. Stage 9: precondition ackhavereset -> allhavereset=0 (in
  riscv-dbg, havereset_q is 1 from the DM reset until the first ack; without
  it the check would have passed vacuously); ndmreset=1+haltreq=1 ->
  sys_rst_n=0, debug_halted_o=0; ndmreset=0 -> allhalted=1 allhavereset=1
  (1 poll) -> ackhavereset -> 0; dpc=0x00010000 == BOOT_ADDR, dcsr cause=3
  (haltreq); resume -> the UART greeting for the 2nd time,
  debug_running_o=1. 0 $error, protocol checkers 0 violations, sim 6 ms.
- The OpenOCD demo was extended (`rtl/debug/openocd/demo_halt_regs_mem.tcl`;
  in the cfg only a comment changed, init+halt the same):
  `== DEMO: breakpoint ==` (the pc at halt is captured with `regexp`,
  `bp <pc> 4 hw`, resume, wait_halt, pc == the bp address, rbp) and
  `== DEMO: reset halt ==` (OpenOCD writes dmcontrol ndmreset+haltreq,
  releases ndmreset while holding haltreq, waits for allhalted, ackhavereset;
  pc == the reset vector; resume 300 ms; halt; pc back in the firmware loop).
  `make jtag-openocd` **PASS** on the first run, 33 s wall clock (363 ms of
  sim time, 11 ms/s); evidence `rtl/debug/openocd/demo_run_2026-09-02.log`
  (a copy of openocd.log, overwritten):
  ```
  == DEMO: breakpoint ==
  pc (/32): 0x0001011c
  -- bp 0x0001011c 4 hw --
  Info : [blogic.cpu] Found 1 triggers
  breakpoint set at 0x0001011c
  -- resume + wait_halt (tetikleyici bekleniyor) --
  -- breakpoint: pc (bp adresi 0x0001011c beklenir) --
  pc (/32): 0x0001011c
  -- rbp 0x0001011c --
  == DEMO: reset halt ==
  -- reset halt (ndmreset + haltreq) --
  Info : JTAG tap: blogic.cpu tap/device found: 0x0b1061c1 (mfg: 0x0e0 (Truevision), part: 0xb106, ver: 0x0)
  -- reset vektoru: pc (0x00010000 beklenir) --
  pc (/32): 0x00010000
  -- resume, 300 ms kos (firmware bastan), halt --
  -- firmware yeniden kosuyor: pc (0x0001xxxx beklenir) --
  pc (/32): 0x0001011a
  == DEMO: done ==
  ```
  sim.log: `[2514870000] UART: 'Hello World from BLogic MCU!'` and, after the
  reset, `[340359790000] UART: 'Hello World from BLogic MCU!'` (2nd time; the
  UART decoder in TB `jtag_openocd_tb.sv` went 40 -> 58 characters, and the
  stale `"reset" DEGIL` (EN: NOT "reset") comment was corrected). No Error /
  "unexpectedly reset" in the log.
- OpenOCD 0.12 observation: `bp ... hw` installs the trigger through the
  tselect/tdata1 enumeration ("Found 1 triggers"); tdata1 write-then-read-back
  equality holds (no U in misa -> 0x28001044 = CV32E40P's fixed read-back
  pattern). When pc == the bp address, `resume` first disables the trigger and
  takes a single step, then re-enables it (built-in behavior; the loop
  0x1011a/1c/1e reaches the same address one iteration later).
  `reset halt`: the reset_config default is none -> TAP TLR (the IDCODE is
  found again) + dmcontrol.ndmreset; OpenOCD performs the havereset ack
  itself.
- The runner `scripts/run_jtag_openocd.sh` VERDICT has 5 criteria (a0
  0x12345678, mdw cafef00d, the bp address == the first pc after the
  breakpoint, the first pc after reset halt 0x00010000, the done marker);
  output:
  `VERDICT: PASS - a0 geri okuma 0x12345678, mdw cafef00d, hw breakpoint pc=0x0001011c == bp 0x0001011c, reset halt pc=0x00010000, '== DEMO: done =='`
- Reproduction (WSL, repository root): `export PATH=/opt/riscv/bin:$PATH` ;
  `make jtag-sim` (9/9) ; `make jtag-openocd-build` (the RTL changed:
  sys_rst_n) ; `make jtag-openocd` (PASS). The manual two-terminal flow is the
  same as on Day 2.
- Remaining: the FPGA trial (bitstream only with Berk's permission). Note: the
  "(7/7)" PASS text in the Makefile `jtag-sim` recipe and the
  `"reset" DEGIL` (EN: NOT "reset") note in the `jtag-openocd-build` comment
  have gone stale (the target bodies were not touched, only `make help` lines
  were added).

### Day 3 - addendum: hardening, coverage, test-all, synthesis-elab preparation
- Hardening: the crossbar DM window 64 KB -> 4 KB (`addr[15:12]==0`,
  0x0004_1000+ falls through to the default legs as before); the
  remote_bitbang server binds to loopback only (`jtag_dpi.cpp`: INADDR_ANY ->
  INADDR_LOOPBACK before the vendor include; `ss -ltn` -> `127.0.0.1:9999`).
  With both in place, `make jtag-sim` 9/9 and `make jtag-openocd` (bp hw +
  reset halt) PASS again; without the define `make regression` 6/6 PASS
  (sys_rst_n + the 4 KB decode did not change main's behavior).
- Coverage (`make jtag-sim TBCOV=--coverage-line`, with
  verif/jtag_cov_waivers.vlt keeping the TB out of instrumentation - Verilator
  5.049 fork/join+coverage C++ error): line coverage axi_dm_slave 35/35 100%,
  soc_axi_interconnect 78/78 100% (including the DM legs), the soc_top JTAG
  block 10/10 100%, dmi_cdc 100%, debug_rom 100%; vendor dm_mem 85%,
  dmi_jtag_tap 82%, dmi_jtag 75%, dm_csrs 57% (the multi-hart/SBA/hawindow
  paths are not used in this SoC).
- `make test-all`: `jtag-sim` always, `jtag-openocd` only if openocd is
  installed (otherwise the summary reads "SKIP (openocd yok)", EN: openocd not
  present).
- Synthesis-elab check (`scripts/jtag_elab_check.sh`): the JTAG variant of
  asic_elab.sh, SYNTHESIS + ASIC_SRAM_MACRO + JTAG_DEBUG, top soc_top, `asic/`
  read-only, output build/jtag_elab/. The yosys-slang plugin is not available
  on the local WSL -> it will be run on the VM that has the LibreLane
  environment (consistent with guard rail 3).
- The gdb demo requires gdb-multiarch (installing it needs sudo; there is no
  gdb in the /opt/riscv toolchain); OpenOCD already opens a gdb server
  on :3333.

### Day 3 - gdb (September 2, 2026) - GDB DEMO (OPENOCD :3333) PASS
- Tooling: gdb-multiarch `GNU gdb (Ubuntu 15.1-1ubuntu1~24.04.1) 15.1` +
  the OpenOCD 0.12 gdb server (blogic_sim.cfg init+halt, :3333; the cfg is
  UNCHANGED). New: `rtl/debug/openocd/demo_gdb.gdb` (gdb command file),
  `scripts/run_jtag_gdb.sh` (runner), the Makefile `jtag-gdb` target
  (+ .PHONY, help line; test-all UNTOUCHED), evidence
  `rtl/debug/openocd/demo_run_gdb_2026-09-02.log` (a copy of gdb.log, tracked
  via the `demo_run_*.log` exception in .gitignore).
- Flow (demo_gdb.gdb, every section marked `== GDB: ... ==`): set architecture
  riscv:rv32, trust-readonly-sections on, remotetimeout 120 -> target
  extended-remote :3333 -> monitor gdb_breakpoint_override hard -> monitor
  reset halt (pc 0x00010000) -> break *main + continue -> info registers pc ra
  sp a0, x/8i $pc -> delete 1 -> stepi x3 -> set {int}0x00021000 = 0x600DF00D
  + x/4xw (gdb wrote it, OpenOCD read it back via progbuf) -> set
  $a0 = 0x0BADCAFE + print/x,/z -> monitor resume / sleep 100 / halt (pc in
  the infinite loop) -> monitor shutdown ('Q' -> SimJTAG exit -> the sim
  ends). `make jtag-gdb` **PASS**, 107 s wall clock (1.18 s of sim time,
  11 ms/s; gdb/openocd/sim exit 0/0/0):
  ```
  == GDB: reset halt (pc 0x00010000 beklenir) ==
  pc             0x10000	0x10000 <_start>
  == GDB: break *main + continue (main 0x000100e8 beklenir) ==
  Breakpoint 1 at 0x100e8
  Breakpoint 1, 0x000100e8 in main ()
  pc             0x100e8	0x100e8 <main>
  ra             0x100e6	0x100e6 <hang>
  sp             0x22000	0x22000
  a0             0x0	0
  => 0x100e8 <main>:	lui	a5,0x40000
     0x100ec <main+4>:	li	a4,434
  -- ayni adres hedeften (progbuf lw): DSRAM alias, kod DEGIL --
  0x000100e8: 00000000 00000000
  == GDB: stepi x3 ==
  0x000100ec in main ()
  0x000100f0 in main ()
  0x000100f4 in main ()
  0x21000:	0x600df00d	0x00000000	0x00000000	0x00000000
  $2 = 0xbadcafe
  $3 = 0x0badcafe
  == GDB: monitor resume / sleep 100 / halt ==
  pc             0x1011e	0x1011e <main+54>
  == GDB: done ==
  ```
  sim_gdb.log: UART 'Hello World from BLogic MCU!' 2 times (the firmware starts
  over with reset halt + continue), and at the end `SimJTAG exit=1` ('Q').
  No Error in openocd_gdb.log.
- The runner VERDICT has 5 criteria (main on the Breakpoint 1 line, the next
  pc 0x0001xxxx, print/z a0 0x0badcafe, x/4xw 0x600df00d, the done marker);
  output:
  `VERDICT: PASS - 'Breakpoint 1, 0x000100e8 in main ()', pc=0x000100e8, a0 geri okuma 0x0badcafe, bellek 0x00021000 geri okuma 0x600df00d, '== GDB: done ==' (logs/jtag/gdb.log)`
- Learned (first run FAIL, second PASS):
  - build/test.elf is built without -g (Makefile.verilator RV_CFLAGS -O2) ->
    stepi + x/i instead of next/step. Without -g, `break main` slid to main+12
    (0x100f4) because of gdb's prologue heuristic; `break *main` sets it at
    the symbol address (0x100e8).
  - ISRAM (0x0001_xxxx) can ONLY be written from the data port (the crossbar
    rd_dest has no instr-SRAM option, so reads fall through to DSRAM):
    `monitor mdw 0x000100e8` returns 00000000, while the ELF has 400007b7
    (lui). Hence trust-readonly-sections on (x/i and the breakpoint kind come
    from the ELF .text) and gdb_breakpoint_override hard: a software
    breakpoint would corrupt the firmware, because it would read the "old
    instruction" from the alias and write it back into ISRAM when removing the
    breakpoint; a hardware trigger does not touch memory.
  - gdb's riscv stepi is a SOFTWARE single-step: it places a temporary
    breakpoint at the next pc and resumes (not vCont;s). CV32E40P has a single
    trigger; with bp 1 still in place, the 2nd stepi gave "Cannot insert
    breakpoint 0. Cannot access memory at address 0x100fa" / OpenOCD
    "Couldn't find an available hardware trigger" -> `delete 1` once main is
    reached, then stepi (each step uses the trigger temporarily).
  - remote_bitbang + the sim are slow: gdb's 2 s remotetimeout produced
    "Ignoring packet error, continuing..." -> `set remotetimeout 120`; OpenOCD
    still prints the "keep_alive() was not invoked in the 1000 ms timelimit"
    warning (harmless). After monitor reset halt / halt, gdb's register cache
    is stale -> `maintenance flush register-cache`. print/x does not zero-pad
    (0xbadcafe), print/z does (0x0badcafe).
  - `monitor shutdown`: OpenOCD returns ERROR_COMMAND_CLOSE_CONNECTION (-600,
    "EA8") to qRcmd, gdb says "Protocol error with Rcmd: A8." and, under
    -batch, aborts the command file (exit 1); in demo_gdb.gdb this is caught
    with a python try/except, followed by `disconnect` -> gdb exit 0, and
    OpenOCD closes on 'Q'.
- Reproduction (WSL, repository root): `export PATH=/opt/riscv/bin:$PATH` ;
  `make jtag-gdb` (requires gdb-multiarch 15.1, OpenOCD 0.12, iproute2 `ss`,
  coreutils `timeout`; if the sim binary/ELF is missing, if
  build/instr_mem.hex does not match obj_dir_jtag_ocd/firmware.hex, or if the
  binary is older than a source file (`scripts/jtag_sim_stale.sh`),
  jtag-openocd-build runs first).
  Three terminals manually: `cd obj_dir_jtag_ocd && ./jtag_openocd_sim` ;
  `openocd -f rtl/debug/openocd/blogic_sim.cfg` ;
  `gdb-multiarch -batch -x rtl/debug/openocd/demo_gdb.gdb build/test.elf`.
- Remaining: the FPGA trial (bitstream only with Berk's permission).

## Presentation framing
The JTAG entry in the requirements matrix does not change (absent /
optional / declared). On success, only a "Future Work" slide + a Q&A card:
"It is optional in the specification; we did not put it on the chip so as
not to reopen the signed-off design. We prototyped the integration on a
separate branch - the OpenOCD demo works, and its log is in the
repository. It is planned for the next revision together with the FC-1
fix."
