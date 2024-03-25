#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define N 105
#define ll long long 
char s[N];
int t[N],p[N];
int res;
int main(){
    scanf("%s",s);
    for(int i=0;i<N;i++)
        t[i]=-1;
    for(int i=0;i<=51;i++)
        if(t[s[i]-'A']!=-1)
            p[s[i]-'A']=i;
        else t[s[i]-'A']=i;
    for(int i=0;i<=51;i++)
        for(int j=0;j<=51;j++)
            if(t[s[i]-'A']<t[s[j]-'A'] && t[s[j]-'A']<p[s[i]-'A'] && p[s[i]-'A']<p[s[j]-'A'])
                res++;
    printf("%d",res/4);
}