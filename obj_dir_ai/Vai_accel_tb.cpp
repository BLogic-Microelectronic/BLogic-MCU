// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vai_accel_tb__pch.h"

//============================================================
// Constructors

Vai_accel_tb::Vai_accel_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vai_accel_tb__Syms(contextp(), _vcname__, this)}
    , __PVT__ai_accel_tb{vlSymsp->TOP.__PVT__ai_accel_tb}
    , ai_accel_tb__03a__03a__VDynScope_16__Vclpkg{vlSymsp->TOP.ai_accel_tb__03a__03a__VDynScope_16__Vclpkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vai_accel_tb::Vai_accel_tb(const char* _vcname__)
    : Vai_accel_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vai_accel_tb::~Vai_accel_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vai_accel_tb___024root___eval_debug_assertions(Vai_accel_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vai_accel_tb___024root___eval_static(Vai_accel_tb___024root* vlSelf);
void Vai_accel_tb___024root___eval_initial(Vai_accel_tb___024root* vlSelf);
void Vai_accel_tb___024root___eval_settle(Vai_accel_tb___024root* vlSelf);
void Vai_accel_tb___024root___eval(Vai_accel_tb___024root* vlSelf);

void Vai_accel_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vai_accel_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vai_accel_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vai_accel_tb___024root___eval_static(&(vlSymsp->TOP));
        Vai_accel_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vai_accel_tb___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vai_accel_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vai_accel_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vai_accel_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vai_accel_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vai_accel_tb___024root___eval_final(Vai_accel_tb___024root* vlSelf);

VL_ATTR_COLD void Vai_accel_tb::final() {
    contextp()->executingFinal(true);
    Vai_accel_tb___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vai_accel_tb::hierName() const { return vlSymsp->name(); }
const char* Vai_accel_tb::modelName() const { return "Vai_accel_tb"; }
unsigned Vai_accel_tb::threads() const { return 1; }
void Vai_accel_tb::prepareClone() const { contextp()->prepareClone(); }
void Vai_accel_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
