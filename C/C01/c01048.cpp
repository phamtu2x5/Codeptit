#include<stdio.h>
#include<math.h>
int n,c,l;
int main(){
  scanf("%d",&n);
  while(n>0){
    int t=n%10;
    if(t%2==0) c++;
    else l++;
    n/=10;
  }
  printf("%d %d",l,c);
}