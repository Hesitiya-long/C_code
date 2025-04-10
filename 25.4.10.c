#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//√∞≈›≈≈–Ú
void bubblesort(int* p, int n)
{
	int i = 0;
	int j = 0;

	assert(p);

	for (i = 0;i < n - 1;i++)
	{
		for (j = 0;j < n - i - 1;j++)
		{
			if (*(p + j) > *(p+j+1))
			{
				int temp = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = temp;
			}

		}
	}

}

//—°‘Ò≈≈–Ú
void selectsort(int* p, int n)
{
	int i = 0;
	int j = 0;
	int temp = 0;

	assert(p);

	for (i = 0;i < n;i++)
	{
		int* min = p+i;

		for (j = i + 1;j < n;j++)
		{
			if (*min > *(p + j))
			{
				min = p + j;
			}
		}

		if (*min != *(p + i))
		{
			temp = *(p + i);
			*(p + i) = *min;
			*min = temp;
		}
	}
}

//≤Â»Î≈≈–Ú

void insertsort(int* p, int n)
{
	int i = 0;
	int j = 0;
	int key = 0;
	for (i = 1;i < n;i++)
	{
		key = *(p + i);
		j = i - 1;

		while (j > 0 && *(p + j) > key)
		{
			*(p + j + 1) = *(p + j);
			j = j - 1;
		}
		*(p + 1) = key;
	}


}



int main()
{
	int arr[] = { 1,5,9,8,7,3,5,4,8,1,6};
	//printf("«Î ‰»Î ˝◊È>>\n");
	//scanf("%d", arr);
	int n = sizeof(arr) / sizeof(arr[0]);

//	bubblesort(arr, n);

//	selectsort(arr, n);

	insertsort(arr, n);

	for (int i = 0;i < n;i++)
	{
		printf("%d", arr[i]);
	}

	return 0;
}

