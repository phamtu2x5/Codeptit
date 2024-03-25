#include <stdio.h>
#include <math.h>
#include<string.h>
int a[20],n;
int main(){
        scanf("%d",&n);
        printf("a\n");
        int t=1,p=2;
        for(int i=2;i<=n;i++)
        {   
            t+=i;
            if(i%2==0)
            for(int j=t;j>=p;j--)
            printf("%c ",'a'+j-1);
            else 
            for(int j=p;j<=t;j++)
            printf("%c ",'a'+j-1);
            p=t+1;
            printf("\n");
        }
        
    return 0;
}