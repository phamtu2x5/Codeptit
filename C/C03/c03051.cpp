#include<stdio.h>
#include<math.h>
#define N 1000005
int t;
long long l,r,s;
int n[N],sum[N];
void sangnt(){
    for(int i=2;i<=N;i++)
        n[i]=1;
    for(int i=2;i*i<=N;i++)
        if(n[i]==1)
            for(int j=i*i;j<=N;j+=i)
                n[j]=0;
}
void dem(){
    for(int i=2;i<=N;i++)
        if(n[i]==1)
        sum[i]=sum[i-1]+1;
        else sum[i]=sum[i-1];
}
int main(){
    sangnt();
    dem();
    scanf("%d",&t);
    while(t--){
        scanf("%lld%lld",&l,&r);
    long long a=sqrt(l),b=sqrt(r);
    if(a*a<l) a++;
    if(n[a]==1) s=sum[b]-sum[a]+1;
    else s=sum[b]-sum[a];
    printf("%lld\n",s);
    }
    }
