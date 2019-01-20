`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:58:05 10/12/2017 
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
	 
	 
	 assign Overflow = overflow;
	 assign Sum = sum;
	 
	 initial begin 
		overflow = 0;
		sum = 0;
	 end
	 
	 always @(posedge Clk) begin
		if (En) begin
			{overflow,sum} = A + B;
		end
	 end


endmodule
