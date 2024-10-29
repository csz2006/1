#include<stdio.h>

int main()

{
    int x,y;
    scanf("%d%d",&x,&y);
    switch(x)
    {
      case 1:printf("January,31");break;
      case 2:printf("February,28/29");break;       
      case 3:printf("March,31");break; 
      case 4:printf("April,30");break;
      case 5:printf("May,31");break;
      case 6:printf("June,30");break; 
      case 7:printf("July,31");break;
      case 8:printf("August,31");break;
      case 9:printf("Septemb,30");break;
      case 10:printf("October,31");break; 
      case 11:printf("Novembe,30");break;
      case 12:printf("Decembe,31");break;   
    }
    return 0;
}