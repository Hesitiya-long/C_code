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
//	printf("�����������������߳���>>");
//	scanf("%d%d%d", &x, &y,& z);
//	if (x + y > z && x + z > y && y + z > x)
//	{
//		if (x == y && y == z)
//		{
//			printf("����ǵȱ�������");
//		}
//		else if (x == y || y == z || z == x)
//		{
//			printf("����ǵ���������");
//		}
//		else
//			printf("���������������");
//	}
//	else
//		printf("���ܹ���������");
//
//	return 0;
//}






#include<stdio.h>
int main()
{
	int score = 0;
	printf("������ٷ��ƣ����������ɼ�>>");
	scanf("%d", &score);
	if (0 <= score && score <= 100)
	{
		switch (score / 10)
		{
		case 10:
		case 9:
			printf("�ɼ�Ϊ%d,�ɼ��ȼ�ΪA\n", score);
			break;
		case 8:
			printf("�ɼ�Ϊ%d,�ɼ��ȼ�ΪB\n", score);
			break;
		case 7:
			printf("�ɼ�Ϊ%d,�ɼ��ȼ�ΪC\n", score);
			break;
		case 6:
			printf("�ɼ�Ϊ%d,�ɼ��ȼ�ΪD\n", score);
			break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			printf("�ɼ�Ϊ%d,�ɼ��ȼ�ΪE\n", score);
			break;
		}
	}
	else
		printf("�ɼ��Ƿ�������������>>");

	return 0;
}