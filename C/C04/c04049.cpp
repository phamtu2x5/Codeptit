#include <stdio.h>
#include <math.h>
#include<string.h>
#define N 1005
#define ll long long
ll gcd(ll x, ll y){
    if(y==0) return x;
    return gcd(y,x%y);
}
ll lcm(ll x, ll y){
    return (x*y)/gcd(x,y);
}
int t,n;
ll a[N];
int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
            scanf("%lld",&a[i]);
        a[0]=1;
        for(int i=1;i<=n;i++)
            printf("%lld ",lcm(a[i-1],a[i]));
        printf("%lld\n",a[n]);
    }
}