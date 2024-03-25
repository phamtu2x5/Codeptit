#include <stdio.h>
#include <math.h>
#include<string.h>
#define N 1000005
int t;
long long n;
int a[N];
int main()
{   
     scanf("%lld",&n);
    if(n==0) printf("0");
    else{
         while(n>0){
        a[++t]=n%2;
        n/=2;
    }
    for(int i=t;i>=1;i--)
    printf("%d",a[i]);
    }
}