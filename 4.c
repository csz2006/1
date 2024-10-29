#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d%d",&a,&b);
    c=(b+a%100)/60;
    d=(b+a%100)%60;
    e=a/100;
    if(e+c<=23){
    printf("%03d",100*e+c*100+d);}
    else{printf("%03d",d);}
    return 0;
}