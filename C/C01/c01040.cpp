#include<stdio.h>
#include<math.h>
int n,s,k;
int main(){
  scanf("%d",&n);
  for(int i=1;i*i<=n;i++)
  if(n%i==0)
  {
    if(i*i==n) s+=i;
    else s+=i+n/i;
  }
  s-=n;
  if(s==n)
  printf("1");
  else printf("0");
}