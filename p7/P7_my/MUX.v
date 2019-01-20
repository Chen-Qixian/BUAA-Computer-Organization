`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:47:04 12/04/2017 
// Design Name: 
// Module Name:    MUX32_2 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module MUX32_2(
    input [31:0] in0,
    input [31:0] in1,
    input sel,
    output [31:0] out
    );
	 
	 assign out = (sel) ? in1 : in0;

endmodule


module MUX32_3(
	 input [31:0] in0,
	 input [31:0] in1,
	 input [31:0] in2,
	 input [1:0]  sel,
	 output [31:0] out
	 );
	 
	 assign out = (sel == 0) ? in0 :
					  (sel == 1) ? in1 :
					  (sel == 2) ? in2 : 0;

endmodule
