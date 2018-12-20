############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
open_project convolutionInt.prj
set_top convolve
add_files Convolution.cpp
add_files -tb Convolution_test.cpp -cflags "-DHW_COSIM"
open_solution "solution1"
set_part {xc7z010clg400-1} -tool vivado
create_clock -period 8 -name default
source "./convolutionInt.prj/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
