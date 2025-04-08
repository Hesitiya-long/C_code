#define _CRT_SECURE_NO_WARNINGS
#include"linkted list.h"

int main()
{
	NODE* head = NULL;
	head = insertathead(head, 1);
	head = insertattail(head,2);
	head = insertathead(head, 0);


	traverseList(head);
	return 0;
}

