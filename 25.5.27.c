#define _CRT_SECURE_NO_WARNINGS

// Created by www.runoob.com on 15/11/9.
// Copyright © 2015年 菜鸟教程. All rights reserved.

#include <stdio.h>

// 递归函数，用于计算阶乘
int factorial(int n);

int main() {
    // 打印 0 到 5 的阶乘
    for (int num = 0; num < 6; num++) {
        printf("%d! = %d\n", num, factorial(num));
    }
    return 0; // 程序正常结束
}

// 计算阶乘的递归函数
// 参数：n - 需要计算阶乘的数
// 返回值：n 的阶乘
int factorial(int n) {
    // 定义变量存储结果
    int result;

    // 阶乘的递归基准条件
    if (n == 0) {
        result = 1; // 0! = 1
    }
    else {
        result = n * factorial(n - 1); // 递归计算 n! = n * (n-1)!
    }
    return result; // 返回计算结果
}
