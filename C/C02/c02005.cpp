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
        for(int a=1;a<=n;a++)
        printf("*");
        printf("\n");
    }
}
