#include <stdio.h>
#include <math.h>
int m,n;
char s[100];
int main()
{
    scanf("%d%d",&m,&n);
    for(int i=0;i<n;i++)
    s[i]='A'+n-1;
    if(m<=n){
        int x=n-m;
        int y=0;
        for(int i=x-1;i>=0;i--)
        s[i]-=++y;
        printf("%s\n",s);
        for(int i=1;i<m;i++)
            {
                for(int j=0;j<=x;j++)
                    s[j]--;
                x++;
                printf("%s\n",s);
            }
    }
    else
    {
        for(int i=0;i<n;i++)
        s[i]='A'+n-1;
        for(int i=0;i<n;i++)
        printf("%s\n",s);
        for(int i=0;i<m-n;i++)
            {
                for(int j=0;j<=i;j++)
                s[j]--;
                printf("%s\n",s);
            }
    }
}

