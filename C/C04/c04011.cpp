#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 1000005
int t;
int n;
int a[N],b[N];
int main(){
        scanf("%d",&t);
        while(t--){
        int s=1;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
            scanf("%d",&a[i]);
        b[1]=a[1];
        for(int i=2;i<=n;i++)
        if(a[i]>b[i-1]) b[i]=a[i];
        else b[i]=b[i-1];
        for(int i=2;i<=n;i++)
        if(a[i]>b[i-1]) s++;
        printf("%d\n",s);
    }
}