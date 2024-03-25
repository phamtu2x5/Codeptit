#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
ll x,y,res;
int main(){
    while(scanf("%lld%lld",&x,&y)!=-1)
    {
        ll tmp,kq=0;
        if(x>y) tmp=x-y;
        else tmp=y-x;
        ll denta=1+4*tmp;
        denta=sqrt(denta);
        res=(denta-1)/2;
        if((res+1)*(res+2)<=tmp)
            res++;
        kq=2*res;
        ll ans=tmp-res*(res+1);
        if(ans>0 && ans<=res+1)
            kq++;
        else if(ans>res+1)
            kq+=2;
        printf("%lld\n",kq);
    }
}