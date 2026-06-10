// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VI2C_SYSTEM_TB_H_
#define VERILATED_VI2C_SYSTEM_TB_H_  // guard

#include "verilated.h"

class Vi2c_system_tb__Syms;
class Vi2c_system_tb___024root;
class Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vi2c_system_tb VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vi2c_system_tb__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1* const __PVT__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus;
    Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1* const __PVT__i2c_system_tb__DOT__dut__DOT__cpu_data_bus;
    Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1* const __PVT__i2c_system_tb__DOT__dut__DOT__boot_rom_bus;
    Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1* const __PVT__i2c_system_tb__DOT__dut__DOT__instr_sram_bus;
    Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1* const __PVT__i2c_system_tb__DOT__dut__DOT__data_sram_bus;
    Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1* const __PVT__i2c_system_tb__DOT__dut__DOT__cpu_to_ai_sram_bus;
    Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1* const __PVT__i2c_system_tb__DOT__dut__DOT__ai_sram_bus;
    Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1* const __PVT__i2c_system_tb__DOT__dut__DOT__periph_bus;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vi2c_system_tb___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vi2c_system_tb(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vi2c_system_tb(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vi2c_system_tb();
  private:
    VL_UNCOPYABLE(Vi2c_system_tb);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
