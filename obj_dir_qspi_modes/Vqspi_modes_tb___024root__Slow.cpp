// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vqspi_modes_tb.h for the primary calling header

#include "Vqspi_modes_tb__pch.h"

// Parameter definitions for Vqspi_modes_tb___024root
constexpr VlUnpacked<IData/*31:0*/, 8> Vqspi_modes_tb___024root::qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__M_CONV_Q31;
constexpr VlUnpacked<IData/*31:0*/, 8> Vqspi_modes_tb___024root::qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__SHIFT_CONV;


void Vqspi_modes_tb___024root___ctor_var_reset(Vqspi_modes_tb___024root* vlSelf);

Vqspi_modes_tb___024root::Vqspi_modes_tb___024root(Vqspi_modes_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vqspi_modes_tb___024root___ctor_var_reset(this);
}

void Vqspi_modes_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vqspi_modes_tb___024root::~Vqspi_modes_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
