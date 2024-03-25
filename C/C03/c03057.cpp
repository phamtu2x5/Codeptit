#include <stdio.h>
#include <math.h>
#include<string.h>
#define N 100005
#define ll long long
ll n,res,m;
int t;
ll changeMax(ll a){
    ll b=a;
    ll res=1;
    while(a){
        ll k=a%10;
        if(k==5)
        b+=res;
        a/=10;
        res*=10;
    }
    return b;
}
ll changeMin(ll a){
    ll b=a;
    ll res=1;
    while(a){
        ll k=a%10;
        if(k==6)
        b-=res;
        a/=10;
        res*=10;
    }
    return b;
}
int main(){
   scanf("%d",&t);
   while(t--){
      scanf("%lld%lld",&m,&n);
      printf("%lld %lld\n",changeMin(m)+changeMin(n),changeMax(m)+changeMax(n));
   }
}