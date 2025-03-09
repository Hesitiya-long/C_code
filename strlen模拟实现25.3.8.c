#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

//计算器方式计数
size_t  my_strlen1(const char* str)
{
	assert(str);
	size_t count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
//指针相减方式计数
size_t  my_strlen2(const char* str)
{
	assert(str);
	char* str2 = str;
	while (1)
	{
		if (*str == '\0')
		{
			break;
		}
		str++;
	}
	return (size_t)(str - str2);
}

//递归方式计数
size_t  my_strlen3(const char* str)
{
	if (*str != '\0')
		return my_strlen3(str + 1) + 1;
	else
		return 0;

}

//strcat 模拟实现

char* my_strcat(char* dest, const char* scr)
{
	assert(dest && scr);
	char* str = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*dest++ = *scr++)
	{
		;
	}
	return str;
}

int main()
{
	char arr[20] = "abcdef";
	char ch[] = "123";
	my_strcat(arr, ch);
	printf("%s", arr);

	size_t num1 = my_strlen1(arr);
	size_t num2 = my_strlen2(arr);
	size_t num3 = my_strlen3(arr);

	printf("%zu\n", num1);
	printf("%zu\n", num2);
	printf("%zu\n", num3);

	return 0;
}


