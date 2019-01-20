`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:16:32 11/12/2017 
// Design Name: 
// Module Name:    EXT 
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

`define EXT1 16'hffff
`define EXT0 16'b0
module EXT(
    input [15:0] imm16,
    input SignExt,
    input LuiExt,
    output [31:0] Output
    );
	 
	 assign Output = (LuiExt)? {imm16,`EXT0} :
						  (SignExt)? ((imm16[15])? {`EXT1,imm16} : {`EXT0,imm16}) :
										 {`EXT0,imm16};


endmodule
