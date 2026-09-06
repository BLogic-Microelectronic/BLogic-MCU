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
# simulation time as text; "now" is a vsim command (the $now variable exists only in the GUI)
proc q_now {} { if {[catch {set t [now]}]} { return "?" }; return $t }

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
        # latch register file defines the same module as the FF one; Verilator
        # keeps the first (FF) definition, Questa the last - skip it here so
        # both simulators (and the FPGA build) use cv32e40p_register_file_ff
        if {[string match "*cv32e40p_register_file_latch.sv" $t]} { continue }
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
    set cmd [list vlog -sv -work work -timescale 1ns/1ps -suppress 2583,7061 -mfcu -cuname questa_cu]
    foreach d [dict get $t defines] { lappend cmd +define+$d }
    # file lists first: rtl/debug/jtag_files.f carries the common_cells v1.38.0
    # include directory, which must be searched BEFORE the old cv32e40p copy
    # (5-argument ASSUME macro) - same order as the Makefile
    if {[dict get $t soc]} { lappend cmd -f [q_clean_flist soc_files.f] }
    foreach f [dict get $t flists] { lappend cmd -f [q_clean_flist $f] }
    foreach i [dict get $t incdirs] { lappend cmd +incdir+$i }
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
    # transcript copy per test (the launch-directory 'transcript' is overwritten by every run)
    file mkdir [file join $QDIR logs]
    set cmd [list vsim {-voptargs=+acc -suppress 7061} -onfinish stop -suppress 3009,8386 -l [file join $QDIR logs $name.transcript]]
    # -gVERBOSE=0 silences the OpenRAM models per-access prints (asic_* tests)
    foreach a [dict get $t vsimargs] { lappend cmd $a }
    foreach p [dict get $t plusargs] { lappend cmd $p }
    lappend cmd work.[dict get $t top] work.questa_cu
    q_msg "simulate (cwd $wd): $cmd"
    eval $cmd
    set DUT [dict get $t dut]
    # Wave selection from the launcher (jury panel, "Questa waves" tab):
    #   QUESTA_WAVE_GROUPS = "UART0;QSPI"   only these -group entries of the
    #       wave file are added (dividers and ungrouped signals always stay;
    #       the 'w' proc of the wave files reads the WAVE_GROUPS global)
    #   QUESTA_WAVE_EXTRA  = "/tb/dut/a;/tb/dut/i_x/*"   added afterwards
    global WAVE_GROUPS
    set WAVE_GROUPS {}
    if {[info exists ::env(QUESTA_WAVE_GROUPS)] && $::env(QUESTA_WAVE_GROUPS) ne ""} {
        set WAVE_GROUPS [split $::env(QUESTA_WAVE_GROUPS) ";"]
        q_msg "wave groups limited to: $WAVE_GROUPS"
    }
    set wave [file join $QDIR wave [dict get $t wave].do]
    if {[batch_mode]} {
        q_msg "batch mode: wave window skipped"
    } elseif {[file exists $wave]} { do $wave } else { q_msg "no wave file $wave" }
    if {![batch_mode] && [info exists ::env(QUESTA_WAVE_EXTRA)] && $::env(QUESTA_WAVE_EXTRA) ne ""} {
        foreach s [split $::env(QUESTA_WAVE_EXTRA) ";"] {
            set s [string trim $s]
            if {$s eq ""} { continue }
            if {[catch {add wave -noupdate -radix hexadecimal $s} err]} {
                q_msg "extra wave skipped: $s ($err)"
            } else {
                q_msg "extra wave: $s"
            }
        }
    }
    q_msg "running $name ..."
    run -all
    catch {wave zoom full}
    q_msg "$name finished at [q_now] - the verdict is the SUCCESS/FAILED (or result=) line printed above"
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
