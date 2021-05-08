-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity kernel5 is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    bound : IN STD_LOGIC_VECTOR (31 downto 0);
    a_address0 : OUT STD_LOGIC_VECTOR (9 downto 0);
    a_ce0 : OUT STD_LOGIC;
    a_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    b_address0 : OUT STD_LOGIC_VECTOR (9 downto 0);
    b_ce0 : OUT STD_LOGIC;
    b_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of kernel5 is 
    attribute CORE_GENERATION_INFO : STRING;
    attribute CORE_GENERATION_INFO of behav : architecture is
    "kernel5,hls_ip_2019_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=1,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7k160t-fbg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=7.717000,HLS_SYN_LAT=-1,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=2,HLS_SYN_FF=465,HLS_SYN_LUT=481,HLS_VERSION=2019_2}";
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (8 downto 0) := "000000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (8 downto 0) := "000000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (8 downto 0) := "000000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (8 downto 0) := "000001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (8 downto 0) := "000010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (8 downto 0) := "000100000";
    constant ap_ST_fsm_state7 : STD_LOGIC_VECTOR (8 downto 0) := "001000000";
    constant ap_ST_fsm_state8 : STD_LOGIC_VECTOR (8 downto 0) := "010000000";
    constant ap_ST_fsm_state9 : STD_LOGIC_VECTOR (8 downto 0) := "100000000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv32_17 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010111";
    constant ap_const_lv32_1E : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011110";
    constant ap_const_lv8_FF : STD_LOGIC_VECTOR (7 downto 0) := "11111111";
    constant ap_const_lv23_0 : STD_LOGIC_VECTOR (22 downto 0) := "00000000000000000000000";
    constant ap_const_lv32_A : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001010";
    constant ap_const_lv32_1F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011111";
    constant ap_const_lv22_1 : STD_LOGIC_VECTOR (21 downto 0) := "0000000000000000000001";
    constant ap_const_lv5_4 : STD_LOGIC_VECTOR (4 downto 0) := "00100";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (8 downto 0) := "000000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal or_ln7_1_fu_156_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal or_ln7_1_reg_256 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln7_1_fu_180_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln7_1_reg_261 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal icmp_ln7_2_fu_186_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln7_2_reg_266 : STD_LOGIC_VECTOR (0 downto 0);
    signal i_fu_229_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal i_reg_274 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal and_ln7_fu_223_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal a_load_reg_289 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal b_load_reg_294 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_117_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state8 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state8 : signal is "none";
    signal empty_reg_94 : STD_LOGIC_VECTOR (31 downto 0);
    signal i_0_reg_106 : STD_LOGIC_VECTOR (31 downto 0);
    signal sext_ln9_fu_235_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal bitcast_ln7_1_fu_126_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_2_fu_130_p4 : STD_LOGIC_VECTOR (7 downto 0);
    signal trunc_ln7_fu_140_p1 : STD_LOGIC_VECTOR (22 downto 0);
    signal icmp_ln7_3_fu_150_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln7_fu_144_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal bitcast_ln7_fu_162_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_fu_166_p4 : STD_LOGIC_VECTOR (7 downto 0);
    signal trunc_ln7_1_fu_176_p1 : STD_LOGIC_VECTOR (22 downto 0);
    signal or_ln7_fu_192_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal and_ln7_1_fu_196_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal grp_fu_121_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_4_fu_207_p4 : STD_LOGIC_VECTOR (21 downto 0);
    signal and_ln7_2_fu_201_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_ln7_4_fu_217_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_state9 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state9 : signal is "none";
    signal ap_NS_fsm : STD_LOGIC_VECTOR (8 downto 0);

    component kernel5_fadd_32nsbkb IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        din0 : IN STD_LOGIC_VECTOR (31 downto 0);
        din1 : IN STD_LOGIC_VECTOR (31 downto 0);
        ce : IN STD_LOGIC;
        dout : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;


    component kernel5_fcmp_32nscud IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        din0 : IN STD_LOGIC_VECTOR (31 downto 0);
        din1 : IN STD_LOGIC_VECTOR (31 downto 0);
        ce : IN STD_LOGIC;
        opcode : IN STD_LOGIC_VECTOR (4 downto 0);
        dout : OUT STD_LOGIC_VECTOR (0 downto 0) );
    end component;



begin
    kernel5_fadd_32nsbkb_U1 : component kernel5_fadd_32nsbkb
    generic map (
        ID => 1,
        NUM_STAGE => 4,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        dout_WIDTH => 32)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => a_load_reg_289,
        din1 => b_load_reg_294,
        ce => ap_const_logic_1,
        dout => grp_fu_117_p2);

    kernel5_fcmp_32nscud_U2 : component kernel5_fcmp_32nscud
    generic map (
        ID => 1,
        NUM_STAGE => 2,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        dout_WIDTH => 1)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => empty_reg_94,
        din1 => bound,
        ce => ap_const_logic_1,
        opcode => ap_const_lv5_4,
        dout => grp_fu_121_p2);





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


    i_0_reg_106_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
                i_0_reg_106 <= i_reg_274;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                i_0_reg_106 <= ap_const_lv32_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then
                a_load_reg_289 <= a_q0;
                b_load_reg_294 <= b_q0;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state8)) then
                empty_reg_94 <= grp_fu_117_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then
                i_reg_274 <= i_fu_229_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                icmp_ln7_1_reg_261 <= icmp_ln7_1_fu_180_p2;
                icmp_ln7_2_reg_266 <= icmp_ln7_2_fu_186_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                or_ln7_1_reg_256 <= or_ln7_1_fu_156_p2;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state3, and_ln7_fu_223_p2)
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
                if (((ap_const_lv1_1 = and_ln7_fu_223_p2) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                    ap_NS_fsm <= ap_ST_fsm_state4;
                else
                    ap_NS_fsm <= ap_ST_fsm_state9;
                end if;
            when ap_ST_fsm_state4 => 
                ap_NS_fsm <= ap_ST_fsm_state5;
            when ap_ST_fsm_state5 => 
                ap_NS_fsm <= ap_ST_fsm_state6;
            when ap_ST_fsm_state6 => 
                ap_NS_fsm <= ap_ST_fsm_state7;
            when ap_ST_fsm_state7 => 
                ap_NS_fsm <= ap_ST_fsm_state8;
            when ap_ST_fsm_state8 => 
                ap_NS_fsm <= ap_ST_fsm_state2;
            when ap_ST_fsm_state9 => 
                ap_NS_fsm <= ap_ST_fsm_state1;
            when others =>  
                ap_NS_fsm <= "XXXXXXXXX";
        end case;
    end process;
    a_address0 <= sext_ln9_fu_235_p1(10 - 1 downto 0);

    a_ce0_assign_proc : process(ap_CS_fsm_state3)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            a_ce0 <= ap_const_logic_1;
        else 
            a_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    and_ln7_1_fu_196_p2 <= (or_ln7_fu_192_p2 and or_ln7_1_reg_256);
    and_ln7_2_fu_201_p2 <= (grp_fu_121_p2 and and_ln7_1_fu_196_p2);
    and_ln7_fu_223_p2 <= (icmp_ln7_4_fu_217_p2 and and_ln7_2_fu_201_p2);
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);
    ap_CS_fsm_state8 <= ap_CS_fsm(7);
    ap_CS_fsm_state9 <= ap_CS_fsm(8);

    ap_done_assign_proc : process(ap_CS_fsm_state9)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_CS_fsm_state9)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    ap_return <= empty_reg_94;
    b_address0 <= sext_ln9_fu_235_p1(10 - 1 downto 0);

    b_ce0_assign_proc : process(ap_CS_fsm_state3)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            b_ce0 <= ap_const_logic_1;
        else 
            b_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    bitcast_ln7_1_fu_126_p1 <= bound;
    bitcast_ln7_fu_162_p1 <= empty_reg_94;
    i_fu_229_p2 <= std_logic_vector(unsigned(ap_const_lv32_1) + unsigned(i_0_reg_106));
    icmp_ln7_1_fu_180_p2 <= "0" when (tmp_fu_166_p4 = ap_const_lv8_FF) else "1";
    icmp_ln7_2_fu_186_p2 <= "1" when (trunc_ln7_1_fu_176_p1 = ap_const_lv23_0) else "0";
    icmp_ln7_3_fu_150_p2 <= "1" when (trunc_ln7_fu_140_p1 = ap_const_lv23_0) else "0";
    icmp_ln7_4_fu_217_p2 <= "1" when (signed(tmp_4_fu_207_p4) < signed(ap_const_lv22_1)) else "0";
    icmp_ln7_fu_144_p2 <= "0" when (tmp_2_fu_130_p4 = ap_const_lv8_FF) else "1";
    or_ln7_1_fu_156_p2 <= (icmp_ln7_fu_144_p2 or icmp_ln7_3_fu_150_p2);
    or_ln7_fu_192_p2 <= (icmp_ln7_2_reg_266 or icmp_ln7_1_reg_261);
        sext_ln9_fu_235_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(i_0_reg_106),64));

    tmp_2_fu_130_p4 <= bitcast_ln7_1_fu_126_p1(30 downto 23);
    tmp_4_fu_207_p4 <= i_0_reg_106(31 downto 10);
    tmp_fu_166_p4 <= bitcast_ln7_fu_162_p1(30 downto 23);
    trunc_ln7_1_fu_176_p1 <= bitcast_ln7_fu_162_p1(23 - 1 downto 0);
    trunc_ln7_fu_140_p1 <= bitcast_ln7_1_fu_126_p1(23 - 1 downto 0);
end behav;