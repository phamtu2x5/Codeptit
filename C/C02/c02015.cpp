#include <stdio.h>
#include <math.h>
#include<string.h>
int a[20],n;
int main(){
        int t=1;
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=t;j++)
                printf("%d",j);
                printf("\n");
            t+=2;
        }
    return 0;
}