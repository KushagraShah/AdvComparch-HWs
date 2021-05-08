// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _kernel5_HH_
#define _kernel5_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "kernel5_fadd_32nsbkb.h"
#include "kernel5_fcmp_32nscud.h"
#include "kernel5_tmp.h"

namespace ap_rtl {

struct kernel5 : public sc_module {
    // Port declarations 14
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > bound;
    sc_out< sc_lv<10> > a_address0;
    sc_out< sc_logic > a_ce0;
    sc_in< sc_lv<32> > a_q0;
    sc_out< sc_lv<10> > b_address0;
    sc_out< sc_logic > b_ce0;
    sc_in< sc_lv<32> > b_q0;
    sc_out< sc_lv<32> > ap_return;
    sc_signal< sc_logic > ap_var_for_const0;
    sc_signal< sc_lv<5> > ap_var_for_const1;


    // Module declarations
    kernel5(sc_module_name name);
    SC_HAS_PROCESS(kernel5);

    ~kernel5();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    kernel5_tmp* tmp_U;
    kernel5_fadd_32nsbkb<1,4,32,32,32>* kernel5_fadd_32nsbkb_U1;
    kernel5_fcmp_32nscud<1,2,32,32,1>* kernel5_fcmp_32nscud_U2;
    sc_signal< sc_lv<6> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<11> > i_0_reg_125;
    sc_signal< sc_lv<32> > sum_01_reg_136;
    sc_signal< sc_lv<32> > i_1_reg_148;
    sc_signal< sc_lv<1> > icmp_ln8_fu_168_p2;
    sc_signal< sc_lv<1> > icmp_ln8_reg_307;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter3;
    sc_signal< bool > ap_block_state6_pp0_stage0_iter4;
    sc_signal< bool > ap_block_state7_pp0_stage0_iter5;
    sc_signal< bool > ap_block_state8_pp0_stage0_iter6;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > icmp_ln8_reg_307_pp0_iter1_reg;
    sc_signal< sc_lv<1> > icmp_ln8_reg_307_pp0_iter2_reg;
    sc_signal< sc_lv<1> > icmp_ln8_reg_307_pp0_iter3_reg;
    sc_signal< sc_lv<1> > icmp_ln8_reg_307_pp0_iter4_reg;
    sc_signal< sc_lv<1> > icmp_ln8_reg_307_pp0_iter5_reg;
    sc_signal< sc_lv<11> > i_fu_174_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<64> > zext_ln10_fu_180_p1;
    sc_signal< sc_lv<64> > zext_ln10_reg_316;
    sc_signal< sc_lv<64> > zext_ln10_reg_316_pp0_iter1_reg;
    sc_signal< sc_lv<64> > zext_ln10_reg_316_pp0_iter2_reg;
    sc_signal< sc_lv<64> > zext_ln10_reg_316_pp0_iter3_reg;
    sc_signal< sc_lv<64> > zext_ln10_reg_316_pp0_iter4_reg;
    sc_signal< sc_lv<64> > zext_ln10_reg_316_pp0_iter5_reg;
    sc_signal< sc_lv<32> > a_load_reg_331;
    sc_signal< sc_lv<32> > b_load_reg_336;
    sc_signal< sc_lv<32> > grp_fu_159_p2;
    sc_signal< sc_lv<32> > tmp_1_reg_341;
    sc_signal< sc_lv<1> > or_ln13_1_fu_215_p2;
    sc_signal< sc_lv<1> > or_ln13_1_reg_346;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<1> > and_ln13_fu_284_p2;
    sc_signal< sc_lv<1> > and_ln13_reg_351;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage1;
    sc_signal< bool > ap_block_state11_pp1_stage1_iter0;
    sc_signal< bool > ap_block_pp1_stage1_11001;
    sc_signal< sc_lv<32> > i_2_fu_290_p2;
    sc_signal< sc_lv<32> > i_2_reg_355;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter0;
    sc_signal< sc_lv<32> > tmp_q0;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter1;
    sc_signal< bool > ap_block_state10_pp1_stage0_iter0;
    sc_signal< bool > ap_block_state12_pp1_stage0_iter1;
    sc_signal< bool > ap_block_pp1_stage0_11001;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter5;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter6;
    sc_signal< bool > ap_block_pp1_stage1_subdone;
    sc_signal< sc_logic > ap_condition_pp1_exit_iter0_state11;
    sc_signal< sc_lv<10> > tmp_address0;
    sc_signal< sc_logic > tmp_ce0;
    sc_signal< sc_logic > tmp_we0;
    sc_signal< sc_lv<32> > ap_phi_mux_sum_01_phi_fu_140_p4;
    sc_signal< bool > ap_block_pp1_stage0;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<64> > sext_ln15_fu_296_p1;
    sc_signal< bool > ap_block_pp1_stage1;
    sc_signal< sc_lv<32> > bitcast_ln13_1_fu_186_p1;
    sc_signal< sc_lv<8> > tmp_5_fu_189_p4;
    sc_signal< sc_lv<23> > trunc_ln13_fu_199_p1;
    sc_signal< sc_lv<1> > icmp_ln13_3_fu_209_p2;
    sc_signal< sc_lv<1> > icmp_ln13_fu_203_p2;
    sc_signal< sc_lv<32> > bitcast_ln13_fu_221_p1;
    sc_signal< sc_lv<8> > tmp_2_fu_225_p4;
    sc_signal< sc_lv<23> > trunc_ln13_1_fu_235_p1;
    sc_signal< sc_lv<1> > icmp_ln13_2_fu_245_p2;
    sc_signal< sc_lv<1> > icmp_ln13_1_fu_239_p2;
    sc_signal< sc_lv<1> > or_ln13_fu_251_p2;
    sc_signal< sc_lv<1> > and_ln13_1_fu_257_p2;
    sc_signal< sc_lv<1> > grp_fu_163_p2;
    sc_signal< sc_lv<22> > tmp_7_fu_268_p4;
    sc_signal< sc_lv<1> > and_ln13_2_fu_262_p2;
    sc_signal< sc_lv<1> > icmp_ln13_4_fu_278_p2;
    sc_signal< bool > ap_block_pp1_stage0_00001;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<6> > ap_NS_fsm;
    sc_signal< bool > ap_block_pp1_stage0_subdone;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_logic > ap_idle_pp1;
    sc_signal< sc_logic > ap_enable_pp1;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<6> ap_ST_fsm_state1;
    static const sc_lv<6> ap_ST_fsm_pp0_stage0;
    static const sc_lv<6> ap_ST_fsm_state9;
    static const sc_lv<6> ap_ST_fsm_pp1_stage0;
    static const sc_lv<6> ap_ST_fsm_pp1_stage1;
    static const sc_lv<6> ap_ST_fsm_state13;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<11> ap_const_lv11_0;
    static const sc_lv<11> ap_const_lv11_400;
    static const sc_lv<11> ap_const_lv11_1;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<23> ap_const_lv23_0;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<22> ap_const_lv22_1;
    static const sc_lv<5> ap_const_lv5_4;
    static const sc_lv<32> ap_const_lv32_5;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_clk_no_reset_();
    void thread_a_address0();
    void thread_a_ce0();
    void thread_and_ln13_1_fu_257_p2();
    void thread_and_ln13_2_fu_262_p2();
    void thread_and_ln13_fu_284_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp1_stage0();
    void thread_ap_CS_fsm_pp1_stage1();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp1_stage0();
    void thread_ap_block_pp1_stage0_00001();
    void thread_ap_block_pp1_stage0_11001();
    void thread_ap_block_pp1_stage0_subdone();
    void thread_ap_block_pp1_stage1();
    void thread_ap_block_pp1_stage1_11001();
    void thread_ap_block_pp1_stage1_subdone();
    void thread_ap_block_state10_pp1_stage0_iter0();
    void thread_ap_block_state11_pp1_stage1_iter0();
    void thread_ap_block_state12_pp1_stage0_iter1();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_pp0_stage0_iter1();
    void thread_ap_block_state4_pp0_stage0_iter2();
    void thread_ap_block_state5_pp0_stage0_iter3();
    void thread_ap_block_state6_pp0_stage0_iter4();
    void thread_ap_block_state7_pp0_stage0_iter5();
    void thread_ap_block_state8_pp0_stage0_iter6();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_condition_pp1_exit_iter0_state11();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_pp1();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp1();
    void thread_ap_phi_mux_sum_01_phi_fu_140_p4();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_b_address0();
    void thread_b_ce0();
    void thread_bitcast_ln13_1_fu_186_p1();
    void thread_bitcast_ln13_fu_221_p1();
    void thread_i_2_fu_290_p2();
    void thread_i_fu_174_p2();
    void thread_icmp_ln13_1_fu_239_p2();
    void thread_icmp_ln13_2_fu_245_p2();
    void thread_icmp_ln13_3_fu_209_p2();
    void thread_icmp_ln13_4_fu_278_p2();
    void thread_icmp_ln13_fu_203_p2();
    void thread_icmp_ln8_fu_168_p2();
    void thread_or_ln13_1_fu_215_p2();
    void thread_or_ln13_fu_251_p2();
    void thread_sext_ln15_fu_296_p1();
    void thread_tmp_2_fu_225_p4();
    void thread_tmp_5_fu_189_p4();
    void thread_tmp_7_fu_268_p4();
    void thread_tmp_address0();
    void thread_tmp_ce0();
    void thread_tmp_we0();
    void thread_trunc_ln13_1_fu_235_p1();
    void thread_trunc_ln13_fu_199_p1();
    void thread_zext_ln10_fu_180_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif