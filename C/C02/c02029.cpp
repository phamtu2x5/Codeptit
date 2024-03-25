#include <stdio.h>
#include <math.h>
#include<string.h>
int a[20],n;
int main(){
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
        int t=n-1,p=i;
        printf("%c ",'A'+i-1);
        for(int j=2;j<=i;j++){
            printf("%c ",'A'+p+t-1);
            p+=t;
            t--;}
        printf("\n");
        }
        
    return 0;
}