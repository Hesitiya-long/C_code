#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, i, j;
    printf("����������:\n");i--;
    for (i = 0;i < 7;i++)
    {
        scanf("%d", &n);
        if (n > 50) {
            printf("����������:\n");i--;
        }
        else
        {
            for (j = 0;j < n;j++)
                printf("*");
        }
        printf("\n");
    }
    return 0;
}
