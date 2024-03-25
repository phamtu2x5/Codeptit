#include <stdio.h>
#include <math.h>
#include<string.h>
#define N 100005
#define ll long long
ll n,m;
int t;
ll gcd(ll a,ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int main(){
   scanf("%d",&t);
   while(t--){
    ll res=1;
    scanf("%lld",&n);
    for(ll i=2;i<=n;i++)
        res=res*i/gcd(res,i);
    printf("%lld\n",res);
   }
}