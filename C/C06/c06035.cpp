#include<string.h>
#include<stdio.h>
#include<math.h>
#define N 10005
#define ll long long
char s[N];
int l=0,tmp=0;
int check(char x[])
    {
    int len=strlen(x),res=0;
    for(int i=0;i<len/2;i++)
        if(x[i]!=x[len-i-1])
            res++;
    return res;
    }
int t;
int main(){
    scanf("%d",&t);
    scanf("\n");
    while(t--){
        scanf("%s",s);
        if(check(s)>=2)
            printf("NO\n");
        else if(check(s)==0 && strlen(s)%2==0)
            printf("NO\n");
        else printf("YES\n");
    }
return 0;
}