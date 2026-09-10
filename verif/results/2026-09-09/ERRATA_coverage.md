# Errata — `coverage_summary.txt` of 9 September 2026

The functional-coverage block of `coverage_summary.txt` in this snapshot is
**wrong** and is kept unchanged only as the historical record.

| Item | This snapshot (9 Sep) | Corrected (10 Sep, `verif/results/2026-09-10/`) |
|---|---|---|
| UART bins | 7 / 7 | **6 / 7** |
| Total functional bins | 22 / 22 | **21 / 22** |
| UART `CFG[0]` auto-clear checks | 6,694 | **6,374** (0 violations in both) |

**Cause.** The summary step of `scripts/run_coverage.sh` built the union over
every `*.log` under `logs/coverage/`, recursively. That picked up
`logs/coverage/tb/uart-stp.log`, written by `make coverage-tb`, whose block
testbench `uart_stp_tb` programs the stop-bit code `STP = 11`, and logs left
over from earlier runs. None of the 15 SoC tests of `make coverage` programs
`STP = 11` (`sw/tests/uart_stp_reg_test.c` writes 2, 1, 0;
`sw/tests/uart1_strm_test.c` writes 1, 0), so the UART bin 11 cannot come from
the SoC run. The commit that published the 9 September figures (`6f9a3b1`)
attributed the closed bin to firmware/test changes; no file under `sw/tests`
or `verif/sva` changed between the 6 and 9 September runs, so that attribution
was also wrong.

**Fix (10 September).** The script deletes `logs/coverage/*_sim.log` before
the run and reads only `logs/coverage/<test>_sim.log` for the tests of the
current run — no glob. Line and branch coverage were not affected
(90.7 % / 88.6 % in both runs).
