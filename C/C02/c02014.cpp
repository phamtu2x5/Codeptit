#include <stdio.h>
#include <math.h>
#include<string.h>
int a[20],n;
int main(){

        scanf("%d",&n);
        int m=2*n-1;
        for(int i=1;i<=m;i++)
        a[i]=n;
        for(int i=1;i<=m;i++)
            printf("%d",a[i]);
            printf("\n");
        for(int i=1;i<n;i++)
        {
            int p=i+1,t=2*n-p;
            for(int j=p;j<=t;j++)
                a[j]--;
            for(int j=1;j<=m;j++)
                printf("%d",a[j]);
            printf("\n");
        }
        for(int i=n-1;i>=1;i--)
        {
            int p=i+1,t=2*n-p;
            for(int j=p;j<=t;j++)
                a[j]++;
            for(int j=1;j<=m;j++)
                printf("%d",a[j]);
            printf("\n");
        }
    return 0;
}