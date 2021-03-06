// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="kernel8,hls_ip_2019_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7k160t-fbg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=8.471000,HLS_SYN_LAT=-1,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=3,HLS_SYN_FF=491,HLS_SYN_LUT=589,HLS_VERSION=2019_2}" *)

module kernel8 (
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
        multiplier,
        offset
);

parameter    ap_ST_fsm_state1 = 5'd1;
parameter    ap_ST_fsm_state2 = 5'd2;
parameter    ap_ST_fsm_state3 = 5'd4;
parameter    ap_ST_fsm_pp0_stage0 = 5'd8;
parameter    ap_ST_fsm_state8 = 5'd16;

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
input  [31:0] multiplier;
input  [31:0] offset;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[9:0] array_r_address0;
reg array_r_ce0;
reg[9:0] array_r_address1;
reg array_r_ce1;
reg array_r_we1;

(* fsm_encoding = "none" *) reg   [4:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [30:0] i_0_reg_131;
reg   [30:0] i_0_reg_131_pp0_iter1_reg;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_block_state4_pp0_stage0_iter0;
wire    ap_block_state5_pp0_stage0_iter1;
wire    ap_block_state6_pp0_stage0_iter2;
wire    ap_block_state7_pp0_stage0_iter3;
wire    ap_block_pp0_stage0_11001;
reg   [30:0] i_0_reg_131_pp0_iter2_reg;
reg   [31:0] tmp_2_1_reg_143;
reg   [31:0] tmp_1_1_reg_153;
reg   [31:0] tmp_0_1_reg_164;
reg   [31:0] tmp_0_0_reg_175;
reg   [31:0] tmp_0_reg_293;
wire    ap_CS_fsm_state2;
reg   [31:0] tmp_1_reg_298;
wire    ap_CS_fsm_state3;
wire   [0:0] and_ln6_fu_197_p2;
reg   [0:0] and_ln6_reg_333;
wire   [31:0] sub_ln9_fu_203_p2;
reg   [31:0] sub_ln9_reg_338;
wire   [1:0] xor_ln12_fu_213_p2;
reg   [1:0] xor_ln12_reg_343;
wire   [0:0] icmp_ln9_fu_223_p2;
reg   [0:0] icmp_ln9_reg_348;
reg   [0:0] icmp_ln9_reg_348_pp0_iter1_reg;
reg   [0:0] icmp_ln9_reg_348_pp0_iter2_reg;
wire   [30:0] i_fu_248_p2;
reg   [30:0] i_reg_357;
reg    ap_enable_reg_pp0_iter0;
reg   [31:0] rd_val_1_reg_362;
reg    ap_enable_reg_pp0_iter1;
wire   [31:0] tmp_3_1_fu_273_p2;
reg   [31:0] tmp_3_1_reg_367;
reg    ap_enable_reg_pp0_iter2;
wire    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter2_state6;
reg    ap_enable_reg_pp0_iter3;
reg   [30:0] ap_phi_mux_i_0_phi_fu_135_p4;
wire    ap_block_pp0_stage0;
reg   [31:0] ap_phi_mux_tmp_2_1_phi_fu_146_p4;
reg   [31:0] ap_phi_mux_tmp_1_1_phi_fu_156_p4;
reg   [31:0] ap_phi_mux_tmp_0_1_phi_fu_167_p4;
reg   [31:0] ap_phi_mux_tmp_0_0_phi_fu_178_p4;
wire  signed [63:0] sext_ln14_fu_243_p1;
wire   [63:0] zext_ln21_fu_278_p1;
wire   [0:0] icmp_ln6_fu_185_p2;
wire   [0:0] icmp_ln6_1_fu_191_p2;
wire   [1:0] trunc_ln12_fu_209_p1;
wire   [31:0] zext_ln9_fu_219_p1;
wire   [30:0] add_ln14_fu_228_p2;
wire   [31:0] zext_ln14_fu_234_p1;
wire   [31:0] add_ln14_1_fu_238_p2;
wire   [31:0] rd_val_fu_254_p6;
wire  signed [31:0] rd_val_2_fu_267_p3;
wire  signed [31:0] tmp_3_1_fu_273_p1;
wire    ap_CS_fsm_state8;
reg   [4:0] ap_NS_fsm;
reg    ap_block_pp0;
reg    ap_predicate_op42_load_state4;
reg    ap_enable_operation_42;
reg    ap_enable_state4_pp0_iter0_stage0;
reg    ap_predicate_op44_load_state5;
reg    ap_enable_operation_44;
reg    ap_enable_state5_pp0_iter1_stage0;
reg    ap_enable_operation_58;
reg    ap_enable_state7_pp0_iter3_stage0;
reg    ap_idle_pp0;
wire    ap_enable_pp0;

// power-on initialization
initial begin
#0 ap_CS_fsm = 5'd1;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
#0 ap_enable_reg_pp0_iter3 = 1'b0;
end

kernel8_mux_42_32bkb #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .din2_WIDTH( 32 ),
    .din3_WIDTH( 32 ),
    .din4_WIDTH( 2 ),
    .dout_WIDTH( 32 ))
kernel8_mux_42_32bkb_U1(
    .din0(ap_phi_mux_tmp_0_0_phi_fu_178_p4),
    .din1(ap_phi_mux_tmp_0_1_phi_fu_167_p4),
    .din2(ap_phi_mux_tmp_1_1_phi_fu_156_p4),
    .din3(ap_phi_mux_tmp_2_1_phi_fu_146_p4),
    .din4(xor_ln12_reg_343),
    .dout(rd_val_fu_254_p6)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((icmp_ln9_fu_223_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if ((1'b1 == ap_CS_fsm_state3)) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
        end else if (((1'b1 == ap_CS_fsm_state3) | ((1'b1 == ap_condition_pp0_exit_iter2_state6) & (1'b0 == ap_block_pp0_stage0_subdone)))) begin
            ap_enable_reg_pp0_iter2 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter3 <= 1'b0;
    end else begin
        if (((1'b1 == ap_condition_pp0_exit_iter2_state6) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_enable_reg_pp0_iter3 <= ap_enable_reg_pp0_iter1;
        end else if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter3 <= ap_enable_reg_pp0_iter2;
        end else if ((1'b1 == ap_CS_fsm_state3)) begin
            ap_enable_reg_pp0_iter3 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln9_reg_348 == 1'd1) & (1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        i_0_reg_131 <= i_reg_357;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        i_0_reg_131 <= 31'd6;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter3 == 1'b1) & (icmp_ln9_reg_348_pp0_iter2_reg == 1'd1))) begin
        tmp_0_0_reg_175 <= tmp_0_1_reg_164;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        tmp_0_0_reg_175 <= tmp_0_reg_293;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter3 == 1'b1) & (icmp_ln9_reg_348_pp0_iter2_reg == 1'd1))) begin
        tmp_0_1_reg_164 <= tmp_1_1_reg_153;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        tmp_0_1_reg_164 <= tmp_1_reg_298;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter3 == 1'b1) & (icmp_ln9_reg_348_pp0_iter2_reg == 1'd1))) begin
        tmp_1_1_reg_153 <= tmp_2_1_reg_143;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        tmp_1_1_reg_153 <= array_r_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter3 == 1'b1) & (icmp_ln9_reg_348_pp0_iter2_reg == 1'd1))) begin
        tmp_2_1_reg_143 <= tmp_3_1_reg_367;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        tmp_2_1_reg_143 <= array_r_q1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        and_ln6_reg_333 <= and_ln6_fu_197_p2;
        sub_ln9_reg_338 <= sub_ln9_fu_203_p2;
        xor_ln12_reg_343 <= xor_ln12_fu_213_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        i_0_reg_131_pp0_iter1_reg <= i_0_reg_131;
        icmp_ln9_reg_348 <= icmp_ln9_fu_223_p2;
        icmp_ln9_reg_348_pp0_iter1_reg <= icmp_ln9_reg_348;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b0 == ap_block_pp0_stage0_11001)) begin
        i_0_reg_131_pp0_iter2_reg <= i_0_reg_131_pp0_iter1_reg;
        icmp_ln9_reg_348_pp0_iter2_reg <= icmp_ln9_reg_348_pp0_iter1_reg;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln9_fu_223_p2 == 1'd1) & (1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
        i_reg_357 <= i_fu_248_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln9_reg_348 == 1'd1) & (1'd0 == and_ln6_reg_333) & (1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        rd_val_1_reg_362 <= array_r_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        tmp_0_reg_293 <= array_r_q0;
        tmp_1_reg_298 <= array_r_q1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1) & (icmp_ln9_reg_348_pp0_iter1_reg == 1'd1))) begin
        tmp_3_1_reg_367 <= tmp_3_1_fu_273_p2;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b1) & (ap_enable_reg_pp0_iter1 == 1'b0))) begin
        ap_condition_pp0_exit_iter2_state6 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter2_state6 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
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
    if (((ap_enable_reg_pp0_iter3 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln9_reg_348 == 1'd1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0))) begin
        ap_phi_mux_i_0_phi_fu_135_p4 = i_reg_357;
    end else begin
        ap_phi_mux_i_0_phi_fu_135_p4 = i_0_reg_131;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter3 == 1'b1) & (1'b0 == ap_block_pp0_stage0) & (icmp_ln9_reg_348_pp0_iter2_reg == 1'd1))) begin
        ap_phi_mux_tmp_0_0_phi_fu_178_p4 = tmp_0_1_reg_164;
    end else begin
        ap_phi_mux_tmp_0_0_phi_fu_178_p4 = tmp_0_0_reg_175;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter3 == 1'b1) & (1'b0 == ap_block_pp0_stage0) & (icmp_ln9_reg_348_pp0_iter2_reg == 1'd1))) begin
        ap_phi_mux_tmp_0_1_phi_fu_167_p4 = tmp_1_1_reg_153;
    end else begin
        ap_phi_mux_tmp_0_1_phi_fu_167_p4 = tmp_0_1_reg_164;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter3 == 1'b1) & (1'b0 == ap_block_pp0_stage0) & (icmp_ln9_reg_348_pp0_iter2_reg == 1'd1))) begin
        ap_phi_mux_tmp_1_1_phi_fu_156_p4 = tmp_2_1_reg_143;
    end else begin
        ap_phi_mux_tmp_1_1_phi_fu_156_p4 = tmp_1_1_reg_153;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter3 == 1'b1) & (1'b0 == ap_block_pp0_stage0) & (icmp_ln9_reg_348_pp0_iter2_reg == 1'd1))) begin
        ap_phi_mux_tmp_2_1_phi_fu_146_p4 = tmp_3_1_reg_367;
    end else begin
        ap_phi_mux_tmp_2_1_phi_fu_146_p4 = tmp_2_1_reg_143;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0))) begin
        array_r_address0 = sext_ln14_fu_243_p1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        array_r_address0 = 64'd4;
    end else if ((1'b1 == ap_CS_fsm_state1)) begin
        array_r_address0 = 64'd2;
    end else begin
        array_r_address0 = 'bx;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter3 == 1'b1) & (1'b0 == ap_block_pp0_stage0))) begin
        array_r_address1 = zext_ln21_fu_278_p1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        array_r_address1 = 64'd5;
    end else if ((1'b1 == ap_CS_fsm_state1)) begin
        array_r_address1 = 64'd3;
    end else begin
        array_r_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) | ((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1)) | ((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)))) begin
        array_r_ce0 = 1'b1;
    end else begin
        array_r_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) | ((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter3 == 1'b1)) | ((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)))) begin
        array_r_ce1 = 1'b1;
    end else begin
        array_r_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter3 == 1'b1) & (icmp_ln9_reg_348_pp0_iter2_reg == 1'd1))) begin
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
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
        end
        ap_ST_fsm_pp0_stage0 : begin
            if (~((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter1 == 1'b0))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if (((ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter1 == 1'b0))) begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln14_1_fu_238_p2 = (zext_ln14_fu_234_p1 + offset);

assign add_ln14_fu_228_p2 = ($signed(ap_phi_mux_i_0_phi_fu_135_p4) + $signed(31'd2147483642));

assign and_ln6_fu_197_p2 = (icmp_ln6_fu_185_p2 & icmp_ln6_1_fu_191_p2);

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd4];

always @ (*) begin
    ap_block_pp0 = ((ap_ST_fsm_pp0_stage0 == ap_CS_fsm) & (1'b1 == ap_block_pp0_stage0_subdone));
end

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_subdone = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state6_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_block_state7_pp0_stage0_iter3 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_enable_operation_42 = (ap_predicate_op42_load_state4 == 1'b1);
end

always @ (*) begin
    ap_enable_operation_44 = (ap_predicate_op44_load_state5 == 1'b1);
end

always @ (*) begin
    ap_enable_operation_58 = (icmp_ln9_reg_348_pp0_iter2_reg == 1'd1);
end

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

always @ (*) begin
    ap_enable_state4_pp0_iter0_stage0 = ((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1));
end

always @ (*) begin
    ap_enable_state5_pp0_iter1_stage0 = ((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1));
end

always @ (*) begin
    ap_enable_state7_pp0_iter3_stage0 = ((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter3 == 1'b1));
end

always @ (*) begin
    ap_predicate_op42_load_state4 = ((icmp_ln9_fu_223_p2 == 1'd1) & (1'd0 == and_ln6_reg_333));
end

always @ (*) begin
    ap_predicate_op44_load_state5 = ((icmp_ln9_reg_348 == 1'd1) & (1'd0 == and_ln6_reg_333));
end

assign array_r_d1 = tmp_3_1_reg_367;

assign i_fu_248_p2 = (ap_phi_mux_i_0_phi_fu_135_p4 + 31'd1);

assign icmp_ln6_1_fu_191_p2 = (($signed(offset) < $signed(32'd5)) ? 1'b1 : 1'b0);

assign icmp_ln6_fu_185_p2 = (($signed(offset) > $signed(32'd2)) ? 1'b1 : 1'b0);

assign icmp_ln9_fu_223_p2 = (($signed(zext_ln9_fu_219_p1) < $signed(sub_ln9_reg_338)) ? 1'b1 : 1'b0);

assign rd_val_2_fu_267_p3 = ((and_ln6_reg_333[0:0] === 1'b1) ? rd_val_fu_254_p6 : rd_val_1_reg_362);

assign sext_ln14_fu_243_p1 = $signed(add_ln14_1_fu_238_p2);

assign sub_ln9_fu_203_p2 = (32'd1023 - offset);

assign tmp_3_1_fu_273_p1 = multiplier;

assign tmp_3_1_fu_273_p2 = ($signed(rd_val_2_fu_267_p3) * $signed(tmp_3_1_fu_273_p1));

assign trunc_ln12_fu_209_p1 = offset[1:0];

assign xor_ln12_fu_213_p2 = (trunc_ln12_fu_209_p1 ^ 2'd2);

assign zext_ln14_fu_234_p1 = add_ln14_fu_228_p2;

assign zext_ln21_fu_278_p1 = i_0_reg_131_pp0_iter2_reg;

assign zext_ln9_fu_219_p1 = ap_phi_mux_i_0_phi_fu_135_p4;

endmodule //kernel8
