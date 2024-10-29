#include<stdio.h>
int main()
{
    int N,a;
    scanf("%d",&N);
    a=N%5;
    if(a<=3&&a!=0){printf("Fishing in day %d",N);}
    else{printf("Drying in day %d",N);}
    return 0;
}
    