#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int product(int a, int b);
int main()
{
	int x = 10;
	int y = 20;
	int p = product(x, y);
	printf("The product is:%d", p);
	return 0;
}

int product(int a, int b)
{
	int c = 0;
	c = a * b;
	return c;
}