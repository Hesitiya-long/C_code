#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node* create(struct node* head);
void print(struct node* head);


int main()
{
	struct node* head = NULL;
	head = create(head);
	printf("建立的链表是>>\n");
	print(head);
	return 0;
}

struct node
{
	long int num;
	char name[20];
	struct node* next;
};


struct node* create(struct node* head)
{
	struct node* newnode;
	struct node* q;
	newnode = (struct node*)malloc(sizeof(struct node));
	scanf("%ld %s", &newnode->num, newnode->name);
	newnode->next = NULL;
	q = newnode;
	head = newnode;
	while (newnode->num)
	{
		newnode->next = NULL;
		q->next = newnode;
		q = q->next;
		newnode = (struct node*)malloc(sizeof(struct node));
		scanf("%ld %s", &newnode->num, newnode->name);

	}
	free(newnode);
	return head;

}

void print(struct node* head)
{
	struct node* p = head;
	while (p)
	{
		printf("%10ld %s\n", p->num, p->name);
		p = p->next;
	}

}