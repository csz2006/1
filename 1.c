#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);

    b=a/10;
    switch(b){
        case 10:
        case 9:printf("score=%d,grade:A",a);break;
        case 8:printf("score=%d,grade:B",a);break;
        case 7:printf("score=%d,grade:C",a);break;
        case 6:printf("score=%d,grade:D",a);break;
        default:printf("score=%d,grade:E",a);break;
    }   
    return 0;
}