`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:10:03 12/27/2017 
// Design Name: 
// Module Name:    CP0 
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
`define SR    5'd12
`define CAUSE 5'd13
`define EPC   5'd14
`define PRID  5'd15
module CP0(
    input clk,
    input reset,
    input [31:0] Din,
    input [31:0] PC,
    input [5:0] HWInt,
    input [4:0] A1,         // mfc0 : read  CP0 reg No.
    input [4:0] A2,         // mtc0 : write CP0 reg No.
    input [6:2] ExcCode,
    input WE,
    input EXLSet,
    input EXLClr,
	 input BDSet,
    output intreq,
    output reg [31:0] EPC,
    output [31:0] DOut
    );
	 
	 reg [31:0] SR,CAUSE,PRID;
	 reg [15:10] im;
	 reg ie,exl,bd;
	 
	 assign intreq = (|(HWInt & im) & !exl & ie) | ((ExcCode != 5'b0) & !exl);
	 
	 assign DOut   = (A1 == `SR)    ? SR :
						  (A1 == `CAUSE) ? CAUSE :
						  (A1 == `EPC)   ? EPC : 
						  (A1 == `PRID)  ? PRID : 0;
	 
	 initial begin
		SR    = 32'h0;   ///test
		CAUSE = 32'b0;
		EPC   = 32'b0;
		PRID  = 32'h19980107;
		im    = 6'b0;
		ie    = 1'b0;
		exl   = 1'b0;
		bd    = 1'b0;
	 end
	 
	 always @(posedge clk) begin
		if (reset) begin
			SR    = 32'h0;       /////test
			CAUSE = 32'b0;
			EPC   = 32'b0;
		end
		else begin
			if (WE & (A2 == `SR)) begin
				im  = Din[15:10];
				exl = Din[1];
				ie  = Din[0];
				SR  = Din;
			end
			else if (WE & (A2 == `EPC)) begin
				EPC = Din;
			end
			if (intreq) begin
				if (BDSet) begin
					bd  = 1'b1;
					EPC = PC - 4; 
				end
				else begin
					EPC = PC;
				end
				if (|(HWInt & im) & !exl & ie) begin
					CAUSE = {bd,15'b0,HWInt,10'b0};
				end
				else begin
					CAUSE = {bd,15'b0,HWInt,3'b0,ExcCode,1'b0};
				end
			end
			if (EXLSet) begin
				exl   = 1'b1;
				SR[1] = 1'b1;
			end
			if (EXLClr) begin
				exl   = 1'b0;
				SR[1] = 1'b0;
			end
		end
	end
	 
	 
	 


endmodule
