#include<stdio.h>
#include<stdlib.h>
//动态开辟的错误
//0.对空指针解引用
//1.对动态开辟的空间越界访问
//2.使用free释放非动态开辟的空间
//3.free释放一部分
//4.对同一个动态开辟的空间多次释放
//5.忘记释放
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