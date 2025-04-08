#define _CRT_SECURE_NO_WARNINGS
#include"linkted list.h"

//��������ڵ�ṹ


//�����½ڵ�
NODE* createNODE(int data)
{
	NODE* newnode = (NODE*)malloc(sizeof(NODE));
	if (newnode == NULL)
	{
		printf("�ڴ����ʧ��\n");
		return NULL;
	}

	newnode->data = data;
	newnode->next = NULL;
	return newnode;
}

//
NODE* insertathead(NODE* head, int data)
{
	NODE* newnode = createNODE(data);
	newnode->next = NULL;
	newnode->data = data;
	return newnode;
}


//
NODE* insertattail(NODE* head, int data)
{
	NODE* newnode = createNODE(data);
	if (head == NULL)
	{
		return NULL;
	}

	NODE* temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp = newnode;
	return head;

}


// ��������
void traverseList(NODE* head)
{
	NODE* temp = head;
	while (temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}