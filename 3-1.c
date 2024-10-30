#include<stdio.h>
int main()
{
    double F,C;
    scanf("%lf",&F);
    C=5.0/9*(F-32);
    printf("%.1f(F)=%.2f(C)",F,C);
    return 0;
}