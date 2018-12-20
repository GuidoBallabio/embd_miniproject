proc start_step { step } {
  set stopFile ".stop.rst"
  if {[file isfile .stop.rst]} {
    puts ""
    puts "*** Halting run - EA reset detected ***"
    puts ""
    puts ""
    return -code error
  }
  set beginFile ".$step.begin.rst"
  set platform "$::tcl_platform(platform)"
  set user "$::tcl_platform(user)"
  set pid [pid]
  set host ""
  if { [string equal $platform unix] } {
    if { [info exist ::env(HOSTNAME)] } {
      set host $::env(HOSTNAME)
    }
  } else {
    if { [info exist ::env(COMPUTERNAME)] } {
      set host $::env(COMPUTERNAME)
    }
  }
  set ch [open $beginFile w]
  puts $ch "<?xml version=\"1.0\"?>"
  puts $ch "<ProcessHandle Version=\"1\" Minor=\"0\">"
  puts $ch "    <Process Command=\".planAhead.\" Owner=\"$user\" Host=\"$host\" Pid=\"$pid\">"
  puts $ch "    </Process>"
  puts $ch "</ProcessHandle>"
  close $ch
}

proc end_step { step } {
  set endFile ".$step.end.rst"
  set ch [open $endFile w]
  close $ch
}

proc step_failed { step } {
  set endFile ".$step.error.rst"
  set ch [open $endFile w]
  close $ch
}


start_step init_design
set ACTIVE_STEP init_design
set rc [catch {
  create_msg_db init_design.pb
  reset_param project.defaultXPMLibraries 
  open_checkpoint C:/Users/au513437/Desktop/embd_miniproject/Convolution/convolution.prj/solution2/impl/vhdl/project.runs/impl_1/convolve.dcp
  set_property webtalk.parent_dir C:/Users/au513437/Desktop/embd_miniproject/Convolution/convolution.prj/solution2/impl/vhdl/project.cache/wt [current_project]
  set_property parent.project_path C:/Users/au513437/Desktop/embd_miniproject/Convolution/convolution.prj/solution2/impl/vhdl/project.xpr [current_project]
  set_property ip_output_repo C:/Users/au513437/Desktop/embd_miniproject/Convolution/convolution.prj/solution2/impl/vhdl/project.cache/ip [current_project]
  set_property ip_cache_permissions {read write} [current_project]
  set_property XPM_LIBRARIES XPM_MEMORY [current_project]
  close_msg_db -file init_design.pb
} RESULT]
if {$rc} {
  step_failed init_design
  return -code error $RESULT
} else {
  end_step init_design
  unset ACTIVE_STEP 
}

start_step opt_design
set ACTIVE_STEP opt_design
set rc [catch {
  create_msg_db opt_design.pb
  opt_design 
  write_checkpoint -force convolve_opt.dcp
  catch { report_drc -file convolve_drc_opted.rpt }
  close_msg_db -file opt_design.pb
} RESULT]
if {$rc} {
  step_failed opt_design
  return -code error $RESULT
} else {
  end_step opt_design
  unset ACTIVE_STEP 
}

start_step place_design
set ACTIVE_STEP place_design
set rc [catch {
  create_msg_db place_design.pb
  implement_debug_core 
  place_design 
  write_checkpoint -force convolve_placed.dcp
  catch { report_io -file convolve_io_placed.rpt }
  catch { report_utilization -file convolve_utilization_placed.rpt -pb convolve_utilization_placed.pb }
  catch { report_control_sets -verbose -file convolve_control_sets_placed.rpt }
  close_msg_db -file place_design.pb
} RESULT]
if {$rc} {
  step_failed place_design
  return -code error $RESULT
} else {
  end_step place_design
  unset ACTIVE_STEP 
}

start_step phys_opt_design
set ACTIVE_STEP phys_opt_design
set rc [catch {
  create_msg_db phys_opt_design.pb
  phys_opt_design 
  write_checkpoint -force convolve_physopt.dcp
  close_msg_db -file phys_opt_design.pb
} RESULT]
if {$rc} {
  step_failed phys_opt_design
  return -code error $RESULT
} else {
  end_step phys_opt_design
  unset ACTIVE_STEP 
}

start_step route_design
set ACTIVE_STEP route_design
set rc [catch {
  create_msg_db route_design.pb
  route_design 
  write_checkpoint -force convolve_routed.dcp
  catch { report_drc -file convolve_drc_routed.rpt -pb convolve_drc_routed.pb -rpx convolve_drc_routed.rpx }
  catch { report_methodology -file convolve_methodology_drc_routed.rpt -rpx convolve_methodology_drc_routed.rpx }
  catch { report_power -file convolve_power_routed.rpt -pb convolve_power_summary_routed.pb -rpx convolve_power_routed.rpx }
  catch { report_route_status -file convolve_route_status.rpt -pb convolve_route_status.pb }
  catch { report_clock_utilization -file convolve_clock_utilization_routed.rpt }
  catch { report_timing_summary -warn_on_violation -max_paths 10 -file convolve_timing_summary_routed.rpt -rpx convolve_timing_summary_routed.rpx }
  close_msg_db -file route_design.pb
} RESULT]
if {$rc} {
  write_checkpoint -force convolve_routed_error.dcp
  step_failed route_design
  return -code error $RESULT
} else {
  end_step route_design
  unset ACTIVE_STEP 
}

