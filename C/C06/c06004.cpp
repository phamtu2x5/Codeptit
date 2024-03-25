#include <stdio.h>
#include <math.h>
#include<string.h>
#define N 1000005
int t,a,b,c;
char s[N];
int main()
{   
    gets(s);
    for(int i=0;i<strlen(s);i++)
    if(('A'<=s[i] && s[i]<='Z') || ('a'<=s[i] && s[i]<='z'))
        a++;
    else if('0'<=s[i] && s[i]<='9')
        b++;
    else c++;
    printf("%d %d %d",a,b,c);
}
