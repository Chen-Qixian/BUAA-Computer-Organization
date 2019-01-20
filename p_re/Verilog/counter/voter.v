`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:59:32 10/14/2017 
// Design Name: 
// Module Name:    voter 
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
module voter(
    input A,
    input B,
    input C,
    output Result
    );
    assign Restlt = (~A && B && C) || (A && ~B && C) || (A && B);

endmodule
