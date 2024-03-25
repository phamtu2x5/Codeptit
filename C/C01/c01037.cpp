#include<stdio.h>
#include<math.h>
long long m,n;
int main(){
scanf("%lld%lld",&m,&n);
if(m>n){
    long long tg=n;
    n=m;m=tg;
}
long long ssh=n-m+1;
long long s=(m+n)*ssh/2;
printf("%lld",s);
}