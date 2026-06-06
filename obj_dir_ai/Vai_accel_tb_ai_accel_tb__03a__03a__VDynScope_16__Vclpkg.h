// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vai_accel_tb.h for the primary calling header

#ifndef VERILATED_VAI_ACCEL_TB_AI_ACCEL_TB__03A__03A__VDYNSCOPE_16__VCLPKG_H_
#define VERILATED_VAI_ACCEL_TB_AI_ACCEL_TB__03A__03A__VDYNSCOPE_16__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vai_accel_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vai_accel_tb_ai_accel_tb__03a__03a__VDynScope_16__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vai_accel_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vai_accel_tb_ai_accel_tb__03a__03a__VDynScope_16__Vclpkg();
    ~Vai_accel_tb_ai_accel_tb__03a__03a__VDynScope_16__Vclpkg();
    void ctor(Vai_accel_tb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vai_accel_tb_ai_accel_tb__03a__03a__VDynScope_16__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vai_accel_tb__Syms;

class Vai_accel_tb_ai_accel_tb__03a__03a__VDynScope_16 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__irq_seen;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "ai_accel_tb::__VDynScope_16"; }
    VlClass* clone() const { return new Vai_accel_tb_ai_accel_tb__03a__03a__VDynScope_16(*this); }
    Vai_accel_tb_ai_accel_tb__03a__03a__VDynScope_16() = default;
    void init(Vai_accel_tb__Syms* __restrict vlSymsp) {}
    ~Vai_accel_tb_ai_accel_tb__03a__03a__VDynScope_16() {}
};


#endif  // guard
