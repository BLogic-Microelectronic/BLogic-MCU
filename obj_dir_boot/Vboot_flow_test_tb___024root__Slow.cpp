// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vboot_flow_test_tb.h for the primary calling header

#include "Vboot_flow_test_tb__pch.h"

// Parameter definitions for Vboot_flow_test_tb___024root
constexpr VlUnpacked<IData/*31:0*/, 8> Vboot_flow_test_tb___024root::boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__M_CONV_Q31;
constexpr VlUnpacked<IData/*31:0*/, 8> Vboot_flow_test_tb___024root::boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__SHIFT_CONV;


void Vboot_flow_test_tb___024root___ctor_var_reset(Vboot_flow_test_tb___024root* vlSelf);

Vboot_flow_test_tb___024root::Vboot_flow_test_tb___024root(Vboot_flow_test_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vboot_flow_test_tb___024root___ctor_var_reset(this);
}

void Vboot_flow_test_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vboot_flow_test_tb___024root::~Vboot_flow_test_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
