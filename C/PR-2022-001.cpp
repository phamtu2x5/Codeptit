#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define N 10000
ll u,d,n,res;
int main(){
    scanf("%lld%lld%lld",&u,&d,&n);
    res=n*u+n*(n-1)*d/2;
    printf("%lld",res);
}