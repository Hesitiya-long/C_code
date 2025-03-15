#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<errno.h>
#include<string.h>
int main()
{
	FILE* pa = fopen("D:\\c语言\\文件\\Project9\\Project9\\test.txt", "rb");

	if(pa == NULL)
	{
		printf("%s",strerror(errno));
		return 1;
	}

	//fputc('c', pa);

	//写文件
	/*char i = 'a';
	for (i = 'a';i < 'z';i++)
	{
		fputc(i, pa);
	}*/

	//读文件

	//printf("%c", fgetc(pa));

	//int ch = 0;
	//while ((ch = fgetc(pa)) != EOF)
	//{
	//	printf("%c", ch);
	//}


	//fputs("jaingwanlonghaoshuai", pa);

	/*char ch[20] = { 0 };
	fgets(ch, 10, pa);
	printf("%s", ch);*/

	struct stu
	{
		char name[20];
		int age;
		float hight;
	};


	struct stu s = { "zhangsan",25,165.5f };
	//fprintf(pa, "%s %d %f", s.name, s.age, s.hight);

	//fwrite(&s, sizeof(s), 1, pa);

	fread(&s, sizeof(s), 1, pa);
	printf("%s %d %f", s.name, s.age, s.hight);

	fclose(pa);
	pa = NULL;

	return 0;
}