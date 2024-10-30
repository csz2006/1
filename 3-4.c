#include<stdio.h>
int main()
{
    int a,b,c;
    int d;
    scanf("%d%d%d",&a,&b,&c);
    d=(a+b+c)/3;
    d%=10;
    switch (d)
    {
    case 9:printf("甲等");break;
    case 8:printf("乙等");break;
    case 7:printf("丙等");break;
    default:printf("继续努力");break;
    }
    return 0;
}