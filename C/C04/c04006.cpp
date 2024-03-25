#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 1000005
int t;
int n,max;
int a[N];
int main(){

        scanf("%d",&n);
        for(int i=0;i<n;i++)
             scanf("%d",&a[i]);
        for(int i=n-1;i>=0;i--)
        printf("%d ",a[i]);
    }
