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
    scanf("\n");
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++)
        if(s[i]!='0'&&s[i]!='1'&&s[i]!='8'&&s[i]!='9')
        d=0;
    if(d==0) printf("INVALID\n");
    else{
        for(int i=0;i<strlen(s);i++)
        if(s[i]=='8'|| s[i]=='9') s[i]='0'; 
        int i=0;
        while(s[i]=='0') i++;
        if(i==strlen(s))
        printf("INVALID\n");
        else 
        {
        for(int j=i;j<strlen(s);j++)
        printf("%c",s[j]);
        printf("\n");
        }
    }
    
}
}