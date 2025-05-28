#define _CRT_SECURE_NO_WARNINGS

//  Created by www.runoob.com on 15/11/9.
//  Copyright © 2015年 菜鸟教程. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int length(char* s);

int main() {
    char str[100]; // 可以根据实际情况增大数组长度
    printf("请输入字符串:\n");
    scanf("%s", str);

    int len = length(str); // 调用 length 函数计算字符串长度

    printf("字符串有 %d 个字符。\n", len);
    return EXIT_SUCCESS;
}

//求字符串长度  
int length(char* s) {
    int i = 0;
    while (*s != '\0') {
        i++;
        s++;
    }
    return i;
}
