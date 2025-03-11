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
	scanf("%10d", con->information->name);
	printf("请输入年龄>>");
	printf("请输入性别>>");
	printf("请输入电话>>");
	printf("请输入地址>>");

}