#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int input = 0;
//	printf("�����ǲ���ɵ��(1\\0)\n");
//	scanf("%d", &input);
//	if (input == 0)
//	{
//		printf("��");
//	}
//	else
//	{
//		printf("����");
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
			printf("��ţ��");
		}
		else
		{
			printf("��ţ��");
		}
	}
	
	return 0;
}