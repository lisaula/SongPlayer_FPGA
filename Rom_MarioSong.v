`timescale 1ns / 1ps
module Rom_MarioSong(
	input [14:0] address,
	output reg [3:0] data
    );
		 
	reg [3:0] rom_content [0:32767];

	always @(address)
		data = rom_content[address];
		
	initial begin
		$readmemh("MarioSong.mif",rom_content,0,32767);
	end


endmodule
