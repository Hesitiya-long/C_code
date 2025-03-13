#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"


void modify_contact(CONTACT* con)
{
	con->count = 0;
	memset(con->information, 0, sizeof(con->information));
}

void add(CONTACT* con)
{
	assert(con);
	if (con->count == 100)
	{
		printf("通讯录已满");
		return ;
	}
	printf("请输入名字>>");
	scanf("%10s", con->information[con->count].name);
	printf("请输入年龄>>");
	scanf("%3d", &(con->information[con->count].age));
	printf("请输入性别>>");
	scanf("%5s", con->information[con->count].sex);
	printf("请输入电话>>");
	scanf("%12s", &(con->information[con->count].tele));
	printf("请输入地址>>");
	scanf("%30s", con->information[con->count].addr);

	(con->count)++;
	printf("添加成功\n");
}


void show(const CONTACT* con)
{
	assert(con);
	int i = 0;
	if (con->count == 0)
	{
		printf("通讯录为空");
		return;
	}
	printf("%-10s\t%-3s\t%-5s\t%-12s\t%-30s\n", "姓名", "年龄", "性别", "电话", "地址");
	for (i = 0;i < (con->count);i++)
	{
		printf("%-10s\t%-3d\t%-5s\t%-12s\t%-30s\n",
			con->information[i].name,
			con->information[i].age,
			con->information[i].sex,
			con->information[i].tele,
			con->information[i].addr);
	}
	return;
}

void del(CONTACT* con)
{
	assert(con);
	if (con->count == 0)
	{
		printf("没有元素可以删除，请先添加成员");
	}

	char del_name[NAME] = { 0 };
	int i = 0;
	printf("请输入要删除人的名字>>");
	scanf("%s", &del_name);
	int peo = find_name(con, del_name);

	if (peo == -1)
	{
		printf("没有找到，请重新查找\n");
		return;
	}

	for (i = peo; i < con->count - 1; i++)
	{
		con->information[i] = con->information[i + 1];
	}

	con->count--;
	printf("删除成功\n");
}

int find_name(CONTACT*con,char* name)
{
	assert(name);
	int i = 0;
	for (i = 0;i < con->count;i++)
	{
		if (0 == (strcmp(con->information[i].name, name)))
		{
			return i;
		}
	}
	return -1;
}
