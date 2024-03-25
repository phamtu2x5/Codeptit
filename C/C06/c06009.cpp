#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1000005
#define ll long long 
char s[N];
int a[10];
int t;
int main(){
    scanf("%d",&t);
    while(t--){
    int res=0;
    scanf("\n");
    gets(s);
    for(int i=strlen(s)-6;i<=strlen(s)-1;i++)
        if('0'<=s[i] && s[i]<='9')
        a[++res]=s[i]-'0';
    int c1=1,c2=1,c3=0,c4=0;
    for(int i=1;i<=4;i++)
        for(int j=i+1;j<=5;j++)
        if(a[i]!=a[j])
        c2=0;
    if(a[1]==a[2]&& a[2]==a[3]&& a[4]==a[5])
        c3=1;
    for(int i=1;i<=4;i++)
        if(a[i]>=a[i+1])
        c1=0;
    int sum=0;
    for(int i=1;i<=5;i++)
        if(a[i]==6 || a[i]==8)
        sum++;
    if(sum==5) c4=1;
    if(c1==1||c2==1||c3==1||c4==1)
        printf("YES\n");
        else printf("NO\n");
    }
}