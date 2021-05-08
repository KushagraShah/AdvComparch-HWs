// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "kernel5.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic kernel5::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic kernel5::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<10> kernel5::ap_ST_fsm_state1 = "1";
const sc_lv<10> kernel5::ap_ST_fsm_state2 = "10";
const sc_lv<10> kernel5::ap_ST_fsm_state3 = "100";
const sc_lv<10> kernel5::ap_ST_fsm_state4 = "1000";
const sc_lv<10> kernel5::ap_ST_fsm_state5 = "10000";
const sc_lv<10> kernel5::ap_ST_fsm_state6 = "100000";
const sc_lv<10> kernel5::ap_ST_fsm_state7 = "1000000";
const sc_lv<10> kernel5::ap_ST_fsm_state8 = "10000000";
const sc_lv<10> kernel5::ap_ST_fsm_state9 = "100000000";
const sc_lv<10> kernel5::ap_ST_fsm_state10 = "1000000000";
const sc_lv<32> kernel5::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> kernel5::ap_const_lv32_1 = "1";
const sc_lv<1> kernel5::ap_const_lv1_0 = "0";
const sc_lv<32> kernel5::ap_const_lv32_2 = "10";
const sc_lv<32> kernel5::ap_const_lv32_6 = "110";
const sc_lv<11> kernel5::ap_const_lv11_0 = "00000000000";
const sc_lv<32> kernel5::ap_const_lv32_8 = "1000";
const sc_lv<1> kernel5::ap_const_lv1_1 = "1";
const sc_lv<32> kernel5::ap_const_lv32_3 = "11";
const sc_lv<32> kernel5::ap_const_lv32_7 = "111";
const sc_lv<23> kernel5::ap_const_lv23_0 = "00000000000000000000000";
const sc_lv<11> kernel5::ap_const_lv11_400 = "10000000000";
const sc_lv<11> kernel5::ap_const_lv11_1 = "1";
const sc_lv<32> kernel5::ap_const_lv32_17 = "10111";
const sc_lv<32> kernel5::ap_const_lv32_1E = "11110";
const sc_lv<8> kernel5::ap_const_lv8_FF = "11111111";
const sc_lv<5> kernel5::ap_const_lv5_3 = "11";
const sc_lv<32> kernel5::ap_const_lv32_9 = "1001";
const bool kernel5::ap_const_boolean_1 = true;

kernel5::kernel5(sc_module_name name) : sc_module(name), mVcdFile(0) {
    kernel5_fadd_32nsbkb_U1 = new kernel5_fadd_32nsbkb<1,4,32,32,32>("kernel5_fadd_32nsbkb_U1");
    kernel5_fadd_32nsbkb_U1->clk(ap_clk);
    kernel5_fadd_32nsbkb_U1->reset(ap_rst);
    kernel5_fadd_32nsbkb_U1->din0(a_load_reg_261);
    kernel5_fadd_32nsbkb_U1->din1(b_load_reg_266);
    kernel5_fadd_32nsbkb_U1->ce(ap_var_for_const0);
    kernel5_fadd_32nsbkb_U1->dout(grp_fu_116_p2);
    kernel5_fcmp_32nscud_U2 = new kernel5_fcmp_32nscud<1,2,32,32,1>("kernel5_fcmp_32nscud_U2");
    kernel5_fcmp_32nscud_U2->clk(ap_clk);
    kernel5_fcmp_32nscud_U2->reset(ap_rst);
    kernel5_fcmp_32nscud_U2->din0(ans_reg_271);
    kernel5_fcmp_32nscud_U2->din1(bound);
    kernel5_fcmp_32nscud_U2->ce(ap_var_for_const0);
    kernel5_fcmp_32nscud_U2->opcode(ap_var_for_const1);
    kernel5_fcmp_32nscud_U2->dout(grp_fu_120_p2);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_a_address0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( zext_ln40_fu_150_p1 );

    SC_METHOD(thread_a_ce0);
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_and_ln42_1_fu_216_p2);
    sensitive << ( and_ln42_fu_210_p2 );
    sensitive << ( grp_fu_120_p2 );

    SC_METHOD(thread_and_ln42_fu_210_p2);
    sensitive << ( or_ln42_fu_200_p2 );
    sensitive << ( or_ln42_1_fu_206_p2 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state10);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state7);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state8);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state9);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state10 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state10 );

    SC_METHOD(thread_ap_return);
    sensitive << ( ans_01_reg_105 );
    sensitive << ( ap_CS_fsm_state10 );

    SC_METHOD(thread_b_address0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( zext_ln40_fu_150_p1 );

    SC_METHOD(thread_b_ce0);
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_bitcast_ln42_1_fu_124_p1);
    sensitive << ( bound );

    SC_METHOD(thread_bitcast_ln42_fu_171_p1);
    sensitive << ( ans_reg_271 );

    SC_METHOD(thread_i_fu_144_p2);
    sensitive << ( i_0_reg_94 );

    SC_METHOD(thread_icmp_ln38_fu_138_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i_0_reg_94 );

    SC_METHOD(thread_icmp_ln42_1_fu_194_p2);
    sensitive << ( icmp_ln38_reg_237 );
    sensitive << ( ap_CS_fsm_state9 );
    sensitive << ( trunc_ln42_1_fu_184_p1 );

    SC_METHOD(thread_icmp_ln42_2_fu_165_p2);
    sensitive << ( icmp_ln38_fu_138_p2 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_2_fu_156_p4 );

    SC_METHOD(thread_icmp_ln42_3_fu_132_p2);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( trunc_ln42_fu_128_p1 );

    SC_METHOD(thread_icmp_ln42_fu_188_p2);
    sensitive << ( icmp_ln38_reg_237 );
    sensitive << ( ap_CS_fsm_state9 );
    sensitive << ( tmp_fu_174_p4 );

    SC_METHOD(thread_or_ln42_1_fu_206_p2);
    sensitive << ( icmp_ln42_3_reg_232 );
    sensitive << ( icmp_ln42_2_reg_256 );

    SC_METHOD(thread_or_ln42_fu_200_p2);
    sensitive << ( icmp_ln42_1_fu_194_p2 );
    sensitive << ( icmp_ln42_fu_188_p2 );

    SC_METHOD(thread_tmp_2_fu_156_p4);
    sensitive << ( bitcast_ln42_1_reg_227 );

    SC_METHOD(thread_tmp_fu_174_p4);
    sensitive << ( bitcast_ln42_fu_171_p1 );

    SC_METHOD(thread_trunc_ln42_1_fu_184_p1);
    sensitive << ( bitcast_ln42_fu_171_p1 );

    SC_METHOD(thread_trunc_ln42_fu_128_p1);
    sensitive << ( bitcast_ln42_1_fu_124_p1 );

    SC_METHOD(thread_zext_ln40_fu_150_p1);
    sensitive << ( i_0_reg_94 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( icmp_ln38_reg_237 );
    sensitive << ( ap_CS_fsm_state9 );
    sensitive << ( and_ln42_1_fu_216_p2 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    SC_THREAD(thread_ap_var_for_const0);

    SC_THREAD(thread_ap_var_for_const1);

    ap_CS_fsm = "0000000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "kernel5_sc_trace_" << apTFileNum ++;
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
    sc_trace(mVcdFile, bound, "(port)bound");
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
    sc_trace(mVcdFile, bitcast_ln42_1_fu_124_p1, "bitcast_ln42_1_fu_124_p1");
    sc_trace(mVcdFile, bitcast_ln42_1_reg_227, "bitcast_ln42_1_reg_227");
    sc_trace(mVcdFile, icmp_ln42_3_fu_132_p2, "icmp_ln42_3_fu_132_p2");
    sc_trace(mVcdFile, icmp_ln42_3_reg_232, "icmp_ln42_3_reg_232");
    sc_trace(mVcdFile, icmp_ln38_fu_138_p2, "icmp_ln38_fu_138_p2");
    sc_trace(mVcdFile, icmp_ln38_reg_237, "icmp_ln38_reg_237");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, i_fu_144_p2, "i_fu_144_p2");
    sc_trace(mVcdFile, i_reg_241, "i_reg_241");
    sc_trace(mVcdFile, icmp_ln42_2_fu_165_p2, "icmp_ln42_2_fu_165_p2");
    sc_trace(mVcdFile, icmp_ln42_2_reg_256, "icmp_ln42_2_reg_256");
    sc_trace(mVcdFile, a_load_reg_261, "a_load_reg_261");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, b_load_reg_266, "b_load_reg_266");
    sc_trace(mVcdFile, grp_fu_116_p2, "grp_fu_116_p2");
    sc_trace(mVcdFile, ans_reg_271, "ans_reg_271");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, i_0_reg_94, "i_0_reg_94");
    sc_trace(mVcdFile, ap_CS_fsm_state9, "ap_CS_fsm_state9");
    sc_trace(mVcdFile, and_ln42_1_fu_216_p2, "and_ln42_1_fu_216_p2");
    sc_trace(mVcdFile, ans_01_reg_105, "ans_01_reg_105");
    sc_trace(mVcdFile, zext_ln40_fu_150_p1, "zext_ln40_fu_150_p1");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, ap_CS_fsm_state8, "ap_CS_fsm_state8");
    sc_trace(mVcdFile, trunc_ln42_fu_128_p1, "trunc_ln42_fu_128_p1");
    sc_trace(mVcdFile, tmp_2_fu_156_p4, "tmp_2_fu_156_p4");
    sc_trace(mVcdFile, bitcast_ln42_fu_171_p1, "bitcast_ln42_fu_171_p1");
    sc_trace(mVcdFile, tmp_fu_174_p4, "tmp_fu_174_p4");
    sc_trace(mVcdFile, trunc_ln42_1_fu_184_p1, "trunc_ln42_1_fu_184_p1");
    sc_trace(mVcdFile, icmp_ln42_1_fu_194_p2, "icmp_ln42_1_fu_194_p2");
    sc_trace(mVcdFile, icmp_ln42_fu_188_p2, "icmp_ln42_fu_188_p2");
    sc_trace(mVcdFile, or_ln42_fu_200_p2, "or_ln42_fu_200_p2");
    sc_trace(mVcdFile, or_ln42_1_fu_206_p2, "or_ln42_1_fu_206_p2");
    sc_trace(mVcdFile, and_ln42_fu_210_p2, "and_ln42_fu_210_p2");
    sc_trace(mVcdFile, grp_fu_120_p2, "grp_fu_120_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state10, "ap_CS_fsm_state10");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("kernel5.hdltvin.dat");
    mHdltvoutHandle.open("kernel5.hdltvout.dat");
}

kernel5::~kernel5() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete kernel5_fadd_32nsbkb_U1;
    delete kernel5_fcmp_32nscud_U2;
}

void kernel5::thread_ap_var_for_const0() {
    ap_var_for_const0 = ap_const_logic_1;
}

void kernel5::thread_ap_var_for_const1() {
    ap_var_for_const1 = ap_const_lv5_3;
}

void kernel5::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(icmp_ln38_reg_237.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, and_ln42_1_fu_216_p2.read()))) {
        i_0_reg_94 = i_reg_241.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_0_reg_94 = ap_const_lv11_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(icmp_ln38_reg_237.read(), ap_const_lv1_0))) {
        a_load_reg_261 = a_q0.read();
        b_load_reg_266 = b_q0.read();
    }
    if ((esl_seteq<1,1,1>(icmp_ln38_reg_237.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(and_ln42_1_fu_216_p2.read(), ap_const_lv1_1))) {
        ans_01_reg_105 = ans_reg_271.read();
    }
    if ((esl_seteq<1,1,1>(icmp_ln38_reg_237.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        ans_reg_271 = grp_fu_116_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        bitcast_ln42_1_reg_227 = bitcast_ln42_1_fu_124_p1.read();
        icmp_ln42_3_reg_232 = icmp_ln42_3_fu_132_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        i_reg_241 = i_fu_144_p2.read();
        icmp_ln38_reg_237 = icmp_ln38_fu_138_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln38_fu_138_p2.read(), ap_const_lv1_0))) {
        icmp_ln42_2_reg_256 = icmp_ln42_2_fu_165_p2.read();
    }
}

void kernel5::thread_a_address0() {
    a_address0 =  (sc_lv<10>) (zext_ln40_fu_150_p1.read());
}

void kernel5::thread_a_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        a_ce0 = ap_const_logic_1;
    } else {
        a_ce0 = ap_const_logic_0;
    }
}

void kernel5::thread_and_ln42_1_fu_216_p2() {
    and_ln42_1_fu_216_p2 = (and_ln42_fu_210_p2.read() & grp_fu_120_p2.read());
}

void kernel5::thread_and_ln42_fu_210_p2() {
    and_ln42_fu_210_p2 = (or_ln42_fu_200_p2.read() & or_ln42_1_fu_206_p2.read());
}

void kernel5::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void kernel5::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[9];
}

void kernel5::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void kernel5::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void kernel5::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void kernel5::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void kernel5::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void kernel5::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void kernel5::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void kernel5::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void kernel5::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void kernel5::thread_ap_return() {
    ap_return = ans_01_reg_105.read();
}

void kernel5::thread_b_address0() {
    b_address0 =  (sc_lv<10>) (zext_ln40_fu_150_p1.read());
}

void kernel5::thread_b_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        b_ce0 = ap_const_logic_1;
    } else {
        b_ce0 = ap_const_logic_0;
    }
}

void kernel5::thread_bitcast_ln42_1_fu_124_p1() {
    bitcast_ln42_1_fu_124_p1 = bound.read();
}

void kernel5::thread_bitcast_ln42_fu_171_p1() {
    bitcast_ln42_fu_171_p1 = ans_reg_271.read();
}

void kernel5::thread_i_fu_144_p2() {
    i_fu_144_p2 = (!i_0_reg_94.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(i_0_reg_94.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void kernel5::thread_icmp_ln38_fu_138_p2() {
    icmp_ln38_fu_138_p2 = (!i_0_reg_94.read().is_01() || !ap_const_lv11_400.is_01())? sc_lv<1>(): sc_lv<1>(i_0_reg_94.read() == ap_const_lv11_400);
}

void kernel5::thread_icmp_ln42_1_fu_194_p2() {
    icmp_ln42_1_fu_194_p2 = (!trunc_ln42_1_fu_184_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln42_1_fu_184_p1.read() == ap_const_lv23_0);
}

void kernel5::thread_icmp_ln42_2_fu_165_p2() {
    icmp_ln42_2_fu_165_p2 = (!tmp_2_fu_156_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_2_fu_156_p4.read() != ap_const_lv8_FF);
}

void kernel5::thread_icmp_ln42_3_fu_132_p2() {
    icmp_ln42_3_fu_132_p2 = (!trunc_ln42_fu_128_p1.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln42_fu_128_p1.read() == ap_const_lv23_0);
}

void kernel5::thread_icmp_ln42_fu_188_p2() {
    icmp_ln42_fu_188_p2 = (!tmp_fu_174_p4.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_fu_174_p4.read() != ap_const_lv8_FF);
}

void kernel5::thread_or_ln42_1_fu_206_p2() {
    or_ln42_1_fu_206_p2 = (icmp_ln42_3_reg_232.read() | icmp_ln42_2_reg_256.read());
}

void kernel5::thread_or_ln42_fu_200_p2() {
    or_ln42_fu_200_p2 = (icmp_ln42_1_fu_194_p2.read() | icmp_ln42_fu_188_p2.read());
}

void kernel5::thread_tmp_2_fu_156_p4() {
    tmp_2_fu_156_p4 = bitcast_ln42_1_reg_227.read().range(30, 23);
}

void kernel5::thread_tmp_fu_174_p4() {
    tmp_fu_174_p4 = bitcast_ln42_fu_171_p1.read().range(30, 23);
}

void kernel5::thread_trunc_ln42_1_fu_184_p1() {
    trunc_ln42_1_fu_184_p1 = bitcast_ln42_fu_171_p1.read().range(23-1, 0);
}

void kernel5::thread_trunc_ln42_fu_128_p1() {
    trunc_ln42_fu_128_p1 = bitcast_ln42_1_fu_124_p1.read().range(23-1, 0);
}

void kernel5::thread_zext_ln40_fu_150_p1() {
    zext_ln40_fu_150_p1 = esl_zext<64,11>(i_0_reg_94.read());
}

void kernel5::thread_ap_NS_fsm() {
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
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state8;
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state9;
            break;
        case 256 : 
            if ((esl_seteq<1,1,1>(icmp_ln38_reg_237.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, and_ln42_1_fu_216_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state10;
            }
            break;
        case 512 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "XXXXXXXXXX";
            break;
    }
}

void kernel5::thread_hdltv_gen() {
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
        mHdltvinHandle << " , " <<  " \"bound\" :  \"" << bound.read() << "\" ";
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
