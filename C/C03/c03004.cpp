#include<stdio.h>
#include<math.h>
long long a,b;
long long gcd(long long m,long long n){
    if(n==0) return m;
    return gcd(n,m%n);
} 
int main(){
    scanf("%lld%lld",&a,&b);
    printf("%lld\n%lld",gcd(a,b),a*b/gcd(a,b));

}
