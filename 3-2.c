#include<stdio.h>
int main()
{
    double x,y,z;
    scanf("%lf",&x);
    if(x<=2.5){
        y=x*x+1;
        if(x<0)z=-3.14/2.0*x+3;
        else if(x==0)z=0;
        else if(x>0)z=3.14/2-5;
    }else{y=x*x-1;
    z=3.14/2-5;}
    printf("y=%f\nz=%f",y,z);
    return 0;
}