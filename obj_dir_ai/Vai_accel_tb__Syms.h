// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VAI_ACCEL_TB__SYMS_H_
#define VERILATED_VAI_ACCEL_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vai_accel_tb.h"

// INCLUDE MODULE CLASSES
#include "Vai_accel_tb___024root.h"
#include "Vai_accel_tb_ai_accel_tb.h"
#include "Vai_accel_tb_ai_accel_tb__03a__03a__VDynScope_16__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vai_accel_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vai_accel_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vai_accel_tb___024root         TOP;
    Vai_accel_tb_ai_accel_tb       TOP__ai_accel_tb;
    Vai_accel_tb_ai_accel_tb__03a__03a__VDynScope_16__Vclpkg TOP__ai_accel_tb__03a__03a__VDynScope_16__Vclpkg;

    // CONSTRUCTORS
    Vai_accel_tb__Syms(VerilatedContext* contextp, const char* namep, Vai_accel_tb* modelp);
    ~Vai_accel_tb__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
