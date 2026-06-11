// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vuart_stp_tb__pch.h"

//============================================================
// Constructors

Vuart_stp_tb::Vuart_stp_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vuart_stp_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vuart_stp_tb::Vuart_stp_tb(const char* _vcname__)
    : Vuart_stp_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vuart_stp_tb::~Vuart_stp_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vuart_stp_tb___024root___eval_debug_assertions(Vuart_stp_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vuart_stp_tb___024root___eval_static(Vuart_stp_tb___024root* vlSelf);
void Vuart_stp_tb___024root___eval_initial(Vuart_stp_tb___024root* vlSelf);
void Vuart_stp_tb___024root___eval_settle(Vuart_stp_tb___024root* vlSelf);
void Vuart_stp_tb___024root___eval(Vuart_stp_tb___024root* vlSelf);

void Vuart_stp_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vuart_stp_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vuart_stp_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vuart_stp_tb___024root___eval_static(&(vlSymsp->TOP));
        Vuart_stp_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vuart_stp_tb___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vuart_stp_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vuart_stp_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vuart_stp_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vuart_stp_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vuart_stp_tb___024root___eval_final(Vuart_stp_tb___024root* vlSelf);

VL_ATTR_COLD void Vuart_stp_tb::final() {
    contextp()->executingFinal(true);
    Vuart_stp_tb___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vuart_stp_tb::hierName() const { return vlSymsp->name(); }
const char* Vuart_stp_tb::modelName() const { return "Vuart_stp_tb"; }
unsigned Vuart_stp_tb::threads() const { return 1; }
void Vuart_stp_tb::prepareClone() const { contextp()->prepareClone(); }
void Vuart_stp_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
