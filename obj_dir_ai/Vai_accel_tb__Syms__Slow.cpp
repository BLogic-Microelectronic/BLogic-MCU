// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vai_accel_tb__pch.h"

Vai_accel_tb__Syms::Vai_accel_tb__Syms(VerilatedContext* contextp, const char* namep, Vai_accel_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(1060);
    // Setup sub module instances
    TOP__ai_accel_tb.ctor(this, "ai_accel_tb");
    TOP__ai_accel_tb__03a__03a__VDynScope_16__Vclpkg.ctor(this, "ai_accel_tb::__VDynScope_16__Vclpkg");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__ai_accel_tb = &TOP__ai_accel_tb;
    TOP.ai_accel_tb__03a__03a__VDynScope_16__Vclpkg = &TOP__ai_accel_tb__03a__03a__VDynScope_16__Vclpkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__ai_accel_tb.__Vconfigure(true);
    TOP__ai_accel_tb__03a__03a__VDynScope_16__Vclpkg.__Vconfigure(true);
    // Setup scopes
}

Vai_accel_tb__Syms::~Vai_accel_tb__Syms() {
    // Tear down scopes
    // Tear down sub module instances
    TOP__ai_accel_tb__03a__03a__VDynScope_16__Vclpkg.dtor();
    TOP__ai_accel_tb.dtor();
}
