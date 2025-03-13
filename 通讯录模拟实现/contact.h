#pragma once
#include<stdio.h>
#include<string.h>
#include<assert.h>



enum CASE
{
	EXST,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SOURT,
	SHOW,
};


enum Peoinformaton
{
	NAME = 10,
	SEX = 5,
	TELE = 12,
	ADDR = 30,
};


typedef struct INFORMATION
{
	char name[NAME];
	int age;
	char sex[SEX];
	char tele[TELE];
	char addr[ADDR];
}INFORMATION;


typedef struct CONTACT
{
	INFORMATION information[100];
	int count;
}CONTACT;

void modify_contact(CONTACT* con);

void add(CONTACT* con);

void show(const CONTACT* con);

void del(CONTACT* con);