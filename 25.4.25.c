#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void foo()
{
    static int x = 0;
    x++;
    printf("%d\n", x);
}

int main()
{
    foo();  // ��� 1
    foo();  // ��� 2
    foo();  // ��� 3
    return 0;
}
