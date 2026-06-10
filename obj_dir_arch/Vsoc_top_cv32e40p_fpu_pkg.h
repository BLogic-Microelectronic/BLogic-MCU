// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsoc_top.h for the primary calling header

#ifndef VERILATED_VSOC_TOP_CV32E40P_FPU_PKG_H_
#define VERILATED_VSOC_TOP_CV32E40P_FPU_PKG_H_  // guard

#include "verilated.h"


class Vsoc_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsoc_top_cv32e40p_fpu_pkg final {
  public:

    // INTERNAL VARIABLES
    Vsoc_top__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr IData/*31:0*/ NUM_FP_FORMATS = 5U;
    static constexpr IData/*31:0*/ FP_FORMAT_BITS = 3U;
    static constexpr IData/*31:0*/ NUM_INT_FORMATS = 4U;
    static constexpr IData/*31:0*/ INT_FORMAT_BITS = 2U;
    static constexpr IData/*31:0*/ OP_BITS = 4U;

    // CONSTRUCTORS
    Vsoc_top_cv32e40p_fpu_pkg();
    ~Vsoc_top_cv32e40p_fpu_pkg();
    void ctor(Vsoc_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vsoc_top_cv32e40p_fpu_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
