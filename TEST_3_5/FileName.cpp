#include<stdio.h>
#include<stdlib.h>
//��̬���ٵĴ���
//0.�Կ�ָ�������
//1.�Զ�̬���ٵĿռ�Խ�����
//2.ʹ��free�ͷŷǶ�̬���ٵĿռ�
//3.free�ͷ�һ����
//4.��ͬһ����̬���ٵĿռ����ͷ�
//5.�����ͷ�
void test()
{
	int* p = (int*)malloc(100);
	if (p == NULL)
	{
		return;
	}
}
int main()
{
	int arr[10] = { 0 }; 
	int* p = (int*)malloc(100) ;
	if (p == NULL)
	{
		return 1;
	}
	for (i = 0; i < 5; i++)
	{
		*p++ = i; 
	}
	free(p);
	p = NULL;
	test();
	return 0;
}