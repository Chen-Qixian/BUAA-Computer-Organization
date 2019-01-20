`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:07:41 10/26/2017 
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
    input Clk,
    input Reset,
    input [4:0] RS1,
    input [4:0] RS2,
    input [4:0] RD,
    input RegWrite,
    input [63:0] WData,
    output [63:0] RData1,
    output [63:0] RData2
    );
	 
	 integer i;
	 reg [63:0] register [31:0];
	 reg [63:0] outa,outb;
	 
	 initial begin
		for (i = 0;i <= 31;i = i + 1)begin
			register [i] = 0;
		end
		outa = 0;
		outb = 0;
	 end
	 
	 assign RData1 = outa;
	 assign RData2 = outb;
	 
	 always @(posedge Clk or posedge Reset) begin
		if(Reset) begin
			for (i = 0 ; i <= 31 ; i = i + 1) begin
				register [i] = 0; 
			end
		end
		else if (RegWrite) begin
			register [RD] = (RD)? WData : 0;
			$display("$%d <= %h", RD, WData);
 		end
		outa <= register [RS1];
		outb <= register [RS2];
	 end


endmodule
