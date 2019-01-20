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

module PREG5(
	 input [4:0] in,
	 input clk,
	 input reset,
	 input en,
	 output reg [4:0] out
	 );
	 
	 initial begin
		out = 0;
	 end
	 
	 always @(posedge clk) begin
		if (reset) begin
			out = 0;
		end
		else begin
			if (en) begin
				out = in;
			end
		end
	 end



endmodule 

