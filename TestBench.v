`timescale 1ns / 1ps

module TestBench(
    );
	reg clk;
	reg c;
	wire [3:0]data;
	Main m (clk, c, data);
	
	initial 
	begin
		clk = 0;
		c =0;
		#50
		c=1;
	end
	
	always
	begin
		#10
		clk =!clk;
	end
endmodule
