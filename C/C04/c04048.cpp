#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1005
#define ll long long 
int n,m,k,x,a[N];
int main(){
    scanf("%d%d%d",&n,&m,&k);
    int res=0;
    for(int i=1;i<=m;i++){
        scanf("%d",&x);
        a[x]=1;
        for(int i=x-1;i>=x-k && i>=1;i--)
            a[i]=1;
        for(int i=x+1;i<=x+k && i<=n;i++)
            a[i]=1;
    }
    int j;
    for(int i=1;i<=n;i++){
        if(a[i]==0)
        {
            res++;
            for(int j=i;j<=i+2*k;j++)
                a[j]=1;
            i=j;
        }
        if(i>n) break;
    }
    printf("%d",res);
}