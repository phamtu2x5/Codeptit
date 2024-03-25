#include <stdio.h>
#include <math.h>
#include<string.h>
#define N 1005
#define ll long long
int  a[N],b[N],f[N],p[N];
void swap(int *m,int *n){
    int tg=*n;
    *n=*m;
    *m=tg;
}
int m,n,x;
int main(){
    scanf("%d%d",&m,&n);
    for(int i=1;i<=m;i++){
        scanf("%d",&x);
        a[x]=1;
    }
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        b[x]=1;
    }
    for(int i=0;i<=N;i++)
        if(a[i]*b[i]==1)
            printf("%d ",i);
    printf("\n");
    for(int i=0;i<=N;i++)
        if(a[i]==1 && b[i]==0)
            printf("%d ",i);
    printf("\n");
    for(int i=0;i<=N;i++)
        if(a[i]==0&&b[i]==1)
            printf("%d ",i);
   }
