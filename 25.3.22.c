#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	double x, y;
//	char c1, c2, c3;
//	int a1, a2, a3;
//	scanf("%d%d%d", &a1, &a2, &a3);
//	printf("%d,%d,%d\n", a1, a2, a3);
//	scanf("%c%c%c", &c1, &c2, &c3);
//	printf("%c%c%c\n", c1, c2, c3);
//	scanf("%lf,%lf", &x, &y);
//	printf("%f,%lf\n", x, y);
//	return 0;
//}






//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	printf("请输入三角形三条边长度>>");
//	scanf("%d%d%d", &x, &y,& z);
//	if (x + y > z && x + z > y && y + z > x)
//	{
//		if (x == y && y == z)
//		{
//			printf("这个是等边三角形");
//		}
//		else if (x == y || y == z || z == x)
//		{
//			printf("这个是等腰三角形");
//		}
//		else
//			printf("这个是任意三角形");
//	}
//	else
//		printf("不能构成三角形");
//
//	return 0;
//}






#include<stdio.h>
int main()
{
	int score = 0;
	printf("请输入百分制（整型量）成绩>>");
	scanf("%d", &score);
	if (0 <= score && score <= 100)
	{
		switch (score / 10)
		{
		case 10:
		case 9:
			printf("成绩为%d,成绩等级为A\n", score);
			break;
		case 8:
			printf("成绩为%d,成绩等级为B\n", score);
			break;
		case 7:
			printf("成绩为%d,成绩等级为C\n", score);
			break;
		case 6:
			printf("成绩为%d,成绩等级为D\n", score);
			break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			printf("成绩为%d,成绩等级为E\n", score);
			break;
		}
	}
	else
		printf("成绩非法，请重新输入>>");

	return 0;
}