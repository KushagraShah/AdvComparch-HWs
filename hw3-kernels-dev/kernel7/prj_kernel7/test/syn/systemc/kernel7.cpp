// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "kernel7.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic kernel7::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic kernel7::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<6> kernel7::ap_ST_fsm_state1 = "1";
const sc_lv<6> kernel7::ap_ST_fsm_pp0_stage0 = "10";
const sc_lv<6> kernel7::ap_ST_fsm_pp0_stage1 = "100";
const sc_lv<6> kernel7::ap_ST_fsm_pp0_stage2 = "1000";
const sc_lv<6> kernel7::ap_ST_fsm_pp0_stage3 = "10000";
const sc_lv<6> kernel7::ap_ST_fsm_state14 = "100000";
const sc_lv<32> kernel7::ap_const_lv32_0 = "00000000000000000000000000000000";
const bool kernel7::ap_const_boolean_1 = true;
const sc_lv<32> kernel7::ap_const_lv32_1 = "1";
const bool kernel7::ap_const_boolean_0 = false;
const sc_lv<1> kernel7::ap_const_lv1_0 = "0";
const sc_lv<32> kernel7::ap_const_lv32_2 = "10";
const sc_lv<32> kernel7::ap_const_lv32_4 = "100";
const sc_lv<32> kernel7::ap_const_lv32_3 = "11";
const sc_lv<1> kernel7::ap_const_lv1_1 = "1";
const sc_lv<11> kernel7::ap_const_lv11_0 = "00000000000";
const sc_lv<32> kernel7::ap_const_lv32_5 = "101";
const sc_lv<11> kernel7::ap_const_lv11_400 = "10000000000";
const sc_lv<11> kernel7::ap_const_lv11_1 = "1";
const sc_lv<32> kernel7::ap_const_lv32_17 = "10111";
const sc_lv<32> kernel7::ap_const_lv32_1E = "11110";
const sc_lv<8> kernel7::ap_const_lv8_FF = "11111111";
const sc_lv<23> kernel7::ap_const_lv23_0 = "00000000000000000000000";
const sc_lv<2> kernel7::ap_const_lv2_0 = "00";
const sc_lv<2> kernel7::ap_const_lv2_1 = "1";
const sc_lv<5> kernel7::ap_const_lv5_2 = "10";

kernel7::kernel7(sc_module_name name) : sc_module(name), mVcdFile(0) {
    kernel7_faddfsub_bkb_U1 = new kernel7_faddfsub_bkb<1,4,32,32,32>("kernel7_faddfsub_bkb_U1");
    kernel7_faddfsub_bkb_U1->clk(ap_clk);
    kernel7_faddfsub_bkb_U1->reset(ap_rst);
    kernel7_faddfsub_bkb_U1->din0(grp_fu_99_p0);
    kernel7_faddfsub_bkb_U1->din1(grp_fu_99_p1);
    kernel7_faddfsub_bkb_U1->opcode(grp_fu_99_opcode);
    kernel7_faddfsub_bkb_U1->ce(ap_var_for_const0);
    kernel7_faddfsub_bkb_U1->dout(grp_fu_99_p2);
    kernel7_fcmp_32nscud_U2 = new kernel7_fcmp_32nscud<1,2,32,32,1>("kernel7_fcmp_32nscud_U2");
    kernel7_fcmp_32nscud_U2->clk(ap_clk);
    kernel7_fcmp_32nscud_U2->reset(ap_rst);
    kernel7_fcmp_32nscud_U2->din0(diff_reg_231);
    kernel7_fcmp_32nscud_U2->din1(ap_var_for_const1);
    kernel7_fcmp_32nscud_U2->ce(ap_var_for_const0);
    kernel7_fcmp_32nscud_U2->opcode(ap_var_for_const2);
    kernel7_fcmp_32nscud_U2->dout(grp_fu_103_p2);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_a_address0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( zext_ln9_fu_134_p1 );

    SC_METHOD(thread_a_ce0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_and_ln14_fu_175_p2);
    sensitive << ( or_ln14_fu_169_p2 );
    sensitive << ( grp_fu_103_p2 );

    SC_METHOD(thread_ap_CS_fsm_pp0_stage0);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_pp0_stage1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_pp0_stage2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_pp0_stage3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state14);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_pp0_stage0);

    SC_METHOD(thread_ap_block_pp0_stage0_11001);

    SC_METHOD(thread_ap_block_pp0_stage0_subdone);

    SC_METHOD(thread_ap_block_pp0_stage1_11001);

    SC_METHOD(thread_ap_block_pp0_stage1_subdone);

    SC_METHOD(thread_ap_block_pp0_stage2);

    SC_METHOD(thread_ap_block_pp0_stage2_00001);

    SC_METHOD(thread_ap_block_pp0_stage2_11001);

    SC_METHOD(thread_ap_block_pp0_stage2_subdone);

    SC_METHOD(thread_ap_block_pp0_stage3);

    SC_METHOD(thread_ap_block_pp0_stage3_00001);

    SC_METHOD(thread_ap_block_pp0_stage3_11001);

    SC_METHOD(thread_ap_block_pp0_stage3_subdone);

    SC_METHOD(thread_ap_block_state10_pp0_stage0_iter2);

    SC_METHOD(thread_ap_block_state11_pp0_stage1_iter2);

    SC_METHOD(thread_ap_block_state12_pp0_stage2_iter2);

    SC_METHOD(thread_ap_block_state13_pp0_stage3_iter2);

    SC_METHOD(thread_ap_block_state2_pp0_stage0_iter0);

    SC_METHOD(thread_ap_block_state3_pp0_stage1_iter0);

    SC_METHOD(thread_ap_block_state4_pp0_stage2_iter0);

    SC_METHOD(thread_ap_block_state5_pp0_stage3_iter0);

    SC_METHOD(thread_ap_block_state6_pp0_stage0_iter1);

    SC_METHOD(thread_ap_block_state7_pp0_stage1_iter1);

    SC_METHOD(thread_ap_block_state8_pp0_stage2_iter1);

    SC_METHOD(thread_ap_block_state9_pp0_stage3_iter1);

    SC_METHOD(thread_ap_condition_pp0_exit_iter0_state2);
    sensitive << ( icmp_ln7_fu_122_p2 );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state14 );

    SC_METHOD(thread_ap_enable_pp0);
    sensitive << ( ap_idle_pp0 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_idle_pp0);
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_enable_reg_pp0_iter2 );

    SC_METHOD(thread_ap_phi_mux_i_0_phi_fu_92_p4);
    sensitive << ( i_0_reg_88 );
    sensitive << ( icmp_ln7_reg_202 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( i_reg_206 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state14 );

    SC_METHOD(thread_ap_return);
    sensitive << ( grp_load_fu_108_p1 );
    sensitive << ( ap_CS_fsm_state14 );

    SC_METHOD(thread_ap_sig_allocacmp_sum_1_load_1);
    sensitive << ( ap_CS_fsm_pp0_stage3 );
    sensitive << ( and_ln14_reg_243 );
    sensitive << ( possible_reg_247 );
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( sum_1_fu_54 );
    sensitive << ( ap_block_pp0_stage3 );

    SC_METHOD(thread_b_address0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( zext_ln9_fu_134_p1 );

    SC_METHOD(thread_b_ce0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_bitcast_ln14_fu_140_p1);
    sensitive << ( diff_reg_231 );

    SC_METHOD(thread_grp_fu_99_opcode);
    sensitive << ( icmp_ln7_reg_202 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_CS_fsm_pp0_stage3 );
    sensitive << ( ap_CS_fsm_pp0_stage2 );
    sensitive << ( ap_block_pp0_stage3_00001 );
    sensitive << ( ap_block_pp0_stage2_00001 );

    SC_METHOD(thread_grp_fu_99_p0);
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( a_load_reg_221 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( grp_load_fu_108_p1 );
    sensitive << ( ap_CS_fsm_pp0_stage3 );
    sensitive << ( ap_CS_fsm_pp0_stage2 );
    sensitive << ( ap_block_pp0_stage3 );
    sensitive << ( ap_block_pp0_stage2 );

    SC_METHOD(thread_grp_fu_99_p1);
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( b_load_reg_226 );
    sensitive << ( diff_reg_231 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_CS_fsm_pp0_stage3 );
    sensitive << ( ap_CS_fsm_pp0_stage2 );
    sensitive << ( ap_block_pp0_stage3 );
    sensitive << ( ap_block_pp0_stage2 );

    SC_METHOD(thread_grp_load_fu_108_p1);
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_CS_fsm_pp0_stage3 );
    sensitive << ( sum_1_fu_54 );
    sensitive << ( ap_sig_allocacmp_sum_1_load_1 );
    sensitive << ( ap_block_pp0_stage3 );
    sensitive << ( ap_CS_fsm_state14 );

    SC_METHOD(thread_i_fu_128_p2);
    sensitive << ( ap_phi_mux_i_0_phi_fu_92_p4 );

    SC_METHOD(thread_icmp_ln14_1_fu_163_p2);
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_CS_fsm_pp0_stage3 );
    sensitive << ( ap_block_pp0_stage3_11001 );
    sensitive << ( trunc_ln14_fu_153_p1 );

    SC_METHOD(thread_icmp_ln14_fu_157_p2);
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_CS_fsm_pp0_stage3 );
    sensitive << ( ap_block_pp0_stage3_11001 );
    sensitive << ( tmp_fu_143_p4 );

    SC_METHOD(thread_icmp_ln7_fu_122_p2);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_phi_mux_i_0_phi_fu_92_p4 );

    SC_METHOD(thread_or_ln14_fu_169_p2);
    sensitive << ( icmp_ln14_1_fu_163_p2 );
    sensitive << ( icmp_ln14_fu_157_p2 );

    SC_METHOD(thread_tmp_fu_143_p4);
    sensitive << ( bitcast_ln14_fu_140_p1 );

    SC_METHOD(thread_trunc_ln14_fu_153_p1);
    sensitive << ( bitcast_ln14_fu_140_p1 );

    SC_METHOD(thread_zext_ln9_fu_134_p1);
    sensitive << ( ap_phi_mux_i_0_phi_fu_92_p4 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( icmp_ln7_fu_122_p2 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_CS_fsm_pp0_stage3 );
    sensitive << ( ap_enable_reg_pp0_iter2 );
    sensitive << ( ap_block_pp0_stage0_subdone );
    sensitive << ( ap_block_pp0_stage3_subdone );
    sensitive << ( ap_block_pp0_stage1_subdone );
    sensitive << ( ap_block_pp0_stage2_subdone );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    SC_THREAD(thread_ap_var_for_const0);

    SC_THREAD(thread_ap_var_for_const1);

    SC_THREAD(thread_ap_var_for_const2);

    ap_CS_fsm = "000001";
    ap_enable_reg_pp0_iter0 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter1 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter2 = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "kernel7_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, a_address0, "(port)a_address0");
    sc_trace(mVcdFile, a_ce0, "(port)a_ce0");
    sc_trace(mVcdFile, a_q0, "(port)a_q0");
    sc_trace(mVcdFile, b_address0, "(port)b_address0");
    sc_trace(mVcdFile, b_ce0, "(port)b_ce0");
    sc_trace(mVcdFile, b_q0, "(port)b_q0");
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, i_0_reg_88, "i_0_reg_88");
    sc_trace(mVcdFile, icmp_ln7_fu_122_p2, "icmp_ln7_fu_122_p2");
    sc_trace(mVcdFile, icmp_ln7_reg_202, "icmp_ln7_reg_202");
    sc_trace(mVcdFile, ap_CS_fsm_pp0_stage0, "ap_CS_fsm_pp0_stage0");
    sc_trace(mVcdFile, ap_block_state2_pp0_stage0_iter0, "ap_block_state2_pp0_stage0_iter0");
    sc_trace(mVcdFile, ap_block_state6_pp0_stage0_iter1, "ap_block_state6_pp0_stage0_iter1");
    sc_trace(mVcdFile, ap_block_state10_pp0_stage0_iter2, "ap_block_state10_pp0_stage0_iter2");
    sc_trace(mVcdFile, ap_block_pp0_stage0_11001, "ap_block_pp0_stage0_11001");
    sc_trace(mVcdFile, i_fu_128_p2, "i_fu_128_p2");
    sc_trace(mVcdFile, i_reg_206, "i_reg_206");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter0, "ap_enable_reg_pp0_iter0");
    sc_trace(mVcdFile, a_load_reg_221, "a_load_reg_221");
    sc_trace(mVcdFile, ap_CS_fsm_pp0_stage1, "ap_CS_fsm_pp0_stage1");
    sc_trace(mVcdFile, ap_block_state3_pp0_stage1_iter0, "ap_block_state3_pp0_stage1_iter0");
    sc_trace(mVcdFile, ap_block_state7_pp0_stage1_iter1, "ap_block_state7_pp0_stage1_iter1");
    sc_trace(mVcdFile, ap_block_state11_pp0_stage1_iter2, "ap_block_state11_pp0_stage1_iter2");
    sc_trace(mVcdFile, ap_block_pp0_stage1_11001, "ap_block_pp0_stage1_11001");
    sc_trace(mVcdFile, b_load_reg_226, "b_load_reg_226");
    sc_trace(mVcdFile, grp_fu_99_p2, "grp_fu_99_p2");
    sc_trace(mVcdFile, diff_reg_231, "diff_reg_231");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter1, "ap_enable_reg_pp0_iter1");
    sc_trace(mVcdFile, grp_load_fu_108_p1, "grp_load_fu_108_p1");
    sc_trace(mVcdFile, ap_CS_fsm_pp0_stage3, "ap_CS_fsm_pp0_stage3");
    sc_trace(mVcdFile, ap_block_state5_pp0_stage3_iter0, "ap_block_state5_pp0_stage3_iter0");
    sc_trace(mVcdFile, ap_block_state9_pp0_stage3_iter1, "ap_block_state9_pp0_stage3_iter1");
    sc_trace(mVcdFile, ap_block_state13_pp0_stage3_iter2, "ap_block_state13_pp0_stage3_iter2");
    sc_trace(mVcdFile, ap_block_pp0_stage3_11001, "ap_block_pp0_stage3_11001");
    sc_trace(mVcdFile, and_ln14_fu_175_p2, "and_ln14_fu_175_p2");
    sc_trace(mVcdFile, and_ln14_reg_243, "and_ln14_reg_243");
    sc_trace(mVcdFile, possible_reg_247, "possible_reg_247");
    sc_trace(mVcdFile, ap_CS_fsm_pp0_stage2, "ap_CS_fsm_pp0_stage2");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter2, "ap_enable_reg_pp0_iter2");
    sc_trace(mVcdFile, ap_block_state4_pp0_stage2_iter0, "ap_block_state4_pp0_stage2_iter0");
    sc_trace(mVcdFile, ap_block_state8_pp0_stage2_iter1, "ap_block_state8_pp0_stage2_iter1");
    sc_trace(mVcdFile, ap_block_state12_pp0_stage2_iter2, "ap_block_state12_pp0_stage2_iter2");
    sc_trace(mVcdFile, ap_block_pp0_stage2_11001, "ap_block_pp0_stage2_11001");
    sc_trace(mVcdFile, ap_block_pp0_stage0_subdone, "ap_block_pp0_stage0_subdone");
    sc_trace(mVcdFile, ap_condition_pp0_exit_iter0_state2, "ap_condition_pp0_exit_iter0_state2");
    sc_trace(mVcdFile, ap_block_pp0_stage3_subdone, "ap_block_pp0_stage3_subdone");
    sc_trace(mVcdFile, ap_phi_mux_i_0_phi_fu_92_p4, "ap_phi_mux_i_0_phi_fu_92_p4");
    sc_trace(mVcdFile, ap_block_pp0_stage0, "ap_block_pp0_stage0");
    sc_trace(mVcdFile, zext_ln9_fu_134_p1, "zext_ln9_fu_134_p1");
    sc_trace(mVcdFile, sum_1_fu_54, "sum_1_fu_54");
    sc_trace(mVcdFile, ap_sig_allocacmp_sum_1_load_1, "ap_sig_allocacmp_sum_1_load_1");
    sc_trace(mVcdFile, ap_block_pp0_stage3, "ap_block_pp0_stage3");
    sc_trace(mVcdFile, ap_CS_fsm_state14, "ap_CS_fsm_state14");
    sc_trace(mVcdFile, grp_fu_99_p0, "grp_fu_99_p0");
    sc_trace(mVcdFile, grp_fu_99_p1, "grp_fu_99_p1");
    sc_trace(mVcdFile, ap_block_pp0_stage2, "ap_block_pp0_stage2");
    sc_trace(mVcdFile, bitcast_ln14_fu_140_p1, "bitcast_ln14_fu_140_p1");
    sc_trace(mVcdFile, tmp_fu_143_p4, "tmp_fu_143_p4");
    sc_trace(mVcdFile, trunc_ln14_fu_153_p1, "trunc_ln14_fu_153_p1");
    sc_trace(mVcdFile, icmp_ln14_1_fu_163_p2, "icmp_ln14_1_fu_163_p2");
    sc_trace(mVcdFile, icmp_ln14_fu_157_p2, "icmp_ln14_fu_157_p2");
    sc_trace(mVcdFile, or_ln14_fu_169_p2, "or_ln14_fu_169_p2");
    sc_trace(mVcdFile, grp_fu_103_p2, "grp_fu_103_p2");
    sc_trace(mVcdFile, grp_fu_99_opcode, "grp_fu_99_opcode");
    sc_trace(mVcdFile, ap_block_pp0_stage3_00001, "ap_block_pp0_stage3_00001");
    sc_trace(mVcdFile, ap_block_pp0_stage2_00001, "ap_block_pp0_stage2_00001");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, ap_block_pp0_stage1_subdone, "ap_block_pp0_stage1_subdone");
    sc_trace(mVcdFile, ap_block_pp0_stage2_subdone, "ap_block_pp0_stage2_subdone");
    sc_trace(mVcdFile, ap_idle_pp0, "ap_idle_pp0");
    sc_trace(mVcdFile, ap_enable_pp0, "ap_enable_pp0");
#endif

    }
    mHdltvinHandle.open("kernel7.hdltvin.dat");
    mHdltvoutHandle.open("kernel7.hdltvout.dat");
}

kernel7::~kernel7() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete kernel7_faddfsub_bkb_U1;
    delete kernel7_fcmp_32nscud_U2;
}

void kernel7::thread_ap_var_for_const0() {
    ap_var_for_const0 = ap_const_logic_1;
}

void kernel7::thread_ap_var_for_const1() {
    ap_var_for_const1 = ap_const_lv32_0;
}

void kernel7::thread_ap_var_for_const2() {
    ap_var_for_const2 = ap_const_lv5_2;
}

void kernel7::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            ap_enable_reg_pp0_iter2 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln7_reg_202.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        i_0_reg_88 = i_reg_206.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_0_reg_88 = ap_const_lv11_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(and_ln14_reg_243.read(), ap_const_lv1_1))) {
        sum_1_fu_54 = possible_reg_247.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        sum_1_fu_54 = ap_const_lv32_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln7_reg_202.read(), ap_const_lv1_0))) {
        a_load_reg_221 = a_q0.read();
        b_load_reg_226 = b_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_11001.read(), ap_const_boolean_0))) {
        and_ln14_reg_243 = and_ln14_fu_175_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        diff_reg_231 = grp_fu_99_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        i_reg_206 = i_fu_128_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln7_reg_202 = icmp_ln7_fu_122_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage2_11001.read(), ap_const_boolean_0))) {
        possible_reg_247 = grp_fu_99_p2.read();
    }
}

void kernel7::thread_a_address0() {
    a_address0 =  (sc_lv<10>) (zext_ln9_fu_134_p1.read());
}

void kernel7::thread_a_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        a_ce0 = ap_const_logic_1;
    } else {
        a_ce0 = ap_const_logic_0;
    }
}

void kernel7::thread_and_ln14_fu_175_p2() {
    and_ln14_fu_175_p2 = (or_ln14_fu_169_p2.read() & grp_fu_103_p2.read());
}

void kernel7::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void kernel7::thread_ap_CS_fsm_pp0_stage1() {
    ap_CS_fsm_pp0_stage1 = ap_CS_fsm.read()[2];
}

void kernel7::thread_ap_CS_fsm_pp0_stage2() {
    ap_CS_fsm_pp0_stage2 = ap_CS_fsm.read()[3];
}

void kernel7::thread_ap_CS_fsm_pp0_stage3() {
    ap_CS_fsm_pp0_stage3 = ap_CS_fsm.read()[4];
}

void kernel7::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void kernel7::thread_ap_CS_fsm_state14() {
    ap_CS_fsm_state14 = ap_CS_fsm.read()[5];
}

void kernel7::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel7::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel7::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel7::thread_ap_block_pp0_stage1_11001() {
    ap_block_pp0_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel7::thread_ap_block_pp0_stage1_subdone() {
    ap_block_pp0_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel7::thread_ap_block_pp0_stage2() {
    ap_block_pp0_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel7::thread_ap_block_pp0_stage2_00001() {
    ap_block_pp0_stage2_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel7::thread_ap_block_pp0_stage2_11001() {
    ap_block_pp0_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel7::thread_ap_block_pp0_stage2_subdone() {
    ap_block_pp0_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel7::thread_ap_block_pp0_stage3() {
    ap_block_pp0_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel7::thread_ap_block_pp0_stage3_00001() {
    ap_block_pp0_stage3_00001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel7::thread_ap_block_pp0_stage3_11001() {
    ap_block_pp0_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel7::thread_ap_block_pp0_stage3_subdone() {
    ap_block_pp0_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel7::thread_ap_block_state10_pp0_stage0_iter2() {
    ap_block_state10_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel7::thread_ap_block_state11_pp0_stage1_iter2() {
    ap_block_state11_pp0_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel7::thread_ap_block_state12_pp0_stage2_iter2() {
    ap_block_state12_pp0_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel7::thread_ap_block_state13_pp0_stage3_iter2() {
    ap_block_state13_pp0_stage3_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel7::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel7::thread_ap_block_state3_pp0_stage1_iter0() {
    ap_block_state3_pp0_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel7::thread_ap_block_state4_pp0_stage2_iter0() {
    ap_block_state4_pp0_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel7::thread_ap_block_state5_pp0_stage3_iter0() {
    ap_block_state5_pp0_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel7::thread_ap_block_state6_pp0_stage0_iter1() {
    ap_block_state6_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel7::thread_ap_block_state7_pp0_stage1_iter1() {
    ap_block_state7_pp0_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel7::thread_ap_block_state8_pp0_stage2_iter1() {
    ap_block_state8_pp0_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel7::thread_ap_block_state9_pp0_stage3_iter1() {
    ap_block_state9_pp0_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel7::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(icmp_ln7_fu_122_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void kernel7::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void kernel7::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void kernel7::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void kernel7::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void kernel7::thread_ap_phi_mux_i_0_phi_fu_92_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(icmp_ln7_reg_202.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_i_0_phi_fu_92_p4 = i_reg_206.read();
    } else {
        ap_phi_mux_i_0_phi_fu_92_p4 = i_0_reg_88.read();
    }
}

void kernel7::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void kernel7::thread_ap_return() {
    ap_return = grp_load_fu_108_p1.read();
}

void kernel7::thread_ap_sig_allocacmp_sum_1_load_1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(and_ln14_reg_243.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        ap_sig_allocacmp_sum_1_load_1 = possible_reg_247.read();
    } else {
        ap_sig_allocacmp_sum_1_load_1 = sum_1_fu_54.read();
    }
}

void kernel7::thread_b_address0() {
    b_address0 =  (sc_lv<10>) (zext_ln9_fu_134_p1.read());
}

void kernel7::thread_b_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_ce0 = ap_const_logic_1;
    } else {
        b_ce0 = ap_const_logic_0;
    }
}

void kernel7::thread_bitcast_ln14_fu_140_p1() {
    bitcast_ln14_fu_140_p1 = diff_reg_231.read();
}

void kernel7::thread_grp_fu_99_opcode() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln7_reg_202.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_00001.read(), ap_const_boolean_0))) {
        grp_fu_99_opcode = ap_const_lv2_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_00001.read(), ap_const_boolean_0))) {
        grp_fu_99_opcode = ap_const_lv2_0;
    } else {
        grp_fu_99_opcode = "XX";
    }
}

void kernel7::thread_grp_fu_99_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_fu_99_p0 = grp_load_fu_108_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_99_p0 = a_load_reg_221.read();
    } else {
        grp_fu_99_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void kernel7::thread_grp_fu_99_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_fu_99_p1 = diff_reg_231.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_99_p1 = b_load_reg_226.read();
    } else {
        grp_fu_99_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void kernel7::thread_grp_load_fu_108_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        grp_load_fu_108_p1 = sum_1_fu_54.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3.read(), ap_const_boolean_0))) {
        grp_load_fu_108_p1 = ap_sig_allocacmp_sum_1_load_1.read();
    } else {
        grp_load_fu_108_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void kernel7::thread_i_fu_128_p2() {
    i_fu_128_p2 = (!ap_phi_mux_i_0_phi_fu_92_p4.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(ap_phi_mux_i_0_phi_fu_92_p4.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void kernel7::thread_icmp_ln14_1_fu_163_p2() {
    icmp_ln14_1_fu_163_p2 = (!trunc_ln14_fu_153_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln14_fu_153_p1.read() == ap_const_lv23_0);
}

void kernel7::thread_icmp_ln14_fu_157_p2() {
    icmp_ln14_fu_157_p2 = (!tmp_fu_143_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_fu_143_p4.read() != ap_const_lv8_FF);
}

void kernel7::thread_icmp_ln7_fu_122_p2() {
    icmp_ln7_fu_122_p2 = (!ap_phi_mux_i_0_phi_fu_92_p4.read().is_01() || !ap_const_lv11_400.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i_0_phi_fu_92_p4.read() == ap_const_lv11_400);
}

void kernel7::thread_or_ln14_fu_169_p2() {
    or_ln14_fu_169_p2 = (icmp_ln14_1_fu_163_p2.read() | icmp_ln14_fu_157_p2.read());
}

void kernel7::thread_tmp_fu_143_p4() {
    tmp_fu_143_p4 = bitcast_ln14_fu_140_p1.read().range(30, 23);
}

void kernel7::thread_trunc_ln14_fu_153_p1() {
    trunc_ln14_fu_153_p1 = bitcast_ln14_fu_140_p1.read().range(23-1, 0);
}

void kernel7::thread_zext_ln9_fu_134_p1() {
    zext_ln9_fu_134_p1 = esl_zext<64,11>(ap_phi_mux_i_0_phi_fu_92_p4.read());
}

void kernel7::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln7_fu_122_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln7_fu_122_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0))) {
                ap_NS_fsm = ap_ST_fsm_state14;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage1_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            }
            break;
        case 8 : 
            if (esl_seteq<1,1,1>(ap_block_pp0_stage2_subdone.read(), ap_const_boolean_0)) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage3;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            }
            break;
        case 16 : 
            if ((esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage3_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0))) {
                ap_NS_fsm = ap_ST_fsm_state14;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage3;
            }
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<6>) ("XXXXXX");
            break;
    }
}

void kernel7::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_address0\" :  \"" << a_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_ce0\" :  \"" << a_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a_q0\" :  \"" << a_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_address0\" :  \"" << b_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_ce0\" :  \"" << b_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"b_q0\" :  \"" << b_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_return\" :  \"" << ap_return.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

