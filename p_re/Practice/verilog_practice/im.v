`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:06:29 10/26/2017 
// Design Name: 
// Module Name:    im 
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
module im(
    input [11:2] Addr,
    input Clk,
    output [31:0] Out
    );
	 
	 reg [31:0] _im [1023:0];
	 reg [11:2] addr = 0;
	 assign Out = _im [addr];
	 
	 initial begin
		$readmemh ("code.txt",_im);
	 end

	 always @(posedge Clk) begin
		addr = Addr;
		$display("%h",Out);
	 end

endmodule
