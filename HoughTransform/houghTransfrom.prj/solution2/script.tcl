############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
open_project houghTransfrom.prj
set_top houghTransform
add_files HoughTransform.cpp
add_files -tb HoughTransform_test.cpp -cflags "-DHW_COSIM"
open_solution "solution2"
set_part {xc7z010clg400-1}
create_clock -period 8 -name default
source "./houghTransfrom.prj/solution2/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
