#include<stdio.h>
#include<math.h>
#define N 10001
long long n;
int t;
int ck(long long a){
   long long b=a;
   while(b>0){
    if((b%10)%2!=0)
    return 0;
    b/=10;
   }
   return 1;
}
int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        if(n%2==0 && ck(n))
        printf("YES\n");
        else printf("NO\n");
    }
}