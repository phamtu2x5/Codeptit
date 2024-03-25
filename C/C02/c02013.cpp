#include <stdio.h>
#include <math.h>
int m,n;
int main()
{
    scanf("%d%d",&m,&n);
    if(m<=n){
        for(int i=1;i<=m;i++)
            {
                int j=n-i+1;
                while(j>0)
                printf("%d",j--);
                j++;
                for(int a=1;a<=i-1;a++)
                printf("%d",++j);
                printf("\n");
            }
    }
    else{
        for(int i=1;i<=m;i++){
            int j=m-i+1;
            if(j>=n){
                for(int a=1;a<=n;a++)
                printf("%d",j--);
            }
            else{
            int t=j;
            while(t>0)
            printf("%d",t--);
            t++;
            for(int a=1;a<=n-j;a++)
            printf("%d",++t);
            }
            printf("\n");
        }
    }
    }
        

