`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:56:17 10/13/2017 
// Design Name: 
// Module Name:    buffer 
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
module buffer(
    input clk,
    input in,
    output reg out = 0 ,
	 output reg buff = 0
    );
	 	 
	 always @(posedge clk) begin
		buff <= in;
		out <= buff;
	 end
	 
endmodule
