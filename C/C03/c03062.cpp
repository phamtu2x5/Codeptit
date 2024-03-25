#include<stdio.h>
#include<math.h>
#define ll long long
ll gcd(ll a,ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}
ll lcm(ll a,ll b){
    return (a*b)/gcd(a,b);
}
int t;
ll n,m,res;
int main(){
    scanf("%d",&t);
    while(t--){
        res=1;
        scanf("%lld%lld",&n,&m);
        if(n>m){
            ll tg=m;
            m=n;
            n=tg;
        }
        for(ll i=n;i<=m;i++)
            res=lcm(res,i);
        printf("%lld\n",res);
    }
}