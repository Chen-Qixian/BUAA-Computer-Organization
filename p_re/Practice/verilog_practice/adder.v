`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:37:06 10/26/2017 
// Design Name: 
// Module Name:    adder 
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
module adder(
    input [3:0] A,
    input [3:0] B,
    input Clk,
    input En,
    output [3:0] Sum,
    output Overflow
    );
	
	 reg [3:0] sum;
	 reg overflow;
	 
	 initial begin
		sum = 0;
		overflow = 0;
	 end
	 
	 always @(posedge Clk) begin
		if (En) begin
			{overflow,sum} <= A + B;
		end
	 end
	 
	 assign Overflow = overflow;
	 assign Sum = sum;

endmodule
