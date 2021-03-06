// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="kernel2,hls_ip_2019_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7k160t-fbg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=8.365000,HLS_SYN_LAT=5106,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=3,HLS_SYN_FF=145,HLS_SYN_LUT=222,HLS_VERSION=2019_2}" *)

module kernel2 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        array_r_address0,
        array_r_ce0,
        array_r_q0,
        array_r_address1,
        array_r_ce1,
        array_r_we1,
        array_r_d1,
        array_r_q1
);

parameter    ap_ST_fsm_state1 = 6'd1;
parameter    ap_ST_fsm_state2 = 6'd2;
parameter    ap_ST_fsm_state3 = 6'd4;
parameter    ap_ST_fsm_state4 = 6'd8;
parameter    ap_ST_fsm_state5 = 6'd16;
parameter    ap_ST_fsm_state6 = 6'd32;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [9:0] array_r_address0;
output   array_r_ce0;
input  [31:0] array_r_q0;
output  [9:0] array_r_address1;
output   array_r_ce1;
output   array_r_we1;
output  [31:0] array_r_d1;
input  [31:0] array_r_q1;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[9:0] array_r_address0;
reg array_r_ce0;
reg[9:0] array_r_address1;
reg array_r_ce1;
reg array_r_we1;

(* fsm_encoding = "none" *) reg   [5:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire    ap_CS_fsm_state2;
wire   [0:0] icmp_ln6_fu_83_p2;
reg   [31:0] array_load_reg_150;
wire    ap_CS_fsm_state3;
reg  signed [31:0] array_load_1_reg_165;
wire    ap_CS_fsm_state4;
reg  signed [31:0] array_load_2_reg_170;
wire   [31:0] add_ln7_3_fu_126_p2;
reg   [31:0] add_ln7_3_reg_175;
wire    ap_CS_fsm_state5;
wire   [10:0] i_fu_136_p2;
wire    ap_CS_fsm_state6;
reg   [10:0] i_0_reg_71;
wire   [63:0] zext_ln7_fu_95_p1;
wire   [63:0] zext_ln7_1_fu_106_p1;
wire   [63:0] zext_ln7_2_fu_117_p1;
wire   [63:0] zext_ln7_3_fu_131_p1;
wire   [10:0] add_ln7_fu_89_p2;
wire   [10:0] add_ln7_1_fu_100_p2;
wire   [10:0] add_ln7_2_fu_111_p2;
wire   [31:0] mul_ln7_fu_122_p2;
reg   [5:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 6'd1;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        i_0_reg_71 <= i_fu_136_p2;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        i_0_reg_71 <= 11'd3;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        add_ln7_3_reg_175 <= add_ln7_3_fu_126_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        array_load_1_reg_165 <= array_r_q0;
        array_load_2_reg_170 <= array_r_q1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        array_load_reg_150 <= array_r_q0;
    end
end

always @ (*) begin
    if (((icmp_ln6_fu_83_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
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
    if (((icmp_ln6_fu_83_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        array_r_address0 = zext_ln7_1_fu_106_p1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        array_r_address0 = zext_ln7_fu_95_p1;
    end else begin
        array_r_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        array_r_address1 = zext_ln7_3_fu_131_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        array_r_address1 = zext_ln7_2_fu_117_p1;
    end else begin
        array_r_address1 = 'bx;
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
    if (((1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state3))) begin
        array_r_ce1 = 1'b1;
    end else begin
        array_r_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        array_r_we1 = 1'b1;
    end else begin
        array_r_we1 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((icmp_ln6_fu_83_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state2;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln7_1_fu_100_p2 = ($signed(i_0_reg_71) + $signed(11'd2046));

assign add_ln7_2_fu_111_p2 = ($signed(i_0_reg_71) + $signed(11'd2045));

assign add_ln7_3_fu_126_p2 = (array_load_reg_150 + mul_ln7_fu_122_p2);

assign add_ln7_fu_89_p2 = ($signed(i_0_reg_71) + $signed(11'd2047));

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign array_r_d1 = add_ln7_3_reg_175;

assign i_fu_136_p2 = (i_0_reg_71 + 11'd1);

assign icmp_ln6_fu_83_p2 = ((i_0_reg_71 == 11'd1024) ? 1'b1 : 1'b0);

assign mul_ln7_fu_122_p2 = ($signed(array_load_1_reg_165) * $signed(array_load_2_reg_170));

assign zext_ln7_1_fu_106_p1 = add_ln7_1_fu_100_p2;

assign zext_ln7_2_fu_117_p1 = add_ln7_2_fu_111_p2;

assign zext_ln7_3_fu_131_p1 = i_0_reg_71;

assign zext_ln7_fu_95_p1 = add_ln7_fu_89_p2;

endmodule //kernel2
