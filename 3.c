#include<stdio.h>
int main()
{
    double x,y;
    scanf("%lf",&x);
    if(x<=100000){y=0.1*x;}
    else if(x>100000&&x<=200000){x-=100000;y=10000+0.075*x;}
    else if(x>200000&&x<=400000){x-=200000;y=10000+7500+0.05*x;}
    else if(x>400000&&x<=600000){x-=400000;y=10000+7500+5000+0.03*x;}
    else if(x>6000000&&x<=1000000){x-=600000;y=10000+7500+5000+3000+0.015*x;}
    else if(x>1000000){x-=1000000;y=10000+7500+5000+3000+1500+0.01*x;}
    printf("%0.2f",y);
    return 0;
}