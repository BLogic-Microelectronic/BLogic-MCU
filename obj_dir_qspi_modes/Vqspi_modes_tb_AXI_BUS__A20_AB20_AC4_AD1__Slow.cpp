// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vqspi_modes_tb.h for the primary calling header

#include "Vqspi_modes_tb__pch.h"

void Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1___ctor_var_reset(Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);

Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1::Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1() = default;
Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1::~Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1() = default;

void Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1::ctor(Vqspi_modes_tb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1___ctor_var_reset(this);
}

void Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
