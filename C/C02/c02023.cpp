#include <stdio.h>
#include <math.h>
int m,n;
char s[100];
int main()
{
    scanf("%d%d",&m,&n);
    if(m<=n){
        for(int i=0;i<n;i++)
        s[i]='a'+n-1;
        printf("%s\n",s);
        for(int i=1;i<m;i++)
        {
            for(int j=i;j<n;j++)
                s[j]--;
            printf("%s\n",s);
        }
    }
    else{
        for(int i=0;i<n;i++)
        s[i]='a'+m-1;
        printf("%s\n",s);
        for(int i=1;i<m;i++)
        {
            if(i<n)
            {
                for(int j=i;j<n;j++)
                s[j]--;
                printf("%s\n",s);
            }
            else printf("%s\n",s);
        }
    }
    }
        

