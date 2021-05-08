// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "kernel8.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic kernel8::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic kernel8::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<5> kernel8::ap_ST_fsm_state1 = "1";
const sc_lv<5> kernel8::ap_ST_fsm_state2 = "10";
const sc_lv<5> kernel8::ap_ST_fsm_state3 = "100";
const sc_lv<5> kernel8::ap_ST_fsm_state4 = "1000";
const sc_lv<5> kernel8::ap_ST_fsm_state5 = "10000";
const sc_lv<32> kernel8::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> kernel8::ap_const_lv32_1 = "1";
const sc_lv<32> kernel8::ap_const_lv32_2 = "10";
const sc_lv<32> kernel8::ap_const_lv32_3 = "11";
const sc_lv<32> kernel8::ap_const_lv32_4 = "100";
const sc_lv<31> kernel8::ap_const_lv31_6 = "110";
const sc_lv<32> kernel8::ap_const_lv32_3FF = "1111111111";
const sc_lv<31> kernel8::ap_const_lv31_7FFFFFFA = "1111111111111111111111111111010";
const sc_lv<31> kernel8::ap_const_lv31_1 = "1";
const sc_lv<1> kernel8::ap_const_lv1_0 = "0";
const bool kernel8::ap_const_boolean_1 = true;

kernel8::kernel8(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_add_ln7_1_fu_98_p2);
    sensitive << ( offset );
    sensitive << ( zext_ln7_1_fu_94_p1 );

    SC_METHOD(thread_add_ln7_fu_88_p2);
    sensitive << ( i_0_reg_61 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln5_fu_83_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln5_fu_83_p2 );

    SC_METHOD(thread_array_r_address0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( sext_ln7_fu_103_p1 );
    sensitive << ( zext_ln7_fu_112_p1 );

    SC_METHOD(thread_array_r_ce0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_array_r_d0);
    sensitive << ( mul_ln7_reg_151 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_array_r_we0);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_i_fu_117_p2);
    sensitive << ( i_0_reg_61 );

    SC_METHOD(thread_icmp_ln5_fu_83_p2);
    sensitive << ( sub_ln5_reg_133 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( zext_ln5_fu_79_p1 );

    SC_METHOD(thread_mul_ln7_fu_108_p1);
    sensitive << ( multiplier );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_mul_ln7_fu_108_p2);
    sensitive << ( array_load_reg_146 );
    sensitive << ( mul_ln7_fu_108_p1 );

    SC_METHOD(thread_sext_ln7_fu_103_p1);
    sensitive << ( add_ln7_1_fu_98_p2 );

    SC_METHOD(thread_sub_ln5_fu_73_p2);
    sensitive << ( offset );

    SC_METHOD(thread_zext_ln5_fu_79_p1);
    sensitive << ( i_0_reg_61 );

    SC_METHOD(thread_zext_ln7_1_fu_94_p1);
    sensitive << ( add_ln7_fu_88_p2 );

    SC_METHOD(thread_zext_ln7_fu_112_p1);
    sensitive << ( i_0_reg_61 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln5_fu_83_p2 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "00001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "kernel8_sc_trace_" << apTFileNum ++;
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
    sc_trace(mVcdFile, array_r_we0, "(port)array_r_we0");
    sc_trace(mVcdFile, array_r_d0, "(port)array_r_d0");
    sc_trace(mVcdFile, array_r_q0, "(port)array_r_q0");
    sc_trace(mVcdFile, multiplier, "(port)multiplier");
    sc_trace(mVcdFile, offset, "(port)offset");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, sub_ln5_fu_73_p2, "sub_ln5_fu_73_p2");
    sc_trace(mVcdFile, sub_ln5_reg_133, "sub_ln5_reg_133");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, icmp_ln5_fu_83_p2, "icmp_ln5_fu_83_p2");
    sc_trace(mVcdFile, array_load_reg_146, "array_load_reg_146");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, mul_ln7_fu_108_p2, "mul_ln7_fu_108_p2");
    sc_trace(mVcdFile, mul_ln7_reg_151, "mul_ln7_reg_151");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, i_fu_117_p2, "i_fu_117_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, i_0_reg_61, "i_0_reg_61");
    sc_trace(mVcdFile, sext_ln7_fu_103_p1, "sext_ln7_fu_103_p1");
    sc_trace(mVcdFile, zext_ln7_fu_112_p1, "zext_ln7_fu_112_p1");
    sc_trace(mVcdFile, zext_ln5_fu_79_p1, "zext_ln5_fu_79_p1");
    sc_trace(mVcdFile, add_ln7_fu_88_p2, "add_ln7_fu_88_p2");
    sc_trace(mVcdFile, zext_ln7_1_fu_94_p1, "zext_ln7_1_fu_94_p1");
    sc_trace(mVcdFile, add_ln7_1_fu_98_p2, "add_ln7_1_fu_98_p2");
    sc_trace(mVcdFile, mul_ln7_fu_108_p1, "mul_ln7_fu_108_p1");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("kernel8.hdltvin.dat");
    mHdltvoutHandle.open("kernel8.hdltvout.dat");
}

kernel8::~kernel8() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
}

void kernel8::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        i_0_reg_61 = i_fu_117_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_0_reg_61 = ap_const_lv31_6;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        array_load_reg_146 = array_r_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        mul_ln7_reg_151 = mul_ln7_fu_108_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        sub_ln5_reg_133 = sub_ln5_fu_73_p2.read();
    }
}

void kernel8::thread_add_ln7_1_fu_98_p2() {
    add_ln7_1_fu_98_p2 = (!zext_ln7_1_fu_94_p1.read().is_01() || !offset.read().is_01())? sc_lv<32>(): (sc_biguint<32>(zext_ln7_1_fu_94_p1.read()) + sc_biguint<32>(offset.read()));
}

void kernel8::thread_add_ln7_fu_88_p2() {
    add_ln7_fu_88_p2 = (!i_0_reg_61.read().is_01() || !ap_const_lv31_7FFFFFFA.is_01())? sc_lv<31>(): (sc_biguint<31>(i_0_reg_61.read()) + sc_bigint<31>(ap_const_lv31_7FFFFFFA));
}

void kernel8::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void kernel8::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void kernel8::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void kernel8::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void kernel8::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void kernel8::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln5_fu_83_p2.read(), ap_const_lv1_0))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void kernel8::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void kernel8::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(icmp_ln5_fu_83_p2.read(), ap_const_lv1_0))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void kernel8::thread_array_r_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        array_r_address0 =  (sc_lv<10>) (zext_ln7_fu_112_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        array_r_address0 =  (sc_lv<10>) (sext_ln7_fu_103_p1.read());
    } else {
        array_r_address0 = "XXXXXXXXXX";
    }
}

void kernel8::thread_array_r_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        array_r_ce0 = ap_const_logic_1;
    } else {
        array_r_ce0 = ap_const_logic_0;
    }
}

void kernel8::thread_array_r_d0() {
    array_r_d0 = mul_ln7_reg_151.read();
}

void kernel8::thread_array_r_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        array_r_we0 = ap_const_logic_1;
    } else {
        array_r_we0 = ap_const_logic_0;
    }
}

void kernel8::thread_i_fu_117_p2() {
    i_fu_117_p2 = (!i_0_reg_61.read().is_01() || !ap_const_lv31_1.is_01())? sc_lv<31>(): (sc_biguint<31>(i_0_reg_61.read()) + sc_biguint<31>(ap_const_lv31_1));
}

void kernel8::thread_icmp_ln5_fu_83_p2() {
    icmp_ln5_fu_83_p2 = (!zext_ln5_fu_79_p1.read().is_01() || !sub_ln5_reg_133.read().is_01())? sc_lv<1>(): (sc_bigint<32>(zext_ln5_fu_79_p1.read()) < sc_bigint<32>(sub_ln5_reg_133.read()));
}

void kernel8::thread_mul_ln7_fu_108_p1() {
    mul_ln7_fu_108_p1 = multiplier.read();
}

void kernel8::thread_mul_ln7_fu_108_p2() {
    mul_ln7_fu_108_p2 = (!array_load_reg_146.read().is_01() || !mul_ln7_fu_108_p1.read().is_01())? sc_lv<32>(): sc_bigint<32>(array_load_reg_146.read()) * sc_bigint<32>(mul_ln7_fu_108_p1.read());
}

void kernel8::thread_sext_ln7_fu_103_p1() {
    sext_ln7_fu_103_p1 = esl_sext<64,32>(add_ln7_1_fu_98_p2.read());
}

void kernel8::thread_sub_ln5_fu_73_p2() {
    sub_ln5_fu_73_p2 = (!ap_const_lv32_3FF.is_01() || !offset.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_3FF) - sc_biguint<32>(offset.read()));
}

void kernel8::thread_zext_ln5_fu_79_p1() {
    zext_ln5_fu_79_p1 = esl_zext<32,31>(i_0_reg_61.read());
}

void kernel8::thread_zext_ln7_1_fu_94_p1() {
    zext_ln7_1_fu_94_p1 = esl_zext<32,31>(add_ln7_fu_88_p2.read());
}

void kernel8::thread_zext_ln7_fu_112_p1() {
    zext_ln7_fu_112_p1 = esl_zext<64,31>(i_0_reg_61.read());
}

void kernel8::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln5_fu_83_p2.read(), ap_const_lv1_0))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state2;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<5>) ("XXXXX");
            break;
    }
}

void kernel8::thread_hdltv_gen() {
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
        mHdltvoutHandle << " , " <<  " \"array_r_we0\" :  \"" << array_r_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"array_r_d0\" :  \"" << array_r_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"array_r_q0\" :  \"" << array_r_q0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"multiplier\" :  \"" << multiplier.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"offset\" :  \"" << offset.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

