`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:14:12 11/12/2017 
// Design Name: 
// Module Name:    IM 
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
module IM(
    input [31:0] addr,
    output [31:0] instr
    );
	 
	 reg [31:0] _im [1023:0];
	 
	 assign instr = _im [addr[11:2]];
	 
	 initial begin
		$readmemh ("code.txt",_im);
	 end


endmodule
