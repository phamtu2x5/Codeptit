#include <stdio.h>
#include <math.h>
int m,n;
char s[100];
int main()
{
    scanf("%d%d",&m,&n);
    for(int i=0;i<n;i++)
     s[i]='A'+i-1;
    printf("%s\n",s);
    for(int i=1;i<m;i++)
        {
            for(int j=n-1-i;j>=0;j--)
            s[j]++;
            printf("%s\n",s);
        }
}

