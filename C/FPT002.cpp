#include <stdio.h>
#include <math.h>
#include<string.h>
#define N 1005
int m,n,p,q;
int a[N][N],b[N][N],c[N][N],d[N][N],e[N][N];
int main()
{   
   scanf("%d%d%d%d",&m,&n,&p,&q);
   // d=a*b
   //e=d*c
   for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            scanf("%d",&a[i][j]);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=p;j++)
            scanf("%d",&b[i][j]);
    for(int i=1;i<=p;i++)
        for(int j=1;j<=q;j++)
            scanf("%d",&c[i][j]);
    for(int i=1;i<=m;i++)
        for(int j=1;j<=p;j++)
            {
                for(int t=1;t<=n;t++)
                    d[i][j]+=a[i][t]*b[t][j];
            }
    for(int i=1;i<=m;i++)
        for(int j=1;j<=q;j++)
            {
                for(int t=1;t<=p;t++)
                    e[i][j]+=d[i][t]*c[t][j];
            }
    for(int i=1;i<=m;i++)
       { for(int j=1;j<=q;j++)
            printf("%d ",e[i][j]);
            printf("\n");
}
}