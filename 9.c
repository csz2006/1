#include<stdio.h>
int main()
{
    int a,b,c,d,t;
    double e;
    scanf("%d",&a);
    c=2;d=1;
    for(b=1,e=0;b<=a;b++){
        e+=1.0*c/d;
        t=c;
        c=c+d;d=t;
    }
    printf("%.6f",e);
    return 0;
}