#include<stdio.h>
#include<math.h>
int n,a,b,d;
int main(){
  scanf("%d",&n);
  int m=n;
  b=n%10;
  while(n>10)
  {
  n/=10;
  d++;
  }
  a=m-n*pow(10,d)+b*pow(10,d)-b+n;
  printf("%d",a);
}