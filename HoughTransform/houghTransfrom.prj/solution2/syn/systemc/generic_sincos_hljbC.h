// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __generic_sincos_hljbC_H__
#define __generic_sincos_hljbC_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct generic_sincos_hljbC_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 51;
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


   SC_CTOR(generic_sincos_hljbC_ram) {
        ram[0] = "0b111111111111111111111111111111111111111111111111011";
        ram[1] = "0b111111110101101010100010010000011001110001000111000";
        ram[2] = "0b111111101011010101000101011110000000100011111000111";
        ram[3] = "0b111111100000111111101010100110000001010011001100010";
        ram[4] = "0b111111010110101010010010100101101000101100011011111";
        ram[5] = "0b111111001100010100111110011010000011001000110100110";
        ram[6] = "0b111111000001111111101111000000011100100110100110010";
        ram[7] = "0b111110110111101010100101010110000000100010010001110";
        ram[8] = "0b111110101101010101100010010111111001101111111010111";
        ram[9] = "0b111110100011000000100111000011010010010100011011110";
        ram[10] = "0b111110011000101011110100010101010011011110110010110";
        ram[11] = "0b111110001110010111001011001011000101100001010110111";
        ram[12] = "0b111110000100000010101100100001101111101011000001100";
        ram[13] = "0b111101111001101110011001010110011000000000101100011";
        ram[14] = "0b111101101111011010010010100110000011010110010011001";
        ram[15] = "0b111101100101000110011001001101110101001000010010000";
        ram[16] = "0b111101011010110010101110001010101111010100101111000";
        ram[17] = "0b111101010000011111010010011001110010010100110101000";
        ram[18] = "0b111101000110001100000110110111111100110101111000110";
        ram[19] = "0b111100111011111001001100100010001011110010111001010";
        ram[20] = "0b111100110001100110100100010101011010001101100100001";
        ram[21] = "0b111100100111010100001111001110100001000111110101010";
        ram[22] = "0b111100011101000010001110001010010111011101000001101";
        ram[23] = "0b111100010010110000100010000101110001111011001111010";
        ram[24] = "0b111100001000011111001011111101100010111100100001001";
        ram[25] = "0b111011111110001110001100101110011010100000010101110";
        ram[26] = "0b111011110011111101100101010101000110000100110010011";
        ram[27] = "0b111011101001101101010110101110010000011111111010100";
        ram[28] = "0b111011011111011101100001110110100001111001000110111";
        ram[29] = "0b111011010101001110000111101010011111100010010010101";
        ram[30] = "0b111011001010111111001001000110101011110001011011110";
        ram[31] = "0b111011000000110000100111000111100101111001110001000";
        ram[32] = "0b111010110110100010100010101001101010000101000111010";
        ram[33] = "0b111010101100010100111100101001010001001101010111101";
        ram[34] = "0b111010100010000111110110000010110000110101101011001";
        ram[35] = "0b111010010111111011001111110010011011000011111110110";
        ram[36] = "0b111010001101101111001010110100011110011010001100001";
        ram[37] = "0b111010000011100011101000000101000101101111110000111";
        ram[38] = "0b111001111001011000101000100000011000001010111100000";
        ram[39] = "0b111001101111001110001101000010011000111010001011100";
        ram[40] = "0b111001100101000100010110100111000111001101100011111";
        ram[41] = "0b111001011010111011000110001010011110010000001100110";
        ram[42] = "0b111001010000110010011100101000010101000001101000100";
        ram[43] = "0b111001000110101010011010111100011110001111001111110";
        ram[44] = "0b111000111100100011000010000010101000001101101111101";
        ram[45] = "0b111000110010011100010010110110011100110010011100101";
        ram[46] = "0b111000101000010110001110010011100001001100111101100";
        ram[47] = "0b111000011110010000110101010101010110000000011010110";
        ram[48] = "0b111000010100001100001000110111010110111101000100101";
        ram[49] = "0b111000001010001000001001110100111010111001101011000";
        ram[50] = "0b111000000000000100111001001001010011101101000100011";
        ram[51] = "0b110111110110000010010111101111101110000111100001111";
        ram[52] = "0b110111101100000000100110100011010001101100011000010";
        ram[53] = "0b110111100001111111100110011111000000101011100001001";
        ram[54] = "0b110111010111111111011000011101110111111010110010111";
        ram[55] = "0b110111001101111111111101011010101110101111101100100";
        ram[56] = "0b110111000100000001010110010000010110111000110001000";
        ram[57] = "0b110110111010000011100011111001011100010111001111011";
        ram[58] = "0b110110110000000110100111010000100101011000100000110";
        ram[59] = "0b110110100110001010100001010000010010001111110101001";
        ram[60] = "0b110110011100001111010010110010111101001111110100001";
        ram[61] = "0b110110010010010100111100110010111010100011111111001";
        ram[62] = "0b110110001000011011100000001010011000001010011011000";
        ram[63] = "0b110101111110100010111101110011011101101101011111110";
        ram[64] = "0b110101110100101011010110101000001100011101010001111";
        ram[65] = "0b110101101010110100101011100010011111001001010110100";
        ram[66] = "0b110101100000111110111101011100001001111010010100111";
        ram[67] = "0b110101010111001010001101001110111010001011101100000";
        ram[68] = "0b110101001101010110011011110100010110100101010011100";
        ram[69] = "0b110101000011100011101010000101111110110101001010010";
        ram[70] = "0b110100111001110001111000111101001011101001000111111";
        ram[71] = "0b110100110000000001001001010011001110101000100100011";
        ram[72] = "0b110100100110010001011100000001010010001110001100011";
        ram[73] = "0b110100011100100010110010000000011001100001101101010";
        ram[74] = "0b110100010010110101001100001001100000010001100110110";
        ram[75] = "0b110100001001001000101011010101011010101100111001111";
        ram[76] = "0b110011111111011101010000011100110101011100111110111";
        ram[77] = "0b110011110101110010111100011000010101011111011000001";
        ram[78] = "0b110011101100001001110000000000010111111111011111101";
        ram[79] = "0b110011100010100001101100001101010010010000100111100";
        ram[80] = "0b110011011000111010110001110111010001100111100100100";
        ram[81] = "0b110011001111010101000001110110011011010100101010011";
        ram[82] = "0b110011000101110000011101000010101100011101100100111";
        ram[83] = "0b110010111100001101000100010011111001110111001101001";
        ram[84] = "0b110010110010101010111000100001101111111111100100111";
        ram[85] = "0b110010101001001001111010100011110010110111110011100";
        ram[86] = "0b110010011111101010001011010001011101111101111011100";
        ram[87] = "0b110010010110001011101011100010000100000110111111011";
        ram[88] = "0b110010001100101110011100001100101111011000111011011";
        ram[89] = "0b110010000011010010011110001000100001000100011111010";
        ram[90] = "0b110001111001110111110010001100010001011111011100101";
        ram[91] = "0b110001110000011110011001001110101111111110010101011";
        ram[92] = "0b110001100111000110010100000110100010101110101111001";
        ram[93] = "0b110001011101101111100011101010000110110001001100001";
        ram[94] = "0b110001010100011010001000101111101111110011001101010";
        ram[95] = "0b110001001011000110000100001101101000001001100011000";
        ram[96] = "0b110001000001110011010110111001110000101010001001100";
        ram[97] = "0b110000111000100010000001101010000000100110010101101";
        ram[98] = "0b110000101111010010000101010100000101100100111011100";
        ram[99] = "0b110000100110000011100010101101100011011100011000010";
        ram[100] = "0b110000011100110110011010101011110100001100111101100";
        ram[101] = "0b110000010011101010101110000100000111111011000010111";
        ram[102] = "0b110000001010100000011101101011100100101001000111101";
        ram[103] = "0b110000000001010111101010010111000110010010001100101";
        ram[104] = "0b101111111000010000010100111011011110100011111111111";
        ram[105] = "0b101111101111001010011110001101010100111001001101010";
        ram[106] = "0b101111100110000110000111000001000110010011110001011";
        ram[107] = "0b101111011101000011010000001011000101010111001101110";
        ram[108] = "0b101111010100000001111010011111011010000010111110011";
        ram[109] = "0b101111001011000010000110110010000001101100101011111";
        ram[110] = "0b101111000010000011110101110110101110111010101001000";
        ram[111] = "0b101110111001000111001000100001001001011110000011101";
        ram[112] = "0b101110110000001011111111100100101110001101101001001";
        ram[113] = "0b101110100111010010011011110100101110111111110100110";
        ram[114] = "0b101110011110011010011110000100010010100101011010011";
        ram[115] = "0b101110010101100100000111000110010100100011110110101";
        ram[116] = "0b101110001100101111010111101101100101001111111010001";
        ram[117] = "0b101110000011111100010000101100101001101000000000110";
        ram[118] = "0b101101111011001010110010110101111011001110111000111";
        ram[119] = "0b101101110010011010111110111011101000000110000111001";
        ram[120] = "0b101101101001101100110101101111110010101000100101000";
        ram[121] = "0b101101100001000000011000000100010001100101010001001";
        ram[122] = "0b101101011000010101100110101010101111111001101100001";
        ram[123] = "0b101101001111101100100010010100101100101100100111001";
        ram[124] = "0b101101000111000101001011110011011011001000101110111";
        ram[125] = "0b101100111110011111100011111000000010010111010100011";
        ram[126] = "0b101100110101111011101011010011011101011010111011000";
        ram[127] = "0b101100101101011001100010110110011011001010001100001";


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


SC_MODULE(generic_sincos_hljbC) {


static const unsigned DataWidth = 51;
static const unsigned AddressRange = 128;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


generic_sincos_hljbC_ram* meminst;


SC_CTOR(generic_sincos_hljbC) {
meminst = new generic_sincos_hljbC_ram("generic_sincos_hljbC_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~generic_sincos_hljbC() {
    delete meminst;
}


};//endmodule
#endif