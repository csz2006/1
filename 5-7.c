#include<stdio.h>
int main()
{
    char sign;
    int x,y;
    printf("输入x 运算符 y:");
    scanf("%d %c %d",&x,&sign,&y);
    if(sign=='*'){printf("%d * %d = %d\n",x,y,x*y);}
    else if(sign=='/'){printf("%d / %d = %f\n",x,y,(double)x/y);}
    else if(sign=='%'){printf("%d %% %d = %d\n",x,y,x%y);}
    else{printf("运算符输入错误！\n");}
    return 0;
}