#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

//�������ã�
//��һ�������е�����������࣬ż�������Ҳ�
//��{123456789} --> {135792468}



//������
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


//����ż
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
	//��������
	int arr[10] = { 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("��������>>\n");

	for (i = 0;i < sz;i++)
	{
		scanf("%d",&arr[i]);
	}

	//����

	Rearrange(arr, sz);

	//��ӡ
	for (i = 0;i < sz;i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}


