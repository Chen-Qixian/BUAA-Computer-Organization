`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:42:20 10/15/2017 
// Design Name: 
// Module Name:    digital_pipe 
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
module digital_pipe(
    input x3,
    input x2,
    input x1,
    input x0,
    output a,
    output b,
    output c,
    output d,
    output e,
    output f,
    output g
    ); 
	 wire gate [30:0];
	 and (gate[0],!x2,!x0);
	 and (gate[1],x2,x0);
	 or  (a,gate[0],gate[1],x1,x3);
	 and (gate[2],!x1,!x0);
	 and (gate[3],!x2,!x1);
	 and (gate[4],x2,!x0);
	 or  (b,gate[2],gate[3],gate[4],x3);
	 and (gate[5],x1,!x0);
	 and (gate[6],x2,x1);
	 and (gate[7],x3,x2);
	 or  (c,gate[0],gate[5],gate[6],gate[7]); 
	 and (gate[8],!x3,!x2,!x0);
	 and (gate[9],!x2,x1,x0);
	 and (gate[10],x2,!x1,x0);
	 and (gate[11],x2,x1,!x0);
	 and (gate[12],x3,!x1);
	 or  (d,gate[8],gate[9],gate[10],gate[11],gate[12]);
	 and (gate[13],!x3,!x1);
	 and (gate[14],!x3,x0);
	 and (gate[15],!x1,x0);
	 and (gate[16],!x3,x2);
	 and (gate[17],x3,!x2);
	 or  (e,gate[13],gate[14],gate[15],gate[16],gate[17]);
	 and (gate[18],!x3,!x1,!x0);
	 and (gate[19],!x3,x1,x0);
	 and (gate[20],x3,!x1,x0);
	 or  (f,gate[18],!x2,gate[19],gate[20]);
	 and (gate[21],!x2,x1);
	 and (gate[22],x1,!x0);
	 and (gate[23],!x3,x2,!x1);
	 and (gate[24],x3,!x2);
	 and (gate[25],x3,x1);
	 or  (g,gate[21],gate[22],gate[23],gate[24],gate[25]);
	 
endmodule
