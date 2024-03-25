#include<stdio.h>
#include<math.h>
int t;
long long n;
int utl(long long m){
    if(m%2==0) return 0;
    int c=0,l=0;
    long long b=m;
    while(b>0){
        if((b%10)%2==0) c++;
        else l++;
        b/=10;
    }
    if(l<=c) return 0;
    return 1;
}
int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
     if(utl(n)) printf("YES\n");
     else printf("NO\n");
    }
    }
