#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 1000005
int t;
int n,m,p;
int a[N],b[N];
int main(){
        scanf("%d", &t);
        for(int x=1;x<=t;x++)
        {
        scanf("%d%d%d",&n,&m,&p);
        for(int i=1;i<=n;i++)
             scanf("%d",&a[i]);
        for(int i=1;i<=m;i++)
             scanf("%d",&b[i]);
        printf("Test %d:\n",x);
        for(int i=1;i<=p;i++)
        printf("%d ",a[i]);
        for(int i=1;i<=m;i++)
        printf("%d ",b[i]);
        for(int i=p+1;i<=n;i++)
        printf("%d ",a[i]);
         printf("\n");
         }
    }
