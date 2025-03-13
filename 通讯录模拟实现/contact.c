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
	scanf("%10s", con->information[con->count].name);
	printf("����������>>");
	scanf("%3d", &(con->information[con->count].age));
	printf("�������Ա�>>");
	scanf("%5s", con->information[con->count].sex);
	printf("������绰>>");
	scanf("%12s", &(con->information[con->count].tele));
	printf("�������ַ>>");
	scanf("%30s", con->information[con->count].addr);

	(con->count)++;
	printf("��ӳɹ�\n");
}


void show(const CONTACT* con)
{
	assert(con);
	int i = 0;
	if (con->count == 0)
	{
		printf("ͨѶ¼Ϊ��");
		return;
	}
	printf("%-10s\t%-3s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
		printf("û��Ԫ�ؿ���ɾ����������ӳ�Ա");
	}

	char del_name[NAME] = { 0 };
	int i = 0;
	printf("������Ҫɾ���˵�����>>");
	scanf("%s", &del_name);
	int peo = find_name(con, del_name);

	if (peo == -1)
	{
		printf("û���ҵ��������²���\n");
		return;
	}

	for (i = peo; i < con->count - 1; i++)
	{
		con->information[i] = con->information[i + 1];
	}

	con->count--;
	printf("ɾ���ɹ�\n");
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
