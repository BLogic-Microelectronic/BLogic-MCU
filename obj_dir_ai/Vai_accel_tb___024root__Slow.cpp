// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vai_accel_tb.h for the primary calling header

#include "Vai_accel_tb__pch.h"

void Vai_accel_tb___024root___ctor_var_reset(Vai_accel_tb___024root* vlSelf);

Vai_accel_tb___024root::Vai_accel_tb___024root(Vai_accel_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vai_accel_tb___024root___ctor_var_reset(this);
}

void Vai_accel_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vai_accel_tb___024root::~Vai_accel_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
