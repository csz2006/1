#include<stdio.h>
int main()
{
    int a,b,c,n,i;
    a=1,b=1;
    scanf("%d",&n);
    if(n<=2){
        if(n==1)printf("%10d",a);
        else{printf("%10d",a);
             printf("%10d",b);}}
    else{
        printf("%10d",a);
        printf("%10d",b);
        for(i=3;i<=n;i++){
        c=a+b;
        if(i%5==0){printf("%10d\n",c);}
        else{printf("%10d",c);}
        if(i%2==0)a=c;
        else b=c;}
        }
    return 0;
}