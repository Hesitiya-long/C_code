#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int sum = 0;        // 存储结果的变量
    int base, terms;    // base 为 a 的值，terms 为 n 的值
    int temp;           // 临时变量，用于计算当前项的值

    // 提示用户输入值
    printf("请输入整数 a 和 n（例如 2 和 5）：\n");
    scanf("%d%d", &base, &terms);

    // 初始化 temp 为 a
    temp = base;

    // 通过循环计算 a + aa + aaa + ...
    while (terms > 0) {
        sum += temp;          // 累加当前项
        base *= 10;           // base 每次左移一位（例如 2 -> 20 -> 200）
        temp += base;         // 更新 temp，使其变为下一项
        terms--;              // 减少剩余项数
    }

    // 输出结果
    printf("计算结果为：%d\n", sum);
    return 0;
}
