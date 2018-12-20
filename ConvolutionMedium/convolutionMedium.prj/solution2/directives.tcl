############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_interface -mode s_axilite -bundle convm "convolveMedium"
set_directive_interface -mode s_axilite -bundle convm "convolveMedium" in
set_directive_interface -mode s_axilite -bundle convm "convolveMedium" out
set_directive_interface -mode s_axilite -bundle convm "convolveMedium" krnl
set_directive_unroll -factor 3 "convolveMedium/kRows"
set_directive_unroll -factor 3 "convolveMedium/kCols"
set_directive_pipeline -II 1 "convolveMedium/kCols"
set_directive_unroll -factor 4 "convolveMedium/imgRows"
