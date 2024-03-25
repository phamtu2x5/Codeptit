#include <stdio.h>
#include <math.h>
#include<string.h>
int a[20],n;
int main(){
        int t=3;
        scanf("%d",&n);
        printf("%c\n",'A'-1);
        for(int i=2;i<=n;i++){
        for(int j=1;j<=t;j++)
            if(j%2==1) printf("%c",'A'+j-2);
        for(int j=t-1;j>=1;j--)
            if(j%2==1) printf("%c",'A'+j-2);
        t+=2;
        printf("\n");
        }
    return 0;
}