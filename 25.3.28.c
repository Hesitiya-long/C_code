#define _CRT_SECURE_NO_WARNINGS
//编写一个函数，将一个字符串中的所有数字字符提取出来，存入另一个字符数组中，并返回提取出的数字字符的个数。例如，原字符串为“abc123def456”，提取后的字符串为“123456”，函数返回值为6。
//#include<stdio.h>
//
//int main()
//{
//	char ch[100] = { 0 };
//	printf("原字符串>>");
//	scanf("%s", ch);
//
//	char str[100] = { 0 };
//	char* p = ch;
//	char* q = str;
//	int number = 0;
//	while (*p)
//	{
//		if (*p >= '0' && *p <= '9')
//		{
//			*q = *p;
//			q++;
//			number++;
//		}
//		p++;
//	}
//	*q = '\0';
//	printf("%s\n", str);
//	printf("%d\n", number);
//
//	return 0;
//}



//有一个3×3的矩阵，编写函数求其主对角线元素之和与副对角线元素之和。主对角线是从矩阵的左上角到右下角的对角线，副对角线是从矩阵的右上角到左下角的对角线。

//#include<stdio.h>
//
//int main()
//{
//	int arr[3][3] = { 0 };
//	printf("3×3的矩阵>>\n");
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 3;j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	int sum1 = 0;
//	int sum2 = 0;
//	for (i = 0;i < 3;i++)
//	{
//		sum1 += arr[i][i];
//	}
//	for (i = 3;i >0 ;i--)
//	{
//		sum2 += arr[i][2 - i];
//	}
//
//	printf("%d", sum1 + sum2);
//
//	return 0;
//}


//定义一个结构体表示复数，包含实部和虚部两个成员。编写函数实现两个复数的加法、减法和乘法运算，并在主函数中输入两个复数，调用函数进行运算并输出结果。

//#include<stdio.h>
//
//typedef struct complex
//{
//	double real;
//	double imag;
//}complex;
//
//
//complex add(complex c1, complex c2)
//{
//	complex result;
//	result.real = c1.real + c2.real;
//	result.imag = c1.imag + c2.imag;
//	return result;
//}
//
//complex sub(complex c1, complex c2)
//{
//	complex result;
//	result.real = c1.real - c2.real;
//	result.imag = c1.imag - c2.imag;
//	return result;
//}
//
//complex multiply(complex c1, complex c2)
//{
//	complex result;
//	result.real = (c1.real * c2.real) - (c1.imag * c2.imag);
//	result.imag = c1.imag * c2.real + c1.real * c2.imag;
//	return result;
//}
//
//int main()
//{
//	complex num1, num2;
//	printf("请输入第一个复数的实部>>\n");
//	scanf("%lf", &num1.real);
//	printf("请输入第一个复数的虚部>>\n");
//	scanf("%lf", &num1.imag);
//	printf("请输入第二个复数的实部>>\n");
//	scanf("%lf", &num2.real);
//	printf("请输入第二个复数的虚部>>\n");
//	scanf("%lf", &num2.imag);
//	
//	complex sum = add(num1, num2);
//	complex diffence = sub(num1, num2);
//	complex product = multiply(num1, num2);
//
//	printf("sum = %.2lf+%.2lf i\n", sum.real, sum.imag);
//	printf("diffence = %.2lf+%.2lf i\n", diffence.real, diffence.imag);
//	printf("product = %.2lf+%.2lf i\n", product.real, product.imag);
//
//	return 0;
//}