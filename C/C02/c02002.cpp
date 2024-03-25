#include<stdio.h>
#include<math.h>
int m;
int main(){
scanf("%d",&m);
int n=m-1;
for(int i=1;i<=m;i++){
for(int j=1;j<=n;j++)
printf("~");
n--;
for(int t=1;t<=m;t++)
printf("*");
printf("\n");
}
}
