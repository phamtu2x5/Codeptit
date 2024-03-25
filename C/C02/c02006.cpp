#include<stdio.h>
#include<math.h>
int m,n,t;
int main(){
    scanf("%d%d",&m,&n);
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=t;j++)
        printf("~");
        t++;
        if(i==1||i==m)
        for(int a=1;a<=n;a++)
        printf("*");
        else{
        printf("*");
        for(int a=1;a<=n-2;a++)
        printf(".");
        printf("*");
        }
        printf("\n");
    }
}
