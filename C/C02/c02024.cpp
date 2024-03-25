#include <stdio.h>
#include <math.h>
int m,n;
char s[100];
int main()
{
    scanf("%d%d",&m,&n);
    if(m<=n){
    for(int i=0;i<m;i++){
        for(int j=i;j<n;j++)
        printf("%c",'A'+j);
        int a=i;
        while(a>0) printf("%c",'A'+--a);
        printf("\n");
    }
    }
     else{
        for(int i=0;i<m;i++)
        {
            if(i<n-1)
            {
             for(int j=i;j<n;j++)
                printf("%c",'A'+j);
             int a=i;
             while(a>0) printf("%c",'A'+--a);
                printf("\n");   
            }
            else{
                int j=n-1;
                while(j>=0)
                printf("%c",'A'+j--);
                printf("\n");
            }
        }
     } 
}

