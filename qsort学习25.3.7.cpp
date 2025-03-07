#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include"struct.h"

int com_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name,((struct stu*)e2)->name);
}


void test()
{
	struct stu s[] = {{"zhangsan",10},{"lisi",20}, {"wanwu",30}};
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]),com_stu_by_name);
}

int main()
{
	test();
	return 0;
}
