#include<stdio.h>
#include<math.h>
int n,a,b,d;
int main(){
  scanf("%d",&n);
  while(n>0)
  {
    d++;
    n/=10;
  }
  printf("%d",d);
}