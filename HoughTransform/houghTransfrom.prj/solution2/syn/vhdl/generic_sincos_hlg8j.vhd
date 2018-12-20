-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2017.2
-- Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity generic_sincos_hlg8j_rom is 
    generic(
             dwidth     : integer := 35; 
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


architecture rtl of generic_sincos_hlg8j_rom is 

signal addr0_tmp : std_logic_vector(awidth-1 downto 0); 
type mem_array is array (0 to mem_size-1) of std_logic_vector (dwidth-1 downto 0); 
signal mem : mem_array := (
    0 => "11111111111111111111111111101001110", 
    1 => "11111110111111000011111000011111010", 
    2 => "11111101111110000111111011010000111", 
    3 => "11111100111101001100010010000111011", 
    4 => "11111011111100010001000111000011000", 
    5 => "11111010111011010110100011111100011", 
    6 => "11111001111010011100110011000000000", 
    7 => "11111000111001100011111110001000010", 
    8 => "11110111111000101100001111010100010", 
    9 => "11110110110111110101110000100011101", 
    10 => "11110101110111000000101011110110100", 
    11 => "11110100110110001101001011010000000", 
    12 => "11110011110101011011011000101101110", 
    13 => "11110010110100101011011110001111010", 
    14 => "11110001110011111101100101111001101", 
    15 => "11110000110011010001111001100100000", 
    16 => "11101111110010101000100011001001100", 
    17 => "11101110110010000001101100110100011", 
    18 => "11101101110001011101100000011001100", 
    19 => "11101100110000111100000111110110100", 
    20 => "11101011110000011101101101001101100", 
    21 => "11101010110000000010011010010010111", 
    22 => "11101001101111101010011001000100111", 
    23 => "11101000101111010101110011011110001", 
    24 => "11100111101111000100110011100100001", 
    25 => "11100110101110110111100011000111111", 
    26 => "11100101101110101110001100000001101", 
    27 => "11100100101110101000111000001000110", 
    28 => "11100011101110100111110001011011111", 
    29 => "11100010101110101011000001110010011", 
    30 => "11100001101110110010110010111111000", 
    31 => "11100000101110111111001111000010000", 
    32 => "11011111101111010000011111100110110", 
    33 => "11011110101111100110101110011111010", 
    34 => "11011101110000000010000101101010011", 
    35 => "11011100110000100010101110111010101", 
    36 => "11011011110001001000110100000001001", 
    37 => "11011010110001110100011110101011111", 
    38 => "11011001110010100101111000101011011", 
    39 => "11011000110011011101001011101110100", 
    40 => "11010111110100011010100001110001010", 
    41 => "11010110110101011110000100001110010", 
    42 => "11010101110110100111111100111101011", 
    43 => "11010100110111111000010101110100001", 
    44 => "11010011111001001111011000001010111", 
    45 => "11010010111010101101001101111001001", 
    46 => "11010001111100010010000000100100000", 
    47 => "11010000111101111101111001110010011", 
    48 => "11001111111111110001000011010011111", 
    49 => "11001111000001101011100110100000001", 
    50 => "11001110000011101101101101000001101", 
    51 => "11001101000101110111100000011101100", 
    52 => "11001100001000001001001010010110000", 
    53 => "11001011001010100010110100001110011", 
    54 => "11001010001101000100100111100010011", 
    55 => "11001001001111101110101101101111111", 
    56 => "11001000010010100001010000011010101", 
    57 => "11000111010101011100011000111011100", 
    58 => "11000110011000100000010000101010000", 
    59 => "11000101011011101101000001001000100", 
    60 => "11000100011111000010110011100101100", 
    61 => "11000011100010100001110001011000010", 
    62 => "11000010100110001010000011111011000", 
    63 => "11000001101001111011110100100100000", 
    64 => "11000000101101110111001100011111100", 
    65 => "10111111110001111100010100111011000", 
    66 => "10111110110110001011010111010101000", 
    67 => "10111101111010100100011100100010000", 
    68 => "10111100111111000111101110001001101", 
    69 => "10111100000011110101010101001000111", 
    70 => "10111011001000101101011010101000101", 
    71 => "10111010001101110000000111110000101", 
    72 => "10111001010010111101100101101000000", 
    73 => "10111000011000010101111101011100001", 
    74 => "10110111011101111001010111111010101", 
    75 => "10110110100011100111111110011011101", 
    76 => "10110101101001100001111001110001100", 
    77 => "10110100101111100111010010111010110", 
    78 => "10110011110101111000010010110011001", 
    79 => "10110010111100010101000010010011110", 
    80 => "10110010000010111101101010010100110", 
    81 => "10110001001001110010010011110000000", 
    82 => "10110000010000110011000111010001010", 
    83 => "10101111011000000000001101111001000", 
    84 => "10101110011111011001110000001010010", 
    85 => "10101101100110111111110110111010000", 
    86 => "10101100101110110010101010110110000", 
    87 => "10101011110110110010010100100100101", 
    88 => "10101010111110111110111100110010111", 
    89 => "10101010000111011000101100000101011", 
    90 => "10101001001111111111101011000110010", 
    91 => "10101000011000110100000010001111111", 
    92 => "10100111100001110101111001111010100", 
    93 => "10100110101011000101011010111011111", 
    94 => "10100101110100100010101101100111100", 
    95 => "10100100111110001101111010001111000", 
    96 => "10100100001000000111001001010010011", 
    97 => "10100011010010001110100011000100011", 
    98 => "10100010011100100100001111111010011", 
    99 => "10100001100111001000011000000001000", 
    100 => "10100000110001111011000011101111111", 
    101 => "10011111111100111100011011011000110", 
    102 => "10011111001000001100100110111011000", 
    103 => "10011110010011101011101110011100110", 
    104 => "10011101011111011001111010001011000", 
    105 => "10011100101011010111010010001101111", 
    106 => "10011011110111100011111110011001011", 
    107 => "10011011000100000000000111000000000", 
    108 => "10011010010000101011110011110011110", 
    109 => "10011001011101100111001100101000000", 
    110 => "10011000101010110010011001011011101", 
    111 => "10010111111000001101100010001001001", 
    112 => "10010111000101111000101110100100010", 
    113 => "10010110010011110100000110010100000", 
    114 => "10010101100001111111110001000111000", 
    115 => "10010100110000011011110110110100000", 
    116 => "10010011111111001000011110110101000", 
    117 => "10010011001110000101110001000001111", 
    118 => "10010010011101010011110100101110000", 
    119 => "10010001101100110010110001100101010", 
    120 => "10010000111100100010101111001101110", 
    121 => "10010000001100100011110100101110110", 
    122 => "10001111011100110110001001101011011", 
    123 => "10001110101101011001110101100001111", 
    124 => "10001101111110001110111111100101000", 
    125 => "10001101001111010101101110111010000", 
    126 => "10001100100000101110001010110110010", 
    127 => "10001011110010011000011010101100011" );

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

entity generic_sincos_hlg8j is
    generic (
        DataWidth : INTEGER := 35;
        AddressRange : INTEGER := 128;
        AddressWidth : INTEGER := 7);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of generic_sincos_hlg8j is
    component generic_sincos_hlg8j_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    generic_sincos_hlg8j_rom_U :  component generic_sincos_hlg8j_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

