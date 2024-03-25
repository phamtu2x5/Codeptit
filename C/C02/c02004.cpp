#include<stdio.h>
#include<math.h>
int m,n;
int main(){
scanf("%d",&m);
n=m-1;
for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++)
    printf("~");
    n--;
    if(i==1||i==m)
    for(int t=1;t<=m;t++)
    printf("*");
    else
    {
        printf("*");
        for(int t=1;t<=m-2;t++)
        printf(".");
        printf("*");
    }
    printf("\n");
}
}
