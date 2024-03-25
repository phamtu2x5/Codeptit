#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define N 1000005
#define ll long long 
int n;
ll a,b,mi1=N,mi2=N;
ll min(ll a, ll b){
    if(a<b)return a;
    return b;
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%lld %lld",&a,&b);
            mi1=min(mi1,a);
            mi2=min(mi2,b);
        
    }
    printf("%lld",mi1*mi2);
}