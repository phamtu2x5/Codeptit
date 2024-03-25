#include <stdio.h>
#include <math.h>
#include<string.h>
#define N 100005
long long n,s;
int t;
int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        for(long long i=2;i*i<=n;i++)
        {
            if(n%i==0)
            while(n%i==0){
                s=i;
                n/=i;
            }
        }
        if(n>1 && n>s)
            s=n;
            printf("%lld\n",s);
    }
    
    return 0;
}