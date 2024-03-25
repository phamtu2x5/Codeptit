#include<stdio.h>
#include<math.h>
long long a,b,t;
long long gcd(long long a,long long b){
    if(b==0)
    return a;
    return gcd(b,a%b);
}
int main(){
    scanf("%lld",&t);
    while(t--){
    scanf("%lld%lld",&a,&b);
    printf("%lld %lld\n",a*b/gcd(a,b),gcd(a,b));
    }
}