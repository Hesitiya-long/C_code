#define _CRT_SECURE_NO_WARNINGS


//#include<stdio.h>
//
//int main()
//{
//	int num[5] = { 1,2,3,4,5 };
//	int i;
//	for (i = 0;i <= 5;i++)
//		printf("%d", num[i]);
//	return 0;
//}




//#include<stdio.h>
//
//void bubblesort(int num[], int n)
//{
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j < n - 1 - i;j++)
//		{
//			if (num[j] > num[j + 1])
//			{
//				temp = num[j];
//				num[j] = num[j + 1];
//				num[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int num[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int n = sizeof(num) / sizeof(num[0]);
//	printf("排序前>>\n");
//	for (i = 0;i < n;i++)
//		printf("%d", num[i]);
//	printf("\n");
//
//	bubblesort(num, n);
//
//	printf("排序后>>\n");
//	for (i = 0;i < n;i++)
//		printf("%d", num[i]);
//	return 0;
//}

//#include<stdio.h>
//#define N 3
//#define M 5
//int main()
//{
//	int num[N][M] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//	int i = 0;
//	int j = 0;
//
//	for (i = 0;i < N;i++)
//	{
//		for (j = 0;j < M;j++)
//		{
//			printf("%d\n", &num[i][j]);
//		}
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int, y;
//	printf("%d\n", sum(x + y));
//	int sum(a, b)
//	{
//		int a, b;
//		return(a + b);
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	double a = 0;
//	double b = 0;
//	double c = 0;
//	double discriminant = 0;
//	printf("请输入a,b,c>>\n");
//	scanf("%lf %lf %lf", &a, &b, &c);
//
//	if (a != 0)
//	{
//		discriminant = b * b - 4 * a * c;
//		if (discriminant > 0)
//		{
//			printf("有两根，为 x1=%lf,x2=%lf", ((-b + sqrt(discriminant)) / (2 * a)), ((-b - sqrt(discriminant)) / (2 * a)));
//		}
//		else if (discriminant == 0)
//		{
//			printf("有一根，为 x=%lf", ((-b + sqrt(discriminant)) / (2 * a)));
//		}
//		if (discriminant < 0)
//		{
//			printf("无根");
//		}
//	}
//	else
//		printf("不是一元二次方程，重新输入\n");
//	return 0;
//}


#include<stdio.h>
int func(int, int);
int main()
{
	int k = 4, m = 1, p1, p2;
	p1 = func(k, m);
	p2 = func(k, m);
	printf("%d,%d\n", p1, p2);
	return 0;
}
int func(int a, int b)
{
	static int m = 0, i = 2;
	i += m + 1;
	m = i + a + b;
	return (m);
}