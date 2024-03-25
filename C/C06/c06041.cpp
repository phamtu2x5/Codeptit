#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define N 100005
#define ll long long 
char s[N];
int a[N];
int main(){
    gets(s);
    int l=strlen(s)-1;
    for(int i=0;i<=l;i++)
        a[i]=s[i]-' ';
    for(int i=l-1;i>=0;i--)
        if(a[i]<a[i+1])
            a[i]=a[i+1];
    for(int i=0;i<=l;i++)
        if(s[i]==(a[i]+' '))
            printf("%c",s[i]);
}