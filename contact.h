#pragma once
//类型定义
#include<stdio.h>
#include<string.h>
#define MAX_name 20
#define MAX_age  20
#define MAX_sex  10
#define MAX_tele 12
#define MAX_addr 30
#define MAX_renshu 1000
typedef struct Tongxunlu  //通讯录个人数据的变量
{
	char name[MAX_name];
	int age[MAX_age];//年龄
	char sex[MAX_sex];//性别
	char tele[MAX_tele];//电话
	char addr[MAX_addr];//地址
}Tongxunlu;
typedef struct contact  
{
	int sz;//记录当前通讯录信息个数
	Tongxunlu data[MAX_renshu];//存放 添加进来人的信息
}contact;
void InitContact(contact* chushihua);//初始化
void Addcontact(contact* chushihua);//增加联系人
void PrintContact(contact* print);//打印联系人
void SanchuContact(contact* chushihua);
int FindByName(contact* pc, char name[]);