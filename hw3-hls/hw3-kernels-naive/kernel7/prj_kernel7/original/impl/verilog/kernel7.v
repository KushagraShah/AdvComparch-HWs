// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="kernel7,hls_ip_2019_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=1,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7k160t-fbg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=8.348000,HLS_SYN_LAT=10241,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=2,HLS_SYN_FF=457,HLS_SYN_LUT=500,HLS_VERSION=2019_2}" *)

module kernel7 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        a_address0,
        a_ce0,
        a_q0,
        b_address0,
        b_ce0,
        b_q0,
        ap_return
);

parameter    ap_ST_fsm_state1 = 11'd1;
parameter    ap_ST_fsm_state2 = 11'd2;
parameter    ap_ST_fsm_state3 = 11'd4;
parameter    ap_ST_fsm_state4 = 11'd8;
parameter    ap_ST_fsm_state5 = 11'd16;
parameter    ap_ST_fsm_state6 = 11'd32;
parameter    ap_ST_fsm_state7 = 11'd64;
parameter    ap_ST_fsm_state8 = 11'd128;
parameter    ap_ST_fsm_state9 = 11'd256;
parameter    ap_ST_fsm_state10 = 11'd512;
parameter    ap_ST_fsm_state11 = 11'd1024;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [9:0] a_address0;
output   a_ce0;
input  [31:0] a_q0;
output  [9:0] b_address0;
output   b_ce0;
input  [31:0] b_q0;
output  [31:0] ap_return;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg a_ce0;
reg b_ce0;

(* fsm_encoding = "none" *) reg   [10:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [10:0] i_fu_103_p2;
reg   [10:0] i_reg_164;
wire    ap_CS_fsm_state2;
wire   [0:0] icmp_ln6_fu_97_p2;
reg   [31:0] a_load_reg_179;
wire    ap_CS_fsm_state3;
reg   [31:0] b_load_reg_184;
wire   [31:0] grp_fu_87_p2;
reg   [31:0] diff_reg_189;
wire    ap_CS_fsm_state7;
wire   [0:0] icmp_ln9_fu_132_p2;
reg   [0:0] icmp_ln9_reg_196;
wire    ap_CS_fsm_state8;
wire   [0:0] icmp_ln9_1_fu_138_p2;
reg   [0:0] icmp_ln9_1_reg_201;
wire   [0:0] grp_fu_92_p2;
reg   [0:0] tmp_1_reg_206;
wire    ap_CS_fsm_state9;
wire   [31:0] sum_1_fu_153_p3;
wire    ap_CS_fsm_state11;
reg   [31:0] sum_0_reg_64;
reg   [10:0] i_0_reg_76;
wire   [63:0] zext_ln8_fu_109_p1;
reg   [31:0] grp_fu_87_p0;
reg   [31:0] grp_fu_87_p1;
wire    ap_CS_fsm_state4;
wire   [31:0] bitcast_ln9_fu_115_p1;
wire   [7:0] tmp_fu_118_p4;
wire   [22:0] trunc_ln9_fu_128_p1;
wire   [0:0] or_ln9_fu_144_p2;
wire   [0:0] and_ln9_fu_148_p2;
reg   [1:0] grp_fu_87_opcode;
reg   [10:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 11'd1;
end

kernel7_faddfsub_bkb #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
kernel7_faddfsub_bkb_U1(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_87_p0),
    .din1(grp_fu_87_p1),
    .opcode(grp_fu_87_opcode),
    .ce(1'b1),
    .dout(grp_fu_87_p2)
);

kernel7_fcmp_32nscud #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 1 ))
kernel7_fcmp_32nscud_U2(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(diff_reg_189),
    .din1(32'd0),
    .ce(1'b1),
    .opcode(5'd2),
    .dout(grp_fu_92_p2)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        i_0_reg_76 <= i_reg_164;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        i_0_reg_76 <= 11'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        sum_0_reg_64 <= sum_1_fu_153_p3;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        sum_0_reg_64 <= 32'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        a_load_reg_179 <= a_q0;
        b_load_reg_184 <= b_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        diff_reg_189 <= grp_fu_87_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_reg_164 <= i_fu_103_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        icmp_ln9_1_reg_201 <= icmp_ln9_1_fu_138_p2;
        icmp_ln9_reg_196 <= icmp_ln9_fu_132_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        tmp_1_reg_206 <= grp_fu_92_p2;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        a_ce0 = 1'b1;
    end else begin
        a_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln6_fu_97_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
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
    if (((icmp_ln6_fu_97_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        b_ce0 = 1'b1;
    end else begin
        b_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        grp_fu_87_opcode = 2'd1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        grp_fu_87_opcode = 2'd0;
    end else begin
        grp_fu_87_opcode = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        grp_fu_87_p0 = sum_0_reg_64;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        grp_fu_87_p0 = a_load_reg_179;
    end else begin
        grp_fu_87_p0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        grp_fu_87_p1 = diff_reg_189;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        grp_fu_87_p1 = b_load_reg_184;
    end else begin
        grp_fu_87_p1 = 'bx;
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
            if (((icmp_ln6_fu_97_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
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
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state2;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign a_address0 = zext_ln8_fu_109_p1;

assign and_ln9_fu_148_p2 = (tmp_1_reg_206 & or_ln9_fu_144_p2);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign ap_return = sum_0_reg_64;

assign b_address0 = zext_ln8_fu_109_p1;

assign bitcast_ln9_fu_115_p1 = diff_reg_189;

assign i_fu_103_p2 = (i_0_reg_76 + 11'd1);

assign icmp_ln6_fu_97_p2 = ((i_0_reg_76 == 11'd1024) ? 1'b1 : 1'b0);

assign icmp_ln9_1_fu_138_p2 = ((trunc_ln9_fu_128_p1 == 23'd0) ? 1'b1 : 1'b0);

assign icmp_ln9_fu_132_p2 = ((tmp_fu_118_p4 != 8'd255) ? 1'b1 : 1'b0);

assign or_ln9_fu_144_p2 = (icmp_ln9_reg_196 | icmp_ln9_1_reg_201);

assign sum_1_fu_153_p3 = ((and_ln9_fu_148_p2[0:0] === 1'b1) ? grp_fu_87_p2 : sum_0_reg_64);

assign tmp_fu_118_p4 = {{bitcast_ln9_fu_115_p1[30:23]}};

assign trunc_ln9_fu_128_p1 = bitcast_ln9_fu_115_p1[22:0];

assign zext_ln8_fu_109_p1 = i_0_reg_76;

endmodule //kernel7
