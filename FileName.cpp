#include<stdio.h>
enum sex
{
    MALE = 3,
    AAA=4,
    DDD,
};
enum Color
{
    ERD,
    GBEEN,
    blue,
};
union yuan
{
    char a;
    int b;
};

int test()
{
    int a = 1;
    return *(char*)&a;
}
int main()
{//枚举
    //MALE = 0;枚举常量不能改
    enum sex a = AAA;
    printf("%d",AAA);
    printf("%d",DDD);
    printf("%d %d %d\n", ERD, GBEEN, blue);//1 2 3
    union yuan y;//共用体
    printf("%d\n", (int)sizeof(y));//4
    printf("%p\n", &y);
    printf("%p\n", &(y.a));
    printf("%p\n", &(y.b));//两个地址相同
    
    int t = test();
    if (t== 1)
    {
        printf("小段");
    }
    else
    {
        printf("大端");
    }
    return 0;
}
