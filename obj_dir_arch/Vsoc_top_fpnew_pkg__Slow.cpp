// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top.h for the primary calling header

#include "Vsoc_top__pch.h"

// Parameter definitions for Vsoc_top_fpnew_pkg
constexpr CData/*4:0*/ Vsoc_top_fpnew_pkg::CPK_FORMATS;
constexpr CData/*0:0*/ Vsoc_top_fpnew_pkg::DONT_CARE;
constexpr IData/*31:0*/ Vsoc_top_fpnew_pkg::NUM_FP_FORMATS;
constexpr IData/*31:0*/ Vsoc_top_fpnew_pkg::FP_FORMAT_BITS;
constexpr IData/*31:0*/ Vsoc_top_fpnew_pkg::NUM_INT_FORMATS;
constexpr IData/*31:0*/ Vsoc_top_fpnew_pkg::INT_FORMAT_BITS;
constexpr IData/*31:0*/ Vsoc_top_fpnew_pkg::NUM_OPGROUPS;
constexpr IData/*31:0*/ Vsoc_top_fpnew_pkg::OP_BITS;
const VlWide<10>/*319:0*/ Vsoc_top_fpnew_pkg::FP_ENCODINGS = VlWide<10>{{
        0x00000007, 0x00000008, 0x00000002, 0x00000005,
        0x0000000a, 0x00000005, 0x00000034, 0x0000000b,
        0x00000017, 0x00000008
}};
constexpr QData/*42:0*/ Vsoc_top_fpnew_pkg::RV64D;
constexpr QData/*42:0*/ Vsoc_top_fpnew_pkg::RV32D;
constexpr QData/*42:0*/ Vsoc_top_fpnew_pkg::RV32F;
constexpr QData/*42:0*/ Vsoc_top_fpnew_pkg::RV64D_Xsflt;
constexpr QData/*42:0*/ Vsoc_top_fpnew_pkg::RV32F_Xsflt;
constexpr QData/*42:0*/ Vsoc_top_fpnew_pkg::RV32F_Xf16alt_Xfvec;
constexpr VlWide<22>/*681:0*/ Vsoc_top_fpnew_pkg::DEFAULT_NOREGS;
constexpr VlWide<22>/*681:0*/ Vsoc_top_fpnew_pkg::DEFAULT_SNITCH;



Vsoc_top_fpnew_pkg::Vsoc_top_fpnew_pkg() = default;
Vsoc_top_fpnew_pkg::~Vsoc_top_fpnew_pkg() = default;

void Vsoc_top_fpnew_pkg::ctor(Vsoc_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vsoc_top_fpnew_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vsoc_top_fpnew_pkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
