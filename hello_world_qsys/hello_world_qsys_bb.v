
module hello_world_qsys (
	clk_clk,
	reset_reset_n,
	seg1_external_connection_export,
	seg2_external_connection_export,
	seg3_external_connection_export,
	seg4_external_connection_export,
	seg5_external_connection_export,
	seg6_external_connection_export,
	switch_external_connection_export,
	button1_external_connection_export,
	button2_external_connection_export,
	button3_external_connection_export,
	button4_external_connection_export,
	leds_external_connection_export);	

	input		clk_clk;
	input		reset_reset_n;
	output	[6:0]	seg1_external_connection_export;
	output	[6:0]	seg2_external_connection_export;
	output	[6:0]	seg3_external_connection_export;
	output	[6:0]	seg4_external_connection_export;
	output	[6:0]	seg5_external_connection_export;
	output	[6:0]	seg6_external_connection_export;
	input		switch_external_connection_export;
	input		button1_external_connection_export;
	input		button2_external_connection_export;
	input		button3_external_connection_export;
	input		button4_external_connection_export;
	output	[4:0]	leds_external_connection_export;
endmodule
