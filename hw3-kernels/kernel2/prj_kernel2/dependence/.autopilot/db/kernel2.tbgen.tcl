set moduleName kernel2
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {kernel2}
set C_modelType { void 0 }
set C_modelArgList {
	{ array_r int 32 regular {array 1024 { 1 2 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "array_r", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "array","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1023,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 14
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ array_r_address0 sc_out sc_lv 10 signal 0 } 
	{ array_r_ce0 sc_out sc_logic 1 signal 0 } 
	{ array_r_q0 sc_in sc_lv 32 signal 0 } 
	{ array_r_address1 sc_out sc_lv 10 signal 0 } 
	{ array_r_ce1 sc_out sc_logic 1 signal 0 } 
	{ array_r_we1 sc_out sc_logic 1 signal 0 } 
	{ array_r_d1 sc_out sc_lv 32 signal 0 } 
	{ array_r_q1 sc_in sc_lv 32 signal 0 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "array_r_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "array_r", "role": "address0" }} , 
 	{ "name": "array_r_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "array_r", "role": "ce0" }} , 
 	{ "name": "array_r_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "array_r", "role": "q0" }} , 
 	{ "name": "array_r_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "array_r", "role": "address1" }} , 
 	{ "name": "array_r_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "array_r", "role": "ce1" }} , 
 	{ "name": "array_r_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "array_r", "role": "we1" }} , 
 	{ "name": "array_r_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "array_r", "role": "d1" }} , 
 	{ "name": "array_r_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "array_r", "role": "q1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "kernel2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2045", "EstimateLatencyMax" : "2045",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"DependenceCheck" : [
			{"FromInitialState" : "ap_enable_state5_pp0_iter1_stage1", "FromInitialIteration" : "ap_enable_reg_pp0_iter1", "FromInitialOperation" : "ap_enable_operation_36", "FromInitialSV" : "4", "FromFinalState" : "ap_enable_state5_pp0_iter1_stage1", "FromFinalIteration" : "ap_enable_reg_pp0_iter1", "FromFinalOperation" : "ap_enable_operation_36", "FromFinalSV" : "4", "FromAddress" : "array_r_address1", "FromType" : "W", "ToInitialState" : "ap_enable_state2_pp0_iter0_stage0", "ToInitialIteration" : "ap_enable_reg_pp0_iter0", "ToInitialNextIteration" : "ap_enable_reg_pp0_iter1", "ToInitialOperation" : "ap_enable_operation_17", "ToInitialSV" : "1", "ToFinalState" : "ap_enable_state3_pp0_iter0_stage1", "ToFinalIteration" : "ap_enable_reg_pp0_iter0", "ToFinalOperation" : "ap_enable_operation_25", "ToFinalSV" : "2", "ToAddress" : "array_r_address0", "ToType" : "R", "PipelineBlock" : "ap_block_pp0", "AddressWidth" : "10", "II" : "2", "Pragma" : "(kernel2.cpp:8:1)", "Type" : "RAW", "StateEnableSignalListForFifoShift" : ["ap_enable_state2_pp0_iter0_stage0", "ap_enable_state4_pp0_iter1_stage0"]},
			{"FromInitialState" : "ap_enable_state5_pp0_iter1_stage1", "FromInitialIteration" : "ap_enable_reg_pp0_iter1", "FromInitialOperation" : "ap_enable_operation_36", "FromInitialSV" : "4", "FromFinalState" : "ap_enable_state5_pp0_iter1_stage1", "FromFinalIteration" : "ap_enable_reg_pp0_iter1", "FromFinalOperation" : "ap_enable_operation_36", "FromFinalSV" : "4", "FromAddress" : "array_r_address1", "FromType" : "W", "ToInitialState" : "ap_enable_state2_pp0_iter0_stage0", "ToInitialIteration" : "ap_enable_reg_pp0_iter0", "ToInitialNextIteration" : "ap_enable_reg_pp0_iter1", "ToInitialOperation" : "ap_enable_operation_21", "ToInitialSV" : "1", "ToFinalState" : "ap_enable_state3_pp0_iter0_stage1", "ToFinalIteration" : "ap_enable_reg_pp0_iter0", "ToFinalOperation" : "ap_enable_operation_26", "ToFinalSV" : "2", "ToAddress" : "array_r_address1", "ToType" : "R", "PipelineBlock" : "ap_block_pp0", "AddressWidth" : "10", "II" : "2", "Pragma" : "(kernel2.cpp:8:1)", "Type" : "RAW", "StateEnableSignalListForFifoShift" : ["ap_enable_state2_pp0_iter0_stage0", "ap_enable_state4_pp0_iter1_stage0"]},
			{"FromInitialState" : "ap_enable_state5_pp0_iter1_stage1", "FromInitialIteration" : "ap_enable_reg_pp0_iter1", "FromInitialOperation" : "ap_enable_operation_36", "FromInitialSV" : "4", "FromFinalState" : "ap_enable_state5_pp0_iter1_stage1", "FromFinalIteration" : "ap_enable_reg_pp0_iter1", "FromFinalOperation" : "ap_enable_operation_36", "FromFinalSV" : "4", "FromAddress" : "array_r_address1", "FromType" : "W", "ToInitialState" : "ap_enable_state3_pp0_iter0_stage1", "ToInitialIteration" : "ap_enable_reg_pp0_iter0", "ToInitialNextIteration" : "ap_enable_reg_pp0_iter1", "ToInitialOperation" : "ap_enable_operation_24", "ToInitialSV" : "2", "ToFinalState" : "ap_enable_state4_pp0_iter1_stage0", "ToFinalIteration" : "ap_enable_reg_pp0_iter1", "ToFinalOperation" : "ap_enable_operation_28", "ToFinalSV" : "3", "ToAddress" : "array_r_address0", "ToType" : "R", "PipelineBlock" : "ap_block_pp0", "AddressWidth" : "10", "II" : "2", "Pragma" : "(kernel2.cpp:8:1)", "Type" : "RAW", "StateEnableSignalListForFifoShift" : ["ap_enable_state3_pp0_iter0_stage1", "ap_enable_state5_pp0_iter1_stage1"]}],
		"Port" : [
			{"Name" : "array_r", "Type" : "Memory", "Direction" : "IO"}]}]}


set ArgLastReadFirstWriteLatency {
	kernel2 {
		array_r {Type IO LastRead 2 FirstWrite 4}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "2045", "Max" : "2045"}
	, {"Name" : "Interval", "Min" : "2046", "Max" : "2046"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	array_r { ap_memory {  { array_r_address0 mem_address 1 10 }  { array_r_ce0 mem_ce 1 1 }  { array_r_q0 mem_dout 0 32 }  { array_r_address1 MemPortADDR2 1 10 }  { array_r_ce1 MemPortCE2 1 1 }  { array_r_we1 MemPortWE2 1 1 }  { array_r_d1 MemPortDIN2 1 32 }  { array_r_q1 MemPortDOUT2 0 32 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
