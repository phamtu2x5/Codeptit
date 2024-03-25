#include<stdio.h>
#include<math.h>
int m=1,n,t;
int main(){
    scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
    if(i==1||i==n)
    for(int j=1;j<=i;j++)
    printf("*");
    else 
    {
    printf("*");
    for(int j=1;j<=t;j++)
    printf(".");
    printf("*");
    t++;  
    }
    printf("\n");
   }
   }

