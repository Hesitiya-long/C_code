#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



//void bubble(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < sz - 1;i++)                  //n个元素排（n-1)轮
//	{
//		for (j = 0;j < sz - 1 - i;j++)          //每轮需要怎么排，由于有sz个元素，而数组从0开始，所以要排sz-1个元素，又下一轮排是上一轮元素的（sz-1)-1个，所以使用sz-1-i
//		{
//			if (arr[j] > arr[j + 1])            //这里是升序
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
//	//char arr[] = "0,1,2,3,4,5,6,7,8,9";      //字符数组定义字符串，0-9有10个，还有9个“，”，再加上“\0”一共20个字符，所以是20字节
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



//void qsort(void* base,                                        //你要排序的数据起始位置
//	       size_t num,                                        //待排序的数据元素个数
//	       size_t width,                                      //待排序的数据元素大小（单位是字节）
//		   int (*cmp)(const void* e1,const void* e2))         //函数指针-比较函数

void Swap(char* buf1, char* buf2, int width)                 //每一个元素大小为width,（char*)buf1表示将每一个元素从元素地址开始，一个一个字节读取并交换，从而实现元素交换
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

int my_bubble(const void* e1, const void* e2)                 //自定义函数-比较传入参数e1和e2,
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
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)         //（char*)base+j*width表示从base初始位向后第几个元素的地址
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