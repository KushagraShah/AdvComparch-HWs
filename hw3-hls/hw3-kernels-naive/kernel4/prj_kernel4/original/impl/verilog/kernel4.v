// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="kernel4,hls_ip_2019_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7k160t-fbg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=6.580000,HLS_SYN_LAT=-1,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=6,HLS_SYN_FF=272,HLS_SYN_LUT=279,HLS_VERSION=2019_2}" *)

module kernel4 (
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
        array_r_q1,
        index_address0,
        index_ce0,
        index_q0,
        offset
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
output  [9:0] index_address0;
output   index_ce0;
input  [31:0] index_q0;
input  [31:0] offset;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[9:0] array_r_address0;
reg array_r_ce0;
reg[9:0] array_r_address1;
reg array_r_ce1;
reg array_r_we1;
reg index_ce0;

(* fsm_encoding = "none" *) reg   [5:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [9:0] array_addr_reg_143;
wire  signed [31:0] i_fu_92_p2;
reg  signed [31:0] i_reg_149;
wire    ap_CS_fsm_state2;
reg   [31:0] array_load_reg_158;
wire    ap_CS_fsm_state3;
reg  signed [31:0] index_load_reg_178;
wire    ap_CS_fsm_state4;
reg  signed [31:0] array_load_1_reg_184;
reg  signed [31:0] array_load_2_reg_189;
wire   [31:0] mul_ln7_fu_120_p2;
reg   [31:0] mul_ln7_reg_194;
wire    ap_CS_fsm_state5;
wire   [31:0] mul_ln7_1_fu_124_p2;
reg   [31:0] mul_ln7_1_reg_199;
reg   [31:0] i_0_in_reg_77;
wire    ap_CS_fsm_state6;
wire  signed [63:0] sext_ln7_fu_87_p1;
wire  signed [63:0] sext_ln7_1_fu_104_p1;
wire  signed [63:0] sext_ln7_2_fu_115_p1;
wire  signed [31:0] sext_ln7_fu_87_p0;
wire   [31:0] add_ln7_fu_109_p2;
wire   [31:0] sub_ln7_fu_128_p2;
wire   [0:0] icmp_ln5_fu_98_p2;
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
        i_0_in_reg_77 <= i_reg_149;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        i_0_in_reg_77 <= offset;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        array_addr_reg_143 <= sext_ln7_fu_87_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        array_load_1_reg_184 <= array_r_q0;
        array_load_2_reg_189 <= array_r_q1;
        index_load_reg_178 <= index_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        array_load_reg_158 <= array_r_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_reg_149 <= i_fu_92_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        mul_ln7_1_reg_199 <= mul_ln7_1_fu_124_p2;
        mul_ln7_reg_194 <= mul_ln7_fu_120_p2;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln5_fu_98_p2 == 1'd0))) begin
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
    if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln5_fu_98_p2 == 1'd0))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        array_r_address0 = sext_ln7_1_fu_104_p1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        array_r_address0 = array_addr_reg_143;
    end else begin
        array_r_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        array_r_address1 = array_addr_reg_143;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        array_r_address1 = sext_ln7_2_fu_115_p1;
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
    if ((1'b1 == ap_CS_fsm_state3)) begin
        index_ce0 = 1'b1;
    end else begin
        index_ce0 = 1'b0;
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
            if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln5_fu_98_p2 == 1'd0))) begin
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

assign add_ln7_fu_109_p2 = (i_0_in_reg_77 + 32'd2);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign array_r_d1 = (sub_ln7_fu_128_p2 + mul_ln7_1_reg_199);

assign i_fu_92_p2 = (i_0_in_reg_77 + 32'd1);

assign icmp_ln5_fu_98_p2 = (($signed(i_fu_92_p2) < $signed(32'd1023)) ? 1'b1 : 1'b0);

assign index_address0 = sext_ln7_1_fu_104_p1;

assign mul_ln7_1_fu_124_p2 = ($signed(array_load_2_reg_189) * $signed(index_load_reg_178));

assign mul_ln7_fu_120_p2 = ($signed(array_load_1_reg_184) * $signed(index_load_reg_178));

assign sext_ln7_1_fu_104_p1 = i_reg_149;

assign sext_ln7_2_fu_115_p1 = $signed(add_ln7_fu_109_p2);

assign sext_ln7_fu_87_p0 = offset;

assign sext_ln7_fu_87_p1 = sext_ln7_fu_87_p0;

assign sub_ln7_fu_128_p2 = (array_load_reg_158 - mul_ln7_reg_194);

endmodule //kernel4
