#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 1000005
int t;
int n,a[N];
int main(){
    scanf("%d",&t);
    while(t--){
        int d=1;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
        for(int i=1;i<=n/2;i++)
        if(a[i]!=a[n-i+1]) d=0;
        if(d==1) printf("YES\n");
        else printf("NO\n");
    }
}