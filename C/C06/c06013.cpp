#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1000005
#define ll long long 
char s[N];
int a[15];
int t;
int main(){
    scanf("%d",&t);
    while(t--){
    for(int i=0;i<=9;i++)
        a[i]=0;
    int kt=1;
    scanf("\n");
    gets(s);
    for(int i=0;i<strlen(s);i++)
        if(s[i]<'0' || s[i]>'9')
        {
            kt=0;
            break;
        }
    if(kt==0|| s[0]=='0') printf("INVALID\n");
    else 
    {
        for(int i=0;i<strlen(s);i++)
            a[s[i]-'0']=1;
        int k=1;
        for(int i=0;i<=9;i++)
            if(a[i]==0)
            k=0;
        if(k==1) printf("YES\n");
        else printf("NO\n");
    }
    }
}