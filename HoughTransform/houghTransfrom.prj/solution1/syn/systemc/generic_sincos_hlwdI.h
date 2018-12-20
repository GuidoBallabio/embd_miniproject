// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __generic_sincos_hlwdI_H__
#define __generic_sincos_hlwdI_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct generic_sincos_hlwdI_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 27;
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


   SC_CTOR(generic_sincos_hlwdI_ram) {
        ram[0] = "0b101111110000111110011000001";
        ram[1] = "0b101111110001000000110111110";
        ram[2] = "0b101111110001000101111010010";
        ram[3] = "0b101111110001001101011010101";
        ram[4] = "0b101111110001010111011011000";
        ram[5] = "0b101111110001100011111101101";
        ram[6] = "0b101111110001110010111101011";
        ram[7] = "0b101111110010000100011101110";
        ram[8] = "0b101111110010011000011110100";
        ram[9] = "0b101111110010101111000000100";
        ram[10] = "0b101111110011001000000011010";
        ram[11] = "0b101111110011100011100101001";
        ram[12] = "0b101111110100000001100111011";
        ram[13] = "0b101111110100100010001001010";
        ram[14] = "0b101111110101000101001000000";
        ram[15] = "0b101111110101101010100111111";
        ram[16] = "0b101111110110010010101001011";
        ram[17] = "0b101111110110111101000110100";
        ram[18] = "0b101111110111101010000100110";
        ram[19] = "0b101111111000011001100001110";
        ram[20] = "0b101111111001001011011100111";
        ram[21] = "0b101111111001111111111000010";
        ram[22] = "0b101111111010110110110100001";
        ram[23] = "0b101111111011110000001110110";
        ram[24] = "0b101111111100101100000100011";
        ram[25] = "0b101111111101101010011000111";
        ram[26] = "0b101111111110101011001101001";
        ram[27] = "0b101111111111101110100001010";
        ram[28] = "0b110000000000110100010010001";
        ram[29] = "0b110000000001111100100000011";
        ram[30] = "0b110000000011000111001101101";
        ram[31] = "0b110000000100010100010101000";
        ram[32] = "0b110000000101100011111010111";
        ram[33] = "0b110000000110110110000000110";
        ram[34] = "0b110000001000001010100001101";
        ram[35] = "0b110000001001100001011101100";
        ram[36] = "0b110000001010111010110100111";
        ram[37] = "0b110000001100010110101001110";
        ram[38] = "0b110000001101110100111011100";
        ram[39] = "0b110000001111010101101011010";
        ram[40] = "0b110000010000111000110001011";
        ram[41] = "0b110000010010011110010111111";
        ram[42] = "0b110000010100000110011001101";
        ram[43] = "0b110000010101110000110001000";
        ram[44] = "0b110000010111011101100111011";
        ram[45] = "0b110000011001001100110110010";
        ram[46] = "0b110000011010111110011111010";
        ram[47] = "0b110000011100110010100010100";
        ram[48] = "0b110000011110101000111100000";
        ram[49] = "0b110000100000100001110001110";
        ram[50] = "0b110000100010011101000000111";
        ram[51] = "0b110000100100011010101000011";
        ram[52] = "0b110000100110011010101000000";
        ram[53] = "0b110000101000011100111110101";
        ram[54] = "0b110000101010100001101101111";
        ram[55] = "0b110000101100101000110101111";
        ram[56] = "0b110000101110110010010010101";
        ram[57] = "0b110000110000111110000110110";
        ram[58] = "0b110000110011001100010001111";
        ram[59] = "0b110000110101011100110000010";
        ram[60] = "0b110000110111101111100110110";
        ram[61] = "0b110000111010000100110011001";
        ram[62] = "0b110000111100011100010100010";
        ram[63] = "0b110000111110110110000111110";
        ram[64] = "0b110001000001010010001111101";
        ram[65] = "0b110001000011110000101110010";
        ram[66] = "0b110001000110010001011011101";
        ram[67] = "0b110001001000110100100011100";
        ram[68] = "0b110001001011011001111000010";
        ram[69] = "0b110001001110000001100000000";
        ram[70] = "0b110001010000101011011010111";
        ram[71] = "0b110001010011010111100111111";
        ram[72] = "0b110001010110000110000110100";
        ram[73] = "0b110001011000110110110001010";
        ram[74] = "0b110001011011101001110010100";
        ram[75] = "0b110001011110011110111110001";
        ram[76] = "0b110001100001010110011001110";
        ram[77] = "0b110001100100010000000101000";
        ram[78] = "0b110001100111001011111110100";
        ram[79] = "0b110001101010001010000111010";
        ram[80] = "0b110001101101001010011101010";
        ram[81] = "0b110001110000001100111111110";
        ram[82] = "0b110001110011010001110001110";
        ram[83] = "0b110001110110011000101011110";
        ram[84] = "0b110001111001100001110100011";
        ram[85] = "0b110001111100101101000111000";
        ram[86] = "0b110001111111111010100100000";
        ram[87] = "0b110010000011001010001100000";
        ram[88] = "0b110010000110011011111100110";
        ram[89] = "0b110010001001101111110111001";
        ram[90] = "0b110010001101000101110111110";
        ram[91] = "0b110010010000011110000001100";
        ram[92] = "0b110010010011111000011001001";
        ram[93] = "0b110010010111010100110001101";
        ram[94] = "0b110010011010110011001111100";
        ram[95] = "0b110010011110010011110111000";
        ram[96] = "0b110010100001110110100010101";
        ram[97] = "0b110010100101011011010011100";
        ram[98] = "0b110010101001000010001001010";
        ram[99] = "0b110010101100101011000100110";
        ram[100] = "0b110010110000010110000001111";
        ram[101] = "0b110010110100000010111110010";
        ram[102] = "0b110010110111110001111101101";
        ram[103] = "0b110010111011100011000001110";
        ram[104] = "0b110010111111010110000110110";
        ram[105] = "0b110011000011001011001010001";
        ram[106] = "0b110011000111000010010001000";
        ram[107] = "0b110011001010111011010010000";
        ram[108] = "0b110011001110110110010001101";
        ram[109] = "0b110011010010110011010011100";
        ram[110] = "0b110011010110110010010010000";
        ram[111] = "0b110011011010110011001100000";
        ram[112] = "0b110011011110110101111111110";
        ram[113] = "0b110011100010111010110001001";
        ram[114] = "0b110011100111000001100000000";
        ram[115] = "0b110011101011001010000101011";
        ram[116] = "0b110011101111010100101000011";
        ram[117] = "0b110011110011100001000001000";
        ram[118] = "0b110011110111101111010100111";
        ram[119] = "0b110011111011111111011111101";
        ram[120] = "0b110100000000010001011100010";
        ram[121] = "0b110100000100100101010100110";
        ram[122] = "0b110100001000111011000100001";
        ram[123] = "0b110100001101010010100101101";
        ram[124] = "0b110100010001101011111001011";
        ram[125] = "0b110100010110000111000100111";
        ram[126] = "0b110100011010100100000011011";
        ram[127] = "0b110100011111000010110010001";


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


SC_MODULE(generic_sincos_hlwdI) {


static const unsigned DataWidth = 27;
static const unsigned AddressRange = 128;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


generic_sincos_hlwdI_ram* meminst;


SC_CTOR(generic_sincos_hlwdI) {
meminst = new generic_sincos_hlwdI_ram("generic_sincos_hlwdI_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~generic_sincos_hlwdI() {
    delete meminst;
}


};//endmodule
#endif