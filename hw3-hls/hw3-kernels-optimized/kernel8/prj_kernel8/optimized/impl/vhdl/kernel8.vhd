-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity kernel8 is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    array_r_address0 : OUT STD_LOGIC_VECTOR (9 downto 0);
    array_r_ce0 : OUT STD_LOGIC;
    array_r_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    array_r_address1 : OUT STD_LOGIC_VECTOR (9 downto 0);
    array_r_ce1 : OUT STD_LOGIC;
    array_r_we1 : OUT STD_LOGIC;
    array_r_d1 : OUT STD_LOGIC_VECTOR (31 downto 0);
    array_r_q1 : IN STD_LOGIC_VECTOR (31 downto 0);
    multiplier : IN STD_LOGIC_VECTOR (31 downto 0);
    offset : IN STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of kernel8 is 
    attribute CORE_GENERATION_INFO : STRING;
    attribute CORE_GENERATION_INFO of behav : architecture is
    "kernel8,hls_ip_2019_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7k160t-fbg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=8.471000,HLS_SYN_LAT=-1,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=3,HLS_SYN_FF=491,HLS_SYN_LUT=589,HLS_VERSION=2019_2}";
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (4 downto 0) := "00010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (4 downto 0) := "00100";
    constant ap_ST_fsm_pp0_stage0 : STD_LOGIC_VECTOR (4 downto 0) := "01000";
    constant ap_ST_fsm_state8 : STD_LOGIC_VECTOR (4 downto 0) := "10000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_boolean_0 : BOOLEAN := false;
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv31_6 : STD_LOGIC_VECTOR (30 downto 0) := "0000000000000000000000000000110";
    constant ap_const_lv64_2 : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000000000000010";
    constant ap_const_lv64_3 : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000000000000011";
    constant ap_const_lv64_4 : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000000000000100";
    constant ap_const_lv64_5 : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000000000000101";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv32_3FF : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000001111111111";
    constant ap_const_lv2_2 : STD_LOGIC_VECTOR (1 downto 0) := "10";
    constant ap_const_lv31_7FFFFFFA : STD_LOGIC_VECTOR (30 downto 0) := "1111111111111111111111111111010";
    constant ap_const_lv31_1 : STD_LOGIC_VECTOR (30 downto 0) := "0000000000000000000000000000001";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";

    signal ap_CS_fsm : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal i_0_reg_131 : STD_LOGIC_VECTOR (30 downto 0);
    signal i_0_reg_131_pp0_iter1_reg : STD_LOGIC_VECTOR (30 downto 0);
    signal ap_CS_fsm_pp0_stage0 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_pp0_stage0 : signal is "none";
    signal ap_block_state4_pp0_stage0_iter0 : BOOLEAN;
    signal ap_block_state5_pp0_stage0_iter1 : BOOLEAN;
    signal ap_block_state6_pp0_stage0_iter2 : BOOLEAN;
    signal ap_block_state7_pp0_stage0_iter3 : BOOLEAN;
    signal ap_block_pp0_stage0_11001 : BOOLEAN;
    signal i_0_reg_131_pp0_iter2_reg : STD_LOGIC_VECTOR (30 downto 0);
    signal tmp_2_1_reg_143 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_1_1_reg_153 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_0_1_reg_164 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_0_0_reg_175 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_0_reg_293 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal tmp_1_reg_298 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal and_ln6_fu_197_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal and_ln6_reg_333 : STD_LOGIC_VECTOR (0 downto 0);
    signal sub_ln9_fu_203_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal sub_ln9_reg_338 : STD_LOGIC_VECTOR (31 downto 0);
    signal xor_ln12_fu_213_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal xor_ln12_reg_343 : STD_LOGIC_VECTOR (1 downto 0);
    signal icmp_ln9_fu_223_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln9_reg_348 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln9_reg_348_pp0_iter1_reg : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln9_reg_348_pp0_iter2_reg : STD_LOGIC_VECTOR (0 downto 0);
    signal i_fu_248_p2 : STD_LOGIC_VECTOR (30 downto 0);
    signal i_reg_357 : STD_LOGIC_VECTOR (30 downto 0);
    signal ap_enable_reg_pp0_iter0 : STD_LOGIC := '0';
    signal rd_val_1_reg_362 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_enable_reg_pp0_iter1 : STD_LOGIC := '0';
    signal tmp_3_1_fu_273_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_3_1_reg_367 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_enable_reg_pp0_iter2 : STD_LOGIC := '0';
    signal ap_block_pp0_stage0_subdone : BOOLEAN;
    signal ap_condition_pp0_exit_iter2_state6 : STD_LOGIC;
    signal ap_enable_reg_pp0_iter3 : STD_LOGIC := '0';
    signal ap_phi_mux_i_0_phi_fu_135_p4 : STD_LOGIC_VECTOR (30 downto 0);
    signal ap_block_pp0_stage0 : BOOLEAN;
    signal ap_phi_mux_tmp_2_1_phi_fu_146_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_phi_mux_tmp_1_1_phi_fu_156_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_phi_mux_tmp_0_1_phi_fu_167_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_phi_mux_tmp_0_0_phi_fu_178_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal sext_ln14_fu_243_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal zext_ln21_fu_278_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal icmp_ln6_fu_185_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln6_1_fu_191_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal trunc_ln12_fu_209_p1 : STD_LOGIC_VECTOR (1 downto 0);
    signal zext_ln9_fu_219_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal add_ln14_fu_228_p2 : STD_LOGIC_VECTOR (30 downto 0);
    signal zext_ln14_fu_234_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal add_ln14_1_fu_238_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal rd_val_fu_254_p6 : STD_LOGIC_VECTOR (31 downto 0);
    signal rd_val_2_fu_267_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_3_1_fu_273_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state8 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state8 : signal is "none";
    signal ap_NS_fsm : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_block_pp0 : BOOLEAN;
    signal ap_predicate_op42_load_state4 : BOOLEAN;
    signal ap_enable_operation_42 : BOOLEAN;
    signal ap_enable_state4_pp0_iter0_stage0 : BOOLEAN;
    signal ap_predicate_op44_load_state5 : BOOLEAN;
    signal ap_enable_operation_44 : BOOLEAN;
    signal ap_enable_state5_pp0_iter1_stage0 : BOOLEAN;
    signal ap_enable_operation_58 : BOOLEAN;
    signal ap_enable_state7_pp0_iter3_stage0 : BOOLEAN;
    signal ap_idle_pp0 : STD_LOGIC;
    signal ap_enable_pp0 : STD_LOGIC;

    component kernel8_mux_42_32bkb IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        din2_WIDTH : INTEGER;
        din3_WIDTH : INTEGER;
        din4_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        din0 : IN STD_LOGIC_VECTOR (31 downto 0);
        din1 : IN STD_LOGIC_VECTOR (31 downto 0);
        din2 : IN STD_LOGIC_VECTOR (31 downto 0);
        din3 : IN STD_LOGIC_VECTOR (31 downto 0);
        din4 : IN STD_LOGIC_VECTOR (1 downto 0);
        dout : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;



begin
    kernel8_mux_42_32bkb_U1 : component kernel8_mux_42_32bkb
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        din2_WIDTH => 32,
        din3_WIDTH => 32,
        din4_WIDTH => 2,
        dout_WIDTH => 32)
    port map (
        din0 => ap_phi_mux_tmp_0_0_phi_fu_178_p4,
        din1 => ap_phi_mux_tmp_0_1_phi_fu_167_p4,
        din2 => ap_phi_mux_tmp_1_1_phi_fu_156_p4,
        din3 => ap_phi_mux_tmp_2_1_phi_fu_146_p4,
        din4 => xor_ln12_reg_343,
        dout => rd_val_fu_254_p6);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter0_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter0 <= ap_const_logic_0;
            else
                if (((icmp_ln9_fu_223_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone))) then 
                    ap_enable_reg_pp0_iter0 <= ap_const_logic_0;
                elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
                    ap_enable_reg_pp0_iter0 <= ap_const_logic_1;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter1_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter1 <= ap_const_logic_0;
            else
                if ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then 
                    ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter2_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter2 <= ap_const_logic_0;
            else
                if ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then 
                    ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
                elsif (((ap_const_logic_1 = ap_CS_fsm_state3) or ((ap_const_logic_1 = ap_condition_pp0_exit_iter2_state6) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone)))) then 
                    ap_enable_reg_pp0_iter2 <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter3_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter3 <= ap_const_logic_0;
            else
                if (((ap_const_logic_1 = ap_condition_pp0_exit_iter2_state6) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone))) then 
                    ap_enable_reg_pp0_iter3 <= ap_enable_reg_pp0_iter1;
                elsif ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then 
                    ap_enable_reg_pp0_iter3 <= ap_enable_reg_pp0_iter2;
                elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
                    ap_enable_reg_pp0_iter3 <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    i_0_reg_131_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln9_reg_348 = ap_const_lv1_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1))) then 
                i_0_reg_131 <= i_reg_357;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
                i_0_reg_131 <= ap_const_lv31_6;
            end if; 
        end if;
    end process;

    tmp_0_0_reg_175_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter3 = ap_const_logic_1) and (icmp_ln9_reg_348_pp0_iter2_reg = ap_const_lv1_1))) then 
                tmp_0_0_reg_175 <= tmp_0_1_reg_164;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
                tmp_0_0_reg_175 <= tmp_0_reg_293;
            end if; 
        end if;
    end process;

    tmp_0_1_reg_164_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter3 = ap_const_logic_1) and (icmp_ln9_reg_348_pp0_iter2_reg = ap_const_lv1_1))) then 
                tmp_0_1_reg_164 <= tmp_1_1_reg_153;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
                tmp_0_1_reg_164 <= tmp_1_reg_298;
            end if; 
        end if;
    end process;

    tmp_1_1_reg_153_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter3 = ap_const_logic_1) and (icmp_ln9_reg_348_pp0_iter2_reg = ap_const_lv1_1))) then 
                tmp_1_1_reg_153 <= tmp_2_1_reg_143;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
                tmp_1_1_reg_153 <= array_r_q0;
            end if; 
        end if;
    end process;

    tmp_2_1_reg_143_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter3 = ap_const_logic_1) and (icmp_ln9_reg_348_pp0_iter2_reg = ap_const_lv1_1))) then 
                tmp_2_1_reg_143 <= tmp_3_1_reg_367;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
                tmp_2_1_reg_143 <= array_r_q1;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then
                and_ln6_reg_333 <= and_ln6_fu_197_p2;
                sub_ln9_reg_338 <= sub_ln9_fu_203_p2;
                xor_ln12_reg_343 <= xor_ln12_fu_213_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then
                i_0_reg_131_pp0_iter1_reg <= i_0_reg_131;
                icmp_ln9_reg_348 <= icmp_ln9_fu_223_p2;
                icmp_ln9_reg_348_pp0_iter1_reg <= icmp_ln9_reg_348;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_boolean_0 = ap_block_pp0_stage0_11001)) then
                i_0_reg_131_pp0_iter2_reg <= i_0_reg_131_pp0_iter1_reg;
                icmp_ln9_reg_348_pp0_iter2_reg <= icmp_ln9_reg_348_pp0_iter1_reg;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln9_fu_223_p2 = ap_const_lv1_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1))) then
                i_reg_357 <= i_fu_248_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln9_reg_348 = ap_const_lv1_1) and (ap_const_lv1_0 = and_ln6_reg_333) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1))) then
                rd_val_1_reg_362 <= array_r_q0;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                tmp_0_reg_293 <= array_r_q0;
                tmp_1_reg_298 <= array_r_q1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter2 = ap_const_logic_1) and (icmp_ln9_reg_348_pp0_iter1_reg = ap_const_lv1_1))) then
                tmp_3_1_reg_367 <= tmp_3_1_fu_273_p2;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_enable_reg_pp0_iter1, ap_enable_reg_pp0_iter2, ap_block_pp0_stage0_subdone)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                ap_NS_fsm <= ap_ST_fsm_state3;
            when ap_ST_fsm_state3 => 
                ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
            when ap_ST_fsm_pp0_stage0 => 
                if (not(((ap_enable_reg_pp0_iter2 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone) and (ap_enable_reg_pp0_iter1 = ap_const_logic_0)))) then
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                elsif (((ap_enable_reg_pp0_iter2 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone) and (ap_enable_reg_pp0_iter1 = ap_const_logic_0))) then
                    ap_NS_fsm <= ap_ST_fsm_state8;
                else
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                end if;
            when ap_ST_fsm_state8 => 
                ap_NS_fsm <= ap_ST_fsm_state1;
            when others =>  
                ap_NS_fsm <= "XXXXX";
        end case;
    end process;
    add_ln14_1_fu_238_p2 <= std_logic_vector(unsigned(zext_ln14_fu_234_p1) + unsigned(offset));
    add_ln14_fu_228_p2 <= std_logic_vector(unsigned(ap_phi_mux_i_0_phi_fu_135_p4) + unsigned(ap_const_lv31_7FFFFFFA));
    and_ln6_fu_197_p2 <= (icmp_ln6_fu_185_p2 and icmp_ln6_1_fu_191_p2);
    ap_CS_fsm_pp0_stage0 <= ap_CS_fsm(3);
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state8 <= ap_CS_fsm(4);

    ap_block_pp0_assign_proc : process(ap_CS_fsm, ap_block_pp0_stage0_subdone)
    begin
                ap_block_pp0 <= ((ap_ST_fsm_pp0_stage0 = ap_CS_fsm) and (ap_const_boolean_1 = ap_block_pp0_stage0_subdone));
    end process;

        ap_block_pp0_stage0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage0_11001 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage0_subdone <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state4_pp0_stage0_iter0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state5_pp0_stage0_iter1 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state6_pp0_stage0_iter2 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state7_pp0_stage0_iter3 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_condition_pp0_exit_iter2_state6_assign_proc : process(ap_enable_reg_pp0_iter1, ap_enable_reg_pp0_iter2)
    begin
        if (((ap_enable_reg_pp0_iter2 = ap_const_logic_1) and (ap_enable_reg_pp0_iter1 = ap_const_logic_0))) then 
            ap_condition_pp0_exit_iter2_state6 <= ap_const_logic_1;
        else 
            ap_condition_pp0_exit_iter2_state6 <= ap_const_logic_0;
        end if; 
    end process;


    ap_done_assign_proc : process(ap_CS_fsm_state8)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_enable_operation_42_assign_proc : process(ap_predicate_op42_load_state4)
    begin
                ap_enable_operation_42 <= (ap_predicate_op42_load_state4 = ap_const_boolean_1);
    end process;


    ap_enable_operation_44_assign_proc : process(ap_predicate_op44_load_state5)
    begin
                ap_enable_operation_44 <= (ap_predicate_op44_load_state5 = ap_const_boolean_1);
    end process;


    ap_enable_operation_58_assign_proc : process(icmp_ln9_reg_348_pp0_iter2_reg)
    begin
                ap_enable_operation_58 <= (icmp_ln9_reg_348_pp0_iter2_reg = ap_const_lv1_1);
    end process;

    ap_enable_pp0 <= (ap_idle_pp0 xor ap_const_logic_1);

    ap_enable_state4_pp0_iter0_stage0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter0)
    begin
                ap_enable_state4_pp0_iter0_stage0 <= ((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1));
    end process;


    ap_enable_state5_pp0_iter1_stage0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter1)
    begin
                ap_enable_state5_pp0_iter1_stage0 <= ((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1));
    end process;


    ap_enable_state7_pp0_iter3_stage0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_enable_reg_pp0_iter3)
    begin
                ap_enable_state7_pp0_iter3_stage0 <= ((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter3 = ap_const_logic_1));
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_pp0_assign_proc : process(ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter1, ap_enable_reg_pp0_iter2, ap_enable_reg_pp0_iter3)
    begin
        if (((ap_enable_reg_pp0_iter3 = ap_const_logic_0) and (ap_enable_reg_pp0_iter2 = ap_const_logic_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_0))) then 
            ap_idle_pp0 <= ap_const_logic_1;
        else 
            ap_idle_pp0 <= ap_const_logic_0;
        end if; 
    end process;


    ap_phi_mux_i_0_phi_fu_135_p4_assign_proc : process(i_0_reg_131, ap_CS_fsm_pp0_stage0, icmp_ln9_reg_348, i_reg_357, ap_enable_reg_pp0_iter1, ap_block_pp0_stage0)
    begin
        if (((icmp_ln9_reg_348 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0))) then 
            ap_phi_mux_i_0_phi_fu_135_p4 <= i_reg_357;
        else 
            ap_phi_mux_i_0_phi_fu_135_p4 <= i_0_reg_131;
        end if; 
    end process;


    ap_phi_mux_tmp_0_0_phi_fu_178_p4_assign_proc : process(tmp_0_1_reg_164, tmp_0_0_reg_175, icmp_ln9_reg_348_pp0_iter2_reg, ap_enable_reg_pp0_iter3, ap_block_pp0_stage0)
    begin
        if (((ap_enable_reg_pp0_iter3 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0) and (icmp_ln9_reg_348_pp0_iter2_reg = ap_const_lv1_1))) then 
            ap_phi_mux_tmp_0_0_phi_fu_178_p4 <= tmp_0_1_reg_164;
        else 
            ap_phi_mux_tmp_0_0_phi_fu_178_p4 <= tmp_0_0_reg_175;
        end if; 
    end process;


    ap_phi_mux_tmp_0_1_phi_fu_167_p4_assign_proc : process(tmp_1_1_reg_153, tmp_0_1_reg_164, icmp_ln9_reg_348_pp0_iter2_reg, ap_enable_reg_pp0_iter3, ap_block_pp0_stage0)
    begin
        if (((ap_enable_reg_pp0_iter3 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0) and (icmp_ln9_reg_348_pp0_iter2_reg = ap_const_lv1_1))) then 
            ap_phi_mux_tmp_0_1_phi_fu_167_p4 <= tmp_1_1_reg_153;
        else 
            ap_phi_mux_tmp_0_1_phi_fu_167_p4 <= tmp_0_1_reg_164;
        end if; 
    end process;


    ap_phi_mux_tmp_1_1_phi_fu_156_p4_assign_proc : process(tmp_2_1_reg_143, tmp_1_1_reg_153, icmp_ln9_reg_348_pp0_iter2_reg, ap_enable_reg_pp0_iter3, ap_block_pp0_stage0)
    begin
        if (((ap_enable_reg_pp0_iter3 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0) and (icmp_ln9_reg_348_pp0_iter2_reg = ap_const_lv1_1))) then 
            ap_phi_mux_tmp_1_1_phi_fu_156_p4 <= tmp_2_1_reg_143;
        else 
            ap_phi_mux_tmp_1_1_phi_fu_156_p4 <= tmp_1_1_reg_153;
        end if; 
    end process;


    ap_phi_mux_tmp_2_1_phi_fu_146_p4_assign_proc : process(tmp_2_1_reg_143, icmp_ln9_reg_348_pp0_iter2_reg, tmp_3_1_reg_367, ap_enable_reg_pp0_iter3, ap_block_pp0_stage0)
    begin
        if (((ap_enable_reg_pp0_iter3 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0) and (icmp_ln9_reg_348_pp0_iter2_reg = ap_const_lv1_1))) then 
            ap_phi_mux_tmp_2_1_phi_fu_146_p4 <= tmp_3_1_reg_367;
        else 
            ap_phi_mux_tmp_2_1_phi_fu_146_p4 <= tmp_2_1_reg_143;
        end if; 
    end process;


    ap_predicate_op42_load_state4_assign_proc : process(and_ln6_reg_333, icmp_ln9_fu_223_p2)
    begin
                ap_predicate_op42_load_state4 <= ((icmp_ln9_fu_223_p2 = ap_const_lv1_1) and (ap_const_lv1_0 = and_ln6_reg_333));
    end process;


    ap_predicate_op44_load_state5_assign_proc : process(and_ln6_reg_333, icmp_ln9_reg_348)
    begin
                ap_predicate_op44_load_state5 <= ((icmp_ln9_reg_348 = ap_const_lv1_1) and (ap_const_lv1_0 = and_ln6_reg_333));
    end process;


    ap_ready_assign_proc : process(ap_CS_fsm_state8)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    array_r_address0_assign_proc : process(ap_CS_fsm_state1, ap_CS_fsm_pp0_stage0, ap_CS_fsm_state2, ap_enable_reg_pp0_iter0, ap_block_pp0_stage0, sext_ln14_fu_243_p1)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0))) then 
            array_r_address0 <= sext_ln14_fu_243_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            array_r_address0 <= ap_const_lv64_4(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state1)) then 
            array_r_address0 <= ap_const_lv64_2(10 - 1 downto 0);
        else 
            array_r_address0 <= "XXXXXXXXXX";
        end if; 
    end process;


    array_r_address1_assign_proc : process(ap_CS_fsm_state1, ap_CS_fsm_state2, ap_enable_reg_pp0_iter3, ap_block_pp0_stage0, zext_ln21_fu_278_p1)
    begin
        if (((ap_enable_reg_pp0_iter3 = ap_const_logic_1) and (ap_const_boolean_0 = ap_block_pp0_stage0))) then 
            array_r_address1 <= zext_ln21_fu_278_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            array_r_address1 <= ap_const_lv64_5(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state1)) then 
            array_r_address1 <= ap_const_lv64_3(10 - 1 downto 0);
        else 
            array_r_address1 <= "XXXXXXXXXX";
        end if; 
    end process;


    array_r_ce0_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_CS_fsm_state2, ap_enable_reg_pp0_iter0)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state2) or ((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1)) or ((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1)))) then 
            array_r_ce0 <= ap_const_logic_1;
        else 
            array_r_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    array_r_ce1_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_block_pp0_stage0_11001, ap_CS_fsm_state2, ap_enable_reg_pp0_iter3)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state2) or ((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter3 = ap_const_logic_1)) or ((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1)))) then 
            array_r_ce1 <= ap_const_logic_1;
        else 
            array_r_ce1 <= ap_const_logic_0;
        end if; 
    end process;

    array_r_d1 <= tmp_3_1_reg_367;

    array_r_we1_assign_proc : process(ap_block_pp0_stage0_11001, icmp_ln9_reg_348_pp0_iter2_reg, ap_enable_reg_pp0_iter3)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter3 = ap_const_logic_1) and (icmp_ln9_reg_348_pp0_iter2_reg = ap_const_lv1_1))) then 
            array_r_we1 <= ap_const_logic_1;
        else 
            array_r_we1 <= ap_const_logic_0;
        end if; 
    end process;

    i_fu_248_p2 <= std_logic_vector(unsigned(ap_phi_mux_i_0_phi_fu_135_p4) + unsigned(ap_const_lv31_1));
    icmp_ln6_1_fu_191_p2 <= "1" when (signed(offset) < signed(ap_const_lv32_5)) else "0";
    icmp_ln6_fu_185_p2 <= "1" when (signed(offset) > signed(ap_const_lv32_2)) else "0";
    icmp_ln9_fu_223_p2 <= "1" when (signed(zext_ln9_fu_219_p1) < signed(sub_ln9_reg_338)) else "0";
    rd_val_2_fu_267_p3 <= 
        rd_val_fu_254_p6 when (and_ln6_reg_333(0) = '1') else 
        rd_val_1_reg_362;
        sext_ln14_fu_243_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(add_ln14_1_fu_238_p2),64));

    sub_ln9_fu_203_p2 <= std_logic_vector(unsigned(ap_const_lv32_3FF) - unsigned(offset));
    tmp_3_1_fu_273_p1 <= multiplier;
    tmp_3_1_fu_273_p2 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(std_logic_vector(signed(rd_val_2_fu_267_p3) * signed(tmp_3_1_fu_273_p1))), 32));
    trunc_ln12_fu_209_p1 <= offset(2 - 1 downto 0);
    xor_ln12_fu_213_p2 <= (trunc_ln12_fu_209_p1 xor ap_const_lv2_2);
    zext_ln14_fu_234_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(add_ln14_fu_228_p2),32));
    zext_ln21_fu_278_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_0_reg_131_pp0_iter2_reg),64));
    zext_ln9_fu_219_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(ap_phi_mux_i_0_phi_fu_135_p4),32));
end behav;
