// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __generic_sincos_hlfYi_H__
#define __generic_sincos_hlfYi_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct generic_sincos_hlfYi_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 44;
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


   SC_CTOR(generic_sincos_hlfYi_ram) {
        ram[0] = "0b10011101111010011110011001001101111101100100";
        ram[1] = "0b10011101111010010010001101111100101101100000";
        ram[2] = "0b10011101111001101101101100001010101111110010";
        ram[3] = "0b10011101111000110000110011111101101100100001";
        ram[4] = "0b10011101110111011011100101011110111100001101";
        ram[5] = "0b10011101110101101110000000111011101001000010";
        ram[6] = "0b10011101110011101000000110100100101011010010";
        ram[7] = "0b10011101110001001001110110101110101101000001";
        ram[8] = "0b10011101101110010011010001110010001000011000";
        ram[9] = "0b10011101101011000100011000001011000111001110";
        ram[10] = "0b10011101100111011101001010011001100011101010";
        ram[11] = "0b10011101100011011101101001000001000111011001";
        ram[12] = "0b10011101011111000101110100101001001100011010";
        ram[13] = "0b10011101011010010101101101111100111100100000";
        ram[14] = "0b10011101010101001101010101101011010000011111";
        ram[15] = "0b10011101001111101100101100100110110001110101";
        ram[16] = "0b10011101001001110011110011100101111001011100";
        ram[17] = "0b10011101000011100010101011100010101110000010";
        ram[18] = "0b10011100111100111001010101011011000111000000";
        ram[19] = "0b10011100110101110111110010010000101010101111";
        ram[20] = "0b10011100101110011110000011001000101101001101";
        ram[21] = "0b10011100100110101100001001001100010011000000";
        ram[22] = "0b10011100011110100010000101101000001101101110";
        ram[23] = "0b10011100010101111111111001101100111110010011";
        ram[24] = "0b10011100001101000101100110101110110010001000";
        ram[25] = "0b10011100000011110011001110000101100110101011";
        ram[26] = "0b10011011111010001000110001001101000110010101";
        ram[27] = "0b10011011110000000110010001100100101001001101";
        ram[28] = "0b10011011100101101011110000101111010011111010";
        ram[29] = "0b10011011011010111001010000010011111000100100";
        ram[30] = "0b10011011001111101110110001111100110110101000";
        ram[31] = "0b10011011000100001100010111011000011000110011";
        ram[32] = "0b10011010111000010010000010011000010111111010";
        ram[33] = "0b10011010101011111111110100110010011000000001";
        ram[34] = "0b10011010011111010101110000011111100111101101";
        ram[35] = "0b10011010010010010011110111011101000010001001";
        ram[36] = "0b10011010000100111010001011101011001101100110";
        ram[37] = "0b10011001110111001000101111001110011011010010";
        ram[38] = "0b10011001101000111111100100001110100110110111";
        ram[39] = "0b10011001011010011110101100110111010101111010";
        ram[40] = "0b10011001001011100110001011010111110111000101";
        ram[41] = "0b10011000111100010110000010000011000100111000";
        ram[42] = "0b10011000101100101110010011001111100000011111";
        ram[43] = "0b10011000011100101111000001010111010100001110";
        ram[44] = "0b10011000001100011000001110111000010100111011";
        ram[45] = "0b10010111111011101001111110010011111100110010";
        ram[46] = "0b10010111101010100100010010001111001111001010";
        ram[47] = "0b10010111011001000111001101010010110110011100";
        ram[48] = "0b10010111000111010010110010001011000010110111";
        ram[49] = "0b10010110110101000111000011100111101101010010";
        ram[50] = "0b10010110100010100100000100011100010010101010";
        ram[51] = "0b10010110001111101001110111011111110101111010";
        ram[52] = "0b10010101111100011000011111101100111111001110";
        ram[53] = "0b10010101101000110000000000000001111011010000";
        ram[54] = "0b10010101010100110000011011100000011011011100";
        ram[55] = "0b10010101000000011001110101001101110100101010";
        ram[56] = "0b10010100101011101100010000010010111110100110";
        ram[57] = "0b10010100010110100111101111111100010100000111";
        ram[58] = "0b10010100000001001100010111011001110011000000";
        ram[59] = "0b10010011101011011010001001111110111001010010";
        ram[60] = "0b10010011010101010001001011000010100111111010";
        ram[61] = "0b10010010111110110001011101111111100000001100";
        ram[62] = "0b10010010100111111011000110010011100010100111";
        ram[63] = "0b10010010010000101110000111100000010000001000";
        ram[64] = "0b10010001111001001010100101001010101001100000";
        ram[65] = "0b10010001100001010000100010111011001101100011";
        ram[66] = "0b10010001001001000000000100011101110111110100";
        ram[67] = "0b10010000110000011001001101100010000100110010";
        ram[68] = "0b10010000010111011100000001111010101001010011";
        ram[69] = "0b10001111111110001000100101011101111010000100";
        ram[70] = "0b10001111100100011110111100000101100110001111";
        ram[71] = "0b10001111001010011111001001101110111000010000";
        ram[72] = "0b10001110110000001001010010011010010100110001";
        ram[73] = "0b10001110010101011101011010001011111001111001";
        ram[74] = "0b10001101111010011011100101001011000001010100";
        ram[75] = "0b10001101011111000011110111100010011001110011";
        ram[76] = "0b10001101000011010110010101100000001101000111";
        ram[77] = "0b10001100100111010011000011010101111011000010";
        ram[78] = "0b10001100001010111010000101011000011010011011";
        ram[79] = "0b10001011101110001011011111111111110111110011";
        ram[80] = "0b10001011010001000111010111100111110101100000";
        ram[81] = "0b10001010110011101101110000101111001001100110";
        ram[82] = "0b10001010010101111110101111110111111111101000";
        ram[83] = "0b10001001110111111010011001100111110100010111";
        ram[84] = "0b10001001011001100000110010100111011001010101";
        ram[85] = "0b10001000111010110001111111100010110000100100";
        ram[86] = "0b10001000011011101110000101001001001101001000";
        ram[87] = "0b10000111111100010101001000001101010011011101";
        ram[88] = "0b10000111011100100111001101100100110110100111";
        ram[89] = "0b10000110111100100100011010001000111001000111";
        ram[90] = "0b10000110011100001100110010110101101011000111";
        ram[91] = "0b10000101111011100000011100101010101011011001";
        ram[92] = "0b10000101011010011111011100101010100100111111";
        ram[93] = "0b10000100111001001001110111111011001100100101";
        ram[94] = "0b10000100010111011111110011100101100100010000";
        ram[95] = "0b10000011110101100001010100110101111000010110";
        ram[96] = "0b10000011010011001110100000111011011101101001";
        ram[97] = "0b10000010110000100111011101001000110010001111";
        ram[98] = "0b10000010001101101100001110110011011011100000";
        ram[99] = "0b10000001101010011100111011010100000110110001";
        ram[100] = "0b10000001000110111001101000000110100110001001";
        ram[101] = "0b10000000100011000010011010101001110001011000";
        ram[102] = "0b01111111111110110111011000011111100110011110";
        ram[103] = "0b01111111011010011000100111001101000101110010";
        ram[104] = "0b01111110110101100110001100011010010001111100";
        ram[105] = "0b01111110010000100000001101110010001111101011";
        ram[106] = "0b01111101101011000110110001000011000110011111";
        ram[107] = "0b01111101000101011001111011111101111010111100";
        ram[108] = "0b01111100011111011001110100010110110011100111";
        ram[109] = "0b01111011111001000110100000000100110100111001";
        ram[110] = "0b01111011010010100000000101000010000000000010";
        ram[111] = "0b01111010101011100110101001001011010010001111";
        ram[112] = "0b01111010000100011010010010100000100101010011";
        ram[113] = "0b01111001011100111011000111000100101110011110";
        ram[114] = "0b01111000110101001001001100111101011011101111";
        ram[115] = "0b01111000001101000100101010010011010011011001";
        ram[116] = "0b01110111100100101101100101010001110101100101";
        ram[117] = "0b01110110111100000100000100000111010110011111";
        ram[118] = "0b01110110010011001000001101000101000011110010";
        ram[119] = "0b01110101101001111010000110011110111101001101";
        ram[120] = "0b01110101000000011001110110101011110111010000";
        ram[121] = "0b01110100010110100111100100000101011011101000";
        ram[122] = "0b01110011101100100011010101001000000011100100";
        ram[123] = "0b01110011000010001101010000010010111001110000";
        ram[124] = "0b01110010010111100101011100000111111001100101";
        ram[125] = "0b01110001101100101011111111001011101110011011";
        ram[126] = "0b01110001000001100001000000000101110000010111";
        ram[127] = "0b01110000010110000100100101100000000100000110";


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


SC_MODULE(generic_sincos_hlfYi) {


static const unsigned DataWidth = 44;
static const unsigned AddressRange = 128;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


generic_sincos_hlfYi_ram* meminst;


SC_CTOR(generic_sincos_hlfYi) {
meminst = new generic_sincos_hlfYi_ram("generic_sincos_hlfYi_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~generic_sincos_hlfYi() {
    delete meminst;
}


};//endmodule
#endif