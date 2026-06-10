// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top.h for the primary calling header

#include "Vsoc_top__pch.h"

// Parameter definitions for Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1
constexpr IData/*31:0*/ Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1::AXI_ADDR_WIDTH;
constexpr IData/*31:0*/ Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1::AXI_DATA_WIDTH;
constexpr IData/*31:0*/ Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1::AXI_ID_WIDTH;
constexpr IData/*31:0*/ Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1::AXI_USER_WIDTH;
constexpr IData/*31:0*/ Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1::AXI_STRB_WIDTH;


void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ctor_var_reset(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);

Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1::Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1() = default;
Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1::~Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1() = default;

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1::ctor(Vsoc_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ctor_var_reset(this);
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
