#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 1000005
int t;
int n,m,p;
int a[N],b[N];
int main(){
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
             scanf("%d",&a[i]);
        for(int i=1;i<=n;i++)
        if(b[a[i]]==0){
        printf("%d ",a[i]);
        b[a[i]]=1;
        }
    }
