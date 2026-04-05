module au(
    input signed [7:0] a, b,
    input [3:0] ac,
    input au_en,
    output reg gf,  // 直接声明为 output reg
    output reg signed [7:0] t  // 直接声明为 output reg
);

always @(au_en, ac, a, b) begin
    // 默认值
    t = 8'hZZ;  // 默认输出为高阻态
    gf = 1'b0;  // 默认标志位清零

    if (au_en) begin
        case (ac)
            4'b1000: begin
                t = a + b;  // 加法操作
            end
            4'b1001: begin
                t = b - a;  // 减法操作
                gf = (b > a) ? 1'b1 : 1'b0;  // 比较并设置标志位
            end
            4'b0100: begin
                t = a;  // 将 a 赋值给 t
            end
            4'b0101: begin
                t = a;  // 将 a 赋值给 t
            end
            4'b1101: begin
                t = a;  // 将 a 赋值给 t
            end
            default: begin
                t = 8'hZZ;  // 默认输出为高阻态
            end
        endcase
    end
end

endmodule