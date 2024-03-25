#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 1000005
int t;
char s[N];
int main(){
    scanf("%d",&t);
    while(t--){
        int d=1;
        scanf("%s",s);
        int l=strlen(s)-1;
        if((s[0]-'0')*2!=(s[l]-'0') && (s[0]-'0')!=(s[l]-'0')*2)
        d=0;
        for(int i=1;i<=l/2;i++)
            if(s[i]!=s[l-i]) d=0;
        if(d==1) printf("YES\n");
        else printf("NO\n");
    }
}