// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top.h for the primary calling header

#include "Vsoc_top__pch.h"

// Parameter definitions for Vsoc_top_cv32e40p_apu_core_pkg
constexpr IData/*31:0*/ Vsoc_top_cv32e40p_apu_core_pkg::APU_NARGS_CPU;
constexpr IData/*31:0*/ Vsoc_top_cv32e40p_apu_core_pkg::APU_WOP_CPU;
constexpr IData/*31:0*/ Vsoc_top_cv32e40p_apu_core_pkg::APU_NDSFLAGS_CPU;
constexpr IData/*31:0*/ Vsoc_top_cv32e40p_apu_core_pkg::APU_NUSFLAGS_CPU;



Vsoc_top_cv32e40p_apu_core_pkg::Vsoc_top_cv32e40p_apu_core_pkg() = default;
Vsoc_top_cv32e40p_apu_core_pkg::~Vsoc_top_cv32e40p_apu_core_pkg() = default;

void Vsoc_top_cv32e40p_apu_core_pkg::ctor(Vsoc_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vsoc_top_cv32e40p_apu_core_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vsoc_top_cv32e40p_apu_core_pkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
