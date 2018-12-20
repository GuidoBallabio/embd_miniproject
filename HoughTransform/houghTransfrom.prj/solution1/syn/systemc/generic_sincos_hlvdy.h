// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __generic_sincos_hlvdy_H__
#define __generic_sincos_hlvdy_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct generic_sincos_hlvdy_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 35;
  static const unsigned AddressRange = 128;
  static const unsigned AddressWidth = 7;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(generic_sincos_hlvdy_ram) {
        ram[0] = "0b11111111111111111111111111101001110";
        ram[1] = "0b11111110111111000011111000011111010";
        ram[2] = "0b11111101111110000111111011010000111";
        ram[3] = "0b11111100111101001100010010000111011";
        ram[4] = "0b11111011111100010001000111000011000";
        ram[5] = "0b11111010111011010110100011111100011";
        ram[6] = "0b11111001111010011100110011000000000";
        ram[7] = "0b11111000111001100011111110001000010";
        ram[8] = "0b11110111111000101100001111010100010";
        ram[9] = "0b11110110110111110101110000100011101";
        ram[10] = "0b11110101110111000000101011110110100";
        ram[11] = "0b11110100110110001101001011010000000";
        ram[12] = "0b11110011110101011011011000101101110";
        ram[13] = "0b11110010110100101011011110001111010";
        ram[14] = "0b11110001110011111101100101111001101";
        ram[15] = "0b11110000110011010001111001100100000";
        ram[16] = "0b11101111110010101000100011001001100";
        ram[17] = "0b11101110110010000001101100110100011";
        ram[18] = "0b11101101110001011101100000011001100";
        ram[19] = "0b11101100110000111100000111110110100";
        ram[20] = "0b11101011110000011101101101001101100";
        ram[21] = "0b11101010110000000010011010010010111";
        ram[22] = "0b11101001101111101010011001000100111";
        ram[23] = "0b11101000101111010101110011011110001";
        ram[24] = "0b11100111101111000100110011100100001";
        ram[25] = "0b11100110101110110111100011000111111";
        ram[26] = "0b11100101101110101110001100000001101";
        ram[27] = "0b11100100101110101000111000001000110";
        ram[28] = "0b11100011101110100111110001011011111";
        ram[29] = "0b11100010101110101011000001110010011";
        ram[30] = "0b11100001101110110010110010111111000";
        ram[31] = "0b11100000101110111111001111000010000";
        ram[32] = "0b11011111101111010000011111100110110";
        ram[33] = "0b11011110101111100110101110011111010";
        ram[34] = "0b11011101110000000010000101101010011";
        ram[35] = "0b11011100110000100010101110111010101";
        ram[36] = "0b11011011110001001000110100000001001";
        ram[37] = "0b11011010110001110100011110101011111";
        ram[38] = "0b11011001110010100101111000101011011";
        ram[39] = "0b11011000110011011101001011101110100";
        ram[40] = "0b11010111110100011010100001110001010";
        ram[41] = "0b11010110110101011110000100001110010";
        ram[42] = "0b11010101110110100111111100111101011";
        ram[43] = "0b11010100110111111000010101110100001";
        ram[44] = "0b11010011111001001111011000001010111";
        ram[45] = "0b11010010111010101101001101111001001";
        ram[46] = "0b11010001111100010010000000100100000";
        ram[47] = "0b11010000111101111101111001110010011";
        ram[48] = "0b11001111111111110001000011010011111";
        ram[49] = "0b11001111000001101011100110100000001";
        ram[50] = "0b11001110000011101101101101000001101";
        ram[51] = "0b11001101000101110111100000011101100";
        ram[52] = "0b11001100001000001001001010010110000";
        ram[53] = "0b11001011001010100010110100001110011";
        ram[54] = "0b11001010001101000100100111100010011";
        ram[55] = "0b11001001001111101110101101101111111";
        ram[56] = "0b11001000010010100001010000011010101";
        ram[57] = "0b11000111010101011100011000111011100";
        ram[58] = "0b11000110011000100000010000101010000";
        ram[59] = "0b11000101011011101101000001001000100";
        ram[60] = "0b11000100011111000010110011100101100";
        ram[61] = "0b11000011100010100001110001011000010";
        ram[62] = "0b11000010100110001010000011111011000";
        ram[63] = "0b11000001101001111011110100100100000";
        ram[64] = "0b11000000101101110111001100011111100";
        ram[65] = "0b10111111110001111100010100111011000";
        ram[66] = "0b10111110110110001011010111010101000";
        ram[67] = "0b10111101111010100100011100100010000";
        ram[68] = "0b10111100111111000111101110001001101";
        ram[69] = "0b10111100000011110101010101001000111";
        ram[70] = "0b10111011001000101101011010101000101";
        ram[71] = "0b10111010001101110000000111110000101";
        ram[72] = "0b10111001010010111101100101101000000";
        ram[73] = "0b10111000011000010101111101011100001";
        ram[74] = "0b10110111011101111001010111111010101";
        ram[75] = "0b10110110100011100111111110011011101";
        ram[76] = "0b10110101101001100001111001110001100";
        ram[77] = "0b10110100101111100111010010111010110";
        ram[78] = "0b10110011110101111000010010110011001";
        ram[79] = "0b10110010111100010101000010010011110";
        ram[80] = "0b10110010000010111101101010010100110";
        ram[81] = "0b10110001001001110010010011110000000";
        ram[82] = "0b10110000010000110011000111010001010";
        ram[83] = "0b10101111011000000000001101111001000";
        ram[84] = "0b10101110011111011001110000001010010";
        ram[85] = "0b10101101100110111111110110111010000";
        ram[86] = "0b10101100101110110010101010110110000";
        ram[87] = "0b10101011110110110010010100100100101";
        ram[88] = "0b10101010111110111110111100110010111";
        ram[89] = "0b10101010000111011000101100000101011";
        ram[90] = "0b10101001001111111111101011000110010";
        ram[91] = "0b10101000011000110100000010001111111";
        ram[92] = "0b10100111100001110101111001111010100";
        ram[93] = "0b10100110101011000101011010111011111";
        ram[94] = "0b10100101110100100010101101100111100";
        ram[95] = "0b10100100111110001101111010001111000";
        ram[96] = "0b10100100001000000111001001010010011";
        ram[97] = "0b10100011010010001110100011000100011";
        ram[98] = "0b10100010011100100100001111111010011";
        ram[99] = "0b10100001100111001000011000000001000";
        ram[100] = "0b10100000110001111011000011101111111";
        ram[101] = "0b10011111111100111100011011011000110";
        ram[102] = "0b10011111001000001100100110111011000";
        ram[103] = "0b10011110010011101011101110011100110";
        ram[104] = "0b10011101011111011001111010001011000";
        ram[105] = "0b10011100101011010111010010001101111";
        ram[106] = "0b10011011110111100011111110011001011";
        ram[107] = "0b10011011000100000000000111000000000";
        ram[108] = "0b10011010010000101011110011110011110";
        ram[109] = "0b10011001011101100111001100101000000";
        ram[110] = "0b10011000101010110010011001011011101";
        ram[111] = "0b10010111111000001101100010001001001";
        ram[112] = "0b10010111000101111000101110100100010";
        ram[113] = "0b10010110010011110100000110010100000";
        ram[114] = "0b10010101100001111111110001000111000";
        ram[115] = "0b10010100110000011011110110110100000";
        ram[116] = "0b10010011111111001000011110110101000";
        ram[117] = "0b10010011001110000101110001000001111";
        ram[118] = "0b10010010011101010011110100101110000";
        ram[119] = "0b10010001101100110010110001100101010";
        ram[120] = "0b10010000111100100010101111001101110";
        ram[121] = "0b10010000001100100011110100101110110";
        ram[122] = "0b10001111011100110110001001101011011";
        ram[123] = "0b10001110101101011001110101100001111";
        ram[124] = "0b10001101111110001110111111100101000";
        ram[125] = "0b10001101001111010101101110111010000";
        ram[126] = "0b10001100100000101110001010110110010";
        ram[127] = "0b10001011110010011000011010101100011";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(generic_sincos_hlvdy) {


static const unsigned DataWidth = 35;
static const unsigned AddressRange = 128;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


generic_sincos_hlvdy_ram* meminst;


SC_CTOR(generic_sincos_hlvdy) {
meminst = new generic_sincos_hlvdy_ram("generic_sincos_hlvdy_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~generic_sincos_hlvdy() {
    delete meminst;
}


};//endmodule
#endif
