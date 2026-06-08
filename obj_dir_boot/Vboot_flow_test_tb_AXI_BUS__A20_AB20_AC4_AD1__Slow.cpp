// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vboot_flow_test_tb.h for the primary calling header

#include "Vboot_flow_test_tb__pch.h"

void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___ctor_var_reset(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);

Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1::Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1() = default;
Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1::~Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1() = default;

void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1::ctor(Vboot_flow_test_tb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___ctor_var_reset(this);
}

void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
