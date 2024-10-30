#include<stdio.h>
int main()
{
    int a,b,c,i,n;
    scanf("%d",&n);
    a=1;b=1;
    for(i=1;i<=n;i++){
       printf("%10d",a);
       c=a+b;
       a=b;
       b=c;
       if(i%5==0)printf("\n");
    }
    return 0;
}