#include<stdio.h>
#include<math.h>
#define N 10001
long long t,n;
long long a[N];
int main(){
    scanf("%lld",&n);
    a[0]=0;
    a[1]=1;
    for(int i=2;i<=100;i++)
    a[i]=a[i-1]+a[i-2];
    for(int i=0;i<=100;i++)
    if(a[i]==n){
        printf("1");
        return 0;
    }
    printf("0");
}