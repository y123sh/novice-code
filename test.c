#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"
//ͨѶ¼
//1.��Ҫ���1000������Ϣ
//2.��Ϣ������+����+�Ա�+�绰+��ַ
//3.������Ϣ
//4.ɾ��ָ������Ϣ
//5.�޸�ָ������Ϣ
//6.����ָ������Ϣ
//7.����ͨѶ¼��Ϣ
void menu()
{
	printf("*************************************************\n");
	printf("************ 1. ADD     2.SANCHU ****************\n");
	printf("************ 3.XIUGAI   4.CHAZHAO ***************\n");
	printf("************ 5.PAIXU    0.TUICHU  ***************\n");
	printf("************        6.printf       **************\n");
	printf("*************************************************\n");
	
}
enum CAIDAN//����˵�����
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
	contact con;//����ͨѶ¼
	InitContact(&con);
	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��>");
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