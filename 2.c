#include<stdio.h>
int main()
{
    int time,mini,hour;
    scanf("%d %d",&time,&mini);
    hour=(time/100+(mini+time%100)/60)*100;
    mini=(mini+time%100)%60;
    hour+=mini;
    printf("%03d",hour);
    return 0;
}