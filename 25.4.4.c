#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int power(int x, int n)
//{
//	if (n > 0)
//	{
//		return power(x, n - 1) * x;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int x = 0;
//	int n = 0;
//	printf("请输入x>>\n");
//	scanf("%d", &x);
//	printf("请输入n>>\n");
//	scanf("%d", &n);
//
//	printf("%d", power(x, n));
//
//	return 0;
//}


//int cycle_peach(int remain, int day)
//{
//
//	for (int i = 1;i < day;i++)
//	{
//		remain = (remain + 1) * 2;
//	}
//
//	return remain;
//}
//
//
//int recursion_peach(int remain, int day)
//{
//	if (day)
//	{
//		return (recursion_peach(remain, day-1) + 1) * 2;
//	}
//	else
//	{
//		return remain;
//	}
//}
//
//int main()
//{
//	int remain = 0;
//	int day = 0;
//	printf("请输入剩余桃子>>\n");
//	scanf("%d", &remain);
//	printf("请输入第几天>>");
//	scanf("%d", &day);
//
//	printf("%d\n", cycle_peach(remain, day));
//	printf("%d\n", recursion_peach(remain, day-1));
//
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	int n = 0;
//	printf("请输入数字>>\n");
//	scanf("%d", &num);
//
//	while (num)
//	{
//		n = n*10+num % 10;
//		num = num / 10;
//	}
//
//	printf("%d", n);
//
//	return 0;
//}



//int main()
//{
//	long num = 0;
//	long n = 0;
//	printf("请输入数字>>\n");
//	scanf("%d", &num);
//
//	while (num)
//	{
//		if (num % 2 == 0)
//		{
//			n = n * 10 + num % 10;
//		}
//			num = num / 10;
//	}
//
//	while (n)
//	{
//		num = num * 10 + n % 10;
//		n = n / 10;
//	}
//
//	printf("%ld", num);
//
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 101;i <= 200;i++)
//	{
//		int flag = 0;
//		for (j = 2;j < sqrt(i);j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 1;
//			}
//		}
//
//		if (flag == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

#include<stdlib.h> 
int main()
{

	long int i, j, k, n; 
	printf("输入行数:");
	scanf("%ld", &n);
	for (i = 1;i <= n;i++)
	{
		k = 1;
		for (j = 1;j < i;j++)
		{
			printf("%3ld",k);
			k = k * (i - j) / j;
		}
		printf("  1\n");
	}
	return 0;
}