`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:24:53 11/12/2017 
// Design Name: 
// Module Name:    GPR 
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
module GPR(
    input [4:0] RegWrite,     //Rd
    input [4:0] RegA,         //Rs
    input [4:0] RegB,         //Rt
    input WriteEnable,
    input [31:0] WriteData,
    output [31:0] BusA,
    output [31:0] BusB,
    input [4:0] shamt,
    input clk,
    input reset
    );
	 
	 reg [31:0] _GPR [31:0];
	 
	 integer i;
	 
	 assign BusA = _GPR[RegA];
	 assign BusB = (_GPR[RegB] << shamt);
	 
	 initial begin
		for (i = 0 ; i < 32 ; i = i + 1) begin
			_GPR[i] = 0;
		end
	 end
	 
	 always @(posedge clk) begin
		if	(reset) begin
			for (i = 0 ; i < 32 ; i = i + 1) begin
				_GPR[i] = 0;
			end
		end
		else if (WriteEnable) begin
			_GPR[RegWrite] = (RegWrite == 0)? 0 : WriteData; 
		end
	 end




endmodule
