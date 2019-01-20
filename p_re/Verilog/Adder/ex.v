`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:04:36 10/12/2017 
// Design Name: 
// Module Name:    ex 
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
module ex(
    output A,
    output B,
    output C
    );
	 reg a,b,c;
	initial begin
		a = 1;
		b = 0;
		c = 1;
	end
	
	initial begin
		#1;
		a <= b;
		b = c;
		c <= b;
	end
	
	assign A = a;
	assign B = b;
	assign C = c;


endmodule
