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
int main()
{
	int n = 0;
	int i = 0;
	while (scanf("%d", &n) != EOF)
	{


		for (i = 0; i < n; i++)
		{
			int j = 0;
			for (j = 0; j < n; j++)
				if (j == i)
				{
					printf("*");
				}
				else if (i + j == n - 1)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			printf("\n");
		}
	}
	return 0;
}