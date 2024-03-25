#include <stdio.h>
#include <math.h>
#include<string.h>
#define N 1000005
int a[1000][1000],n;
int main()
{   
     scanf("%d",&n);
    for(int i=0;i<n;i++)
    a[0][i]=i;
    for(int i=1;i<n;i++)
        for(int j=0;j<n;j++)
        if(a[i-1][j]>0)
            a[i][j]=a[i-1][j]-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            printf("%d ",a[i][j]);
            printf("\n");
}
}