#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"
void InitContact(contact* chushihua)
{
	chushihua->sz=0;
	//memset()内存设置
	memset(chushihua->data, 0, sizeof(chushihua->data));
	//contact con={0};
}
void AddContact(contact* ps)
{	
	if (ps->sz == MAX_renshu)
	{
		printf("通讯录满了,无法添加");
		return;
	}
	//int count = zhengjia->sz;
	//printf("请输入名字->");
	//scanf("%s", zhengjia->data[zhengjia->sz].name);
	//printf("请输入年龄->");
	//scanf("%d", &(zhengjia->data[zhengjia->sz].age));
	//printf("请输入性别->");
	//scanf("%s", zhengjia->data[zhengjia->sz].sex);
	//printf("请输入电话->");
	//scanf("%s", zhengjia->data[zhengjia->sz].tele);
	//printf("请输入地址->");
	//scanf("%s", zhengjia->data[zhengjia->sz].addr);
	//zhengjia->sz++;
	//printf("存储成功");
	else
	{
		//printf("%d", ps->sz);
    printf("请输入名字:>");
	scanf("%s", ps->data[ps->sz].name);
	printf("请输入年龄:>");
	scanf("%d", &(ps->data[ps->sz].age));
	printf("请输入性别:>");
	scanf("%s", ps->data[ps->sz].sex);
	printf("请输入电话:>");
	scanf("%s", ps->data[ps->sz].tele);
	printf("请输入家庭地址:>");
	scanf("%s", ps->data[ps->sz].addr);
	ps->sz++;
	}
	
}
void PrintContact(contact* print)
{
	int i = 0;
	for (i = 0;i< print->sz;i++)
	{
		printf("%-10s\t%-5s\t%-5s\t%-20s\t%-5s\t\n ", "名字","年龄","性别","电话","地址");
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
	return -1;//找不到
}
void SanchuContact(contact* pc)
{
	//删除联系人
	if (pc->sz == 0)
	{
		printf("通讯录为空，无需删除");
		return;
	}
	char name[MAX_renshu];
	printf("请输入要删除人的名字->");
	scanf("%s", name);
	int pos = FindByName(pc, name);//查找到要删除的人
	if (pos == -1)
	{
		printf("不存在");
			return;
	}
	int i = 0;
	for (i = pos; i < pc->sz-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("删除完成");
}
