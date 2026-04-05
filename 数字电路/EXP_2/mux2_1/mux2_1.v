module mux2_1(
    input [7:0] a, b,
    input s,
    output reg [7:0] y
);
    always @(*) begin
        if (s)
            y = b;
        else
            y = a;
    end
endmodule