
log_wave -r /
set designtopgroup [add_wave_group "Design Top Signals"]
set cinoutgroup [add_wave_group "C InOuts" -into $designtopgroup]
set in__out__krnl__return_group [add_wave_group in__out__krnl__return(axi_slave) -into $cinoutgroup]
add_wave /apatb_convolve_top/AESL_inst_convolve/interrupt -into $in__out__krnl__return_group -color #ffff00 -radix hex
add_wave /apatb_convolve_top/AESL_inst_convolve/s_axi_conv_BRESP -into $in__out__krnl__return_group -radix hex
add_wave /apatb_convolve_top/AESL_inst_convolve/s_axi_conv_BREADY -into $in__out__krnl__return_group -color #ffff00 -radix hex
add_wave /apatb_convolve_top/AESL_inst_convolve/s_axi_conv_BVALID -into $in__out__krnl__return_group -color #ffff00 -radix hex
add_wave /apatb_convolve_top/AESL_inst_convolve/s_axi_conv_RRESP -into $in__out__krnl__return_group -radix hex
add_wave /apatb_convolve_top/AESL_inst_convolve/s_axi_conv_RDATA -into $in__out__krnl__return_group -radix hex
add_wave /apatb_convolve_top/AESL_inst_convolve/s_axi_conv_RREADY -into $in__out__krnl__return_group -color #ffff00 -radix hex
add_wave /apatb_convolve_top/AESL_inst_convolve/s_axi_conv_RVALID -into $in__out__krnl__return_group -color #ffff00 -radix hex
add_wave /apatb_convolve_top/AESL_inst_convolve/s_axi_conv_ARREADY -into $in__out__krnl__return_group -color #ffff00 -radix hex
add_wave /apatb_convolve_top/AESL_inst_convolve/s_axi_conv_ARVALID -into $in__out__krnl__return_group -color #ffff00 -radix hex
add_wave /apatb_convolve_top/AESL_inst_convolve/s_axi_conv_ARADDR -into $in__out__krnl__return_group -radix hex
add_wave /apatb_convolve_top/AESL_inst_convolve/s_axi_conv_WSTRB -into $in__out__krnl__return_group -radix hex
add_wave /apatb_convolve_top/AESL_inst_convolve/s_axi_conv_WDATA -into $in__out__krnl__return_group -radix hex
add_wave /apatb_convolve_top/AESL_inst_convolve/s_axi_conv_WREADY -into $in__out__krnl__return_group -color #ffff00 -radix hex
add_wave /apatb_convolve_top/AESL_inst_convolve/s_axi_conv_WVALID -into $in__out__krnl__return_group -color #ffff00 -radix hex
add_wave /apatb_convolve_top/AESL_inst_convolve/s_axi_conv_AWREADY -into $in__out__krnl__return_group -color #ffff00 -radix hex
add_wave /apatb_convolve_top/AESL_inst_convolve/s_axi_conv_AWVALID -into $in__out__krnl__return_group -color #ffff00 -radix hex
add_wave /apatb_convolve_top/AESL_inst_convolve/s_axi_conv_AWADDR -into $in__out__krnl__return_group -radix hex
set blocksiggroup [add_wave_group "Block-level IO Handshake(internal)" -into $designtopgroup]
add_wave /apatb_convolve_top/AESL_inst_convolve/ap_done -into $blocksiggroup
add_wave /apatb_convolve_top/AESL_inst_convolve/ap_idle -into $blocksiggroup
add_wave /apatb_convolve_top/AESL_inst_convolve/ap_ready -into $blocksiggroup
add_wave /apatb_convolve_top/AESL_inst_convolve/ap_start -into $blocksiggroup
set resetgroup [add_wave_group "Reset" -into $designtopgroup]
add_wave /apatb_convolve_top/AESL_inst_convolve/ap_rst_n -into $resetgroup
set clockgroup [add_wave_group "Clock" -into $designtopgroup]
add_wave /apatb_convolve_top/AESL_inst_convolve/ap_clk -into $clockgroup
set testbenchgroup [add_wave_group "Test Bench Signals"]
set tbinternalsiggroup [add_wave_group "Internal Signals" -into $testbenchgroup]
set tb_simstatus_group [add_wave_group "Simulation Status" -into $tbinternalsiggroup]
set tb_portdepth_group [add_wave_group "Port Depth" -into $tbinternalsiggroup]
add_wave /apatb_convolve_top/AUTOTB_TRANSACTION_NUM -into $tb_simstatus_group -radix hex
add_wave /apatb_convolve_top/ready_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_convolve_top/done_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_convolve_top/LENGTH_in_r -into $tb_portdepth_group -radix hex
add_wave /apatb_convolve_top/LENGTH_out_r -into $tb_portdepth_group -radix hex
add_wave /apatb_convolve_top/LENGTH_krnl -into $tb_portdepth_group -radix hex
set tbcinoutgroup [add_wave_group "C InOuts" -into $testbenchgroup]
set tb_in__out__krnl__return_group [add_wave_group in__out__krnl__return(axi_slave) -into $tbcinoutgroup]
add_wave /apatb_convolve_top/conv_INTERRUPT -into $tb_in__out__krnl__return_group -color #ffff00 -radix hex
add_wave /apatb_convolve_top/conv_BRESP -into $tb_in__out__krnl__return_group -radix hex
add_wave /apatb_convolve_top/conv_BREADY -into $tb_in__out__krnl__return_group -color #ffff00 -radix hex
add_wave /apatb_convolve_top/conv_BVALID -into $tb_in__out__krnl__return_group -color #ffff00 -radix hex
add_wave /apatb_convolve_top/conv_RRESP -into $tb_in__out__krnl__return_group -radix hex
add_wave /apatb_convolve_top/conv_RDATA -into $tb_in__out__krnl__return_group -radix hex
add_wave /apatb_convolve_top/conv_RREADY -into $tb_in__out__krnl__return_group -color #ffff00 -radix hex
add_wave /apatb_convolve_top/conv_RVALID -into $tb_in__out__krnl__return_group -color #ffff00 -radix hex
add_wave /apatb_convolve_top/conv_ARREADY -into $tb_in__out__krnl__return_group -color #ffff00 -radix hex
add_wave /apatb_convolve_top/conv_ARVALID -into $tb_in__out__krnl__return_group -color #ffff00 -radix hex
add_wave /apatb_convolve_top/conv_ARADDR -into $tb_in__out__krnl__return_group -radix hex
add_wave /apatb_convolve_top/conv_WSTRB -into $tb_in__out__krnl__return_group -radix hex
add_wave /apatb_convolve_top/conv_WDATA -into $tb_in__out__krnl__return_group -radix hex
add_wave /apatb_convolve_top/conv_WREADY -into $tb_in__out__krnl__return_group -color #ffff00 -radix hex
add_wave /apatb_convolve_top/conv_WVALID -into $tb_in__out__krnl__return_group -color #ffff00 -radix hex
add_wave /apatb_convolve_top/conv_AWREADY -into $tb_in__out__krnl__return_group -color #ffff00 -radix hex
add_wave /apatb_convolve_top/conv_AWVALID -into $tb_in__out__krnl__return_group -color #ffff00 -radix hex
add_wave /apatb_convolve_top/conv_AWADDR -into $tb_in__out__krnl__return_group -radix hex
save_wave_config convolve.wcfg
run all
quit

