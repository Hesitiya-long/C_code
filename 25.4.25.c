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
    foo();  // Êä³ö 1
    foo();  // Êä³ö 2
    foo();  // Êä³ö 3
    return 0;
}
