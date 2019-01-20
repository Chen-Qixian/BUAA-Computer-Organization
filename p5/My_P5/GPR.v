`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:05:02 12/04/2017 
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
    input clk,
    input reset,
	 input WE,
    input [4:0] RA,          //RA : the address of read BusA : instr[25:21]
    input [4:0] RB,          //RB : the address of read BusB : instr[20:16]
    input [4:0] RW,          //RW : the address of write Reg
    input [31:0] WD,      	  //WD : the data of write back
	 input [31:0] pc,
    output [31:0] BusA,      //BusA : Output A == gpr[rs]
    output [31:0] BusB       //BusB : Output B == gpr[rt]
    );
	 
	 reg [31:0] gpr [31:0];
	 
	 assign BusA = gpr[RA];    // !!!must use assign : CL ! DONOT connect with CLK!!
	 assign BusB = gpr[RB];
	 
	 integer i;
	 
	 initial begin
		for(i = 0 ; i < 32 ; i = i + 1) begin
			gpr[i] = 0;
		end
	 end
	 
	 always @(posedge clk) begin
		if (reset) begin
			for(i = 0 ; i < 32 ; i = i + 1) begin
				gpr[i] = 0;
			end
		end
		else begin
			if (WE) begin
				if (RW != 5'b0) begin
					gpr[RW] = WD;
					$display("%d@%h: $%d <= %h", $time,pc,RW,WD);
				end
			end
		end
	 end

endmodule
