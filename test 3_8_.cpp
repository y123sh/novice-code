#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[51] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", arr[i]);
//	}
//	int m = 0;
//	scanf("%d", &m);
//	for (i = n; i >= 0; i--)
//	{
//		if (arr[i] > m)
//		{
//			arr[i + 1] = arr[i];
//		}
//		else
//		{
//			arr[i + 1] = m;
//			break;
//		}
//	}
//
//		arr[i+1] = m;
//	return  0;
//
int main()
{
	//FILE* p = fopen("test.dat", "r");
	//if (p == NULL)
	//{
	//	perror("fopen");//�����ȡʧ�ܷ��ؿ�ָ�롢

	//	return 1;
	//}
	////���ļ�
	//int ret=fgetc(p);//��ȡʧ�ܷ���EOF
	//printf("%c", ret);
	//ret = fgetc(p);//��ȡʧ�ܷ���EOF
	//ret = fgetc(p); printf("%c", ret);//��ȡʧ�ܷ���EOF
	//ret = fgetc(p); printf("%c", ret);;//��ȡʧ�ܷ���EOF
	//printf("%c", ret);
 //    //�ر��ļ�
	//fclose(p);
	//p = NULL;
	//int ret = fgetc(stdin);
	//printf("%c", ret);
	//ret = fgetc(stdin);
	//printf("%c", ret);
	//ret = fgetc(stdin);
	//printf("%c", ret);
	////ret = fgetc(stdin);
	//return 0;
	char arr[10] = "xxxxxxxx";
	FILE* pf = fopen("test,day", "r");
	if(pf==NULL)
    {
		perror("��ȡ����");
		return 1;
     }
	//���ļ�----д�ļ�
	/*fputs("abcdef\n", pf);
	fputs("abndcdef\n", pf);
	fputs("abcdfghndef\n", pf);*/
	fgets(arr,4,pf);
	printf("%s\n", arr);
	fgets(arr, 4, pf);
	printf("%s\n", arr);
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}