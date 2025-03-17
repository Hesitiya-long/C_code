#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"

//初始化
void modify_contact(CONTACT* con)
{
	con->count = 0;
	memset(con->information, 0, sizeof(con->information));
}
//添加
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
//展示
void show(const CONTACT* con)
{
	assert(con);
	int i = 0;
	if (con->count == 0)
	{
		printf("通讯录为空\n");
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
//删除
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
	int peo = find_name(con, del_name);    //找到名字

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
//找到名字
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
//查询
void search(const CONTACT* con)
{
	char search_name[NAME] = { 0 };
	printf("请输入要查询的名字>>");
	scanf("%s", &search_name);
	assert(search_name);
	int peo = find_name(con, search_name);
	if (peo == -1)
	{
		printf("没有找到，请重新查询");
		return;
	}

	printf("%-10s\t%-3s\t%-5s\t%-12s\t%-30s\n", "姓名", "年龄", "性别", "电话", "地址");
	printf("%-10s\t%-3d\t%-5s\t%-12s\t%-30s\n",
		con->information[peo].name,
		con->information[peo].age,
		con->information[peo].sex,
		con->information[peo].tele,
		con->information[peo].addr);

}
//修改
void modify(CONTACT* con)
{
	char modify_name[NAME] = { 0 };
	printf("请输入要修改的名字>>");
	scanf("%s", &modify_name);
	assert(modify_name);
	int peo = find_name(con, modify_name);
	if (peo == -1)
	{
		printf("没有找到，请重新输入");
		return;
	}

	printf("%-10s\t%-3s\t%-5s\t%-12s\t%-30s\n", "姓名", "年龄", "性别", "电话", "地址");
	printf("%-10s\t%-3d\t%-5s\t%-12s\t%-30s\n",
		con->information[peo].name,
		con->information[peo].age,
		con->information[peo].sex,
		con->information[peo].tele,
		con->information[peo].addr);

	printf("请输入修改后的名字>>");
	scanf("%10s", con->information[peo].name);
	printf("请输入修改后的年龄>>");
	scanf("%3d", &(con->information[peo].age));
	printf("请输入修改后的性别>>");
	scanf("%5s", con->information[peo].sex);
	printf("请输入修改后的电话>>");
	scanf("%12s", &(con->information[peo].tele));
	printf("请输入修改后的地址>>");
	scanf("%30s", con->information[peo].addr);

}
//保存通讯录
save_contact(CONTACT* con)
{
	FILE* pf = fopen("contact.txt", "wb");
	if (pf == NULL)
	{
		printf("%s",strerror(errno));
		return 1;
	}

	fprintf(pf, "%d", con->count);

	int i = 0;
	for (i = 0;i < con->count;i++)
	{
		fprintf(pf, " %10s %3d %5s %12s %30s",
			con->information[i].name,
			con->information[i].age,
			con->information[i].sex,
			con->information[i].tele,
			con->information[i].addr);
	}
	fclose(pf);
	pf = NULL;
}
//读取通讯录
read_contact(CONTACT* con)
{
	FILE* pf = fopen("contact.txt", "rb");
	if (pf == NULL)
	{
		printf("%5s", strerror(errno));
		return 1;
	}

	fscanf(pf, "%d", &(con->count));

	int i = 0;
	for (i = 0;i < con->count;i++)
	{
		fscanf(pf, " %10s %3d %5s %12s %30s",
			con->information[i].name,
			&(con->information[i].age),
			con->information[i].sex,
			con->information[i].tele,
			con->information[i].addr);
	}
	fclose(pf);
	pf = NULL;

}
//创建文件
void create_contact(CONTACT* con)
{
	FILE* pf = fopen("contact.txt", "a");
	//if (fp == NULL) {
	//	perror("Error opening file");
	//	return 1;
	//}
	fclose(pf);
	pf = NULL;
}
