#include<stdio.h>
#include<math.h>
long long a,b;
long long gcd(long long m,long long n){
    if(n==0) return m;
    return gcd(n,m%n);
} 
int main(){
    scanf("%lld%lld",&a,&b);
    for(int i=a;i<b;i++)
    for(int j=i+1;j<=b;j++)
    if(gcd(i,j)==1)
    printf("(%d,%d)\n",i,j);

}
