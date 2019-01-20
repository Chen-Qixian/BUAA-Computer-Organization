`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:43:34 12/04/2017 
// Design Name: 
// Module Name:    CMP 
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
module CMP(
    input signed [31:0] A,
    input signed [31:0] B,
    output equal,
    output great,
    output less
    );
	 
	 assign equal = (A == B) ? 1 : 0;
	 assign great = (A >  B) ? 1 : 0;
	 assign less  = (A <  B) ? 1 : 0;


endmodule
