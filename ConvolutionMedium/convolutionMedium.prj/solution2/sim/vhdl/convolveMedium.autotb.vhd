-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2017.2
-- Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
-- 
-- ==============================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_unsigned.all;
use IEEE.std_logic_arith.all;
use IEEE.numeric_std.all;
use ieee.std_logic_textio.all;
use std.textio.all;


entity apatb_convolveMedium_top is
  generic (
       AUTOTB_CLOCK_PERIOD_DIV2 :   TIME := 4.00 ns;
       AUTOTB_TVIN_in_r : STRING := "../tv/cdatafile/c.convolveMedium.autotvin_in_r.dat";
       AUTOTB_TVIN_krnl : STRING := "../tv/cdatafile/c.convolveMedium.autotvin_krnl.dat";
       AUTOTB_TVIN_in_r_out_wrapc : STRING := "../tv/rtldatafile/rtl.convolveMedium.autotvin_in_r.dat";
       AUTOTB_TVIN_krnl_out_wrapc : STRING := "../tv/rtldatafile/rtl.convolveMedium.autotvin_krnl.dat";
       AUTOTB_TVOUT_out_r : STRING := "../tv/cdatafile/c.convolveMedium.autotvout_out_r.dat";
       AUTOTB_TVOUT_out_r_out_wrapc : STRING := "../tv/rtldatafile/rtl.convolveMedium.autotvout_out_r.dat";
      AUTOTB_LAT_RESULT_FILE    : STRING  := "convolveMedium.result.lat.rb";
      AUTOTB_PER_RESULT_TRANS_FILE    : STRING  := "convolveMedium.performance.result.transaction.xml";
      LENGTH_in_r     : INTEGER := 65536;
      LENGTH_out_r     : INTEGER := 65536;
      LENGTH_krnl     : INTEGER := 9;
	    AUTOTB_TRANSACTION_NUM    : INTEGER := 1
);

end apatb_convolveMedium_top;

architecture behav of apatb_convolveMedium_top is 
  signal AESL_clock	:   STD_LOGIC := '0';
  signal rst  :   STD_LOGIC;
  signal start    :   STD_LOGIC := '0';
  signal ce       :   STD_LOGIC;
  signal continue :   STD_LOGIC := '0';
  signal AESL_reset :   STD_LOGIC := '0';
  signal AESL_start :   STD_LOGIC := '0';
  signal AESL_ce :   STD_LOGIC := '0';
  signal AESL_continue :   STD_LOGIC := '0';
  signal AESL_ready :   STD_LOGIC := '0';
  signal AESL_idle :   STD_LOGIC := '0';
  signal AESL_done :   STD_LOGIC := '0';
  signal AESL_done_delay :   STD_LOGIC := '0';
  signal AESL_done_delay2 :   STD_LOGIC := '0';
  signal AESL_ready_delay :   STD_LOGIC := '0';
  signal ready :   STD_LOGIC := '0';
  signal ready_wire :   STD_LOGIC := '0';

  signal convm_AWADDR:  STD_LOGIC_VECTOR (18 DOWNTO 0);
  signal convm_AWVALID:  STD_LOGIC;
  signal convm_AWREADY:  STD_LOGIC;
  signal convm_WVALID:  STD_LOGIC;
  signal convm_WREADY:  STD_LOGIC;
  signal convm_WDATA:  STD_LOGIC_VECTOR (31 DOWNTO 0);
  signal convm_WSTRB:  STD_LOGIC_VECTOR (3 DOWNTO 0);
  signal convm_ARADDR:  STD_LOGIC_VECTOR (18 DOWNTO 0);
  signal convm_ARVALID:  STD_LOGIC;
  signal convm_ARREADY:  STD_LOGIC;
  signal convm_RVALID:  STD_LOGIC;
  signal convm_RREADY:  STD_LOGIC;
  signal convm_RDATA:  STD_LOGIC_VECTOR (31 DOWNTO 0);
  signal convm_RRESP:  STD_LOGIC_VECTOR (1 DOWNTO 0);
  signal convm_BVALID:  STD_LOGIC;
  signal convm_BREADY:  STD_LOGIC;
  signal convm_BRESP:  STD_LOGIC_VECTOR (1 DOWNTO 0);
  signal convm_INTERRUPT:  STD_LOGIC;
  signal ap_clk :  STD_LOGIC;
  signal ap_rst_n :  STD_LOGIC;

  signal ready_cnt : STD_LOGIC_VECTOR(31 DOWNTO 0);
  signal done_cnt	: STD_LOGIC_VECTOR(31 DOWNTO 0);
  signal ready_initial  :	STD_LOGIC;
  signal ready_initial_n	:   STD_LOGIC;
  signal ready_last_n   :	STD_LOGIC;
  signal ready_delay_last_n	:   STD_LOGIC;
  signal done_delay_last_n	:   STD_LOGIC;
  signal interface_done :	STD_LOGIC := '0';
  -- Subtype for random state number, to prevent confusing it with true integers
  -- Top of range should be (2**31)-1 but this literal calculation causes overflow on 32-bit machines
  subtype T_RANDINT is integer range 1 to integer'high;

  type latency_record is array(0 to AUTOTB_TRANSACTION_NUM + 1) of INTEGER;
  shared variable AESL_mLatCnterIn : latency_record;
  shared variable AESL_mLatCnterOut : latency_record;
  shared variable AESL_mLatCnterIn_addr : INTEGER;
  shared variable AESL_mLatCnterOut_addr : INTEGER;
  shared variable AESL_clk_counter : INTEGER;
  signal reported_stuck : STD_LOGIC   := '0';
  shared variable reported_stuck_cnt : INTEGER := 0;
component convolveMedium is
port (
    ap_clk :  IN STD_LOGIC;
    ap_rst_n :  IN STD_LOGIC;
    s_axi_convm_AWVALID :  IN STD_LOGIC;
    s_axi_convm_AWREADY :  OUT STD_LOGIC;
    s_axi_convm_AWADDR :  IN STD_LOGIC_VECTOR (18 DOWNTO 0);
    s_axi_convm_WVALID :  IN STD_LOGIC;
    s_axi_convm_WREADY :  OUT STD_LOGIC;
    s_axi_convm_WDATA :  IN STD_LOGIC_VECTOR (31 DOWNTO 0);
    s_axi_convm_WSTRB :  IN STD_LOGIC_VECTOR (3 DOWNTO 0);
    s_axi_convm_ARVALID :  IN STD_LOGIC;
    s_axi_convm_ARREADY :  OUT STD_LOGIC;
    s_axi_convm_ARADDR :  IN STD_LOGIC_VECTOR (18 DOWNTO 0);
    s_axi_convm_RVALID :  OUT STD_LOGIC;
    s_axi_convm_RREADY :  IN STD_LOGIC;
    s_axi_convm_RDATA :  OUT STD_LOGIC_VECTOR (31 DOWNTO 0);
    s_axi_convm_RRESP :  OUT STD_LOGIC_VECTOR (1 DOWNTO 0);
    s_axi_convm_BVALID :  OUT STD_LOGIC;
    s_axi_convm_BREADY :  IN STD_LOGIC;
    s_axi_convm_BRESP :  OUT STD_LOGIC_VECTOR (1 DOWNTO 0);
    interrupt :  OUT STD_LOGIC);
end component;

-- The signal of port in_r
shared variable AESL_REG_in_r : STD_LOGIC_VECTOR(15 downto 0) := (others => '0');
-- The signal of port out_r
shared variable AESL_REG_out_r : STD_LOGIC_VECTOR(15 downto 0) := (others => '0');
-- The signal of port krnl
shared variable AESL_REG_krnl : STD_LOGIC_VECTOR(7 downto 0) := (others => '0');
    signal AESL_slave_output_done : STD_LOGIC;
    signal AESL_slave_start : STD_LOGIC;
    signal AESL_slave_write_start_in : STD_LOGIC;
    signal AESL_slave_write_start_finish : STD_LOGIC;
    signal AESL_slave_ready : STD_LOGIC;
    signal slave_start_status : STD_LOGIC := '0';
    signal start_rise : STD_LOGIC := '0';
    signal ready_rise : STD_LOGIC := '0';
    signal slave_done_status : STD_LOGIC := '0';
    signal convm_read_data_finish : STD_LOGIC;
    signal convm_write_data_finish : STD_LOGIC;
component AESL_AXI_SLAVE_convm is
  port(
    clk   :   IN STD_LOGIC;
    reset :   IN STD_LOGIC;
    TRAN_s_axi_convm_AWADDR : OUT STD_LOGIC_VECTOR;
    TRAN_s_axi_convm_AWVALID : OUT STD_LOGIC;
    TRAN_s_axi_convm_AWREADY : IN STD_LOGIC;
    TRAN_s_axi_convm_WVALID : OUT STD_LOGIC;
    TRAN_s_axi_convm_WREADY : IN STD_LOGIC;
    TRAN_s_axi_convm_WDATA : OUT STD_LOGIC_VECTOR;
    TRAN_s_axi_convm_WSTRB : OUT STD_LOGIC_VECTOR;
    TRAN_s_axi_convm_ARADDR : OUT STD_LOGIC_VECTOR;
    TRAN_s_axi_convm_ARVALID : OUT STD_LOGIC;
    TRAN_s_axi_convm_ARREADY : IN STD_LOGIC;
    TRAN_s_axi_convm_RVALID : IN STD_LOGIC;
    TRAN_s_axi_convm_RREADY : OUT STD_LOGIC;
    TRAN_s_axi_convm_RDATA : IN STD_LOGIC_VECTOR;
    TRAN_s_axi_convm_RRESP : IN STD_LOGIC_VECTOR;
    TRAN_s_axi_convm_BVALID : IN STD_LOGIC;
    TRAN_s_axi_convm_BREADY : OUT STD_LOGIC;
    TRAN_s_axi_convm_BRESP : IN STD_LOGIC_VECTOR;
    TRAN_convm_interrupt   : IN STD_LOGIC;
    TRAN_convm_read_data_finish : OUT STD_LOGIC;
    TRAN_convm_write_data_finish : OUT STD_LOGIC;
    TRAN_convm_ready_out : OUT STD_LOGIC;
    TRAN_convm_ready_in  : IN STD_LOGIC;
    TRAN_convm_done_out  : OUT STD_LOGIC;
    TRAN_convm_idle_out  : OUT STD_LOGIC;
    TRAN_convm_write_start_in     : IN  STD_LOGIC;
    TRAN_convm_write_start_finish : OUT STD_LOGIC;
    TRAN_convm_transaction_done_in    : IN STD_LOGIC;
    TRAN_convm_start_in    : IN STD_LOGIC
);
end component;

      procedure esl_read_token (file textfile: TEXT; textline: inout LINE; token: out STRING; token_len: out INTEGER) is
          variable whitespace : CHARACTER;
          variable i : INTEGER;
          variable ok: BOOLEAN;
          variable buff: STRING(1 to token'length);
      begin
          ok := false;
          i := 1;
          loop_main: while not endfile(textfile) loop
              if textline = null or textline'length = 0 then
                  readline(textfile, textline);
              end if;
              loop_remove_whitespace: while textline'length > 0 loop
                  if textline(textline'left) = ' ' or
                      textline(textline'left) = HT or
                      textline(textline'left) = CR or
                      textline(textline'left) = LF then
                      read(textline, whitespace);
                  else
                      exit loop_remove_whitespace;
                  end if;
              end loop;
              loop_aesl_read_token: while textline'length > 0 and i <= buff'length loop
                  if textline(textline'left) = ' ' or
                     textline(textline'left) = HT or
                     textline(textline'left) = CR or
                     textline(textline'left) = LF then
                      exit loop_aesl_read_token;
                  else
                      read(textline, buff(i));
                      i := i + 1;
                  end if;
                  ok := true;
              end loop;
              if ok = true then
                  exit loop_main;
              end if;
          end loop;
          buff(i) := ' ';
          token := buff;
          token_len:= i-1;
      end procedure esl_read_token;

      procedure esl_read_token (file textfile: TEXT;
                                textline: inout LINE;
                                token: out STRING) is
          variable i : INTEGER;
      begin
          esl_read_token (textfile, textline, token, i);
      end procedure esl_read_token;

      function esl_str2lv_hex (RHS : STRING; data_width : INTEGER) return STD_LOGIC_VECTOR is
          variable	ret	:   STD_LOGIC_VECTOR(data_width - 1 downto 0);
          variable	idx	:   integer := 3;
      begin
          ret := (others => '0');
          if(RHS(1) /= '0' and (RHS(2) /= 'x' or RHS(2) /= 'X')) then
     	        report "Error! The format of hex number is not initialed by 0x";
          end if;
          while true loop
              if (data_width > 4) then
                  case RHS(idx)  is
                      when '0'    =>  ret := ret(data_width - 5 downto 0) & "0000";
     	                when '1'    =>  ret := ret(data_width - 5 downto 0) & "0001";
                      when '2'    =>  ret := ret(data_width - 5 downto 0) & "0010";
                      when '3'    =>  ret := ret(data_width - 5 downto 0) & "0011";
                      when '4'    =>  ret := ret(data_width - 5 downto 0) & "0100";
                      when '5'    =>  ret := ret(data_width - 5 downto 0) & "0101";
                      when '6'    =>  ret := ret(data_width - 5 downto 0) & "0110";
                      when '7'    =>  ret := ret(data_width - 5 downto 0) & "0111";
                      when '8'    =>  ret := ret(data_width - 5 downto 0) & "1000";
                      when '9'    =>  ret := ret(data_width - 5 downto 0) & "1001";
                      when 'a' | 'A'  =>  ret := ret(data_width - 5 downto 0) & "1010";
                      when 'b' | 'B'  =>  ret := ret(data_width - 5 downto 0) & "1011";
                      when 'c' | 'C'  =>  ret := ret(data_width - 5 downto 0) & "1100";
                      when 'd' | 'D'  =>  ret := ret(data_width - 5 downto 0) & "1101";
                      when 'e' | 'E'  =>  ret := ret(data_width - 5 downto 0) & "1110";
                      when 'f' | 'F'  =>  ret := ret(data_width - 5 downto 0) & "1111";
                      when 'x' | 'X'  =>  ret := ret(data_width - 5 downto 0) & "XXXX";
                      when ' '    =>  return ret;
                      when others    =>  report "Wrong hex char " & RHS(idx);	return ret;
                  end case;
              elsif (data_width = 4) then
                  case RHS(idx)  is
                      when '0'    =>  ret := "0000";
     	                when '1'    =>  ret := "0001";
                      when '2'    =>  ret := "0010";
                      when '3'    =>  ret := "0011";
                      when '4'    =>  ret := "0100";
                      when '5'    =>  ret := "0101";
                      when '6'    =>  ret := "0110";
                      when '7'    =>  ret := "0111";
                      when '8'    =>  ret := "1000";
                      when '9'    =>  ret := "1001";
                      when 'a' | 'A'  =>  ret := "1010";
                      when 'b' | 'B'  =>  ret := "1011";
                      when 'c' | 'C'  =>  ret := "1100";
                      when 'd' | 'D'  =>  ret := "1101";
                      when 'e' | 'E'  =>  ret := "1110";
                      when 'f' | 'F'  =>  ret := "1111";
                      when 'x' | 'X'  =>  ret := "XXXX";
                      when ' '    =>  return ret;
                      when others    =>  report "Wrong hex char " & RHS(idx);	return ret;
                  end case;
              elsif (data_width = 3) then
                  case RHS(idx)  is
                      when '0'    =>  ret := "000";
     	                when '1'    =>  ret := "001";
                      when '2'    =>  ret := "010";
                      when '3'    =>  ret := "011";
                      when '4'    =>  ret := "100";
                      when '5'    =>  ret := "101";
                      when '6'    =>  ret := "110";
                      when '7'    =>  ret := "111";
                      when 'x' | 'X'  =>  ret := "XXX";
                      when ' '    =>  return ret;
                      when others    =>  report "Wrong hex char " & RHS(idx);	return ret;
                  end case;
              elsif (data_width = 2) then
                  case RHS(idx)  is
                      when '0'    =>  ret := "00";
     	                when '1'    =>  ret := "01";
                      when '2'    =>  ret := "10";
                      when '3'    =>  ret := "11";
                      when 'x' | 'X'  =>  ret := "XX";
                      when ' '    =>  return ret;
                      when others    =>  report "Wrong hex char " & RHS(idx);	return ret;
                  end case;
              elsif (data_width = 1) then
                  case RHS(idx)  is
                      when '0'    =>  ret := "0";
     	                when '1'    =>  ret := "1";
                      when 'x' | 'X'  =>  ret := "X";
                      when ' '    =>  return ret;
                      when others    =>  report "Wrong hex char " & RHS(idx);	return ret;
                  end case;
              else
                  report string'("Wrong data_width.");
                  return ret;
              end if;
              idx := idx + 1;
          end loop;
          return ret;
      end function;

    function esl_str_dec2int (RHS : STRING) return INTEGER is
        variable	ret	:   integer;
        variable	idx	:   integer := 1;
    begin
        ret := 0;
        while true loop
            case RHS(idx)  is
                when '0'    =>  ret := ret * 10 + 0;
                when '1'    =>  ret := ret * 10 + 1;
                when '2'    =>  ret := ret * 10 + 2;
                when '3'    =>  ret := ret * 10 + 3;
                when '4'    =>  ret := ret * 10 + 4;
                when '5'    =>  ret := ret * 10 + 5;
                when '6'    =>  ret := ret * 10 + 6;
                when '7'    =>  ret := ret * 10 + 7;
                when '8'    =>  ret := ret * 10 + 8;
                when '9'    =>  ret := ret * 10 + 9;
                when ' '    =>  return ret;
                when others    =>  report "Wrong dec char " & RHS(idx);	return ret;
            end case;
            idx := idx + 1;
        end loop;
        return ret;
    end esl_str_dec2int;
      function esl_conv_string_hex (lv : STD_LOGIC_VECTOR) return STRING is
          constant str_len : integer := (lv'length + 3)/4;
          variable ret : STRING (1 to str_len);
          variable i, tmp: INTEGER;
          variable normal_lv : STD_LOGIC_VECTOR(lv'length - 1 downto 0);
          variable tmp_lv : STD_LOGIC_VECTOR(3 downto 0);
      begin
          normal_lv := lv;
          for i in 1 to str_len loop
              if(i = 1) then
                  if((lv'length mod 4) = 3) then
                      tmp_lv(2 downto 0) := normal_lv(lv'length - 1 downto lv'length - 3);
                      case tmp_lv(2 downto 0) is
                          when "000" => ret(i) := '0';
                          when "001" => ret(i) := '1';
                          when "010" => ret(i) := '2';
                          when "011" => ret(i) := '3';
                          when "100" => ret(i) := '4';
                          when "101" => ret(i) := '5';
                          when "110" => ret(i) := '6';
                          when "111" => ret(i) := '7';
                          when others  => ret(i) := 'X';
                      end case;
                  elsif((lv'length mod 4) = 2) then
                      tmp_lv(1 downto 0) := normal_lv(lv'length - 1 downto lv'length - 2);
                      case tmp_lv(1 downto 0) is
                          when "00" => ret(i) := '0';
                          when "01" => ret(i) := '1';
                          when "10" => ret(i) := '2';
                          when "11" => ret(i) := '3';
                          when others => ret(i) := 'X';
                      end case;
                  elsif((lv'length mod 4) = 1) then
                      tmp_lv(0 downto 0) := normal_lv(lv'length - 1 downto lv'length - 1);
                      case tmp_lv(0 downto 0) is
                          when "0" => ret(i) := '0';
                          when "1" => ret(i) := '1';
                          when others=> ret(i) := 'X';
                      end case;
                  elsif((lv'length mod 4) = 0) then
                      tmp_lv(3 downto 0) := normal_lv(lv'length - 1 downto lv'length - 4);
                      case tmp_lv(3 downto 0) is
                          when "0000" => ret(i) := '0';
                          when "0001" => ret(i) := '1';
                          when "0010" => ret(i) := '2';
                          when "0011" => ret(i) := '3';
                          when "0100" => ret(i) := '4';
                          when "0101" => ret(i) := '5';
                          when "0110" => ret(i) := '6';
                          when "0111" => ret(i) := '7';
                          when "1000" => ret(i) := '8';
                          when "1001" => ret(i) := '9';
                          when "1010" => ret(i) := 'a';
                          when "1011" => ret(i) := 'b';
                          when "1100" => ret(i) := 'c';
                          when "1101" => ret(i) := 'd';
                          when "1110" => ret(i) := 'e';
                          when "1111" => ret(i) := 'f';
                          when others   => ret(i) := 'X';
                      end case;
                  end if;
              else
                  tmp_lv(3 downto 0) := normal_lv((str_len - i) * 4 + 3 downto (str_len - i) * 4);
                  case tmp_lv(3 downto 0) is
                      when "0000" => ret(i) := '0';
                      when "0001" => ret(i) := '1';
                      when "0010" => ret(i) := '2';
                      when "0011" => ret(i) := '3';
                      when "0100" => ret(i) := '4';
                      when "0101" => ret(i) := '5';
                      when "0110" => ret(i) := '6';
                      when "0111" => ret(i) := '7';
                      when "1000" => ret(i) := '8';
                      when "1001" => ret(i) := '9';
                      when "1010" => ret(i) := 'a';
                      when "1011" => ret(i) := 'b';
                      when "1100" => ret(i) := 'c';
                      when "1101" => ret(i) := 'd';
                      when "1110" => ret(i) := 'e';
                      when "1111" => ret(i) := 'f';
                      when others   => ret(i) := 'X';
                  end case;
              end if;
          end loop;
          return ret;
      end function;

  -- purpose: initialise the random state variable based on an integer seed
  function init_rand(seed : integer) return T_RANDINT is
    variable result : T_RANDINT;
  begin
    -- If the seed is smaller than the minimum value of the random state variable, use the minimum value
    if seed < T_RANDINT'low then
      result := T_RANDINT'low;
      -- If the seed is larger than the maximum value of the random state variable, use the maximum value
    elsif seed > T_RANDINT'high then
      result := T_RANDINT'high;
      -- If the seed is within the range of the random state variable, just use the seed
    else
      result := seed;
    end if;
    -- Return the result
    return result;
  end init_rand;


  -- purpose: generate a random integer between min and max limits
  procedure rand_int(variable rand   : inout T_RANDINT;
                     constant minval : in    integer;
                     constant maxval : in    integer;
                     variable result : out   integer
                     ) is

    variable k, q      : integer;
    variable real_rand : real;
    variable res       : integer;

  begin
    -- Create a new random integer in the range 1 to 2**31-1 and put it back into rand VARIABLE
    -- Based on an example from Numerical Recipes in C, 2nd Edition, page 279
    k   := rand/127773;
    q   := 16807*(rand-k*127773)-2836*k;
    if q < 0 then
      q := q + 2147483647;
    end if;
    rand := init_rand(q);

    -- Convert this integer to a real number in the range 0 to 1
    real_rand := (real(rand - T_RANDINT'low)) / real(T_RANDINT'high - T_RANDINT'low);
    -- Convert this real number to an integer in the range minval to maxval
    -- The +1 and -0.5 are to get equal probability of minval and maxval as other values
    res    := integer((real_rand * real(maxval+1-minval)) - 0.5) + minval;
    -- VHDL real to integer conversion doesn't define what happens for x.5 so deal with this
    if res < minval then
      res  := minval;
    elsif res > maxval then
      res  := maxval;
    end if;
    -- assign output
    result := res;

  end rand_int;

begin
AESL_inst_convolveMedium    :   convolveMedium port map (
   s_axi_convm_AWADDR  =>  convm_AWADDR,
   s_axi_convm_AWVALID  =>  convm_AWVALID,
   s_axi_convm_AWREADY  =>  convm_AWREADY,
   s_axi_convm_WVALID  =>  convm_WVALID,
   s_axi_convm_WREADY  =>  convm_WREADY,
   s_axi_convm_WDATA  =>  convm_WDATA,
   s_axi_convm_WSTRB  =>  convm_WSTRB,
   s_axi_convm_ARADDR  =>  convm_ARADDR,
   s_axi_convm_ARVALID  =>  convm_ARVALID,
   s_axi_convm_ARREADY  =>  convm_ARREADY,
   s_axi_convm_RVALID  =>  convm_RVALID,
   s_axi_convm_RREADY  =>  convm_RREADY,
   s_axi_convm_RDATA  =>  convm_RDATA,
   s_axi_convm_RRESP  =>  convm_RRESP,
   s_axi_convm_BVALID  =>  convm_BVALID,
   s_axi_convm_BREADY  =>  convm_BREADY,
   s_axi_convm_BRESP  =>  convm_BRESP,
   interrupt  =>  convm_INTERRUPT,
   ap_clk  =>  ap_clk,
   ap_rst_n  =>  ap_rst_n
);

-- Assignment for control signal
  ap_clk <= AESL_clock;
  ap_rst_n <= AESL_reset;
  AESL_reset <= rst;
  AESL_start <= start;
  AESL_ce <= ce;
  AESL_continue <= continue;
  AESL_slave_write_start_in <= slave_start_status  and convm_write_data_finish;
  AESL_slave_start <= AESL_slave_write_start_finish;
  AESL_done <= slave_done_status  and convm_read_data_finish;

slave_start_proc : process(AESL_clock)
begin
  if (AESL_clock'event and AESL_clock = '1') then
    if(AESL_reset = '0') then
        slave_start_status <= '1';
    else
        if (AESL_start = '1' ) then
            start_rise <= '1';
        end if;
        if (start_rise = '1' and AESL_done = '1' ) then
            slave_start_status <= '1';
        end if;
        if (AESL_slave_write_start_in = '1') then 
            slave_start_status <= '0';
            start_rise <= '0';
        end if;
    end if;
  end if;
end process;

slave_ready_proc : process(AESL_clock)
begin
  if (AESL_clock'event and AESL_clock = '1') then
    if(AESL_reset = '0') then
        AESL_slave_ready <= '0';
        ready_rise <= '0';
    else
        if (AESL_ready = '1' ) then
            ready_rise <= '1';
        end if;
        if (ready_rise = '1' and AESL_done_delay = '1' ) then
            AESL_slave_ready <= '1';
        end if;
        if (AESL_slave_ready = '1') then 
            AESL_slave_ready <= '0';
            ready_rise <= '0';
        end if;
    end if;
  end if;
end process;

slave_done_proc : process(AESL_clock)
begin
  if (AESL_clock'event and AESL_clock = '1') then
    if (AESL_done = '1') then
        slave_done_status <= '0';
    elsif (AESL_slave_output_done = '1' ) then
        slave_done_status <= '1';
    end if;
  end if;
end process;
AESL_axi_slave_inst_convm : AESL_AXI_SLAVE_convm port map (
    clk   =>  AESL_clock,
    reset =>  AESL_reset,
    TRAN_s_axi_convm_AWADDR => convm_AWADDR,
    TRAN_s_axi_convm_AWVALID => convm_AWVALID,
    TRAN_s_axi_convm_AWREADY => convm_AWREADY,
    TRAN_s_axi_convm_WVALID => convm_WVALID,
    TRAN_s_axi_convm_WREADY => convm_WREADY,
    TRAN_s_axi_convm_WDATA => convm_WDATA,
    TRAN_s_axi_convm_WSTRB => convm_WSTRB,
    TRAN_s_axi_convm_ARADDR => convm_ARADDR,
    TRAN_s_axi_convm_ARVALID => convm_ARVALID,
    TRAN_s_axi_convm_ARREADY => convm_ARREADY,
    TRAN_s_axi_convm_RVALID => convm_RVALID,
    TRAN_s_axi_convm_RREADY => convm_RREADY,
    TRAN_s_axi_convm_RDATA => convm_RDATA,
    TRAN_s_axi_convm_RRESP => convm_RRESP,
    TRAN_s_axi_convm_BVALID => convm_BVALID,
    TRAN_s_axi_convm_BREADY => convm_BREADY,
    TRAN_s_axi_convm_BRESP => convm_BRESP,
    TRAN_convm_interrupt => convm_INTERRUPT,
    TRAN_convm_read_data_finish => convm_read_data_finish,
    TRAN_convm_write_data_finish => convm_write_data_finish,
    TRAN_convm_ready_out => AESL_ready,
    TRAN_convm_ready_in => AESL_slave_ready,
    TRAN_convm_done_out => AESL_slave_output_done,
    TRAN_convm_idle_out => AESL_idle,
    TRAN_convm_write_start_in     => AESL_slave_write_start_in,
    TRAN_convm_write_start_finish => AESL_slave_write_start_finish,
    TRAN_convm_transaction_done_in => AESL_done_delay,
    TRAN_convm_start_in  => AESL_slave_start
);

generate_ready_cnt_proc : process(ready_initial, AESL_clock)
begin
    if(AESL_clock'event and AESL_clock = '0') then
        if(ready_initial = '1') then
            ready_cnt <= conv_std_logic_vector(1, 32);
        end if;
    elsif(AESL_clock'event and AESL_clock = '1') then
        if(ready_cnt /= AUTOTB_TRANSACTION_NUM) then
            if(AESL_ready = '1') then
                ready_cnt <= ready_cnt + 1;
            end if;
        end if;
    end if;
end process;

generate_done_cnt_proc : process(AESL_reset, AESL_clock)
begin
    if(AESL_reset = '0') then
        done_cnt <= (others => '0');
    elsif(AESL_clock'event and AESL_clock = '1') then
        if(done_cnt /= AUTOTB_TRANSACTION_NUM) then
            if(AESL_done = '1') then
                done_cnt <= done_cnt + 1;
            end if;
        end if;
    end if;
end process;

generate_sim_done_proc    :   process
begin
    while(done_cnt /= AUTOTB_TRANSACTION_NUM) loop
        wait until AESL_clock'event and AESL_clock = '1';
    end loop;
        wait until AESL_clock'event and AESL_clock = '1';
        wait until AESL_clock'event and AESL_clock = '1';
        wait until AESL_clock'event and AESL_clock = '1';
    assert false report "simulation done!" severity note;
    assert false report "NORMAL EXIT (note: failure is to force the simulator to stop)" severity failure;
    wait;
end process;

gen_clock_proc :   process
begin
    AESL_clock <= '0';
    while(true) loop
        wait for AUTOTB_CLOCK_PERIOD_DIV2;
        AESL_clock <= not AESL_clock;
    end loop;
    wait;
end process;

gen_reset_proc : process
    variable  rand            :   T_RANDINT     := init_rand(0);
    variable  rint            :   INTEGER;
begin
    rst <= '0';
    wait for 100 ns;
    for i in 1 to 3 loop
        wait until AESL_clock'event and AESL_clock = '1';
    end loop;
    rst <= '1';
    wait;
end process;

gen_start_proc : process
    variable  rand            :   T_RANDINT     := init_rand(0);
    variable  rint            :   INTEGER;
begin
  start <= '0';
  ce <= '1';
    wait until AESL_reset = '1';
  wait until (AESL_clock'event and AESL_clock = '1');
  start <= '1';
  while(ready_cnt /= AUTOTB_TRANSACTION_NUM + 1) loop
      wait until (AESL_clock'event and AESL_clock = '1');
      if(AESL_ready = '1') then
          start <= '0';
          start <= '1';
      end if;
  end loop;
  start <= '0';
  wait;
end process;


gen_continue_proc : process(AESL_done)
begin
    continue <= AESL_done;
end process;

gen_AESL_ready_delay_proc : process(AESL_clock)
begin
  if (AESL_clock'event and AESL_clock = '1') then
    if(AESL_reset = '0') then
          AESL_ready_delay <= '0';
      else
          AESL_ready_delay <= AESL_ready;
      end if;
  end if;
end process;

gen_ready_initial_proc : process
begin
    ready_initial <= '0';
    wait until AESL_start = '1';
    ready_initial <= '1';
    wait until AESL_clock'event and AESL_clock = '1';
    ready_initial <= '0';
    wait;
end process;

ready_last_n_proc : process
begin
  ready_last_n <= '1';
  while(ready_cnt /= AUTOTB_TRANSACTION_NUM) loop
    wait until AESL_clock'event and AESL_clock = '1';
  end loop;
  ready_last_n <= '0';
  wait;
end process;

gen_ready_delay_n_last_proc : process(AESL_clock)
begin
  if (AESL_clock'event and AESL_clock = '1') then
    if(AESL_reset = '0') then
          ready_delay_last_n <= '0';
      else
          ready_delay_last_n <= ready_last_n;
      end if;
  end if;
end process;

ready <= (ready_initial or AESL_ready_delay);
ready_wire <= ready_initial or AESL_ready_delay;
done_delay_last_n <= '0' when done_cnt = AUTOTB_TRANSACTION_NUM else '1';

gen_done_delay_proc : process(AESL_clock)
begin
  if (AESL_clock'event and AESL_clock = '1') then
    if(AESL_reset = '0') then
          AESL_done_delay <= '0';
          AESL_done_delay2 <= '0';
      else
          AESL_done_delay <= AESL_done and done_delay_last_n;
          AESL_done_delay2 <= AESL_done_delay;
      end if;
  end if;
end process;

gen_interface_done : process(ready, AESL_ready_delay, AESL_done_delay)
begin
    if(ready_cnt > 0 and ready_cnt < AUTOTB_TRANSACTION_NUM) then
        interface_done <= AESL_ready_delay;
    elsif(ready_cnt = AUTOTB_TRANSACTION_NUM) then
        interface_done <= AESL_done_delay;
    else
        interface_done <= '0';
    end if;
end process;

-- Write "[[[runtime]]]" and "[[[/runtime]]]" for output transactor 
write_output_transactor_out_r_runtime_proc : process
  file        fp              :   TEXT;
  variable    fstatus         :   FILE_OPEN_STATUS;
  variable    token_line      :   LINE;
  variable    token           :   STRING(1 to 1024);
begin
    file_open(fstatus, fp, AUTOTB_TVOUT_out_r_out_wrapc, WRITE_MODE);
    if(fstatus /= OPEN_OK) then
        assert false report "Open file " & AUTOTB_TVOUT_out_r_out_wrapc & " failed!!!" severity note;
        assert false report "ERROR: Simulation using HLS TB failed." severity failure;
    end if;
    write(token_line, string'("[[[runtime]]]"));
    writeline(fp, token_line);
    file_close(fp);
    while done_cnt /= AUTOTB_TRANSACTION_NUM loop
        wait until AESL_clock'event and AESL_clock = '1';
    end loop;
    wait until AESL_clock'event and AESL_clock = '1';
    wait until AESL_clock'event and AESL_clock = '1';
    file_open(fstatus, fp, AUTOTB_TVOUT_out_r_out_wrapc, APPEND_MODE);
    if(fstatus /= OPEN_OK) then
        assert false report "Open file " & AUTOTB_TVOUT_out_r_out_wrapc & " failed!!!" severity note;
        assert false report "ERROR: Simulation using HLS TB failed." severity failure;
    end if;
    write(token_line, string'("[[[/runtime]]]"));
    writeline(fp, token_line);
    file_close(fp);
    wait;
end process;

gen_clock_counter_proc : process(AESL_clock)
begin
  if (AESL_clock'event and AESL_clock = '0') then
    if(AESL_reset = '0') then
        AESL_clk_counter := 0;
    else
        AESL_clk_counter := AESL_clk_counter + 1;
    end if;
  end if;
end process;

gen_mLatcnterout_proc : process(AESL_clock)
begin
  if (AESL_clock'event and AESL_clock = '1') then
    if(AESL_reset = '0') then
          AESL_mLatCnterOut_addr := 0;
          AESL_mLatCnterOut(AESL_mLatCnterOut_addr) := AESL_clk_counter + 1 ;
          reported_stuck_cnt := 0;
      else
          if (AESL_done = '1' and AESL_mLatCnterOut_addr < AUTOTB_TRANSACTION_NUM + 1) then
              AESL_mLatCnterOut(AESL_mLatCnterOut_addr) := AESL_clk_counter;
              AESL_mLatCnterOut_addr := AESL_mLatCnterOut_addr + 1;
              reported_stuck <= '0';
          end if;
      end if;
  end if;
end process;

gen_mLatcnterin_proc : process(AESL_clock)
begin
  if (AESL_clock'event and AESL_clock = '1') then
    if(AESL_reset = '0') then
          AESL_mLatCnterIn_addr := 0;
      else
    if (AESL_slave_write_start_finish = '1' and AESL_mLatCnterIn_addr < AUTOTB_TRANSACTION_NUM + 1) then
        AESL_mLatCnterIn(AESL_mLatCnterIn_addr) := AESL_clk_counter;
        AESL_mLatCnterIn_addr := AESL_mLatCnterIn_addr + 1;
    end if;
      end if;
  end if;
end process;

gen_performance_check_proc : process
    variable transaction_counter : INTEGER;
    variable i : INTEGER;
    file     fp :   TEXT;
    variable    fstatus         :   FILE_OPEN_STATUS;
    variable    token_line      :   LINE;
    variable    token           :   STRING(1 to 1024);

    variable latthistime : INTEGER;
    variable lattotal : INTEGER;
    variable latmax : INTEGER;
    variable latmin : INTEGER;


    variable thrthistime : INTEGER;
    variable thrtotal : INTEGER;
    variable thrmax : INTEGER;
    variable thrmin : INTEGER;

    variable lataver : INTEGER;
    variable thraver : INTEGER;
    type latency_record is array(0 to AUTOTB_TRANSACTION_NUM + 1) of INTEGER;
    variable lat_array : latency_record;
    variable thr_array : latency_record;

begin
    i := 0;
    lattotal  := 0;
    latmax    := 0;
    latmin    := 16#7fffffff#;
    lataver   := 0;

    thrtotal  := 0;
    thrmax    := 0;
    thrmin    := 16#7fffffff#;
    thraver   := 0;

    wait until (AESL_clock'event and AESL_clock = '1');
    wait until (AESL_reset = '1'); 
    while (done_cnt /= AUTOTB_TRANSACTION_NUM) loop
        wait until (AESL_clock'event and AESL_clock = '1');
    end loop;
  wait for 0.001 ns;

    for i in 0 to AUTOTB_TRANSACTION_NUM - 1 loop
        latthistime := AESL_mLatCnterOut(i) - AESL_mLatCnterIn(i);
        lat_array(i) := latthistime;
        if (latthistime > latmax) then
            latmax := latthistime; 
        end if;
        if (latthistime < latmin) then
            latmin := latthistime;
        end if;
		lattotal := lattotal + latthistime;
		if (AUTOTB_TRANSACTION_NUM = 1) then
			thrthistime := latthistime;
		else
			thrthistime := AESL_mLatCnterIn(i + 1) - AESL_mLatCnterIn(i);
		end if;
     thr_array(i) := thrthistime;
		if (thrthistime > thrmax) then
		    thrmax := thrthistime;
      end if;
		if (thrthistime < thrmin) then
	        thrmin := thrthistime;
      end if;
		thrtotal := thrtotal + thrthistime;
	end loop;
	lataver := lattotal / AUTOTB_TRANSACTION_NUM;
	thraver := thrtotal / AUTOTB_TRANSACTION_NUM;

    file_open(fstatus, fp, AUTOTB_LAT_RESULT_FILE, WRITE_MODE);
    if (fstatus /= OPEN_OK) then
        assert false report "Open file " & AUTOTB_LAT_RESULT_FILE & " failed!!!" severity note;
        assert false report "ERROR: Simulation using HLS TB failed." severity failure;
    end if;

    if (AUTOTB_TRANSACTION_NUM = 1) then
        thrmax  := 0;
        thrmin  := 0;
        thraver := 0;
        write(token_line, "$MAX_LATENCY = " & '"' & integer'image(latmax) & '"');
        writeline(fp, token_line);
        write(token_line, "$MIN_LATENCY = " & '"' & integer'image(latmin) & '"');
        writeline(fp, token_line);
        write(token_line, "$AVER_LATENCY = " & '"' & integer'image(lataver) & '"');
        writeline(fp, token_line);
        write(token_line, "$MAX_THROUGHPUT = " & '"' & integer'image(thrmax) & '"');
        writeline(fp, token_line);
        write(token_line, "$MIN_THROUGHPUT = " & '"' & integer'image(thrmin) & '"');
        writeline(fp, token_line);
        write(token_line, "$AVER_THROUGHPUT = " & '"' & integer'image(thraver) & '"');
        writeline(fp, token_line);
    else
        write(token_line, "$MAX_LATENCY = " & '"' & integer'image(latmax) & '"');
        writeline(fp, token_line);
        write(token_line, "$MIN_LATENCY = " & '"' & integer'image(latmin) & '"');
        writeline(fp, token_line);
        write(token_line, "$AVER_LATENCY = " & '"' & integer'image(lataver) & '"');
        writeline(fp, token_line);
        write(token_line, "$MAX_THROUGHPUT = " & '"' & integer'image(latmax) & '"');
        writeline(fp, token_line);
        write(token_line, "$MIN_THROUGHPUT = " & '"' & integer'image(latmin) & '"');
        writeline(fp, token_line);
        write(token_line, "$AVER_THROUGHPUT = " & '"' & integer'image(lataver) & '"');
        writeline(fp, token_line);
    end if;

    file_close(fp);

    file_open(fstatus, fp, AUTOTB_PER_RESULT_TRANS_FILE, WRITE_MODE);
    if(fstatus /= OPEN_OK) then
        assert false report "Open file " & AUTOTB_PER_RESULT_TRANS_FILE & " failed!!!" severity note;
        assert false report "ERROR: Simulation using HLS TB failed." severity failure;
    end if;

    write(token_line,string'("                            latency            interval"));
    writeline(fp, token_line);
    if (AUTOTB_TRANSACTION_NUM = 1) then
        i := 0;
        thr_array(i) := 0;
        write(token_line,"transaction        " & integer'image(i) & "            " & integer'image(lat_array(i) ) & "            " & integer'image(thr_array(i) ) );
        writeline(fp, token_line);
    else
        for i in 0 to AESL_mLatCnterOut_addr - 1 loop
            write(token_line,"transaction        " & integer'image(i) & "            " & integer'image(lat_array(i) ) & "            " & integer'image(thr_array(i) ) );
            writeline(fp, token_line);
        end loop;
    end if;
    file_close(fp);
    wait;
end process;

end behav;