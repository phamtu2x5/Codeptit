#include <stdio.h>
#include <math.h>
#include<string.h>
int a[20],n;
int main(){
        int t=1,p=4;
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            if(i%2==1){
            for(int j=1;j<=t;j++)
                if(j%2==1)
                printf("%d",j);
            t+=4;
        }
            else{
                for(int j=1;j<=p;j++)
                if(j%2==0)
                printf("%d",j);
                p+=4;
            }
        printf("\n");
        }
    return 0;
}