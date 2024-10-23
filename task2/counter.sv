module counter #(
    parameter WIDTH = 8
)(
    // interface signals
    input logic              clk,
    input logic              rst,
    input logic              en,
    output logic [WIDTH-1:0] count 
);

always_ff @ (posedge clk or posedge rst) begin
    if (rst) begin
        count <= {WIDTH{1'b0}};
    end else begin
        if (en) begin
            count <= count + 1;
        end else if (count > 16'd0) begin
            count <= count - 1;
        end
    end 
end
endmodule

// count <= count + {{WIDTH-1{1'b0}}, en};
