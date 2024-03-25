#include <stdio.h>
#include <math.h>
#include<string.h>
#define N 1000005
char s[N],a[1000][1000];
int n;
int main()
{   
    scanf("%d",&n);
    while(n--){
        scanf("\n");
        gets(s);
        int d=1;
        int l=strlen(s);
        for(int i=0;i<l/2;i++)
            if(s[i]!=s[l-i-1]) d=0;
        for(int i=0;i<l;i++)
            if((s[i]-'0')%2!=0) d=0;
        if(d==1) printf("YES\n");
        else printf("NO\n");
    }
}
