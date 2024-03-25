#include<stdio.h>
#include<math.h>
int n,c,l,t;
int main(){
  scanf("%d",&t);
  while(t--){
  c=0;l=0;
  scanf("%d",&n);
  while(n>0){
    int t=n%10;
    if(t%2==0) c++;
    else l++;
    n/=10;
  }
  printf("%d %d\n",l,c);
}
}