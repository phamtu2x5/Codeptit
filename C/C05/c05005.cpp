#include <stdio.h>
#include <math.h>
int t;
int m,n,a[1000][1000];
int main()
{   
    scanf("%d",&t);
    for(int x=1;x<=t;x++){
    scanf("%d%d",&m,&n);
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
        scanf("%d",&a[i][j]);
    printf("Test %d:\n",x);
    for(int i=2;i<=m;i++)
        {
            for(int j=2;j<=n;j++)
            printf("%d ",a[i][j]);
            printf("\n");
        }
    
}
}