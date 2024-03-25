#include<stdio.h>
#include<math.h>
#define N 10001
long long t,n,m;
long long a[N],b[N];
int fibo(int x){
    a[0]=0;
    a[1]=1;
    for(int i=2;i<=100;i++)
    a[i]=a[i-1]+a[i-2];
    for(int i=0;i<=100;i++)
    if(a[i]==x)
        return 1;
        return 0;
}
int check(int a){
    if(a<2) return 0;
    if(a<=3) return 1;
    if(a%2==0|| a%3==0) return 0;
    for(int i=5;i*i<=a;i+=6)
        if(a%i==0 || a%(i+2)==0) return 0;
        return 1;
}
int sum(int a){
    int s=0;
    int b=a;
    while(b>0){
        s+=b%10;
        b/=10;
    }
    return s;
}
int main(){
    scanf("%lld%lld",&m,&n);
    if(m>n){
        long long tg=n;
        n=m;
        m=tg;
    }
    for(int i=m;i<=n;i++)
    if(check(i)&&fibo(sum(i)))
    printf("%d ",i);
}