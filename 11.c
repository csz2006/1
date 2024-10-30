#include<stdio.h>
int main()
{
    int x,y1,y2,y3;
    int n=0;
    scanf("%d%d%d%d",x,y1,y2,y3);
    while(x>y1+y2+y3){
        x+=1;
        y1+=1;y2+=1;y3+=1;
        n++;
    }
    printf("%d",n);
    return 0;
}