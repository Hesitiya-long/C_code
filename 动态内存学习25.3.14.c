#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>

//int main()
//{
//	int* pa = (int*)malloc(40);             //void *malloc(size_t size)
//	if (pa == NULL)
//	{
//		printf("%s",strerror(errno));
//	}
//	int i = 0;
//	for (i = 0;i < 10; i++)
//	{
//		*(pa+i) = i;
//	}
//
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d", pa[i]);
//	}
//
//	free(pa);
//	pa = NULL;
//	return 0;
//}

int main()
{
	int* pa = (int*)calloc(40, 4);           //void *calloc(size_t nitems, size_t size)
	if (pa == NULL)                         //calloc会进行初始化，赋值为0
	{
		printf("%s", strerror(errno));
	}
	int i = 0;

	for (i = 0;i < 10;i++)
	{
		printf("%d", pa[i]);
	}

	printf("\n");

	for (i = 0;i < 10; i++)
	{
		*(pa + i) = i;
	}

	for (i = 0;i < 10;i++)
	{
		printf("%d", pa[i]);
	}

	printf("\n");

	pa = (int*)realloc(pa, 30);

	for (i = 0;i<30;i++)
	{
		*(pa + i) = i;
	}

	for (i = 0;i <30;i++)
	{
		printf("%d ", pa[i]);
	}

	free(pa);                                //使用动态内存后要free释放内存
	pa = NULL;
	return 0;
}