#include<stdio.h>
#include<math.h>
int m=1,n,t,s;
int main(){
    scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
    for(int j=1;j<=m;j++)
    printf("*");
    m++;
    printf("\n");
   }
}
