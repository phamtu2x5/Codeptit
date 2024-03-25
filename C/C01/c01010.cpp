#include<stdio.h>
int d,n,t,ng;
int main(){
   scanf("%d",&d);
   n=d/365;
   d%=365;
   t=d/7;
   ng=d%7;
  printf("%d %d %d",n,t,ng);
}