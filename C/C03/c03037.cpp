#include<stdio.h>
#include<math.h>
long long n;
int t;
int m[11];
int p[11];
int check(int a){
    if(a<2) return 0;
    if(a<=3) return 1;
    if(a%2==0|| a%3==0) return 0;
    for(int i=5;i*i<=a;i+=6)
        if(a%i==0 || a%(i+2)==0) return 0;
        return 1;
}

int main(){
    scanf("%lld",&n);
    long long b=0,x=n;
    while(x>0){
        b=b*10+x%10;
        x/=10;
    }
    while(n>0){
        if(check(n%10))
        m[n%10]++;
        n/=10;
    }
    while(b>0){
        if(check(b%10)){
        if(p[b%10]==0){
        printf("%lld %d\n",b%10,m[b%10]);
        p[b%10]=1;
        }
    }   b/=10;
}
}