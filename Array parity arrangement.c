#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

//代码作用：
//将一个数组中的奇数排在左侧，偶数排在右侧
//如{123456789} --> {135792468}



//排升序
void sort (int* ptr, int left, int right)
{
	int i = 0;
	int j = 0;
	int gap = right - left;
	ptr = ptr + left;

	for (i = 0;i < gap;i++)
	{
		for (j = 0;j < gap - i - 1;j++)
		{
			if (*(ptr+j) > *(ptr+j+1))
			{
				int temp = *(ptr+j);
				*(ptr+j) = *(ptr+j+1);
				*(ptr + j + 1) = temp;
			}
		}
	}
}


//排奇偶
void Rearrange(int arr[], int sz) 
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		while ((arr[left] % 2 == 1) && (left<right))
		{
			left++;
		}
		while ((arr[right] % 2 == 0) && (left<right))
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}

	}
	sort(arr, 0, left);
	sort(arr, right, sz);

}


int main()
{
	//创建数组
	int arr[10] = { 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("输入数组>>\n");

	for (i = 0;i < sz;i++)
	{
		scanf("%d",&arr[i]);
	}

	//排列

	Rearrange(arr, sz);

	//打印
	for (i = 0;i < sz;i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}


