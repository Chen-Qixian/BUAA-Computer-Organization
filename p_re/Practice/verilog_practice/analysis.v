`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:17:36 10/30/2017 
// Design Name: 
// Module Name:    analysis 
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
module analysis(
    input q1,
    input q2,
    input q3,
    input clk,
    output o1,
    output o2,
    output o3,
    output c
    );
	 reg Q1=0,Q2=0,Q3=0,C=0;
	 reg out1=0,out2=0,out3=0;
	 assign o1 = out1;
	 assign o2 = out2;
	 assign o3 = out3;
	 assign c = C;
	 
	 always @(posedge clk) begin
			Q1 <= !Q3;
			Q2 <= Q1;
			Q3 <= Q1&&Q2;
			C <= Q1||(!Q3);
			out1 <= Q1;
			out2 <= Q2;
			out3 <= Q3;
 	 end
	 
	 
endmodule
