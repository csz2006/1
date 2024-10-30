#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    c=1;
    for(b=1;b<=a;b++){
        c*=b;
    }
    printf("%d!=%d",a,c);
    return 0;
}