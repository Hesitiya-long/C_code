#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



//void bubble(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < sz - 1;i++)                  //n��Ԫ���ţ�n-1)��
//	{
//		for (j = 0;j < sz - 1 - i;j++)          //ÿ����Ҫ��ô�ţ�������sz��Ԫ�أ��������0��ʼ������Ҫ��sz-1��Ԫ�أ�����һ��������һ��Ԫ�صģ�sz-1)-1��������ʹ��sz-1-i
//		{
//			if (arr[j] > arr[j + 1])            //����������
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
// 
//		}
// 
//	}
//
//}
//
//
//int main()
//{
//	int arr[] = { 1,0,2,3,4,5,6,7,8,9 };
//	//char arr[] = "0,1,2,3,4,5,6,7,8,9";      //�ַ����鶨���ַ�����0-9��10��������9�����������ټ��ϡ�\0��һ��20���ַ���������20�ֽ�
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble(arr, sz);
//
//	for (int i = 0;i < sz; i++)
//	{
//		printf("%d", arr[i]);
//
//	}
//	return 0;
//}



//void qsort(void* base,                                        //��Ҫ�����������ʼλ��
//	       size_t num,                                        //�����������Ԫ�ظ���
//	       size_t width,                                      //�����������Ԫ�ش�С����λ���ֽڣ�
//		   int (*cmp)(const void* e1,const void* e2))         //����ָ��-�ȽϺ���

void Swap(char* buf1, char* buf2, int width)                 //ÿһ��Ԫ�ش�СΪwidth,��char*)buf1��ʾ��ÿһ��Ԫ�ش�Ԫ�ص�ַ��ʼ��һ��һ���ֽڶ�ȡ���������Ӷ�ʵ��Ԫ�ؽ���
{
	int i = 0;
	for (i = 0;i < width;i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

int my_bubble(const void* e1, const void* e2)                 //�Զ��庯��-�Ƚϴ������e1��e2,
{
	return *((int*)e1) - *((int*)e2);
}

void bubble_sort(void* base, size_t num, size_t width, int (*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	int j = 0;
	for (i = 0;i < num-1; i++)
	{
		int flag = 1;
		for (j = 0;j < num - 1 - i;j++)
		{
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)         //��char*)base+j*width��ʾ��base��ʼλ���ڼ���Ԫ�صĵ�ַ
			{
				Swap((char*)base+j*width,(char*)base+(j+1)*width,width);
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}

	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0, };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int width = sizeof(arr[0]);
	
	bubble_sort(arr, sz, sizeof(arr[0]), my_bubble);

	for (int i = 0;i < sz; i++)
	{
		printf("%d", arr[i]);
			
	}
	return 0;
}