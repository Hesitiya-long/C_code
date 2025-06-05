#define _CRT_SECURE_NO_WARNINGS

//  Created by www.runoob.com on 15/11/9.
//  Copyright © 2015年 菜鸟教程. All rights reserved.
//

#include <stdio.h>

// 计算阶乘的函数
unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    unsigned long long sum = 0;

    // 计算1 + 2! + 3! + ... + 20!
    for (int i = 1; i <= 20; i++) {
        sum += factorial(i);
    }

    // 输出结果
    printf("1 + 2! + 3! + ... + 20!的和是: %llu\n", sum);

    return 0;
}
