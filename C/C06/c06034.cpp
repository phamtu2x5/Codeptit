#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 100005
int t;
char s[N];
int value(char c){
    switch (c)
    {
    case 'I':return 1;
    case 'V':return 5;
    case 'X':return 10;
    case 'L':return 50;
    case 'C':return 100;
    case 'D':return 500;
    case 'M':return 1000;
    default:return 0;
    }
}
int convertLM_to_Decimal(char s[]){
    int res=0;
    for(int i=strlen(s)-1;i>=0;i--)
        {
            res+=value(s[i]);
            if(i>=1)
            if(value(s[i-1])<value(s[i]))
            {
                res-=value(s[i-1]);
                i--;
            }
        }
    return res;
}
int main(){
    scanf("%d",&t);
    while(t--){
        scanf("\n%s",s);
        printf("%d\n",convertLM_to_Decimal(s));

    }

}