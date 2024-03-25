#include<stdio.h>
#include<math.h>
int n,s,k;
int gt(int m){
    int ss=1;
    for(int i=1;i<=m;i++)
    ss*=i;
    return ss;
}
int main(){
  scanf("%d",&n);
  int m=n;
  while(n>0){
    s+=gt(n%10);
    n/=10;
  }
  if(s==m)
  printf("1");
  else printf("0");
}