#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <math.h>
#include <string.h>

// 函数声明
int octalToDecimal(const char* octalNumber);

int main() {
    char octalNumber[100];

    // 输入八进制数
    printf("请输入一个八进制数: ");
    scanf("%s", octalNumber);

    // 转换为十进制
    int decimalNumber = octalToDecimal(octalNumber);

    // 输出结果
    printf("八进制数 %s 转换为十进制数是: %d\n", octalNumber, decimalNumber);

    return 0;
}

// 八进制转换为十进制的函数
int octalToDecimal(const char* octalNumber) {
    int decimalNumber = 0;
    int length = strlen(octalNumber);

    for (int i = 0; i < length; i++) {
        int digit = octalNumber[i] - '0'; // 将字符转换为数字
        decimalNumber += digit * pow(8, length - i - 1);
    }

    return decimalNumber;
}
