#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"
//通讯录
//1.需要存放1000个人信息
//2.信息：名字+年龄+性别+电话+地址
//3.增加信息
//4.删除指定人信息
//5.修改指定人信息
//6.查找指定人信息
//7.排序通讯录信息
void menu()
{
	printf("*************************************************\n");
	printf("************ 1. ADD     2.SANCHU ****************\n");
	printf("************ 3.XIUGAI   4.CHAZHAO ***************\n");
	printf("************ 5.PAIXU    0.TUICHU  ***************\n");
	printf("************        6.printf       **************\n");
	printf("*************************************************\n");
	
}
enum CAIDAN//定义菜单数字
{
	TUICHU,
	ADD,
	XIUGAI,
	SANCHU,
	CHAZHAO,
	PAIXU,
	Printf,
};
int main()
{
	Tongxunlu geshu[MAX_renshu];
	int input = 0;
	int sz = 0;
	contact con;//创建通讯录
	InitContact(&con);
	do
	{
		menu();//打印菜单
		printf("请选择>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case CHAZHAO:
			break;
		case SANCHU:
			SanchuContact(&con);
			break;
		case TUICHU:
			break;
		case XIUGAI:
			break;
		case PAIXU:
			break;
		case Printf:
			PrintContact(&con);
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}