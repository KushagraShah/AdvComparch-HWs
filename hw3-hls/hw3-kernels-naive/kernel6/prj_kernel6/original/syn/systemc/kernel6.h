// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _kernel6_HH_
#define _kernel6_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct kernel6 : public sc_module {
    // Port declarations 8
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > x;
    sc_out< sc_lv<32> > ap_return;


    // Module declarations
    kernel6(sc_module_name name);
    SC_HAS_PROCESS(kernel6);

    ~kernel6();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    sc_signal< sc_lv<2> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<32> > i_fu_46_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<32> > i_0_reg_24;
    sc_signal< sc_lv<1> > icmp_ln6_fu_41_p2;
    sc_signal< sc_lv<32> > mul_ln6_fu_35_p2;
    sc_signal< sc_lv<2> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<2> ap_ST_fsm_state1;
    static const sc_lv<2> ap_ST_fsm_state2;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_i_fu_46_p2();
    void thread_icmp_ln6_fu_41_p2();
    void thread_mul_ln6_fu_35_p2();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
