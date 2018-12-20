############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_interface -mode s_axilite -bundle conv "convolve"
set_directive_interface -mode s_axilite -bundle conv "convolve" in
set_directive_interface -mode s_axilite -bundle conv "convolve" out
set_directive_interface -mode s_axilite -bundle conv "convolve" krnl
set_directive_pipeline -II 1 "convolve/kernelLoop"
set_directive_unroll -factor 3 "convolve/kernelLoop"
set_directive_unroll -factor 3 "convolve/convolve_label3"
set_directive_unroll -factor 3 "convolve/kernelRow"
set_directive_unroll -factor 3 "convolve/kernelCol"
set_directive_pipeline -II 2 "convolve/kernelCol"
set_directive_unroll -factor 9 "convolve/imgRow"