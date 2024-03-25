#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 1000005
int t;
int n,m,p;
int max1=-1e9,max2=-1e9;
int a[N],b[N];
int main(){
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
             scanf("%d",&a[i]);
        for(int i=1;i<=n;i++)
            if(a[i]>max1)
            max1=a[i];
        for(int i=1;i<=n;i++)
            if(a[i]>max2 && a[i]!=max1)
            max2=a[i];
         printf("%d %d",max1,max2);
    }
