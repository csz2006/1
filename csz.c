#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b){
      if(a>=c){if(b>=c){d=b;}
      else {d=c;}
      }else{d=a;}
    }else {
      if(a<=c){if(b>=c){d=c;}
      else{d=b;}
      }else{d=a;}
      }
      printf("%d",d);
      return 0; 
    }
    