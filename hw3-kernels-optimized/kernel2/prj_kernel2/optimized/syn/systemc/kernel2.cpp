// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "kernel2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic kernel2::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic kernel2::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<5> kernel2::ap_ST_fsm_state1 = "1";
const sc_lv<5> kernel2::ap_ST_fsm_state2 = "10";
const sc_lv<5> kernel2::ap_ST_fsm_state3 = "100";
const sc_lv<5> kernel2::ap_ST_fsm_pp0_stage0 = "1000";
const sc_lv<5> kernel2::ap_ST_fsm_state6 = "10000";
const sc_lv<32> kernel2::ap_const_lv32_0 = "00000000000000000000000000000000";
const bool kernel2::ap_const_boolean_1 = true;
const sc_lv<32> kernel2::ap_const_lv32_1 = "1";
const sc_lv<32> kernel2::ap_const_lv32_2 = "10";
const sc_lv<32> kernel2::ap_const_lv32_3 = "11";
const bool kernel2::ap_const_boolean_0 = false;
const sc_lv<1> kernel2::ap_const_lv1_0 = "0";
const sc_lv<1> kernel2::ap_const_lv1_1 = "1";
const sc_lv<11> kernel2::ap_const_lv11_3 = "11";
const sc_lv<64> kernel2::ap_const_lv64_0 = "0000000000000000000000000000000000000000000000000000000000000000";
const sc_lv<64> kernel2::ap_const_lv64_1 = "1";
const sc_lv<64> kernel2::ap_const_lv64_2 = "10";
const sc_lv<11> kernel2::ap_const_lv11_400 = "10000000000";
const sc_lv<11> kernel2::ap_const_lv11_1 = "1";
const sc_lv<32> kernel2::ap_const_lv32_4 = "100";

kernel2::kernel2(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_pp0_stage0);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_pp0_stage0);

    SC_METHOD(thread_ap_block_pp0_stage0_11001);

    SC_METHOD(thread_ap_block_pp0_stage0_subdone);

    SC_METHOD(thread_ap_block_state4_pp0_stage0_iter0);

    SC_METHOD(thread_ap_block_state5_pp0_stage0_iter1);

    SC_METHOD(thread_ap_condition_pp0_exit_iter0_state4);
    sensitive << ( icmp_ln8_fu_129_p2 );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_ap_enable_pp0);
    sensitive << ( ap_idle_pp0 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_idle_pp0);
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_ap_phi_mux_i_0_phi_fu_121_p4);
    sensitive << ( i_0_reg_117 );
    sensitive << ( icmp_ln8_reg_188 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( i_reg_198 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_ap_phi_mux_prev_0_0_phi_fu_110_p4);
    sensitive << ( prev_0_1_reg_96 );
    sensitive << ( prev_0_0_reg_107 );
    sensitive << ( icmp_ln8_reg_188 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_ap_phi_mux_prev_0_1_phi_fu_99_p4);
    sensitive << ( prev_1_1_reg_86 );
    sensitive << ( prev_0_1_reg_96 );
    sensitive << ( icmp_ln8_reg_188 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_ap_phi_mux_prev_1_1_phi_fu_89_p4);
    sensitive << ( prev_1_1_reg_86 );
    sensitive << ( icmp_ln8_reg_188 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( result_reg_192 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_array_r_address0);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_array_r_address1);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( zext_ln16_fu_153_p1 );

    SC_METHOD(thread_array_r_ce0);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_array_r_ce1);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_array_r_d1);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( result_reg_192 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_array_r_we1);
    sensitive << ( icmp_ln8_reg_188 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_i_fu_147_p2);
    sensitive << ( ap_phi_mux_i_0_phi_fu_121_p4 );

    SC_METHOD(thread_icmp_ln8_fu_129_p2);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_phi_mux_i_0_phi_fu_121_p4 );

    SC_METHOD(thread_mul_ln10_fu_135_p2);
    sensitive << ( ap_phi_mux_prev_0_1_phi_fu_99_p4 );
    sensitive << ( ap_phi_mux_prev_0_0_phi_fu_110_p4 );

    SC_METHOD(thread_result_fu_141_p2);
    sensitive << ( ap_phi_mux_prev_1_1_phi_fu_89_p4 );
    sensitive << ( mul_ln10_fu_135_p2 );

    SC_METHOD(thread_zext_ln16_fu_153_p1);
    sensitive << ( i_0_reg_117 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( icmp_ln8_fu_129_p2 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_block_pp0_stage0_subdone );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "00001";
    ap_enable_reg_pp0_iter0 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter1 = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "kernel2_sc_trace_" << apTFileNum ++;
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
    sc_trace(mVcdFile, array_r_address0, "(port)array_r_address0");
    sc_trace(mVcdFile, array_r_ce0, "(port)array_r_ce0");
    sc_trace(mVcdFile, array_r_q0, "(port)array_r_q0");
    sc_trace(mVcdFile, array_r_address1, "(port)array_r_address1");
    sc_trace(mVcdFile, array_r_ce1, "(port)array_r_ce1");
    sc_trace(mVcdFile, array_r_we1, "(port)array_r_we1");
    sc_trace(mVcdFile, array_r_d1, "(port)array_r_d1");
    sc_trace(mVcdFile, array_r_q1, "(port)array_r_q1");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, prev_1_1_reg_86, "prev_1_1_reg_86");
    sc_trace(mVcdFile, prev_0_1_reg_96, "prev_0_1_reg_96");
    sc_trace(mVcdFile, prev_0_0_reg_107, "prev_0_0_reg_107");
    sc_trace(mVcdFile, i_0_reg_117, "i_0_reg_117");
    sc_trace(mVcdFile, prev_0_reg_163, "prev_0_reg_163");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, icmp_ln8_fu_129_p2, "icmp_ln8_fu_129_p2");
    sc_trace(mVcdFile, icmp_ln8_reg_188, "icmp_ln8_reg_188");
    sc_trace(mVcdFile, ap_CS_fsm_pp0_stage0, "ap_CS_fsm_pp0_stage0");
    sc_trace(mVcdFile, ap_block_state4_pp0_stage0_iter0, "ap_block_state4_pp0_stage0_iter0");
    sc_trace(mVcdFile, ap_block_state5_pp0_stage0_iter1, "ap_block_state5_pp0_stage0_iter1");
    sc_trace(mVcdFile, ap_block_pp0_stage0_11001, "ap_block_pp0_stage0_11001");
    sc_trace(mVcdFile, result_fu_141_p2, "result_fu_141_p2");
    sc_trace(mVcdFile, result_reg_192, "result_reg_192");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter0, "ap_enable_reg_pp0_iter0");
    sc_trace(mVcdFile, i_fu_147_p2, "i_fu_147_p2");
    sc_trace(mVcdFile, i_reg_198, "i_reg_198");
    sc_trace(mVcdFile, ap_block_pp0_stage0_subdone, "ap_block_pp0_stage0_subdone");
    sc_trace(mVcdFile, ap_condition_pp0_exit_iter0_state4, "ap_condition_pp0_exit_iter0_state4");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter1, "ap_enable_reg_pp0_iter1");
    sc_trace(mVcdFile, ap_phi_mux_prev_1_1_phi_fu_89_p4, "ap_phi_mux_prev_1_1_phi_fu_89_p4");
    sc_trace(mVcdFile, ap_block_pp0_stage0, "ap_block_pp0_stage0");
    sc_trace(mVcdFile, ap_phi_mux_prev_0_1_phi_fu_99_p4, "ap_phi_mux_prev_0_1_phi_fu_99_p4");
    sc_trace(mVcdFile, ap_phi_mux_prev_0_0_phi_fu_110_p4, "ap_phi_mux_prev_0_0_phi_fu_110_p4");
    sc_trace(mVcdFile, ap_phi_mux_i_0_phi_fu_121_p4, "ap_phi_mux_i_0_phi_fu_121_p4");
    sc_trace(mVcdFile, zext_ln16_fu_153_p1, "zext_ln16_fu_153_p1");
    sc_trace(mVcdFile, mul_ln10_fu_135_p2, "mul_ln10_fu_135_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, ap_idle_pp0, "ap_idle_pp0");
    sc_trace(mVcdFile, ap_enable_pp0, "ap_enable_pp0");
#endif

    }
    mHdltvinHandle.open("kernel2.hdltvin.dat");
    mHdltvoutHandle.open("kernel2.hdltvout.dat");
}

kernel2::~kernel2() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
}

void kernel2::thread_ap_clk_no_reset_() {
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
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state4.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state4.read()))) {
            ap_enable_reg_pp0_iter1 = (ap_condition_pp0_exit_iter0_state4.read() ^ ap_const_logic_1);
        } else if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
            ap_enable_reg_pp0_iter1 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln8_reg_188.read(), ap_const_lv1_0))) {
        i_0_reg_117 = i_reg_198.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        i_0_reg_117 = ap_const_lv11_3;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln8_reg_188.read(), ap_const_lv1_0))) {
        prev_0_0_reg_107 = prev_0_1_reg_96.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        prev_0_0_reg_107 = prev_0_reg_163.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln8_reg_188.read(), ap_const_lv1_0))) {
        prev_0_1_reg_96 = prev_1_1_reg_86.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        prev_0_1_reg_96 = array_r_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln8_reg_188.read(), ap_const_lv1_0))) {
        prev_1_1_reg_86 = result_reg_192.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        prev_1_1_reg_86 = array_r_q1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(icmp_ln8_fu_129_p2.read(), ap_const_lv1_0))) {
        i_reg_198 = i_fu_147_p2.read();
        result_reg_192 = result_fu_141_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln8_reg_188 = icmp_ln8_fu_129_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        prev_0_reg_163 = array_r_q0.read();
    }
}

void kernel2::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[3];
}

void kernel2::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void kernel2::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void kernel2::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void kernel2::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[4];
}

void kernel2::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel2::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel2::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel2::thread_ap_block_state4_pp0_stage0_iter0() {
    ap_block_state4_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel2::thread_ap_block_state5_pp0_stage0_iter1() {
    ap_block_state5_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void kernel2::thread_ap_condition_pp0_exit_iter0_state4() {
    if (esl_seteq<1,1,1>(icmp_ln8_fu_129_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state4 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state4 = ap_const_logic_0;
    }
}

void kernel2::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void kernel2::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void kernel2::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void kernel2::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void kernel2::thread_ap_phi_mux_i_0_phi_fu_121_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln8_reg_188.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_i_0_phi_fu_121_p4 = i_reg_198.read();
    } else {
        ap_phi_mux_i_0_phi_fu_121_p4 = i_0_reg_117.read();
    }
}

void kernel2::thread_ap_phi_mux_prev_0_0_phi_fu_110_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln8_reg_188.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_prev_0_0_phi_fu_110_p4 = prev_0_1_reg_96.read();
    } else {
        ap_phi_mux_prev_0_0_phi_fu_110_p4 = prev_0_0_reg_107.read();
    }
}

void kernel2::thread_ap_phi_mux_prev_0_1_phi_fu_99_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln8_reg_188.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_prev_0_1_phi_fu_99_p4 = prev_1_1_reg_86.read();
    } else {
        ap_phi_mux_prev_0_1_phi_fu_99_p4 = prev_0_1_reg_96.read();
    }
}

void kernel2::thread_ap_phi_mux_prev_1_1_phi_fu_89_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln8_reg_188.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_prev_1_1_phi_fu_89_p4 = result_reg_192.read();
    } else {
        ap_phi_mux_prev_1_1_phi_fu_89_p4 = prev_1_1_reg_86.read();
    }
}

void kernel2::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void kernel2::thread_array_r_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        array_r_address0 =  (sc_lv<10>) (ap_const_lv64_1);
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) {
        array_r_address0 =  (sc_lv<10>) (ap_const_lv64_0);
    } else {
        array_r_address0 = "XXXXXXXXXX";
    }
}

void kernel2::thread_array_r_address1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        array_r_address1 =  (sc_lv<10>) (zext_ln16_fu_153_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        array_r_address1 =  (sc_lv<10>) (ap_const_lv64_2);
    } else {
        array_r_address1 = "XXXXXXXXXX";
    }
}

void kernel2::thread_array_r_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
          esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        array_r_ce0 = ap_const_logic_1;
    } else {
        array_r_ce0 = ap_const_logic_0;
    }
}

void kernel2::thread_array_r_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        array_r_ce1 = ap_const_logic_1;
    } else {
        array_r_ce1 = ap_const_logic_0;
    }
}

void kernel2::thread_array_r_d1() {
    array_r_d1 = result_reg_192.read();
}

void kernel2::thread_array_r_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln8_reg_188.read(), ap_const_lv1_0))) {
        array_r_we1 = ap_const_logic_1;
    } else {
        array_r_we1 = ap_const_logic_0;
    }
}

void kernel2::thread_i_fu_147_p2() {
    i_fu_147_p2 = (!ap_phi_mux_i_0_phi_fu_121_p4.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(ap_phi_mux_i_0_phi_fu_121_p4.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void kernel2::thread_icmp_ln8_fu_129_p2() {
    icmp_ln8_fu_129_p2 = (!ap_phi_mux_i_0_phi_fu_121_p4.read().is_01() || !ap_const_lv11_400.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i_0_phi_fu_121_p4.read() == ap_const_lv11_400);
}

void kernel2::thread_mul_ln10_fu_135_p2() {
    mul_ln10_fu_135_p2 = (!ap_phi_mux_prev_0_1_phi_fu_99_p4.read().is_01() || !ap_phi_mux_prev_0_0_phi_fu_110_p4.read().is_01())? sc_lv<32>(): sc_bigint<32>(ap_phi_mux_prev_0_1_phi_fu_99_p4.read()) * sc_bigint<32>(ap_phi_mux_prev_0_0_phi_fu_110_p4.read());
}

void kernel2::thread_result_fu_141_p2() {
    result_fu_141_p2 = (!mul_ln10_fu_135_p2.read().is_01() || !ap_phi_mux_prev_1_1_phi_fu_89_p4.read().is_01())? sc_lv<32>(): (sc_biguint<32>(mul_ln10_fu_135_p2.read()) + sc_biguint<32>(ap_phi_mux_prev_1_1_phi_fu_89_p4.read()));
}

void kernel2::thread_zext_ln16_fu_153_p1() {
    zext_ln16_fu_153_p1 = esl_zext<64,11>(i_0_reg_117.read());
}

void kernel2::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            break;
        case 8 : 
            if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln8_fu_129_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln8_fu_129_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state6;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<5>) ("XXXXX");
            break;
    }
}

void kernel2::thread_hdltv_gen() {
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
        mHdltvoutHandle << " , " <<  " \"array_r_address0\" :  \"" << array_r_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"array_r_ce0\" :  \"" << array_r_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"array_r_q0\" :  \"" << array_r_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"array_r_address1\" :  \"" << array_r_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"array_r_ce1\" :  \"" << array_r_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"array_r_we1\" :  \"" << array_r_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"array_r_d1\" :  \"" << array_r_d1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"array_r_q1\" :  \"" << array_r_q1.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

