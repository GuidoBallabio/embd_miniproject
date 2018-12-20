// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "ap_stream.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "in_r"
#define AUTOTB_TVIN_in_r  "../tv/cdatafile/c.convolve.autotvin_in_r.dat"
// wrapc file define: "out_r"
#define AUTOTB_TVOUT_out_r  "../tv/cdatafile/c.convolve.autotvout_out_r.dat"
// wrapc file define: "krnl"
#define AUTOTB_TVIN_krnl  "../tv/cdatafile/c.convolve.autotvin_krnl.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "out_r"
#define AUTOTB_TVOUT_PC_out_r  "../tv/rtldatafile/rtl.convolve.autotvout_out_r.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			in_r_depth = 0;
			out_r_depth = 0;
			krnl_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{in_r " << in_r_depth << "}\n";
			total_list << "{out_r " << out_r_depth << "}\n";
			total_list << "{krnl " << krnl_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int in_r_depth;
		int out_r_depth;
		int krnl_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern void convolve (
short in[50][50],
short out[50][50],
float krnl[3][3]);

void AESL_WRAP_convolve (
short in[50][50],
short out[50][50],
float krnl[3][3])
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;


		// output port post check: "out_r"
		aesl_fh.read(AUTOTB_TVOUT_PC_out_r, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_out_r, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_out_r, AESL_token); // data

			sc_bv<16> *out_r_pc_buffer = new sc_bv<16>[2500];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_r', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'out_r', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					out_r_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_out_r, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_out_r))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: out_r
				{
					// bitslice(15, 0)
					// {
						// celement: out(15, 0)
						// {
							sc_lv<16>* out_lv0_0_49_1_lv1_0_49_1 = new sc_lv<16>[2500];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: out(15, 0)
						{
							// carray: (0) => (49) @ (1)
							for (int i_0 = 0; i_0 <= 49; i_0 += 1)
							{
								// carray: (0) => (49) @ (1)
								for (int i_1 = 0; i_1 <= 49; i_1 += 1)
								{
									if (&(out[0][0]) != NULL) // check the null address if the c port is array or others
									{
										out_lv0_0_49_1_lv1_0_49_1[hls_map_index].range(15, 0) = sc_bv<16>(out_r_pc_buffer[hls_map_index].range(15, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: out(15, 0)
						{
							// carray: (0) => (49) @ (1)
							for (int i_0 = 0; i_0 <= 49; i_0 += 1)
							{
								// carray: (0) => (49) @ (1)
								for (int i_1 = 0; i_1 <= 49; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : out[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : out[0][0]
									// output_left_conversion : out[i_0][i_1]
									// output_type_conversion : (out_lv0_0_49_1_lv1_0_49_1[hls_map_index]).to_uint64()
									if (&(out[0][0]) != NULL) // check the null address if the c port is array or others
									{
										out[i_0][i_1] = (out_lv0_0_49_1_lv1_0_49_1[hls_map_index]).to_uint64();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] out_r_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "in_r"
		char* tvin_in_r = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_in_r);

		// "out_r"
		char* tvout_out_r = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_out_r);

		// "krnl"
		char* tvin_krnl = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_krnl);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_in_r, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_in_r, tvin_in_r);

		sc_bv<16>* in_r_tvin_wrapc_buffer = new sc_bv<16>[2500];

		// RTL Name: in_r
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: in(15, 0)
				{
					// carray: (0) => (49) @ (1)
					for (int i_0 = 0; i_0 <= 49; i_0 += 1)
					{
						// carray: (0) => (49) @ (1)
						for (int i_1 = 0; i_1 <= 49; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : in[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : in[0][0]
							// regulate_c_name       : in
							// input_type_conversion : in[i_0][i_1]
							if (&(in[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> in_tmp_mem;
								in_tmp_mem = in[i_0][i_1];
								in_r_tvin_wrapc_buffer[hls_map_index].range(15, 0) = in_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 2500; i++)
		{
			sprintf(tvin_in_r, "%s\n", (in_r_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_in_r, tvin_in_r);
		}

		tcl_file.set_num(2500, &tcl_file.in_r_depth);
		sprintf(tvin_in_r, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_in_r, tvin_in_r);

		// release memory allocation
		delete [] in_r_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_krnl, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_krnl, tvin_krnl);

		sc_bv<32>* krnl_tvin_wrapc_buffer = new sc_bv<32>[9];

		// RTL Name: krnl
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: krnl(31, 0)
				{
					// carray: (0) => (2) @ (1)
					for (int i_0 = 0; i_0 <= 2; i_0 += 1)
					{
						// carray: (0) => (2) @ (1)
						for (int i_1 = 0; i_1 <= 2; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : krnl[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : krnl[0][0]
							// regulate_c_name       : krnl
							// input_type_conversion : *(int*)&krnl[i_0][i_1]
							if (&(krnl[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<32> krnl_tmp_mem;
								krnl_tmp_mem = *(int*)&krnl[i_0][i_1];
								krnl_tvin_wrapc_buffer[hls_map_index].range(31, 0) = krnl_tmp_mem.range(31, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 9; i++)
		{
			sprintf(tvin_krnl, "%s\n", (krnl_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_krnl, tvin_krnl);
		}

		tcl_file.set_num(9, &tcl_file.krnl_depth);
		sprintf(tvin_krnl, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_krnl, tvin_krnl);

		// release memory allocation
		delete [] krnl_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		convolve(in, out, krnl);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_out_r, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_out_r, tvout_out_r);

		sc_bv<16>* out_r_tvout_wrapc_buffer = new sc_bv<16>[2500];

		// RTL Name: out_r
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: out(15, 0)
				{
					// carray: (0) => (49) @ (1)
					for (int i_0 = 0; i_0 <= 49; i_0 += 1)
					{
						// carray: (0) => (49) @ (1)
						for (int i_1 = 0; i_1 <= 49; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : out[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : out[0][0]
							// regulate_c_name       : out
							// input_type_conversion : out[i_0][i_1]
							if (&(out[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> out_tmp_mem;
								out_tmp_mem = out[i_0][i_1];
								out_r_tvout_wrapc_buffer[hls_map_index].range(15, 0) = out_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 2500; i++)
		{
			sprintf(tvout_out_r, "%s\n", (out_r_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_out_r, tvout_out_r);
		}

		tcl_file.set_num(2500, &tcl_file.out_r_depth);
		sprintf(tvout_out_r, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_out_r, tvout_out_r);

		// release memory allocation
		delete [] out_r_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "in_r"
		delete [] tvin_in_r;
		// release memory allocation: "out_r"
		delete [] tvout_out_r;
		// release memory allocation: "krnl"
		delete [] tvin_krnl;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

