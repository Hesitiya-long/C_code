#pragma once
#include<stdio.h>
#include<stdlib.h>


typedef struct NODE
{
	int data;
	struct NODE* next;
}NODE;

NODE* createNODE(int data);

NODE* insertathead(NODE* head, int data);

NODE* insertattail(NODE* head, int data);

void traverseList(NODE* head);


