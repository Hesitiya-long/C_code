#define _CRT_SECURE_NO_WARNINGS
#include<windows.h>
#include<stdio.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 120");
again:
	printf("��ע�⣬��ĵ��Խ���120���ػ���������롮����������ȡ���ػ�\n");
	scanf("%s", &input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
