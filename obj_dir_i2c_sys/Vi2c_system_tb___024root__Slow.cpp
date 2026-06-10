// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vi2c_system_tb.h for the primary calling header

#include "Vi2c_system_tb__pch.h"

// Parameter definitions for Vi2c_system_tb___024root
constexpr VlUnpacked<IData/*31:0*/, 8> Vi2c_system_tb___024root::i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__M_CONV_Q31;
constexpr VlUnpacked<IData/*31:0*/, 8> Vi2c_system_tb___024root::i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__SHIFT_CONV;


void Vi2c_system_tb___024root___ctor_var_reset(Vi2c_system_tb___024root* vlSelf);

Vi2c_system_tb___024root::Vi2c_system_tb___024root(Vi2c_system_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vi2c_system_tb___024root___ctor_var_reset(this);
}

void Vi2c_system_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vi2c_system_tb___024root::~Vi2c_system_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
