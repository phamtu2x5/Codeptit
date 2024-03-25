#include<stdio.h>
#include<math.h>
int m,n,t=1;
int main(){
    scanf("%d",&n);
    m=n-1;
   for(int i=1;i<=n;i++)
   {
    for(int j=1;j<=m;j++)
    printf("~");
    for(int j=1;j<=t;j++)
    printf("*");
    m--;t++;
    printf("\n");
   }
   }

