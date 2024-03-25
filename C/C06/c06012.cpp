#include <stdio.h>
#include <math.h>
#include<string.h>
#define N 1000005
char s[N];
int n;
int check(int a){
    if(a<2) return 0;
    if(a<=3) return 1;
    if(a%2==0|| a%3==0) return 0;
    for(int i=5;i*i<=a;i+=6)
        if(a%i==0 || a%(i+2)==0) return 0;
        return 1;
}

int main()
{   
    scanf("%d",&n);
    while(n--){
        int sum=0;
        scanf("\n");
        gets(s);
        int d=1;
        int l=strlen(s);
        for(int i=0;i<l/2;i++)
            if(s[i]!=s[l-i-1]) d=0;
        for(int i=0;i<l;i++)
            if(check(s[i]-'0')==0)
            {
                d=0;
                break;
            }
        if(d==1) printf("YES\n");
        else printf("NO\n");
    }
}
