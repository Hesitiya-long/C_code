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
		printf("ͨѶ¼����");
		return ;
	}
	printf("����������>>");
	scanf("%10d", con->information->name);
	printf("����������>>");
	printf("�������Ա�>>");
	printf("������绰>>");
	printf("�������ַ>>");

}