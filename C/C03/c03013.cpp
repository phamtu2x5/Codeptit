#include<stdio.h>
#include<math.h>
#define N 10000001
int t,n;
int a[N];
int main(){
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(int i=2;i<=100;i++)
    a[i]=a[i-1]+a[i-2];
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}