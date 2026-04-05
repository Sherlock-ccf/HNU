// 半加器模块
module half_adder (
    input  a,      // 输入信号 a
    input  b,      // 输入信号 b
    output sum,    // 输出总和
    output carry   // 输出进位
);

    // 总和为 a 和 b 的异或
    assign sum = a ^ b;

    // 进位为 a 和 b 的逻辑与
    assign carry = a & b;

endmodule