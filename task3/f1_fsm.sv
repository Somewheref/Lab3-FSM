module f1_fsm(
    input logic rst,
    input logic en,
    input logic clk,
    output logic [8:1] data_out
);

typedef enum {S0, S1, S2, S3, S4, S5, S6, S7, S8 } my_states;
my_states current_state, next_state;

always_comb begin
    case (current_state)
        S0: begin
            if (en) begin
                next_state = S1;
            end
        end
        S1: begin
            if (en) begin
                next_state = S2;
            end
        end
        S2: begin
            if (en) begin
                next_state = S3;
            end
        end
        S3: begin
            if (en) begin
                next_state = S4;
            end
        end
        S4: begin
            if (en) begin
                next_state = S5;
            end
        end
        S5: begin
            if (en) begin
                next_state = S6;
            end
        end
        S6: begin
            if (en) begin
                next_state = S7;
            end
        end
        S7: begin
            if (en) begin
                next_state = S8;
            end
        end
        S8: begin
            if (en) begin
                next_state = S0;
            end
        end
    endcase

end

always_ff @(posedge clk) begin
    if (rst) begin
        current_state <= S0;
        data_out <= 8'b0;
    end else if (en) begin
        case (current_state)
            S0: begin
                data_out <= 8'b1;
            end
            S1: begin
                data_out <= 8'b11;
            end
            S2: begin
                data_out <= 8'b111;
            end
            S3: begin
                data_out <= 8'b1111;
            end
            S4: begin
                data_out <= 8'b11111;
            end
            S5 : begin
                data_out <= 8'b111111;
            end
            S6: begin
                data_out <= 8'b1111111;
            end
            S7: begin
                data_out <= 8'b11111111;
            end
            S8: begin
                data_out <= 8'b0;
            end
        endcase
        current_state <= next_state;
    end
end

endmodule
