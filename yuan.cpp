#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
//struct s
//{
//	int n = 0;
//     int arr[0];//´óÐ¡Î´Öª
//};
//struct  b
//{
//
//
//};
//int main()
//{
//	struct s *p=(struct s*)malloc(sizeof(struct s) + 10 * sizeof(int));
//	p->n = 10;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p->arr[i] = i;
//		printf("%d", p->arr[i]);
//	}
//	
//	struct s *ps=(struct  s*)realloc(p, sizeof(struct s) + sizeof(int) * 20);
//	free(ps);
//	ps = NULL;
//	return 0;
//}
#define MAX 7.0
int main()
{
	int n = 0;
	int i = 0;
	//while (scanf("%d", &n) != EOF)
	//{


	//	for (i = 0; i < n; i++)
	//	{
	//		int j = 0;
	//		for (j = 0; j < n; j++)
	//			if (j == i)
	//			{
	//				printf("*");
	//			}
	//			else if (i + j == n - 1)
	//			{
	//				printf("*");
	//			}
	//			else
	//			{
	//				printf(" ");
	//			}
	//		printf("\n");
	//	}
	//}
	//int n = 0;
	//int sum = 0;
	//int min = 100; int max = 0;
	//for (i = 0; i < MAX; i++)
	//{
	//	scanf("%d", &n);
	//	if (n > max)
	//	{
	//		max = n;
	//	}
	//	if (min > n)
	//	{
	//		min = n;
	//	}
	//	sum = sum + n;
	//}
	//printf("%.2f\n", (sum - max - min) / 5.0);
	//int n = 0;
	int x = 0;
	int tmp = 0;
	scanf("%d", &n);
	int arr[50] = { 0 };
	for (i = 0; i <= n-1; i++)
	{
		int x = 0;
		scanf("%d", &x);
		arr[i] = x;
	}
	int m = 0;
	scanf("%d", &m);
	for (i = 0; i <= n-1; i++)
	{
		if (arr[i] > m)
		{
			tmp = arr[i];
			arr[i] = m;
			m = tmp;
		}
	}
	arr[n] = m; 
	for (i = 0; i <= n; i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}