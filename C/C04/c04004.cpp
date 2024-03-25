#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 1000005
int t;
int n;
long long a[100];
int main(){
    a[0]=0;
    a[1]=1;
    for(int i=2;i<=95;i++)
    a[i]=a[i-1]+a[i-2];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        printf("%lld\n",a[n]);
        
    }
}