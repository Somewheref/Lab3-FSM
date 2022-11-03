module lfsr4(
    input logic clk,
    input logic rst,
    input logic en,
    output logic [8:1] data_out
);

always_ff @(posedge clk or posedge rst) begin
    if (rst)
        data_out <= 8'b1;
    else if (en)
        data_out <= {data_out[7:1], data_out[7] ^ data_out[3]};
end
endmodule
