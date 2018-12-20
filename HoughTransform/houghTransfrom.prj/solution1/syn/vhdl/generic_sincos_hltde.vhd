-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2017.2
-- Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity generic_sincos_hltde_rom is 
    generic(
             dwidth     : integer := 53; 
             awidth     : integer := 7; 
             mem_size    : integer := 128
    ); 
    port (
          addr0      : in std_logic_vector(awidth-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(dwidth-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of generic_sincos_hltde_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "11111111111111111111111111111111111111111111111111001", 
    1 => "00000000100111011110100110100101010111010111110100100", 
    2 => "00000001001110111101000111000101000110010000000111110", 
    3 => "00000001110110011011011011011001100101000101011100111", 
    4 => "00000010011101111001011101011101001110001100100100010", 
    5 => "00000011000101010111000111001010011110101110011001101", 
    6 => "00000011101100110100010010011011110111100100010010111", 
    7 => "00000100010100010000111001001011111110010011111011011", 
    8 => "00000100111011101100110101010101011110001011011001111", 
    9 => "00000101100011001000000000110011001000111101010101011", 
    10 => "00000110001010100010010101011111110111111100110011101", 
    11 => "00000110110001111011101101010110101100111001011011110", 
    12 => "00000111011001010100000010010010110010111011010011011", 
    13 => "00001000000000101011001110001111011111011110111100011", 
    14 => "00001000101000000001001011001000010011010001010011001", 
    15 => "00001001001111010101110010111000111011001011100101000", 
    16 => "00001001110110101000111111011101010001001111001001111", 
    17 => "00001010011101111010101010110001011101100001011110101", 
    18 => "00001011000101001010101110110001110111000111110011110", 
    19 => "00001011101100011001000101011011000101000010111111100", 
    20 => "00001100010011100101101000101001111111001011010011111", 
    21 => "00001100111010110000010010011011101111001100000000111", 
    22 => "00001101100001111000111100101101110001011111001000111", 
    23 => "00001110001000111111100001011101110110001000111111100", 
    24 => "00001110110000000011111010101010000001110011110110100", 
    25 => "00001111010111000110000010010000101110101011010100011", 
    26 => "00001111111110000101110010010000101101010111111001001", 
    27 => "00010000100101000011000100101001000101111010010101110", 
    28 => "00010001001011111101110011011001011000100111000101011", 
    29 => "00010001110010110101111000100001011111000001011101100", 
    30 => "00010010011001101011001110000001101100110110111100001", 
    31 => "00010011000000011101101101111010110000111010010111000", 
    32 => "00010011100111001101010010001101110101111110111011011", 
    33 => "00010100001101111001110100111100100011110011010110011", 
    34 => "00010100110100100011010000001000111111111100110011101", 
    35 => "00010101011011001001011101110101101110110001110001000", 
    36 => "00010110000001101100011000000101110100010100110110101", 
    37 => "00010110101000001011111000111100110101001111100101111", 
    38 => "00010111001110100111111010011110110111101101000011110", 
    39 => "00010111110101000000010110110000100100010100100000010", 
    40 => "00011000011011010101000111110111000111000011110101100", 
    41 => "00011001000001100110000111111000010000001001111110100", 
    42 => "00011001100111110011010000111010010101000001010100011", 
    43 => "00011010001101111100011101000100010001001001111000001", 
    44 => "00011010110100000001100110011101100111000011011001101", 
    45 => "00011011011010000010100111001110100001000111100100000", 
    46 => "00011011111111111111011001011111110010100011110010101", 
    47 => "00011100100101110111110111011010111000010011001011101", 
    48 => "00011101001011101011111011001001111001111000010010101", 
    49 => "00011101110001011011011110110111101010010110101011010", 
    50 => "00011110010111000110011100101111101001001100100110000", 
    51 => "00011110111100101100101110111110000011001100010111011", 
    52 => "00011111100010001110001111101111110011010101101110001", 
    53 => "00100000000111101010111001010010100011101111000010010", 
    54 => "00100000101101000010100101110100101110011110011010101", 
    55 => "00100001010010010101001111100101011110100010101110100", 
    56 => "00100001110111100010110000110100110000101100011101100", 
    57 => "00100010011100101011000011110011010100010110100000000", 
    58 => "00100011000001101110000010110010101100011110101100101", 
    59 => "00100011100110101011101000000101010000011110100000010", 
    60 => "00100100001011100011101101111110001101000011001110110", 
    61 => "00100100110000010110001110110001100101000110010110101", 
    62 => "00100101010101000011000100110100010010100101101101010", 
    63 => "00100101111001101010001010011100000111011011010111101", 
    64 => "00100110011110001011011001111111101110010101100011010", 
    65 => "00100111000010100110101101110110101011101110010111010", 
    66 => "00100111100110111100000000011001011110100011011001111", 
    67 => "00101000001011001011001100000001100001001101000011101", 
    68 => "00101000101111010100001011001001001010010110000010110", 
    69 => "00101001010011010110111000001011101101110010010100100", 
    70 => "00101001110111010011001101100101011101010110001111101", 
    71 => "00101010011011001001000101110011101001101101010111100", 
    72 => "00101010111110111000011011010100100011010001001011001", 
    73 => "00101011100010100001001000100111011010111111100111110", 
    74 => "00101100000110000011001000001100100011010001011101110", 
    75 => "00101100101001011110010100100101010000110000101010101", 
    76 => "00101101001100110010101000010011111011001110010001100", 
    77 => "00101101101111111111111101111011111110011000011110101", 
    78 => "00101110010011000110010000000001111010110000010011001", 
    79 => "00101110110110000101011001001011010110011111001101111", 
    80 => "00101111011000111101010011111110111110001100100010010", 
    81 => "00101111111011101101111011000100100101110010101101111", 
    82 => "00110000011110010111001001000101001001010100010110000", 
    83 => "00110001000000111000111000101010101101110001001010000", 
    84 => "00110001100011010011000100100000100001111010101001100", 
    85 => "00110010000101100101100111010010111111001000101101100", 
    86 => "00110010100111110000011011101111101010001101111111111", 
    87 => "00110011001001110011011100100101010100001100000010101", 
    88 => "00110011101011101110100100100011111011000111010110011", 
    89 => "00110100001101100001101110011100101010111011001010111", 
    90 => "00110100101111001100110101000001111110001101001001010", 
    91 => "00110101010000101111110011000111011111000000101101001", 
    92 => "00110101110010001010100011100010000111101010011000111", 
    93 => "00110110010011011101000001001000000011100010111010111", 
    94 => "00110110110100100111000110110000101111111001111101111", 
    95 => "00110111010101101000101111010100111100101000110111010", 
    96 => "00110111110110100001110101101110101101000101000101111", 
    97 => "00111000010111010010010100111001011000110010100001100", 
    98 => "00111000110111111010000111110001101100010101100000110", 
    99 => "00111001011000011001001001010101101010000100101011110", 
    100 => "00111001111000101111010100100100101010111010101100000", 
    101 => "00111010011000111100100100011111011111000111100100110", 
    102 => "00111010111001000000110100001000001111000001111101110", 
    103 => "00111011011000111011111110100010011011111000001101000", 
    104 => "00111011111000101101111110110011000000100001000110101", 
    105 => "00111100011000010110110000000000010010001100100010000", 
    106 => "00111100110111110110001101010010000001010011101101111", 
    107 => "00111101010111001100010001110001011010001001100100111", 
    108 => "00111101110110011000111000101001000101101010011100010", 
    109 => "00111110010101011011111101000101001010001011111000111", 
    110 => "00111110110100010101011010010011001100001100001100000", 
    111 => "00111111010011000101001011100010001111000001100111000", 
    112 => "00111111110001101011001100000010110101101001010110101", 
    113 => "01000000010000000111010111000111000011010110011000001", 
    114 => "01000000101110011001101000000010011100100000000001001", 
    115 => "01000001001100100001111010001010000111010000010010010", 
    116 => "01000001101010100000001000110100101100010001111001111", 
    117 => "01000010001000010100001111011010010111011110010100011", 
    118 => "01000010100101111110001001010100111000101011000101000", 
    119 => "01000011000011011101110001111111100100010111011110000", 
    120 => "01000011100000110011000100110111010100011001011111010", 
    121 => "01000011111101111101111101011010101000101010101110001", 
    122 => "01000100011010111110010111001001100111110101000111011", 
    123 => "01000100110111110100001101100101111111111111010010011", 
    124 => "01000101010100011111011100010011000111011000101010111", 
    125 => "01000101110000111111111110110101111101000101011001100", 
    126 => "01000110001101010101110000110101001001101010000000111", 
    127 => "01000110101001100000101101111000111111110110110110011" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "select_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "distributed";

attribute EQUIVALENT_REGISTER_REMOVAL : string;
begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;


Library IEEE;
use IEEE.std_logic_1164.all;

entity generic_sincos_hltde is
    generic (
        DataWidth : INTEGER := 53;
        AddressRange : INTEGER := 128;
        AddressWidth : INTEGER := 7);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of generic_sincos_hltde is
    component generic_sincos_hltde_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    generic_sincos_hltde_rom_U :  component generic_sincos_hltde_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


