#define _CRT_SECURE_NO_WARNINGS
//��дһ����������һ���ַ����е����������ַ���ȡ������������һ���ַ������У���������ȡ���������ַ��ĸ��������磬ԭ�ַ���Ϊ��abc123def456������ȡ����ַ���Ϊ��123456������������ֵΪ6��
//#include<stdio.h>
//
//int main()
//{
//	char ch[100] = { 0 };
//	printf("ԭ�ַ���>>");
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



//��һ��3��3�ľ��󣬱�д�����������Խ���Ԫ��֮���븱�Խ���Ԫ��֮�͡����Խ����ǴӾ�������Ͻǵ����½ǵĶԽ��ߣ����Խ����ǴӾ�������Ͻǵ����½ǵĶԽ��ߡ�

//#include<stdio.h>
//
//int main()
//{
//	int arr[3][3] = { 0 };
//	printf("3��3�ľ���>>\n");
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


//����һ���ṹ���ʾ����������ʵ�����鲿������Ա����д����ʵ�����������ļӷ��������ͳ˷����㣬�����������������������������ú����������㲢��������

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
//	printf("�������һ��������ʵ��>>\n");
//	scanf("%lf", &num1.real);
//	printf("�������һ���������鲿>>\n");
//	scanf("%lf", &num1.imag);
//	printf("������ڶ���������ʵ��>>\n");
//	scanf("%lf", &num2.real);
//	printf("������ڶ����������鲿>>\n");
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