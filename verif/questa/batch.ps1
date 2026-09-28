# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# ============================================
# Ostim BLogic Mikroelektronik
# batch.ps1 - run the Questa flow headless (vsim -c) for one, several or all tests
# ============================================
# usage:  powershell -ExecutionPolicy Bypass -File verif\questa\batch.ps1            (all 21 tests)
#         powershell -ExecutionPolicy Bypass -File verif\questa\batch.ps1 jtag_sim boot
# Needs vsim on PATH (Questa Sim-64 10.7c: <install>\win64). Each test writes its
# transcript to verif\questa\logs\<test>.transcript (the flow passes -l); the
# verdict is taken from that file: "*** TEST SUCCESS ***" / "result=PASS" /
# "[ADIM E] PASS" (ai) = PASS, "*** TEST FAILED ***" / "result=FAIL" / "TIMEOUT" /
# "** Fatal" / "** Error" = FAIL. Summary: verif\questa\logs\SUMMARY.txt
param([Parameter(ValueFromRemainingArguments=$true)][string[]]$Tests)
$qdir = Split-Path -Parent $MyInvocation.MyCommand.Path
$root = Resolve-Path (Join-Path $qdir "..\..")
$logs = Join-Path $qdir "logs"
New-Item -ItemType Directory -Force $logs | Out-Null
if (-not (Get-Command vsim -ErrorAction SilentlyContinue)) {
    Write-Error "vsim not found on PATH (add <questa>\win64 first)"; exit 2
}
if (-not $Tests -or $Tests.Count -eq 0) {
    $Tests = @("uart_stp","uart_stream","jtag_bridge_sim","ai","uart_hello","uart_hello_1m","uart_hello_9600",
               "qspi_flash","uart_baud_sweep","qspi_fifo_err","timer_irq","ai_irq","uart1_strm","ai_micro_speech",
               "i2c_sys","qspi_modes","jtag_sim","boot","asic_sram_sim","asic_top_sim","ai_sw_reference")
}
$summary = Join-Path $logs "SUMMARY.txt"
"# Questa batch run $(Get-Date -Format 'yyyy-MM-dd HH:mm')  ($(vsim -version 2>&1 | Select-Object -First 1))" | Out-File -Encoding ascii $summary
$bad = 0
foreach ($t in $Tests) {
    $tr = Join-Path $logs "$t.transcript"
    Remove-Item -Force -ErrorAction SilentlyContinue $tr
    $t0 = Get-Date
    Set-Location $root
    $doArg = '-do "onerror {quit -code 1}; do verif/questa/run_test.do ' + $t + '; quit -f"'
    $p = Start-Process -FilePath "vsim" -ArgumentList @("-c", $doArg) -WorkingDirectory $root -PassThru -WindowStyle Hidden `
         -RedirectStandardOutput (Join-Path $logs "$t.stdout") -RedirectStandardError (Join-Path $logs "$t.stderr")
    if (-not $p.WaitForExit(40 * 60 * 1000)) { try { $p.Kill() } catch {}; $verdict = "TIMEOUT (40 min)" }
    else {
        $txt = if (Test-Path $tr) { Get-Content $tr -Raw } else { "" }
        $fail = ([regex]::Matches($txt, '\*\*\* TEST FAILED|result=FAIL|TIMEOUT|\*\* Fatal|\*\* Error')).Count
        $pass = ([regex]::Matches($txt, '\*\*\* TEST SUCCESS|result=PASS|\[ADIM E\] PASS')).Count
        if ($txt -eq "") { $verdict = "NO TRANSCRIPT (compile error? see $t.stdout)" }
        elseif ($fail -gt 0) { $verdict = "FAIL ($fail error/fail lines)" }
        elseif ($pass -gt 0) { $verdict = "PASS" }
        else { $verdict = "NO VERDICT STRING" }
    }
    if ($verdict -ne "PASS") { $bad++ }
    $line = "{0,-18} {1,-42} {2,5}s" -f $t, $verdict, [int]((Get-Date) - $t0).TotalSeconds
    $line | Out-File -Encoding ascii -Append $summary
    Write-Output $line
}
"# done $(Get-Date -Format 'HH:mm'): $($Tests.Count - $bad)/$($Tests.Count) PASS" | Out-File -Encoding ascii -Append $summary
Write-Output "$($Tests.Count - $bad)/$($Tests.Count) PASS  (details: $summary)"
exit $bad
