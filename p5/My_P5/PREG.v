`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:33:15 12/04/2017 
// Design Name: 
// Module Name:    PREG 
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
module PREG(
	 input [31:0] in,
	 input clk,
	 input reset,
	 input en,
	 output reg [31:0] out
    );
	 
	 initial begin
		out = 0;
	 end
	 
	 always @(posedge clk) begin
		if (reset) begin
			out = 0;
		end
		else begin
			if(en) begin
				out = in;
			end
		end
	 end


endmodule

module PREG1(
	 input clk,
	 input reset,
	 input en,
	 input in0,
	 input in1,
	 input in2,
	 output reg out0,
	 output reg out1,
	 output reg out2
	 );
	 
	 initial begin 
		out0 = 0;
		out1 = 0;
		out2 = 0;
	 end
	 
	 always @(posedge clk) begin
		if(reset) begin
			out0 = 0;
			out1 = 0;
			out2 = 0;
		end
		else if (en) begin
			out0 = in0;
			out1 = in1;
			out2 = in2;
		end
	 end
	
	
	
	
endmodule

