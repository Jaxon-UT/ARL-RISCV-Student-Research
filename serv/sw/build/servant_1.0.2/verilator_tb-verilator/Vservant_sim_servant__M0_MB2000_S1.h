// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vservant_sim.h for the primary calling header

#ifndef _Vservant_sim_servant__M0_MB2000_S1_H_
#define _Vservant_sim_servant__M0_MB2000_S1_H_

#include "verilated_heavy.h"
#include "Vservant_sim__Dpi.h"

class Vservant_sim__Syms;
class Vservant_sim_servant_ram__M0_D2000;
class VerilatedVcd;

//----------

VL_MODULE(Vservant_sim_servant__M0_MB2000_S1) {
  public:
    // CELLS
    Vservant_sim_servant_ram__M0_D2000*	ram;
    
    // PORTS
    // Begin mtask footprint  all: 
    VL_IN8(__PVT__wb_clk,0,0);
    VL_IN8(__PVT__wb_rst,0,0);
    VL_OUT8(__PVT__q,0,0);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
	// Begin mtask footprint  all: 
	VL_SIG8(__PVT__timer_irq,0,0);
	VL_SIG8(__PVT__wb_ibus_cyc,0,0);
	VL_SIG8(__PVT__wb_ibus_ack,0,0);
	VL_SIG8(__PVT__wb_dbus_sel,3,0);
	VL_SIG8(__PVT__wb_dbus_cyc,0,0);
	VL_SIG8(__PVT__wb_dbus_ack,0,0);
	VL_SIG8(__PVT__wb_mem_cyc,0,0);
	VL_SIG8(__PVT__wb_gpio_rdt,0,0);
	VL_SIG8(__PVT__cpu__DOT__rf_wreq,0,0);
	VL_SIG8(__PVT__cpu__DOT__rf_rreq,0,0);
	VL_SIG8(__PVT__cpu__DOT__wdata0,0,0);
	VL_SIG8(__PVT__cpu__DOT__rf_ready,0,0);
	VL_SIG8(__PVT__cpu__DOT__rdata1,0,0);
	VL_SIG8(__PVT__cpu__DOT__rdata,1,0);
	VL_SIG8(__PVT__cpu__DOT__rf_ram_if__DOT__rgnt,0,0);
	VL_SIG8(__PVT__cpu__DOT__rf_ram_if__DOT__wcnt,4,0);
	VL_SIG8(__PVT__cpu__DOT__rf_ram_if__DOT__wgo,0,0);
	VL_SIG8(__PVT__cpu__DOT__rf_ram_if__DOT__wdata0_r,0,0);
	VL_SIG8(__PVT__cpu__DOT__rf_ram_if__DOT__wdata1_r,1,0);
	VL_SIG8(__PVT__cpu__DOT__rf_ram_if__DOT__wen0_r,0,0);
	VL_SIG8(__PVT__cpu__DOT__rf_ram_if__DOT__wen1_r,0,0);
	VL_SIG8(__PVT__cpu__DOT__rf_ram_if__DOT__wreq_r,0,0);
	VL_SIG8(__PVT__cpu__DOT__rf_ram_if__DOT__rcnt,4,0);
	VL_SIG8(__PVT__cpu__DOT__rf_ram_if__DOT__rtrig1,0,0);
	VL_SIG8(__PVT__cpu__DOT__rf_ram_if__DOT__rdata0,1,0);
	VL_SIG8(__PVT__cpu__DOT__rf_ram_if__DOT__rdata1,0,0);
	VL_SIG8(__PVT__cpu__DOT__rf_ram_if__DOT__rreq_r,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__rd_addr,4,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__rs1_addr,4,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__rs2_addr,4,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__e_op,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__branch_op,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__mem_op,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__shift_op,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__slt_op,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__ctrl_pc_en,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__jump,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__utype,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__mret,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__imm,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__trap,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__init,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__cnt_en,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__cnt0,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__cnt2,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__cnt_done,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__bufreg_rs1_en,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__bufreg_q,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__alu_shamt_en,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__alu_rd_sel,3,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__op_b,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__mem_misalign,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__csr_mstatus_en,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__csr_mcause_en,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__csr_en,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__csr_addr,1,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__trap_taken,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__pending_irq,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__lsb,1,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__state__DOT__stage_two_req,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt,4,2);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r,3,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__state__DOT__stage_two_pending,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__state__DOT__trap_pending,0,0);
    };
    struct {
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__state__DOT__genblk1__DOT__irq_sync,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__state__DOT__genblk1__DOT__misalign_trap_sync,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode,4,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3,2,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__decode__DOT__op20,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__decode__DOT__op21,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__decode__DOT__op22,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__decode__DOT__op26,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm30,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__decode__DOT__op_or_opimm,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__decode__DOT__csr_op,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__decode__DOT__signbit,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm7,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm30_25,5,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm24_20,4,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm11_7,4,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__decode__DOT__m2,1,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__c,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__q,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__c_r,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__clr_lsb,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__en_pc_r,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_a,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_b,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__alu__DOT__result_eq,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__alu__DOT__result_lt,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__alu__DOT__result_lt_r,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__alu__DOT__shamt,4,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__alu__DOT__shamt_msb,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_cy,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_cy_r,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__alu__DOT__b_inv_plus_1,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__alu__DOT__b_inv_plus_1_cy,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__alu__DOT__b_inv_plus_1_cy_r,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__alu__DOT__op_b,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_b,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__alu__DOT__lt_r,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__alu__DOT__eq_r,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__alu__DOT__eq,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__alu__DOT__shift__DOT__signbit,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__alu__DOT__shift__DOT__cnt,5,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__alu__DOT__shift__DOT__wrapped,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__rf_if__DOT__genblk1__DOT__rd,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__signbit,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_cur,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_valid,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__genblk1__DOT__misalign,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mstatus,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mstatus_mie,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mstatus_mpie,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mie_mtie,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mcause31,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mcause3_0,3,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__csr_in,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__csr_out,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__timer_irq_r,0,0);
	VL_SIG8(__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__timer_irq,0,0);
	VL_SIG16(__PVT__cpu__DOT__waddr,9,0);
    };
    struct {
	VL_SIG16(__PVT__cpu__DOT__raddr,9,0);
	VL_SIG16(__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm19_12_20,8,0);
	VL_SIG(__PVT__wb_ibus_adr,31,0);
	VL_SIG(__PVT__wb_mem_adr,31,0);
	VL_SIGW(__PVT__servant_mux__DOT__genblk1__DOT__signature_file,1023,0,32);
	VL_SIG(__PVT__servant_mux__DOT__genblk1__DOT__f,31,0);
	VL_SIG(__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data,31,0);
	VL_SIG(__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat,31,0);
	VL_SIG(__PVT__genblk1__DOT__timer__DOT__mtime,31,0);
	VL_SIG(__PVT__genblk1__DOT__timer__DOT__mtimecmp,31,0);
	VL_SIG8(__PVT__cpu__DOT__rf_ram__DOT__memory[576],1,0);
    };
    
    // LOCAL VARIABLES
    // Begin mtask footprint  all: 
    VL_SIG8(cpu__DOT__rf_ram__DOT____Vlvbound1,1,0);
    VL_SIG8(cpu__DOT__cpu__DOT____Vcellinp__decode__i_wb_en,0,0);
    VL_SIG8(cpu__DOT__cpu__DOT____Vcellinp__genblk1__DOT__csr__i_d,0,0);
    VL_SIG(__Vdly__cpu__DOT__cpu__DOT__mem_if__DOT__dat,31,0);
    
    // INTERNAL VARIABLES
  private:
    Vservant_sim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vservant_sim_servant__M0_MB2000_S1);  ///< Copying not allowed
  public:
    Vservant_sim_servant__M0_MB2000_S1(const char* name="TOP");
    ~Vservant_sim_servant__M0_MB2000_S1();
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vservant_sim__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
  public:
    static void _initial__TOP__servant_sim__dut__3(Vservant_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__servant_sim__dut__1(Vservant_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__servant_sim__dut__2(Vservant_sim__Syms* __restrict vlSymsp);
    static void _settle__TOP__servant_sim__dut__4(Vservant_sim__Syms* __restrict vlSymsp);
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
