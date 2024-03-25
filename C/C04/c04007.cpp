#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 1000005
int t;
int n,m,p;
int a[N],b[N];
int main(){
        scanf("%d%d",&n,&m);
        for(int i=1;i<=n;i++)
             scanf("%d",&a[i]);
        for(int i=1;i<=m;i++)
             scanf("%d",&b[i]);
        scanf("%d",&p);
        for(int i=1;i<=p;i++)
        printf("%d ",a[i]);
        for(int i=1;i<=m;i++)
        printf("%d ",b[i]);
        for(int i=p+1;i<=n;i++)
        printf("%d ",a[i]);
    }
