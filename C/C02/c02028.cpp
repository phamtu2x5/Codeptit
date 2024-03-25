#include <stdio.h>
#include <math.h>
int m,n;
char s[100];
int main()
{
    scanf("%d",&m);
    for(int i=0;i<=m-1;i++)
    s[i]='A'+2*i;
    for(int i=0;i<m;i++)
        {
            for(int j=i;j<m;j++)
            printf("%c",s[j]);
            printf("\n");
        }
    
}

