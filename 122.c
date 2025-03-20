#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int my_strlen(char* px)
{
	if (*px != '\0')
	{
		return 1 + my_strlen(px+1);
	}
	else
	{
		return 0;
	}
}



int main()
{
	char arr[] = "123456789";
	int len = my_strlen(arr);
	printf("%d ",len);
	return 0;
}