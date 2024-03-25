#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 100005
#define ll long long
char s[N];
int main(){
        int t;
        scanf("%d",&t);
        while(t--){
        scanf("\n");
        gets(s);
        int kt=1,even=0,odd=0,len=strlen(s);
        for(int i=0;i<len;i++)
            if(s[i]<'0' || s[i]>'9')
            kt=0;
            else if((s[i]-'0')%2==1) odd++;
            else even++;
        if(s[0]=='0') kt=0;
        if(kt==0)
            printf("INVALID\n");
        else{
            if(len&1){
                if(odd>even)
                    printf("YES\n");
                else printf("NO\n");
            }
            else
            {
                if(even>odd)
                    printf("YES\n");
                else printf("NO\n");
            }
        }
        
        }
}