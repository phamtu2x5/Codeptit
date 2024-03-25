#include<stdio.h>
#include<math.h>
long long n;
int t;

long long tn(long long a){
    long long b=a;
    long long s=0,ss=0;
    while(b>0){
        if((b%10)%2==0) return 0;
        s=s*10+b%10;
        ss+=b%10;
        b/=10;
    }
    if(s!=a|| ss%2==0) return 0;
    return 1;
}

int main(){
scanf("%d",&t);
while(t--){
    scanf("%lld",&n);
   if(tn(n)) printf("YES\n");
   else printf("NO\n");
}
}
