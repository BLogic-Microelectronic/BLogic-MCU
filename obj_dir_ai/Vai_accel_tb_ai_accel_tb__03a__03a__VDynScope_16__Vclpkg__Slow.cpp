// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vai_accel_tb.h for the primary calling header

#include "Vai_accel_tb__pch.h"


Vai_accel_tb_ai_accel_tb__03a__03a__VDynScope_16__Vclpkg::Vai_accel_tb_ai_accel_tb__03a__03a__VDynScope_16__Vclpkg() = default;
Vai_accel_tb_ai_accel_tb__03a__03a__VDynScope_16__Vclpkg::~Vai_accel_tb_ai_accel_tb__03a__03a__VDynScope_16__Vclpkg() = default;

void Vai_accel_tb_ai_accel_tb__03a__03a__VDynScope_16__Vclpkg::ctor(Vai_accel_tb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vai_accel_tb_ai_accel_tb__03a__03a__VDynScope_16__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vai_accel_tb_ai_accel_tb__03a__03a__VDynScope_16__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
