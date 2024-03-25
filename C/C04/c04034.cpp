#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 1000005
int t;
int n,m,p;
int a[N],b[N];
int main(){
        scanf("%d",&t);
        while(t--){
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
             scanf("%d",&a[i]);
        b[n]=a[n];
        for(int i=n-1;i>=1;i--)
        if(a[i]>b[i+1])
            b[i]=a[i];
        else b[i]=b[i+1];
        for(int i=1;i<=n-1;i++)
            if(a[i]>b[i+1])
            printf("%d ",a[i]);
        printf("%d\n",a[n]);
    }
}