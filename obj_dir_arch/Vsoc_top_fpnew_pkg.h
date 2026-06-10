// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsoc_top.h for the primary calling header

#ifndef VERILATED_VSOC_TOP_FPNEW_PKG_H_
#define VERILATED_VSOC_TOP_FPNEW_PKG_H_  // guard

#include "verilated.h"


class Vsoc_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsoc_top_fpnew_pkg final {
  public:

    // INTERNAL VARIABLES
    Vsoc_top__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr CData/*4:0*/ CPK_FORMATS = 0x18U;
    static constexpr CData/*0:0*/ DONT_CARE = 1U;
    static constexpr IData/*31:0*/ NUM_FP_FORMATS = 5U;
    static constexpr IData/*31:0*/ FP_FORMAT_BITS = 3U;
    static constexpr IData/*31:0*/ NUM_INT_FORMATS = 4U;
    static constexpr IData/*31:0*/ INT_FORMAT_BITS = 2U;
    static constexpr IData/*31:0*/ NUM_OPGROUPS = 4U;
    static constexpr IData/*31:0*/ OP_BITS = 4U;
    static const VlWide<10>/*319:0*/ FP_ENCODINGS;
    static constexpr QData/*42:0*/ RV64D = 0x0000000000020383ULL;
    static constexpr QData/*42:0*/ RV32D = 0x0000000000020782ULL;
    static constexpr QData/*42:0*/ RV32F = 0x0000000000010302ULL;
    static constexpr QData/*42:0*/ RV64D_Xsflt = 0x00000000000207ffULL;
    static constexpr QData/*42:0*/ RV32F_Xsflt = 0x000000000001077eULL;
    static constexpr QData/*42:0*/ RV32F_Xf16alt_Xfvec = 0x0000000000010716ULL;
    static constexpr VlWide<22>/*681:0*/ DEFAULT_NOREGS = VlWide<22>{{
            0xaa955aa8, 0x00000155, 0x00000000, 0x00000000,
            0x00000000, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
    }};
    static constexpr VlWide<22>/*681:0*/ DEFAULT_SNITCH = VlWide<22>{{
            0x00155aa8, 0x00000555, 0x00000000, 0x00000000,
            0x00000000, 0x00000000, 0x00000400, 0x00000000,
            0x00000000, 0x00000000, 0x00000000, 0x00000400,
            0x00000000, 0x00000000, 0x00000000, 0x00000000,
            0x00000400, 0x00000000, 0x00000000, 0x00000000,
            0x00000000, 0x00000000
    }};

    // CONSTRUCTORS
    Vsoc_top_fpnew_pkg();
    ~Vsoc_top_fpnew_pkg();
    void ctor(Vsoc_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vsoc_top_fpnew_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
