#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define N 100005
int t,n,m,a[N],b[N];
char x;
int cmpT(const void *x,const void *y){
    int *p=(int *)x;
    int *q=(int *)y;
    return *p-*q;
}
int cmpG(const void *x,const void *y){
    int *p=(int *)x;
    int *q=(int *)y;
    return *q-*p;
}
int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d%d %c",&m,&n,&x);
        for(int i=1;i<=m;i++)
            scanf("%d",&a[i]);
        for(int j=1;j<=n;j++)
            scanf("%d",&b[j]);
        if(x=='F')
        {
            for(int i=1;i<=m;i++)
               printf("%d ",a[i]);
            for(int j=1;j<=n;j++)
                printf("%d ",b[j]);
        }
        else if(x=='A')
        {
            for(int i=1;i<=n;i++)
                printf("%d ",b[i]);
            for(int j=1;j<=m;j++)
                printf("%d ",a[j]);
        }
        else {
            for(int i=m+1;i<=m+n;i++)
                a[i]=b[i-m];
            if(x=='T')
                qsort(a+1,m+n,sizeof(int),cmpT);
            else qsort(a+1,m+n,sizeof(int),cmpG);
            for(int i=1;i<=m+n;i++)
                printf("%d ",a[i]);

        }
        printf("\n");
    }
}