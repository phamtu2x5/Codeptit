#include <stdio.h>
#include <math.h>
#include<string.h>
#define N 1000005
char s[N],a[N];
int main()
{   
    gets(s);
    scanf("\n");
    scanf("%s",a);
    char *token=strtok(s," ");
    while(token!=NULL)
    {
        if(strcmp(token,a)!=0)
        printf("%s ",token);
        token=strtok(NULL," ");
    }
}
