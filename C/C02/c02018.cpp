#include <stdio.h>
#include <math.h>
#include<string.h>
int a[20],n;
int main(){
    scanf("%d",&n);
    int t=1,p=n-1;
    for(int i=1;i<=n;i++){
        for(int x=1;x<=p;x++)
            printf("~");
        p--;
        for(int j=1;j<=t;j++)
            if(j%2==1) printf("%d",j);
        if(i!=1){
            for(int j=t-1;j>=1;j--)
            if(j%2==1)
            printf("%d",j);
        }
        t+=2;
        printf("\n");
    }
    return 0;
}