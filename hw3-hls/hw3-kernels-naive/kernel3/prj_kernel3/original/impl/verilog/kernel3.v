// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="kernel3,hls_ip_2019_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=1,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7k160t-fbg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=7.717000,HLS_SYN_LAT=8193,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=2,HLS_SYN_FF=364,HLS_SYN_LUT=316,HLS_VERSION=2019_2}" *)

module kernel3 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        hist_address0,
        hist_ce0,
        hist_we0,
        hist_d0,
        hist_q0,
        weight_address0,
        weight_ce0,
        weight_q0,
        index_address0,
        index_ce0,
        index_q0
);

parameter    ap_ST_fsm_state1 = 9'd1;
parameter    ap_ST_fsm_state2 = 9'd2;
parameter    ap_ST_fsm_state3 = 9'd4;
parameter    ap_ST_fsm_state4 = 9'd8;
parameter    ap_ST_fsm_state5 = 9'd16;
parameter    ap_ST_fsm_state6 = 9'd32;
parameter    ap_ST_fsm_state7 = 9'd64;
parameter    ap_ST_fsm_state8 = 9'd128;
parameter    ap_ST_fsm_state9 = 9'd256;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [9:0] hist_address0;
output   hist_ce0;
output   hist_we0;
output  [31:0] hist_d0;
input  [31:0] hist_q0;
output  [9:0] weight_address0;
output   weight_ce0;
input  [31:0] weight_q0;
output  [9:0] index_address0;
output   index_ce0;
input  [31:0] index_q0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[9:0] hist_address0;
reg hist_ce0;
reg hist_we0;
reg weight_ce0;
reg index_ce0;

(* fsm_encoding = "none" *) reg   [8:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [10:0] i_fu_88_p2;
reg   [10:0] i_reg_108;
wire    ap_CS_fsm_state2;
wire   [0:0] icmp_ln5_fu_82_p2;
reg   [9:0] hist_addr_reg_123;
wire    ap_CS_fsm_state3;
reg   [31:0] weight_load_reg_128;
reg   [31:0] hist_load_reg_133;
wire    ap_CS_fsm_state4;
wire   [31:0] grp_fu_78_p2;
reg   [31:0] tmp_reg_138;
wire    ap_CS_fsm_state8;
reg   [10:0] i_0_reg_67;
wire    ap_CS_fsm_state9;
wire   [63:0] zext_ln6_fu_94_p1;
wire  signed [63:0] sext_ln6_fu_100_p1;
wire    ap_CS_fsm_state5;
reg   [8:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 9'd1;
end

kernel3_fadd_32nsbkb #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
kernel3_fadd_32nsbkb_U1(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(hist_load_reg_133),
    .din1(weight_load_reg_128),
    .ce(1'b1),
    .dout(grp_fu_78_p2)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        i_0_reg_67 <= i_reg_108;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        i_0_reg_67 <= 11'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        hist_addr_reg_123 <= sext_ln6_fu_100_p1;
        weight_load_reg_128 <= weight_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        hist_load_reg_133 <= hist_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_reg_108 <= i_fu_88_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        tmp_reg_138 <= grp_fu_78_p2;
    end
end

always @ (*) begin
    if (((icmp_ln5_fu_82_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
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
    if (((icmp_ln5_fu_82_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        hist_address0 = hist_addr_reg_123;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        hist_address0 = sext_ln6_fu_100_p1;
    end else begin
        hist_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state3))) begin
        hist_ce0 = 1'b1;
    end else begin
        hist_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        hist_we0 = 1'b1;
    end else begin
        hist_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        index_ce0 = 1'b1;
    end else begin
        index_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        weight_ce0 = 1'b1;
    end else begin
        weight_ce0 = 1'b0;
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
            if (((icmp_ln5_fu_82_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
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

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign hist_d0 = tmp_reg_138;

assign i_fu_88_p2 = (i_0_reg_67 + 11'd1);

assign icmp_ln5_fu_82_p2 = ((i_0_reg_67 == 11'd1024) ? 1'b1 : 1'b0);

assign index_address0 = zext_ln6_fu_94_p1;

assign sext_ln6_fu_100_p1 = $signed(index_q0);

assign weight_address0 = zext_ln6_fu_94_p1;

assign zext_ln6_fu_94_p1 = i_0_reg_67;

endmodule //kernel3
