#include <stdio.h>
#include <math.h>
#include<string.h>
int a[20],n;
int main(){
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
        int t=n-1,p=i;
        printf("%d ",i);
        for(int j=2;j<=i;j++){
            printf("%d ",p+t);
            p+=t;
            t--;}
        printf("\n");
        }
        
    return 0;
}