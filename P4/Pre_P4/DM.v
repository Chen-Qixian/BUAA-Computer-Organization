`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:47:23 11/12/2017 
// Design Name: 
// Module Name:    DM 
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
module DM(
    input [31:0] addr,
    input clk,
    input reset,
    input [31:0] StoreData,
    input WriteEnable,
    output [31:0] LoadData
    );
	 
	 reg [31:0] _DM [1023:0];
	 integer i;
	 
	 assign LoadData = _DM[addr[11:2]];
	 
	 initial begin
		for (i = 0 ; i < 1024 ; i = i + 1) begin
			_DM[i] = 0;
		end
	 end
	 
	 always @ (posedge clk) begin
		if(reset) begin
			for (i = 0 ; i < 1024 ; i = i + 1) begin
				_DM[i] = 0;
			end
		end
		else if (WriteEnable) begin
			_DM[addr[11:2]] = StoreData;
		end
	 end

endmodule
