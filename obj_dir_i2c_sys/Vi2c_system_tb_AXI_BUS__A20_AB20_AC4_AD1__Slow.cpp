// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vi2c_system_tb.h for the primary calling header

#include "Vi2c_system_tb__pch.h"

void Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1___ctor_var_reset(Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);

Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1::Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1() = default;
Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1::~Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1() = default;

void Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1::ctor(Vi2c_system_tb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1___ctor_var_reset(this);
}

void Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
