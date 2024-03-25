#include<stdio.h>
#include<math.h>
int m;
int main(){
scanf("%d",&m);
for(int i=1;i<=m;i++)
{
    if(i==1||i==m)
    for(int j=1;j<=m;j++)
    printf("*");
    else{
        printf("*");
        for(int j=1;j<=m-2;j++)
        printf(".");
        printf("*");
    }
    printf("\n");
}
}
