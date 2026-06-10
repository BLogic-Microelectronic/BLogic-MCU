// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsoc_top.h for the primary calling header

#ifndef VERILATED_VSOC_TOP_CV32E40P_PKG_H_
#define VERILATED_VSOC_TOP_CV32E40P_PKG_H_  // guard

#include "verilated.h"


class Vsoc_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsoc_top_cv32e40p_pkg final {
  public:

    // INTERNAL VARIABLES
    Vsoc_top__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr CData/*6:0*/ OPCODE_SYSTEM = 0x73U;
    static constexpr CData/*6:0*/ OPCODE_FENCE = 0x0fU;
    static constexpr CData/*6:0*/ OPCODE_OP = 0x33U;
    static constexpr CData/*6:0*/ OPCODE_OPIMM = 0x13U;
    static constexpr CData/*6:0*/ OPCODE_STORE = 0x23U;
    static constexpr CData/*6:0*/ OPCODE_LOAD = 3U;
    static constexpr CData/*6:0*/ OPCODE_BRANCH = 0x63U;
    static constexpr CData/*6:0*/ OPCODE_JALR = 0x67U;
    static constexpr CData/*6:0*/ OPCODE_JAL = 0x6fU;
    static constexpr CData/*6:0*/ OPCODE_AUIPC = 0x17U;
    static constexpr CData/*6:0*/ OPCODE_LUI = 0x37U;
    static constexpr CData/*6:0*/ OPCODE_OP_FP = 0x53U;
    static constexpr CData/*6:0*/ OPCODE_OP_FMADD = 0x43U;
    static constexpr CData/*6:0*/ OPCODE_OP_FNMADD = 0x4fU;
    static constexpr CData/*6:0*/ OPCODE_OP_FMSUB = 0x47U;
    static constexpr CData/*6:0*/ OPCODE_OP_FNMSUB = 0x4bU;
    static constexpr CData/*6:0*/ OPCODE_STORE_FP = 0x27U;
    static constexpr CData/*6:0*/ OPCODE_LOAD_FP = 7U;
    static constexpr CData/*6:0*/ OPCODE_AMO = 0x2fU;
    static constexpr CData/*6:0*/ OPCODE_CUSTOM_0 = 0x0bU;
    static constexpr CData/*6:0*/ OPCODE_CUSTOM_1 = 0x2bU;
    static constexpr CData/*6:0*/ OPCODE_CUSTOM_2 = 0x5bU;
    static constexpr CData/*6:0*/ OPCODE_CUSTOM_3 = 0x7bU;
    static constexpr CData/*1:0*/ REGC_S1 = 2U;
    static constexpr CData/*1:0*/ REGC_S4 = 0U;
    static constexpr CData/*1:0*/ REGC_RD = 1U;
    static constexpr CData/*1:0*/ REGC_ZERO = 3U;
    static constexpr CData/*1:0*/ VEC_MODE32 = 0U;
    static constexpr CData/*1:0*/ VEC_MODE16 = 2U;
    static constexpr CData/*1:0*/ VEC_MODE8 = 3U;
    static constexpr CData/*7:0*/ SP_DVR_MSB = 0U;
    static constexpr CData/*7:0*/ SP_DCR_MSB = 1U;
    static constexpr CData/*7:0*/ SP_DMR_MSB = 2U;
    static constexpr CData/*7:0*/ SP_DSR_MSB = 4U;
    static constexpr CData/*6:0*/ MVENDORID_OFFSET = 2U;
    static constexpr CData/*1:0*/ SEL_REGFILE = 0U;
    static constexpr CData/*1:0*/ SEL_FW_EX = 1U;
    static constexpr CData/*1:0*/ SEL_FW_WB = 2U;
    static constexpr CData/*2:0*/ OP_A_REGA_OR_FWD = 0U;
    static constexpr CData/*2:0*/ OP_A_CURRPC = 1U;
    static constexpr CData/*2:0*/ OP_A_IMM = 2U;
    static constexpr CData/*2:0*/ OP_A_REGB_OR_FWD = 3U;
    static constexpr CData/*2:0*/ OP_A_REGC_OR_FWD = 4U;
    static constexpr CData/*0:0*/ IMMA_Z = 0U;
    static constexpr CData/*0:0*/ IMMA_ZERO = 1U;
    static constexpr CData/*2:0*/ OP_B_REGB_OR_FWD = 0U;
    static constexpr CData/*2:0*/ OP_B_REGC_OR_FWD = 1U;
    static constexpr CData/*2:0*/ OP_B_IMM = 2U;
    static constexpr CData/*2:0*/ OP_B_REGA_OR_FWD = 3U;
    static constexpr CData/*2:0*/ OP_B_BMASK = 4U;
    static constexpr CData/*3:0*/ IMMB_I = 0U;
    static constexpr CData/*3:0*/ IMMB_S = 1U;
    static constexpr CData/*3:0*/ IMMB_U = 2U;
    static constexpr CData/*3:0*/ IMMB_PCINCR = 3U;
    static constexpr CData/*3:0*/ IMMB_S2 = 4U;
    static constexpr CData/*3:0*/ IMMB_S3 = 5U;
    static constexpr CData/*3:0*/ IMMB_VS = 6U;
    static constexpr CData/*3:0*/ IMMB_VU = 7U;
    static constexpr CData/*3:0*/ IMMB_SHUF = 8U;
    static constexpr CData/*3:0*/ IMMB_CLIP = 9U;
    static constexpr CData/*3:0*/ IMMB_BI = 0x0bU;
    static constexpr CData/*0:0*/ BMASK_A_ZERO = 0U;
    static constexpr CData/*0:0*/ BMASK_A_S3 = 1U;
    static constexpr CData/*1:0*/ BMASK_B_S2 = 0U;
    static constexpr CData/*1:0*/ BMASK_B_S3 = 1U;
    static constexpr CData/*1:0*/ BMASK_B_ZERO = 2U;
    static constexpr CData/*1:0*/ BMASK_B_ONE = 3U;
    static constexpr CData/*0:0*/ BMASK_A_REG = 0U;
    static constexpr CData/*0:0*/ BMASK_A_IMM = 1U;
    static constexpr CData/*0:0*/ BMASK_B_REG = 0U;
    static constexpr CData/*0:0*/ BMASK_B_IMM = 1U;
    static constexpr CData/*0:0*/ MIMM_ZERO = 0U;
    static constexpr CData/*0:0*/ MIMM_S3 = 1U;
    static constexpr CData/*1:0*/ OP_C_REGC_OR_FWD = 0U;
    static constexpr CData/*1:0*/ OP_C_REGB_OR_FWD = 1U;
    static constexpr CData/*1:0*/ OP_C_JT = 2U;
    static constexpr CData/*1:0*/ BRANCH_NONE = 0U;
    static constexpr CData/*1:0*/ BRANCH_JAL = 1U;
    static constexpr CData/*1:0*/ BRANCH_JALR = 2U;
    static constexpr CData/*1:0*/ BRANCH_COND = 3U;
    static constexpr CData/*1:0*/ JT_JAL = 1U;
    static constexpr CData/*1:0*/ JT_JALR = 2U;
    static constexpr CData/*1:0*/ JT_COND = 3U;
    static constexpr CData/*4:0*/ AMO_LR = 2U;
    static constexpr CData/*4:0*/ AMO_SC = 3U;
    static constexpr CData/*4:0*/ AMO_SWAP = 1U;
    static constexpr CData/*4:0*/ AMO_ADD = 0U;
    static constexpr CData/*4:0*/ AMO_XOR = 4U;
    static constexpr CData/*4:0*/ AMO_AND = 0x0cU;
    static constexpr CData/*4:0*/ AMO_OR = 8U;
    static constexpr CData/*4:0*/ AMO_MIN = 0x10U;
    static constexpr CData/*4:0*/ AMO_MAX = 0x14U;
    static constexpr CData/*4:0*/ AMO_MINU = 0x18U;
    static constexpr CData/*4:0*/ AMO_MAXU = 0x1cU;
    static constexpr CData/*3:0*/ PC_BOOT = 0U;
    static constexpr CData/*3:0*/ PC_JUMP = 2U;
    static constexpr CData/*3:0*/ PC_BRANCH = 3U;
    static constexpr CData/*3:0*/ PC_EXCEPTION = 4U;
    static constexpr CData/*3:0*/ PC_FENCEI = 1U;
    static constexpr CData/*3:0*/ PC_MRET = 5U;
    static constexpr CData/*3:0*/ PC_URET = 6U;
    static constexpr CData/*3:0*/ PC_DRET = 7U;
    static constexpr CData/*3:0*/ PC_HWLOOP = 8U;
    static constexpr CData/*2:0*/ EXC_PC_EXCEPTION = 0U;
    static constexpr CData/*2:0*/ EXC_PC_IRQ = 1U;
    static constexpr CData/*2:0*/ EXC_PC_DBD = 2U;
    static constexpr CData/*2:0*/ EXC_PC_DBE = 3U;
    static constexpr CData/*4:0*/ EXC_CAUSE_INSTR_FAULT = 1U;
    static constexpr CData/*4:0*/ EXC_CAUSE_ILLEGAL_INSN = 2U;
    static constexpr CData/*4:0*/ EXC_CAUSE_BREAKPOINT = 3U;
    static constexpr CData/*4:0*/ EXC_CAUSE_LOAD_FAULT = 5U;
    static constexpr CData/*4:0*/ EXC_CAUSE_STORE_FAULT = 7U;
    static constexpr CData/*4:0*/ EXC_CAUSE_ECALL_UMODE = 8U;
    static constexpr CData/*4:0*/ EXC_CAUSE_ECALL_MMODE = 0x0bU;
    static constexpr CData/*1:0*/ TRAP_MACHINE = 0U;
    static constexpr CData/*1:0*/ TRAP_USER = 1U;
    static constexpr CData/*2:0*/ DBG_CAUSE_NONE = 0U;
    static constexpr CData/*2:0*/ DBG_CAUSE_EBREAK = 1U;
    static constexpr CData/*2:0*/ DBG_CAUSE_TRIGGER = 2U;
    static constexpr CData/*2:0*/ DBG_CAUSE_HALTREQ = 3U;
    static constexpr CData/*2:0*/ DBG_CAUSE_STEP = 4U;
    static constexpr CData/*2:0*/ DBG_CAUSE_RSTHALTREQ = 5U;
    static constexpr CData/*5:0*/ DBG_CAUSE_HALT = 0x1fU;
    static constexpr CData/*0:0*/ C_RVF = 1U;
    static constexpr CData/*0:0*/ C_RVD = 0U;
    static constexpr CData/*0:0*/ C_XF16 = 0U;
    static constexpr CData/*0:0*/ C_XF16ALT = 0U;
    static constexpr CData/*0:0*/ C_XF8 = 0U;
    static constexpr CData/*0:0*/ C_XFVEC = 0U;
    static constexpr SData/*15:0*/ SP_DVR0 = 0x3000U;
    static constexpr SData/*15:0*/ SP_DCR0 = 0x3008U;
    static constexpr SData/*15:0*/ SP_DMR1 = 0x3010U;
    static constexpr SData/*15:0*/ SP_DMR2 = 0x3011U;
    static constexpr IData/*31:0*/ ALU_OP_WIDTH = 7U;
    static constexpr IData/*31:0*/ MUL_OP_WIDTH = 3U;
    static constexpr IData/*31:0*/ HAVERESET_INDEX = 0U;
    static constexpr IData/*31:0*/ RUNNING_INDEX = 1U;
    static constexpr IData/*31:0*/ HALTED_INDEX = 2U;
    static constexpr IData/*31:0*/ CSR_OP_WIDTH = 2U;
    static constexpr IData/*31:0*/ CSR_MSIX_BIT = 3U;
    static constexpr IData/*31:0*/ CSR_MTIX_BIT = 7U;
    static constexpr IData/*31:0*/ CSR_MEIX_BIT = 0x0000000bU;
    static constexpr IData/*31:0*/ CSR_MFIX_BIT_LOW = 0x00000010U;
    static constexpr IData/*31:0*/ CSR_MFIX_BIT_HIGH = 0x0000001fU;
    static constexpr IData/*24:0*/ MVENDORID_BANK = 0x0000000cU;
    static constexpr IData/*31:0*/ MARCHID = 4U;
    static constexpr IData/*31:0*/ MHPMCOUNTER_WIDTH = 0x00000040U;
    static constexpr IData/*31:0*/ IRQ_MASK = 0xffff0888U;
    static constexpr IData/*31:0*/ DBG_SETS_W = 6U;
    static constexpr IData/*31:0*/ DBG_SETS_IRQ = 5U;
    static constexpr IData/*31:0*/ DBG_SETS_ECALL = 4U;
    static constexpr IData/*31:0*/ DBG_SETS_EILL = 3U;
    static constexpr IData/*31:0*/ DBG_SETS_ELSU = 2U;
    static constexpr IData/*31:0*/ DBG_SETS_EBRK = 1U;
    static constexpr IData/*31:0*/ DBG_SETS_SSTE = 0U;
    static constexpr IData/*31:0*/ C_LAT_FP64 = 0U;
    static constexpr IData/*31:0*/ C_LAT_FP16 = 0U;
    static constexpr IData/*31:0*/ C_LAT_FP16ALT = 0U;
    static constexpr IData/*31:0*/ C_LAT_FP8 = 0U;
    static constexpr IData/*31:0*/ C_LAT_DIVSQRT = 1U;
    static constexpr IData/*31:0*/ C_FLEN = 0x00000020U;
    static constexpr IData/*31:0*/ C_FFLAG = 5U;
    static constexpr IData/*31:0*/ C_RM = 3U;

    // CONSTRUCTORS
    Vsoc_top_cv32e40p_pkg();
    ~Vsoc_top_cv32e40p_pkg();
    void ctor(Vsoc_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vsoc_top_cv32e40p_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
