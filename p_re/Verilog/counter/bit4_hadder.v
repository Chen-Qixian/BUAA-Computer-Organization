`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:11:16 10/14/2017 
// Design Name: 
// Module Name:    bit4_hadder 
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
module bit4_hadder(
    input a1,
    input a0,
    input b1,
    input b0,
    output carry,
    output s1,
    output s0
    );
	 
	 wire w [0:30];
	 
	 and (w[0],a0,b1,b0);
	 and (w[1],a1,b1);
	 and (w[2],a1,a0,b0);
	 or  (carry,w[0],w[1],w[2]);
	 and (w[3],!a1,!a0,b1);
	 and (w[4],!a1,b1,!b0);
	 and (w[5],!a1,a0,!b1,b0);
	 and (w[6],a1,!a0,!b1);
	 and (w[7],a1,!b1,!b0);
	 and (w[8],a1,a0,b1,b0);
	 or  (s1,w[3],w[4],w[5],w[6],w[7],w[8]);
	 and (w[9],!a0,b0);
	 and (w[10],a0,!b0);
	 or  (s2,w[9],w[10]);


endmodule
