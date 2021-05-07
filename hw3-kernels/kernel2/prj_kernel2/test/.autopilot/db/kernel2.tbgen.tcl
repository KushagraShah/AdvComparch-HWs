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
	{ array_0 int 32 regular {array 342 { 2 1 } 1 1 }  }
	{ array_1 int 32 regular {array 341 { 2 1 } 1 1 }  }
	{ array_2 int 32 regular {array 341 { 2 1 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "array_0", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "array","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1023,"step" : 3}]}]}]} , 
 	{ "Name" : "array_1", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "array","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 1,"up" : 1023,"step" : 3}]}]}]} , 
 	{ "Name" : "array_2", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "array","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 2,"up" : 1023,"step" : 3}]}]}]} ]}
# RTL Port declarations: 
set portNum 30
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ array_0_address0 sc_out sc_lv 9 signal 0 } 
	{ array_0_ce0 sc_out sc_logic 1 signal 0 } 
	{ array_0_we0 sc_out sc_logic 1 signal 0 } 
	{ array_0_d0 sc_out sc_lv 32 signal 0 } 
	{ array_0_q0 sc_in sc_lv 32 signal 0 } 
	{ array_0_address1 sc_out sc_lv 9 signal 0 } 
	{ array_0_ce1 sc_out sc_logic 1 signal 0 } 
	{ array_0_q1 sc_in sc_lv 32 signal 0 } 
	{ array_1_address0 sc_out sc_lv 9 signal 1 } 
	{ array_1_ce0 sc_out sc_logic 1 signal 1 } 
	{ array_1_we0 sc_out sc_logic 1 signal 1 } 
	{ array_1_d0 sc_out sc_lv 32 signal 1 } 
	{ array_1_q0 sc_in sc_lv 32 signal 1 } 
	{ array_1_address1 sc_out sc_lv 9 signal 1 } 
	{ array_1_ce1 sc_out sc_logic 1 signal 1 } 
	{ array_1_q1 sc_in sc_lv 32 signal 1 } 
	{ array_2_address0 sc_out sc_lv 9 signal 2 } 
	{ array_2_ce0 sc_out sc_logic 1 signal 2 } 
	{ array_2_we0 sc_out sc_logic 1 signal 2 } 
	{ array_2_d0 sc_out sc_lv 32 signal 2 } 
	{ array_2_q0 sc_in sc_lv 32 signal 2 } 
	{ array_2_address1 sc_out sc_lv 9 signal 2 } 
	{ array_2_ce1 sc_out sc_logic 1 signal 2 } 
	{ array_2_q1 sc_in sc_lv 32 signal 2 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "array_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "array_0", "role": "address0" }} , 
 	{ "name": "array_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "array_0", "role": "ce0" }} , 
 	{ "name": "array_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "array_0", "role": "we0" }} , 
 	{ "name": "array_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "array_0", "role": "d0" }} , 
 	{ "name": "array_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "array_0", "role": "q0" }} , 
 	{ "name": "array_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "array_0", "role": "address1" }} , 
 	{ "name": "array_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "array_0", "role": "ce1" }} , 
 	{ "name": "array_0_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "array_0", "role": "q1" }} , 
 	{ "name": "array_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "array_1", "role": "address0" }} , 
 	{ "name": "array_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "array_1", "role": "ce0" }} , 
 	{ "name": "array_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "array_1", "role": "we0" }} , 
 	{ "name": "array_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "array_1", "role": "d0" }} , 
 	{ "name": "array_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "array_1", "role": "q0" }} , 
 	{ "name": "array_1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "array_1", "role": "address1" }} , 
 	{ "name": "array_1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "array_1", "role": "ce1" }} , 
 	{ "name": "array_1_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "array_1", "role": "q1" }} , 
 	{ "name": "array_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "array_2", "role": "address0" }} , 
 	{ "name": "array_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "array_2", "role": "ce0" }} , 
 	{ "name": "array_2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "array_2", "role": "we0" }} , 
 	{ "name": "array_2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "array_2", "role": "d0" }} , 
 	{ "name": "array_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "array_2", "role": "q0" }} , 
 	{ "name": "array_2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "array_2", "role": "address1" }} , 
 	{ "name": "array_2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "array_2", "role": "ce1" }} , 
 	{ "name": "array_2_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "array_2", "role": "q1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8"],
		"CDFG" : "kernel2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "4099", "EstimateLatencyMax" : "4099",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "array_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "array_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "array_2", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel2_urem_10nsbkb_U1", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel2_urem_10nsbkb_U2", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel2_urem_10nsbkb_U3", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel2_urem_11nscud_U4", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel2_mul_mul_1dEe_U5", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel2_mul_mul_1dEe_U6", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel2_mul_mul_1dEe_U7", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel2_mul_mul_1eOg_U8", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	kernel2 {
		array_0 {Type IO LastRead 16 FirstWrite 18}
		array_1 {Type IO LastRead 16 FirstWrite 18}
		array_2 {Type IO LastRead 16 FirstWrite 18}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "4099", "Max" : "4099"}
	, {"Name" : "Interval", "Min" : "4100", "Max" : "4100"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	array_0 { ap_memory {  { array_0_address0 mem_address 1 9 }  { array_0_ce0 mem_ce 1 1 }  { array_0_we0 mem_we 1 1 }  { array_0_d0 mem_din 1 32 }  { array_0_q0 mem_dout 0 32 }  { array_0_address1 MemPortADDR2 1 9 }  { array_0_ce1 MemPortCE2 1 1 }  { array_0_q1 MemPortDOUT2 0 32 } } }
	array_1 { ap_memory {  { array_1_address0 mem_address 1 9 }  { array_1_ce0 mem_ce 1 1 }  { array_1_we0 mem_we 1 1 }  { array_1_d0 mem_din 1 32 }  { array_1_q0 mem_dout 0 32 }  { array_1_address1 MemPortADDR2 1 9 }  { array_1_ce1 MemPortCE2 1 1 }  { array_1_q1 MemPortDOUT2 0 32 } } }
	array_2 { ap_memory {  { array_2_address0 mem_address 1 9 }  { array_2_ce0 mem_ce 1 1 }  { array_2_we0 mem_we 1 1 }  { array_2_d0 mem_din 1 32 }  { array_2_q0 mem_dout 0 32 }  { array_2_address1 MemPortADDR2 1 9 }  { array_2_ce1 MemPortCE2 1 1 }  { array_2_q1 MemPortDOUT2 0 32 } } }
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
