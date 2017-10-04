`timescale 1 ps / 1ps

module hello_world_top
(
	input clk,
	input RST,
	input [1:0] SW,
	input button1,
	input button2,
	input button3,
	input button4,
	input switchMode,
	output [6:0] SEG1,
	output [6:0] SEG2,
	output [6:0] SEG3,
	output [6:0] SEG4,
	output [6:0] SEG5,
	output [6:0] SEG6,
	output [4:0] LEDS
);

hello_world_qsys u0
(
	.clk_clk (clk),
	.reset_reset_n (RST),
	.seg1_external_connection_export(SEG1),
	.seg2_external_connection_export(SEG2),
	.seg3_external_connection_export(SEG3),
	.seg4_external_connection_export(SEG4),
	.seg5_external_connection_export(SEG5),
	.seg6_external_connection_export(SEG6),
	.button1_external_connection_export(button1),
	.button2_external_connection_export(button2),
	.button3_external_connection_export(button3),
	.button4_external_connection_export(button4),
	.leds_external_connection_export(LEDS),
	.switch_external_connection_export(switchMode)
);

endmodule