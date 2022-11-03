module top#(
    parameter WIDTH = 8
)
(
    input logic clk,
    input logic rst,
    input logic en,
    input logic [WIDTH-1:0] N,
    output logic [WIDTH-1:0] data_out
);

logic tick;

clktick cltick (
    .clk(clk),
    .rst(rst),
    .en(en),
    .N(N),
    .tick(tick)
);

f1_fsm fsm(
    .clk(clk),
    .rst(rst),
    .en(tick),
    .data_out(data_out)
);

endmodule
