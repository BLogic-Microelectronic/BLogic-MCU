// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vai_accel_tb.h for the primary calling header

#include "Vai_accel_tb__pch.h"

void Vai_accel_tb_ai_accel_tb___ctor_var_reset(Vai_accel_tb_ai_accel_tb* vlSelf);

Vai_accel_tb_ai_accel_tb::Vai_accel_tb_ai_accel_tb() = default;
Vai_accel_tb_ai_accel_tb::~Vai_accel_tb_ai_accel_tb() = default;

void Vai_accel_tb_ai_accel_tb::ctor(Vai_accel_tb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vai_accel_tb_ai_accel_tb___ctor_var_reset(this);
}

void Vai_accel_tb_ai_accel_tb::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vai_accel_tb_ai_accel_tb::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
