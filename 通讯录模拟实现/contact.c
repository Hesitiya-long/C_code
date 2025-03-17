#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"

//��ʼ��
void modify_contact(CONTACT* con)
{
	con->count = 0;
	memset(con->information, 0, sizeof(con->information));
}
//���
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
//չʾ
void show(const CONTACT* con)
{
	assert(con);
	int i = 0;
	if (con->count == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
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
//ɾ��
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
	int peo = find_name(con, del_name);    //�ҵ�����

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
//�ҵ�����
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
//��ѯ
void search(const CONTACT* con)
{
	char search_name[NAME] = { 0 };
	printf("������Ҫ��ѯ������>>");
	scanf("%s", &search_name);
	assert(search_name);
	int peo = find_name(con, search_name);
	if (peo == -1)
	{
		printf("û���ҵ��������²�ѯ");
		return;
	}

	printf("%-10s\t%-3s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	printf("%-10s\t%-3d\t%-5s\t%-12s\t%-30s\n",
		con->information[peo].name,
		con->information[peo].age,
		con->information[peo].sex,
		con->information[peo].tele,
		con->information[peo].addr);

}
//�޸�
void modify(CONTACT* con)
{
	char modify_name[NAME] = { 0 };
	printf("������Ҫ�޸ĵ�����>>");
	scanf("%s", &modify_name);
	assert(modify_name);
	int peo = find_name(con, modify_name);
	if (peo == -1)
	{
		printf("û���ҵ�������������");
		return;
	}

	printf("%-10s\t%-3s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	printf("%-10s\t%-3d\t%-5s\t%-12s\t%-30s\n",
		con->information[peo].name,
		con->information[peo].age,
		con->information[peo].sex,
		con->information[peo].tele,
		con->information[peo].addr);

	printf("�������޸ĺ������>>");
	scanf("%10s", con->information[peo].name);
	printf("�������޸ĺ������>>");
	scanf("%3d", &(con->information[peo].age));
	printf("�������޸ĺ���Ա�>>");
	scanf("%5s", con->information[peo].sex);
	printf("�������޸ĺ�ĵ绰>>");
	scanf("%12s", &(con->information[peo].tele));
	printf("�������޸ĺ�ĵ�ַ>>");
	scanf("%30s", con->information[peo].addr);

}
//����ͨѶ¼
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
//��ȡͨѶ¼
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
//�����ļ�
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
