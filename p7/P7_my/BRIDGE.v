`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:10:04 12/27/2017 
// Design Name: 
// Module Name:    BRIDGE 
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
`define DEBUG_RD 32'b0
module BRIDGE(
    input [31:0] PrAddr,
    input [31:0] PrWD,
    input [31:0] DEV0_RD,
    input [31:0] DEV1_RD,
	 input        IRQ0,
	 input        IRQ1,
	 input        CPUWE,
	 output[31:0] DEV0_WD,
	 output[31:0] DEV1_WD,
    output [3:2] DEV_Addr,
    output[31:0] PrRD,
	 output [5:0] HWInt,
    output       WEDEV0,
    output       WEDEV1	 
    );
	 
	 wire HitDEV0,HitDEV1;
	 
	 assign DEV_Addr = PrAddr[3:2];
	 
	 assign HitDEV0  = (PrAddr[15:4] == 16'h7f0);
	 assign HitDEV1  = (PrAddr[15:4] == 16'h7f1);
	 
	 assign PrRD     = (HitDEV0) ? DEV0_RD :
							 (HitDEV1) ? DEV1_RD : `DEBUG_RD;
	 
	 assign WEDEV0   = (HitDEV0 & CPUWE);
	 assign WEDEV1   = (HitDEV1 & CPUWE);
	 
	 assign DEV0_WD  = PrWD;
	 assign DEV1_WD  = PrWD;
	 
	 assign HWInt    = {3'b0,IRQ1,IRQ0};
	 

endmodule
