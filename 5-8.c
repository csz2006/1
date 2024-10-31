#include<stdio.h>

int main()

{
  int n,m,a,b,e;
  scanf("%d%d",&n,&m);
  if(n>=m){n=a;n=m;m=a;}
  for(a=m;a>=n&&a<=m;a--){
  if(a%3==2&&a%5==3&&a%7==4){e=a;
  break;}}
  for(a=n,b=0;a>=n&&a<=m;a++){
  if(a%3==2&&a%5==3&&a%7==4){
  printf("%d",a);b++;
    if(a!=e){printf(" ");}
    }
  }
  if(b>0)printf("\ntotal=%d",b);
  else printf("total=%d",b);
  return 0;
}