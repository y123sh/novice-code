#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"
void InitContact(contact* chushihua)
{
	chushihua->sz=0;
	//memset()�ڴ�����
	memset(chushihua->data, 0, sizeof(chushihua->data));
	//contact con={0};
}
void AddContact(contact* ps)
{	
	if (ps->sz == MAX_renshu)
	{
		printf("ͨѶ¼����,�޷����");
		return;
	}
	//int count = zhengjia->sz;
	//printf("����������->");
	//scanf("%s", zhengjia->data[zhengjia->sz].name);
	//printf("����������->");
	//scanf("%d", &(zhengjia->data[zhengjia->sz].age));
	//printf("�������Ա�->");
	//scanf("%s", zhengjia->data[zhengjia->sz].sex);
	//printf("������绰->");
	//scanf("%s", zhengjia->data[zhengjia->sz].tele);
	//printf("�������ַ->");
	//scanf("%s", zhengjia->data[zhengjia->sz].addr);
	//zhengjia->sz++;
	//printf("�洢�ɹ�");
	else
	{
		//printf("%d", ps->sz);
    printf("����������:>");
	scanf("%s", ps->data[ps->sz].name);
	printf("����������:>");
	scanf("%d", &(ps->data[ps->sz].age));
	printf("�������Ա�:>");
	scanf("%s", ps->data[ps->sz].sex);
	printf("������绰:>");
	scanf("%s", ps->data[ps->sz].tele);
	printf("�������ͥ��ַ:>");
	scanf("%s", ps->data[ps->sz].addr);
	ps->sz++;
	}
	
}
void PrintContact(contact* print)
{
	int i = 0;
	for (i = 0;i< print->sz;i++)
	{
		printf("%-10s\t%-5s\t%-5s\t%-20s\t%-5s\t\n ", "����","����","�Ա�","�绰","��ַ");
		printf("%-10s\t%-5d\t%-5s\t%-20s\t%-5s\t\n ", 
	    	print->data[i].name, 
			print->data[i].age, 
			print->data[i].sex, 
			print->data[i].tele, 
			print->data[i].addr);
	}
}
static int FindByName(contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return 1;
		}
	}
	return -1;//�Ҳ���
}
void SanchuContact(contact* pc)
{
	//ɾ����ϵ��
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ�����ɾ��");
		return;
	}
	char name[MAX_renshu];
	printf("������Ҫɾ���˵�����->");
	scanf("%s", name);
	int pos = FindByName(pc, name);//���ҵ�Ҫɾ������
	if (pos == -1)
	{
		printf("������");
			return;
	}
	int i = 0;
	for (i = pos; i < pc->sz-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("ɾ�����");
}
