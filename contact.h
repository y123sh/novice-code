#pragma once
//���Ͷ���
#include<stdio.h>
#include<string.h>
#define MAX_name 20
#define MAX_age  20
#define MAX_sex  10
#define MAX_tele 12
#define MAX_addr 30
#define MAX_renshu 1000
typedef struct Tongxunlu  //ͨѶ¼�������ݵı���
{
	char name[MAX_name];
	int age[MAX_age];//����
	char sex[MAX_sex];//�Ա�
	char tele[MAX_tele];//�绰
	char addr[MAX_addr];//��ַ
}Tongxunlu;
typedef struct contact  
{
	int sz;//��¼��ǰͨѶ¼��Ϣ����
	Tongxunlu data[MAX_renshu];//��� ��ӽ����˵���Ϣ
}contact;
void InitContact(contact* chushihua);//��ʼ��
void Addcontact(contact* chushihua);//������ϵ��
void PrintContact(contact* print);//��ӡ��ϵ��
void SanchuContact(contact* chushihua);
int FindByName(contact* pc, char name[]);