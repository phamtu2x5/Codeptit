#include <stdio.h>
#include <math.h>
long long ngdao(long long n){
    long long m=n,s=0;
    while(m>0){
        s=s*10+m%10;
        m/=10;
    }
    return s;
}
long long n;
int a[20];
int main(){

        scanf("%lld",&n);
        long long m=ngdao(n);
        while(n>0)
        {
            int x=n%10;
            if(x==2||x==3||x==5||x==7)
            a[x]++;
            n/=10;
        }
        while(m>0)
        {
            int x=m%10;
            if(x==2||x==3||x==5||x==7)
            if(a[x]>0){
                printf("%d %d\n",x,a[x]);
                a[x]=0;
            }
            m/=10;
        }
    return 0;
}