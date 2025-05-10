#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int a = 1, b = 1, temp, i;
    printf("%12d%12d", a, b); // 输出前两项

    for (i = 3; i <= 20; i += 2)
    {
        temp = a + b; // 计算下一项
        printf("%12d", temp); // 输出下一项

        a = b; // 更新a
        b = temp; // 更新b

        temp = a + b; // 再计算下一项
        printf("%12d\n", temp); // 输出并换行

        a = b; // 更新a
        b = temp; // 更新b
    }

    return 0;
}
