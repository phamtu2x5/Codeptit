#include <stdio.h>
#include <math.h>
#include<string.h>
#define N 1000005
char s[N],a[1000][1000];
int n;
int main()
{   
    gets(s);
    char *token=strtok(s," ");
    while(token!=NULL)
    {
        int d=1;
        for(int i=0;i<n;i++)
            if(strcmp(token,a[i])==0)
            {
                d=0;
                break;
            }
        if(d==1)
         {
            strcpy(a[n],token);
            n++;
         }
         token=strtok(NULL," ");
    }
    for(int i=0;i<n;i++)
    printf("%s ",a[i]);
}
