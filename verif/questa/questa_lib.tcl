# ============================================
# Ostim BLogic Mikroelektronik
# questa_lib.tcl - helpers for the Questa / ModelSim waveform flow
# ============================================
# Sourced by run_test.do. Written for Questa Sim-64 10.7c (2018.08); nothing
# newer than Tcl 8.5 is used. Layout:
#   verif/questa/tests.tcl      one entry per test (mirrors the Makefile recipe)
#   verif/questa/wave/*.do      ready-made wave windows
#   verif/questa/fw/<test>/     hex bundles produced by scripts/questa_pack.sh
#   verif/questa/work/          compiled library (created here, git-ignored)
# Every run recompiles the whole design from soc_files.f so that the defines of
# the chosen test are the ones in effect (BOOTROM_CONTENT, ASIC_SRAM_MACRO, ...).

set QDIR  [file normalize [file dirname [info script]]]
set QROOT [file normalize [file join $QDIR .. ..]]
set QLIB  [file join $QDIR work]

proc q_msg {s} { echo "\[QUESTA\] $s" }

# Questa's -f reader does not accept the '#' comment lines of a Verilator file
# list; copy the list without them (and without blank lines) into work/.
proc q_clean_flist {src} {
    global QLIB
    set out [file join $QLIB [file rootname [file tail $src]].questa.f]
    set in  [open $src r]
    set o   [open $out w]
    while {[gets $in line] >= 0} {
        set t [string trim $line]
        if {$t eq "" || [string index $t 0] eq "#"} { continue }
        puts $o $t
    }
    close $in
    close $o
    return $out
}

# Compile everything the test needs into a fresh verif/questa/work.
proc q_compile {t} {
    global QROOT QLIB
    cd $QROOT
    catch {quit -sim}
    if {[file exists $QLIB]} { catch {vdel -lib $QLIB -all} }
    if {![file exists $QLIB]} { vlib $QLIB }
    vmap work $QLIB
    # -timescale covers the vendor files that carry no `timescale directive
    # (Verilator needs -Wno-TIMESCALEMOD for the same reason).
    set cmd [list vlog -sv -work work -timescale 1ns/1ps -suppress 2583]
    foreach d [dict get $t defines] { lappend cmd +define+$d }
    foreach i [dict get $t incdirs] { lappend cmd +incdir+$i }
    if {[dict get $t soc]} { lappend cmd -f [q_clean_flist soc_files.f] }
    foreach f [dict get $t flists] { lappend cmd -f [q_clean_flist $f] }
    foreach f [dict get $t files]  { lappend cmd $f }
    q_msg "compile: $cmd"
    eval $cmd
}

# Load the simulation from the test's working directory (where the hex files
# live), open the wave window and run to the verdict. -onfinish stop keeps the
# GUI alive after $finish so the waveform can be inspected.
proc q_sim {name t} {
    global QROOT QDIR QLIB DUT
    set wd [file normalize [file join $QROOT [dict get $t workdir]]]
    if {![file isdirectory $wd]} {
        error "working directory $wd is missing - run 'make questa-pack' on the WSL/Linux side first"
    }
    cd $wd
    vmap work $QLIB
    set cmd [list vsim -voptargs=+acc -onfinish stop -suppress 3009]
    foreach p [dict get $t plusargs] { lappend cmd $p }
    lappend cmd work.[dict get $t top]
    q_msg "simulate (cwd $wd): $cmd"
    eval $cmd
    set DUT [dict get $t dut]
    set wave [file join $QDIR wave [dict get $t wave].do]
    if {[file exists $wave]} { do $wave } else { q_msg "no wave file $wave" }
    q_msg "running $name ..."
    run -all
    catch {wave zoom full}
    q_msg "$name finished at $now - look for TEST SUCCESS / TEST FAILED (or result=PASS/FAIL) in the transcript"
}

proc q_list {} {
    global QTESTS QTEST_ORDER
    echo "available tests (do run_test.do <name>):"
    foreach n $QTEST_ORDER {
        set t [dict get $QTESTS $n]
        echo [format "  %-18s top=%-20s cwd=%s" $n [dict get $t top] [dict get $t workdir]]
    }
}

proc q_run {name} {
    global QTESTS
    if {![dict exists $QTESTS $name]} {
        echo "unknown test '$name'"
        q_list
        return
    }
    set t [dict get $QTESTS $name]
    q_compile $t
    q_sim $name $t
}
