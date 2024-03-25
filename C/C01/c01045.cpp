#include<stdio.h>
#include<math.h>
int n,s,k;
int main(){
  scanf("%d",&n);
  k=n%10;
  while(n>10)
  n/=10;
  printf("%d %d",n,k);
}