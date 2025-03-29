#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

struct programming
{
    float constant;
    char* pointer;
};

int main()
{
    struct programming variable;
    char string[] = "²ËÄñ½Ì³Ì£ºhttps://www.runoob.com";

    variable.constant = 1.23;
    variable.pointer = string;

    printf("%f\n", variable.constant);
    printf("%s\n", variable.pointer);

    return 0;
}
