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
//修改
void modify_contact(CONTACT* con);
//添加
void add(CONTACT* con);
//展示
void show(const CONTACT* con);
//删除
void del(CONTACT* con);
//搜索
void search(const CONTACT* con);
//修改
void modify(CONTACT* con);
//保存通讯录
save_contact(CONTACT*con);

read_contact(CONTACT* con);
