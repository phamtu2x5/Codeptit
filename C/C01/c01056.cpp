#include<stdio.h>
#include<math.h>
long long m,n,t,s;
int main(){
scanf("%lld",&t);
while(t--){
    long long d=1;
    scanf("%lld",&n);
    while(n>=10){
    s=n%10;
    n/=10;
    if(s<(n%10)) d=0;
    }
    if(d==1) printf("YES\n");
    else printf("NO\n");
}
}