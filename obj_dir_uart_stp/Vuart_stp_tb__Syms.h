// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VUART_STP_TB__SYMS_H_
#define VERILATED_VUART_STP_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vuart_stp_tb.h"

// INCLUDE MODULE CLASSES
#include "Vuart_stp_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vuart_stp_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vuart_stp_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vuart_stp_tb___024root         TOP;

    // CONSTRUCTORS
    Vuart_stp_tb__Syms(VerilatedContext* contextp, const char* namep, Vuart_stp_tb* modelp);
    ~Vuart_stp_tb__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
