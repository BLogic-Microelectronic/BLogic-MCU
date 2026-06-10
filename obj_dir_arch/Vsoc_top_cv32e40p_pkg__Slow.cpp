// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top.h for the primary calling header

#include "Vsoc_top__pch.h"

// Parameter definitions for Vsoc_top_cv32e40p_pkg
constexpr CData/*6:0*/ Vsoc_top_cv32e40p_pkg::OPCODE_SYSTEM;
constexpr CData/*6:0*/ Vsoc_top_cv32e40p_pkg::OPCODE_FENCE;
constexpr CData/*6:0*/ Vsoc_top_cv32e40p_pkg::OPCODE_OP;
constexpr CData/*6:0*/ Vsoc_top_cv32e40p_pkg::OPCODE_OPIMM;
constexpr CData/*6:0*/ Vsoc_top_cv32e40p_pkg::OPCODE_STORE;
constexpr CData/*6:0*/ Vsoc_top_cv32e40p_pkg::OPCODE_LOAD;
constexpr CData/*6:0*/ Vsoc_top_cv32e40p_pkg::OPCODE_BRANCH;
constexpr CData/*6:0*/ Vsoc_top_cv32e40p_pkg::OPCODE_JALR;
constexpr CData/*6:0*/ Vsoc_top_cv32e40p_pkg::OPCODE_JAL;
constexpr CData/*6:0*/ Vsoc_top_cv32e40p_pkg::OPCODE_AUIPC;
constexpr CData/*6:0*/ Vsoc_top_cv32e40p_pkg::OPCODE_LUI;
constexpr CData/*6:0*/ Vsoc_top_cv32e40p_pkg::OPCODE_OP_FP;
constexpr CData/*6:0*/ Vsoc_top_cv32e40p_pkg::OPCODE_OP_FMADD;
constexpr CData/*6:0*/ Vsoc_top_cv32e40p_pkg::OPCODE_OP_FNMADD;
constexpr CData/*6:0*/ Vsoc_top_cv32e40p_pkg::OPCODE_OP_FMSUB;
constexpr CData/*6:0*/ Vsoc_top_cv32e40p_pkg::OPCODE_OP_FNMSUB;
constexpr CData/*6:0*/ Vsoc_top_cv32e40p_pkg::OPCODE_STORE_FP;
constexpr CData/*6:0*/ Vsoc_top_cv32e40p_pkg::OPCODE_LOAD_FP;
constexpr CData/*6:0*/ Vsoc_top_cv32e40p_pkg::OPCODE_AMO;
constexpr CData/*6:0*/ Vsoc_top_cv32e40p_pkg::OPCODE_CUSTOM_0;
constexpr CData/*6:0*/ Vsoc_top_cv32e40p_pkg::OPCODE_CUSTOM_1;
constexpr CData/*6:0*/ Vsoc_top_cv32e40p_pkg::OPCODE_CUSTOM_2;
constexpr CData/*6:0*/ Vsoc_top_cv32e40p_pkg::OPCODE_CUSTOM_3;
constexpr CData/*1:0*/ Vsoc_top_cv32e40p_pkg::REGC_S1;
constexpr CData/*1:0*/ Vsoc_top_cv32e40p_pkg::REGC_S4;
constexpr CData/*1:0*/ Vsoc_top_cv32e40p_pkg::REGC_RD;
constexpr CData/*1:0*/ Vsoc_top_cv32e40p_pkg::REGC_ZERO;
constexpr CData/*1:0*/ Vsoc_top_cv32e40p_pkg::VEC_MODE32;
constexpr CData/*1:0*/ Vsoc_top_cv32e40p_pkg::VEC_MODE16;
constexpr CData/*1:0*/ Vsoc_top_cv32e40p_pkg::VEC_MODE8;
constexpr CData/*7:0*/ Vsoc_top_cv32e40p_pkg::SP_DVR_MSB;
constexpr CData/*7:0*/ Vsoc_top_cv32e40p_pkg::SP_DCR_MSB;
constexpr CData/*7:0*/ Vsoc_top_cv32e40p_pkg::SP_DMR_MSB;
constexpr CData/*7:0*/ Vsoc_top_cv32e40p_pkg::SP_DSR_MSB;
constexpr CData/*6:0*/ Vsoc_top_cv32e40p_pkg::MVENDORID_OFFSET;
constexpr CData/*1:0*/ Vsoc_top_cv32e40p_pkg::SEL_REGFILE;
constexpr CData/*1:0*/ Vsoc_top_cv32e40p_pkg::SEL_FW_EX;
constexpr CData/*1:0*/ Vsoc_top_cv32e40p_pkg::SEL_FW_WB;
constexpr CData/*2:0*/ Vsoc_top_cv32e40p_pkg::OP_A_REGA_OR_FWD;
constexpr CData/*2:0*/ Vsoc_top_cv32e40p_pkg::OP_A_CURRPC;
constexpr CData/*2:0*/ Vsoc_top_cv32e40p_pkg::OP_A_IMM;
constexpr CData/*2:0*/ Vsoc_top_cv32e40p_pkg::OP_A_REGB_OR_FWD;
constexpr CData/*2:0*/ Vsoc_top_cv32e40p_pkg::OP_A_REGC_OR_FWD;
constexpr CData/*0:0*/ Vsoc_top_cv32e40p_pkg::IMMA_Z;
constexpr CData/*0:0*/ Vsoc_top_cv32e40p_pkg::IMMA_ZERO;
constexpr CData/*2:0*/ Vsoc_top_cv32e40p_pkg::OP_B_REGB_OR_FWD;
constexpr CData/*2:0*/ Vsoc_top_cv32e40p_pkg::OP_B_REGC_OR_FWD;
constexpr CData/*2:0*/ Vsoc_top_cv32e40p_pkg::OP_B_IMM;
constexpr CData/*2:0*/ Vsoc_top_cv32e40p_pkg::OP_B_REGA_OR_FWD;
constexpr CData/*2:0*/ Vsoc_top_cv32e40p_pkg::OP_B_BMASK;
constexpr CData/*3:0*/ Vsoc_top_cv32e40p_pkg::IMMB_I;
constexpr CData/*3:0*/ Vsoc_top_cv32e40p_pkg::IMMB_S;
constexpr CData/*3:0*/ Vsoc_top_cv32e40p_pkg::IMMB_U;
constexpr CData/*3:0*/ Vsoc_top_cv32e40p_pkg::IMMB_PCINCR;
constexpr CData/*3:0*/ Vsoc_top_cv32e40p_pkg::IMMB_S2;
constexpr CData/*3:0*/ Vsoc_top_cv32e40p_pkg::IMMB_S3;
constexpr CData/*3:0*/ Vsoc_top_cv32e40p_pkg::IMMB_VS;
constexpr CData/*3:0*/ Vsoc_top_cv32e40p_pkg::IMMB_VU;
constexpr CData/*3:0*/ Vsoc_top_cv32e40p_pkg::IMMB_SHUF;
constexpr CData/*3:0*/ Vsoc_top_cv32e40p_pkg::IMMB_CLIP;
constexpr CData/*3:0*/ Vsoc_top_cv32e40p_pkg::IMMB_BI;
constexpr CData/*0:0*/ Vsoc_top_cv32e40p_pkg::BMASK_A_ZERO;
constexpr CData/*0:0*/ Vsoc_top_cv32e40p_pkg::BMASK_A_S3;
constexpr CData/*1:0*/ Vsoc_top_cv32e40p_pkg::BMASK_B_S2;
constexpr CData/*1:0*/ Vsoc_top_cv32e40p_pkg::BMASK_B_S3;
constexpr CData/*1:0*/ Vsoc_top_cv32e40p_pkg::BMASK_B_ZERO;
constexpr CData/*1:0*/ Vsoc_top_cv32e40p_pkg::BMASK_B_ONE;
constexpr CData/*0:0*/ Vsoc_top_cv32e40p_pkg::BMASK_A_REG;
constexpr CData/*0:0*/ Vsoc_top_cv32e40p_pkg::BMASK_A_IMM;
constexpr CData/*0:0*/ Vsoc_top_cv32e40p_pkg::BMASK_B_REG;
constexpr CData/*0:0*/ Vsoc_top_cv32e40p_pkg::BMASK_B_IMM;
constexpr CData/*0:0*/ Vsoc_top_cv32e40p_pkg::MIMM_ZERO;
constexpr CData/*0:0*/ Vsoc_top_cv32e40p_pkg::MIMM_S3;
constexpr CData/*1:0*/ Vsoc_top_cv32e40p_pkg::OP_C_REGC_OR_FWD;
constexpr CData/*1:0*/ Vsoc_top_cv32e40p_pkg::OP_C_REGB_OR_FWD;
constexpr CData/*1:0*/ Vsoc_top_cv32e40p_pkg::OP_C_JT;
constexpr CData/*1:0*/ Vsoc_top_cv32e40p_pkg::BRANCH_NONE;
constexpr CData/*1:0*/ Vsoc_top_cv32e40p_pkg::BRANCH_JAL;
constexpr CData/*1:0*/ Vsoc_top_cv32e40p_pkg::BRANCH_JALR;
constexpr CData/*1:0*/ Vsoc_top_cv32e40p_pkg::BRANCH_COND;
constexpr CData/*1:0*/ Vsoc_top_cv32e40p_pkg::JT_JAL;
constexpr CData/*1:0*/ Vsoc_top_cv32e40p_pkg::JT_JALR;
constexpr CData/*1:0*/ Vsoc_top_cv32e40p_pkg::JT_COND;
constexpr CData/*4:0*/ Vsoc_top_cv32e40p_pkg::AMO_LR;
constexpr CData/*4:0*/ Vsoc_top_cv32e40p_pkg::AMO_SC;
constexpr CData/*4:0*/ Vsoc_top_cv32e40p_pkg::AMO_SWAP;
constexpr CData/*4:0*/ Vsoc_top_cv32e40p_pkg::AMO_ADD;
constexpr CData/*4:0*/ Vsoc_top_cv32e40p_pkg::AMO_XOR;
constexpr CData/*4:0*/ Vsoc_top_cv32e40p_pkg::AMO_AND;
constexpr CData/*4:0*/ Vsoc_top_cv32e40p_pkg::AMO_OR;
constexpr CData/*4:0*/ Vsoc_top_cv32e40p_pkg::AMO_MIN;
constexpr CData/*4:0*/ Vsoc_top_cv32e40p_pkg::AMO_MAX;
constexpr CData/*4:0*/ Vsoc_top_cv32e40p_pkg::AMO_MINU;
constexpr CData/*4:0*/ Vsoc_top_cv32e40p_pkg::AMO_MAXU;
constexpr CData/*3:0*/ Vsoc_top_cv32e40p_pkg::PC_BOOT;
constexpr CData/*3:0*/ Vsoc_top_cv32e40p_pkg::PC_JUMP;
constexpr CData/*3:0*/ Vsoc_top_cv32e40p_pkg::PC_BRANCH;
constexpr CData/*3:0*/ Vsoc_top_cv32e40p_pkg::PC_EXCEPTION;
constexpr CData/*3:0*/ Vsoc_top_cv32e40p_pkg::PC_FENCEI;
constexpr CData/*3:0*/ Vsoc_top_cv32e40p_pkg::PC_MRET;
constexpr CData/*3:0*/ Vsoc_top_cv32e40p_pkg::PC_URET;
constexpr CData/*3:0*/ Vsoc_top_cv32e40p_pkg::PC_DRET;
constexpr CData/*3:0*/ Vsoc_top_cv32e40p_pkg::PC_HWLOOP;
constexpr CData/*2:0*/ Vsoc_top_cv32e40p_pkg::EXC_PC_EXCEPTION;
constexpr CData/*2:0*/ Vsoc_top_cv32e40p_pkg::EXC_PC_IRQ;
constexpr CData/*2:0*/ Vsoc_top_cv32e40p_pkg::EXC_PC_DBD;
constexpr CData/*2:0*/ Vsoc_top_cv32e40p_pkg::EXC_PC_DBE;
constexpr CData/*4:0*/ Vsoc_top_cv32e40p_pkg::EXC_CAUSE_INSTR_FAULT;
constexpr CData/*4:0*/ Vsoc_top_cv32e40p_pkg::EXC_CAUSE_ILLEGAL_INSN;
constexpr CData/*4:0*/ Vsoc_top_cv32e40p_pkg::EXC_CAUSE_BREAKPOINT;
constexpr CData/*4:0*/ Vsoc_top_cv32e40p_pkg::EXC_CAUSE_LOAD_FAULT;
constexpr CData/*4:0*/ Vsoc_top_cv32e40p_pkg::EXC_CAUSE_STORE_FAULT;
constexpr CData/*4:0*/ Vsoc_top_cv32e40p_pkg::EXC_CAUSE_ECALL_UMODE;
constexpr CData/*4:0*/ Vsoc_top_cv32e40p_pkg::EXC_CAUSE_ECALL_MMODE;
constexpr CData/*1:0*/ Vsoc_top_cv32e40p_pkg::TRAP_MACHINE;
constexpr CData/*1:0*/ Vsoc_top_cv32e40p_pkg::TRAP_USER;
constexpr CData/*2:0*/ Vsoc_top_cv32e40p_pkg::DBG_CAUSE_NONE;
constexpr CData/*2:0*/ Vsoc_top_cv32e40p_pkg::DBG_CAUSE_EBREAK;
constexpr CData/*2:0*/ Vsoc_top_cv32e40p_pkg::DBG_CAUSE_TRIGGER;
constexpr CData/*2:0*/ Vsoc_top_cv32e40p_pkg::DBG_CAUSE_HALTREQ;
constexpr CData/*2:0*/ Vsoc_top_cv32e40p_pkg::DBG_CAUSE_STEP;
constexpr CData/*2:0*/ Vsoc_top_cv32e40p_pkg::DBG_CAUSE_RSTHALTREQ;
constexpr CData/*5:0*/ Vsoc_top_cv32e40p_pkg::DBG_CAUSE_HALT;
constexpr CData/*0:0*/ Vsoc_top_cv32e40p_pkg::C_RVF;
constexpr CData/*0:0*/ Vsoc_top_cv32e40p_pkg::C_RVD;
constexpr CData/*0:0*/ Vsoc_top_cv32e40p_pkg::C_XF16;
constexpr CData/*0:0*/ Vsoc_top_cv32e40p_pkg::C_XF16ALT;
constexpr CData/*0:0*/ Vsoc_top_cv32e40p_pkg::C_XF8;
constexpr CData/*0:0*/ Vsoc_top_cv32e40p_pkg::C_XFVEC;
constexpr SData/*15:0*/ Vsoc_top_cv32e40p_pkg::SP_DVR0;
constexpr SData/*15:0*/ Vsoc_top_cv32e40p_pkg::SP_DCR0;
constexpr SData/*15:0*/ Vsoc_top_cv32e40p_pkg::SP_DMR1;
constexpr SData/*15:0*/ Vsoc_top_cv32e40p_pkg::SP_DMR2;
constexpr IData/*31:0*/ Vsoc_top_cv32e40p_pkg::ALU_OP_WIDTH;
constexpr IData/*31:0*/ Vsoc_top_cv32e40p_pkg::MUL_OP_WIDTH;
constexpr IData/*31:0*/ Vsoc_top_cv32e40p_pkg::HAVERESET_INDEX;
constexpr IData/*31:0*/ Vsoc_top_cv32e40p_pkg::RUNNING_INDEX;
constexpr IData/*31:0*/ Vsoc_top_cv32e40p_pkg::HALTED_INDEX;
constexpr IData/*31:0*/ Vsoc_top_cv32e40p_pkg::CSR_OP_WIDTH;
constexpr IData/*31:0*/ Vsoc_top_cv32e40p_pkg::CSR_MSIX_BIT;
constexpr IData/*31:0*/ Vsoc_top_cv32e40p_pkg::CSR_MTIX_BIT;
constexpr IData/*31:0*/ Vsoc_top_cv32e40p_pkg::CSR_MEIX_BIT;
constexpr IData/*31:0*/ Vsoc_top_cv32e40p_pkg::CSR_MFIX_BIT_LOW;
constexpr IData/*31:0*/ Vsoc_top_cv32e40p_pkg::CSR_MFIX_BIT_HIGH;
constexpr IData/*24:0*/ Vsoc_top_cv32e40p_pkg::MVENDORID_BANK;
constexpr IData/*31:0*/ Vsoc_top_cv32e40p_pkg::MARCHID;
constexpr IData/*31:0*/ Vsoc_top_cv32e40p_pkg::MHPMCOUNTER_WIDTH;
constexpr IData/*31:0*/ Vsoc_top_cv32e40p_pkg::IRQ_MASK;
constexpr IData/*31:0*/ Vsoc_top_cv32e40p_pkg::DBG_SETS_W;
constexpr IData/*31:0*/ Vsoc_top_cv32e40p_pkg::DBG_SETS_IRQ;
constexpr IData/*31:0*/ Vsoc_top_cv32e40p_pkg::DBG_SETS_ECALL;
constexpr IData/*31:0*/ Vsoc_top_cv32e40p_pkg::DBG_SETS_EILL;
constexpr IData/*31:0*/ Vsoc_top_cv32e40p_pkg::DBG_SETS_ELSU;
constexpr IData/*31:0*/ Vsoc_top_cv32e40p_pkg::DBG_SETS_EBRK;
constexpr IData/*31:0*/ Vsoc_top_cv32e40p_pkg::DBG_SETS_SSTE;
constexpr IData/*31:0*/ Vsoc_top_cv32e40p_pkg::C_LAT_FP64;
constexpr IData/*31:0*/ Vsoc_top_cv32e40p_pkg::C_LAT_FP16;
constexpr IData/*31:0*/ Vsoc_top_cv32e40p_pkg::C_LAT_FP16ALT;
constexpr IData/*31:0*/ Vsoc_top_cv32e40p_pkg::C_LAT_FP8;
constexpr IData/*31:0*/ Vsoc_top_cv32e40p_pkg::C_LAT_DIVSQRT;
constexpr IData/*31:0*/ Vsoc_top_cv32e40p_pkg::C_FLEN;
constexpr IData/*31:0*/ Vsoc_top_cv32e40p_pkg::C_FFLAG;
constexpr IData/*31:0*/ Vsoc_top_cv32e40p_pkg::C_RM;



Vsoc_top_cv32e40p_pkg::Vsoc_top_cv32e40p_pkg() = default;
Vsoc_top_cv32e40p_pkg::~Vsoc_top_cv32e40p_pkg() = default;

void Vsoc_top_cv32e40p_pkg::ctor(Vsoc_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vsoc_top_cv32e40p_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vsoc_top_cv32e40p_pkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
