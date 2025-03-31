#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 100

typedef struct
{
	int data[MAX_SIZE];
	int length;
}seqlist;

//初始化顺序表
void initseqlist(seqlist* L)
{
	L->length = 0;
}

//插入元素到顺序表
int insertseqlist(seqlist* L, int i, int e)
{
	if (i<1 || i>L->length + 1 || L->length == MAX_SIZE)
	{
		return 0;
	}

	for (int j = L->length;j >= i;j--)
	{
		L->data[j] = L->data[j - 1];
	}

	L->data[i - 1] = e;
	L->length++;
	return 1;
}

void printseqlist(seqlist* L)
{
	for (int i = 0;i < L->length;i++)
	{
		printf("%d ", L->data[i]);
	}
	printf("\n");
}




int main()
{
	seqlist L;
	initseqlist(&L);

	insertseqlist(&L, 1, 10);
	insertseqlist(&L, 1, 10);
	insertseqlist(&L, 1, 10);

	printseqlist(&L);

	return 0;
}