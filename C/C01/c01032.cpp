#include<stdio.h>
#include<string.h>
#include<math.h>
int t;
long long n,i,s;
int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        i=2;
        s=1;
        while(n>1){
            long long d=0;
            while(n%i==0)
                {
                    d++;
                    n/=i;
                }
            if(d>0) s*=i;
            i++;
        }
        printf("%lld\n",s);
    }
}