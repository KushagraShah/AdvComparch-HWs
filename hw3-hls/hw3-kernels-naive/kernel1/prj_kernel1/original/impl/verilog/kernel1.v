// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="kernel1,hls_ip_2019_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7k160t-fbg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=7.113000,HLS_SYN_LAT=2049,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=35,HLS_SYN_LUT=115,HLS_VERSION=2019_2}" *)

module kernel1 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        array_r_address0,
        array_r_ce0,
        array_r_we0,
        array_r_d0,
        array_r_q0
);

parameter    ap_ST_fsm_state1 = 3'd1;
parameter    ap_ST_fsm_state2 = 3'd2;
parameter    ap_ST_fsm_state3 = 3'd4;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [9:0] array_r_address0;
output   array_r_ce0;
output   array_r_we0;
output  [31:0] array_r_d0;
input  [31:0] array_r_q0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[9:0] array_r_address0;
reg array_r_ce0;
reg array_r_we0;

(* fsm_encoding = "none" *) reg   [2:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [10:0] i_fu_56_p2;
reg   [10:0] i_reg_83;
wire    ap_CS_fsm_state2;
reg   [9:0] array_addr_reg_88;
wire   [0:0] icmp_ln6_fu_50_p2;
reg   [10:0] i_0_reg_39;
wire    ap_CS_fsm_state3;
wire   [63:0] zext_ln7_fu_62_p1;
wire   [31:0] shl_ln7_fu_67_p2;
reg   [2:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 3'd1;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        i_0_reg_39 <= i_reg_83;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        i_0_reg_39 <= 11'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln6_fu_50_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        array_addr_reg_88 <= zext_ln7_fu_62_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_reg_83 <= i_fu_56_p2;
    end
end

always @ (*) begin
    if (((icmp_ln6_fu_50_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln6_fu_50_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        array_r_address0 = array_addr_reg_88;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        array_r_address0 = zext_ln7_fu_62_p1;
    end else begin
        array_r_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2))) begin
        array_r_ce0 = 1'b1;
    end else begin
        array_r_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        array_r_we0 = 1'b1;
    end else begin
        array_r_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((icmp_ln6_fu_50_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state2;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign array_r_d0 = (array_r_q0 + shl_ln7_fu_67_p2);

assign i_fu_56_p2 = (i_0_reg_39 + 11'd1);

assign icmp_ln6_fu_50_p2 = ((i_0_reg_39 == 11'd1024) ? 1'b1 : 1'b0);

assign shl_ln7_fu_67_p2 = array_r_q0 << 32'd2;

assign zext_ln7_fu_62_p1 = i_0_reg_39;

endmodule //kernel1
