#include <stdio.h>
#include <math.h>

int m,n,a[1000][1000];
int main()
{   
    scanf("%d%d",&m,&n);
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
        scanf("%d",&a[i][j]);
    for(int j=1;j<=n;j++){
        for(int i=1;i<=m;i++)
        printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}