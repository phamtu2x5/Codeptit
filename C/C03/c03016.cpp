#include <stdio.h>
#include <math.h>
#include<string.h>
#define N 100005
long long n,a[N];
int t;
int main(){
    scanf("%d",&t);
    a[0]=0;
    a[1]=1;
    for(int i=2;i<=103;i++)
        a[i]=a[i-1]+a[i-2];
    while(t--){
        scanf("%lld",&n);
        int d=0;
        for(int i=0;i<=103;i++)
            if(a[i]==n)
        d=1;
        if(d==1) printf("YES\n");
        else printf("NO\n");
    }
    
    return 0;
}