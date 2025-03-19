#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int input = 0;
//	printf("陈鑫是不是傻逼(1\\0)\n");
//	scanf("%d", &input);
//	if (input == 0)
//	{
//		printf("是");
//	}
//	else
//	{
//		printf("不是");
//	}
//	return 0;
//}
int main()
{
	int line = 0;
	while (line < 10)
	{
		printf("%d\n", line);
		line++;
		if (line < 5)
		{
			printf("你牛逼");
		}
		else
		{
			printf("我牛逼");
		}
	}
	
	return 0;
}