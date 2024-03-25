#include <stdio.h>
#include <math.h>
int m,n;
char s[100];
int main()
{
    scanf("%d",&m);
    for(int i=0;i<=m-1;i++)
        s[i]='A'+i+m-2;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m-i;j++)
        printf("%c",s[j]--);
        printf("\n");
    }
    
}

