#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 1000005
int t;
int n,m,p;
int min1=1e9,min2=1e9;
int a[N],b[N];
int main(){
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
             scanf("%d",&a[i]);
        for(int i=1;i<=n;i++)
            if(a[i]<min1)
            min1=a[i];
        for(int i=1;i<=n;i++)
            if(a[i]<min2 && a[i]!=min1)
            min2=a[i];
         printf("%d %d",min1,min2);
    }
