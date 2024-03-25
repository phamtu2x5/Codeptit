#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 100005
#define ll long long
int t,n;
ll max(ll x, ll y){
    if(x>y) return x;
    return y;
}
ll a[N],f[N],sum,best;
int main(){
        scanf("%d",&t);
        while(t--){
        sum=-1e10;
        best=-1e10;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
            scanf("%lld",&a[i]);
        for(int i=1;i<=n;i++){
            sum=max(a[i],sum+a[i]);
            best=max(best,sum);
        }
        printf("%lld\n",best);
        }
}