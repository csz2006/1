#include<stdio.h>
int main()
{
  int n,i;
  scanf("%d",&n);
  int a[n];
  int *p,*q;
  for(i=0;i<n;i++){
  scanf("%d",&a[i]);
  }
  int b = a[0];
  for(i=1;i<n;i++){
  if(b-a[i]<=0){
  b=a[i];
  }}
  printf("%d",b);
  return 0;
}