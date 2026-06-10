// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vi2c_system_tb__pch.h"

//============================================================
// Constructors

Vi2c_system_tb::Vi2c_system_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vi2c_system_tb__Syms(contextp(), _vcname__, this)}
    , __PVT__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus{vlSymsp->TOP.__PVT__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus}
    , __PVT__i2c_system_tb__DOT__dut__DOT__cpu_data_bus{vlSymsp->TOP.__PVT__i2c_system_tb__DOT__dut__DOT__cpu_data_bus}
    , __PVT__i2c_system_tb__DOT__dut__DOT__boot_rom_bus{vlSymsp->TOP.__PVT__i2c_system_tb__DOT__dut__DOT__boot_rom_bus}
    , __PVT__i2c_system_tb__DOT__dut__DOT__instr_sram_bus{vlSymsp->TOP.__PVT__i2c_system_tb__DOT__dut__DOT__instr_sram_bus}
    , __PVT__i2c_system_tb__DOT__dut__DOT__data_sram_bus{vlSymsp->TOP.__PVT__i2c_system_tb__DOT__dut__DOT__data_sram_bus}
    , __PVT__i2c_system_tb__DOT__dut__DOT__cpu_to_ai_sram_bus{vlSymsp->TOP.__PVT__i2c_system_tb__DOT__dut__DOT__cpu_to_ai_sram_bus}
    , __PVT__i2c_system_tb__DOT__dut__DOT__ai_sram_bus{vlSymsp->TOP.__PVT__i2c_system_tb__DOT__dut__DOT__ai_sram_bus}
    , __PVT__i2c_system_tb__DOT__dut__DOT__periph_bus{vlSymsp->TOP.__PVT__i2c_system_tb__DOT__dut__DOT__periph_bus}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vi2c_system_tb::Vi2c_system_tb(const char* _vcname__)
    : Vi2c_system_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vi2c_system_tb::~Vi2c_system_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vi2c_system_tb___024root___eval_debug_assertions(Vi2c_system_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vi2c_system_tb___024root___eval_static(Vi2c_system_tb___024root* vlSelf);
void Vi2c_system_tb___024root___eval_initial(Vi2c_system_tb___024root* vlSelf);
void Vi2c_system_tb___024root___eval_settle(Vi2c_system_tb___024root* vlSelf);
void Vi2c_system_tb___024root___eval(Vi2c_system_tb___024root* vlSelf);

void Vi2c_system_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vi2c_system_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vi2c_system_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vi2c_system_tb___024root___eval_static(&(vlSymsp->TOP));
        Vi2c_system_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vi2c_system_tb___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vi2c_system_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vi2c_system_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vi2c_system_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vi2c_system_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vi2c_system_tb___024root___eval_final(Vi2c_system_tb___024root* vlSelf);

VL_ATTR_COLD void Vi2c_system_tb::final() {
    contextp()->executingFinal(true);
    Vi2c_system_tb___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vi2c_system_tb::hierName() const { return vlSymsp->name(); }
const char* Vi2c_system_tb::modelName() const { return "Vi2c_system_tb"; }
unsigned Vi2c_system_tb::threads() const { return 1; }
void Vi2c_system_tb::prepareClone() const { contextp()->prepareClone(); }
void Vi2c_system_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
