`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:27:25 12/14/2017 
// Design Name: 
// Module Name:    DMEXT 
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
`define NONE 3'b000
`define ZEROBYTE 3'b001
`define SIGNBYTE 3'b010
`define ZEROHALF 3'b011
`define SIGNHALF 3'b100
module DMEXT(
    input [1:0] A,
    input [31:0] Din,
    input [2:0] Op,
    output [31:0] DOut
    );
	 
	 assign DOut = (Op == `NONE) ? Din :
						(Op == `ZEROBYTE) ? ((A == 2'b00) ? {24'b0,Din[7:0] } :
													(A == 2'b01) ? {24'b0,Din[15:8] }:
													(A == 2'b10) ? {24'b0,Din[23:16]}:
													(A == 2'b11) ? {24'b0,Din[31:24]}: 0) :
						(Op == `SIGNBYTE) ? ((A == 2'b00) ? ((Din[7]  == 1) ? {24'hffffff,Din[7:0]  } : {24'b0,Din[7:0]  }):
													(A == 2'b01) ? ((Din[15] == 1) ? {24'hffffff,Din[15:8] }	: {24'b0,Din[15:8] }):
													(A == 2'b10) ? ((Din[23] == 1) ? {24'hffffff,Din[23:16]}	: {24'b0,Din[23:16]}):
													(A == 2'b11) ? ((Din[31] == 1) ? {24'hffffff,Din[31:24]}	: {24'b0,Din[31:24]}): 0) :
						(Op == `ZEROHALF) ? ((A[1] == 0) ? {16'b0,Din[15:0]} : {16'b0,Din[31:16]}) :
						(Op == `SIGNHALF) ? ((A[1] == 0) ? ((Din[15] == 1) ? {16'hffff,Din[15:0]} : {16'b0,Din[15:0]}) :
																	  ((Din[31] == 1) ? {16'hffff,Din[31:16]}: {16'b0,Din[31:16]})) : 0;


endmodule
