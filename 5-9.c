#include<stdio.h>
#include<math.h>
int main() 
{
    int n;
    double a,b=0;
    scanf("%d", &n);
    for(int i=0;i<=n;i++){
        if(i==0){a=100;}
        else{
        b=100*pow(0.5,i);
        if(i<n)a+=2*b;}
    }
    printf("%lf %lf",a,b);
    return 0;
}