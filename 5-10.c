#include<stdio.h>
int main()
{
    int x,a,b,c;
    int i=0;
    scanf("%d",&x);
    b=0;
    if(x<0){
        printf("fu ");
        x=-x;
    }c=x;
    do{
        a=x%10;
        b=10*b+a;
        x/=10;
        if(a==0){i++;}
    }while(x>0);
    int y=0,z=b;
    while(z>0){
        a=z%10;
        if(a==0){y++;}
        z/=10;
    }
    i-=y;
    do{
        x=b%10;
        switch(x){
            case 0:printf("ling");break;
            case 1:printf("yi");break;
            case 2:printf("er");break;
            case 3:printf("san");break;
            case 4:printf("si");break;
            case 5:printf("wu");break;
            case 6:printf("liu");break;
            case 7:printf("qi");break;
            case 8:printf("ba");break;
            case 9:printf("jiu");break;
        }
        if(b>9){printf(" ");}
        b/=10;
    }while(b>0);
    if(c%10==0&&c!=0){
            for(int m=0;m<i;m++){
                printf(" ling");
            }
    }
    return 0;
}