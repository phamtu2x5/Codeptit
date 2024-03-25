#include<math.h>
#include<stdio.h>
#include<string.h>
int a,b,t;
char s[10005],c[10005],d[10005];
int main(){
        a=0;
        gets(s);
        char *token=strtok(s," ");
        while(token!=NULL)
        {
         if('A'<=token[0] && token[0]<='Z')
         c[++a]=token[0]+32;
         else c[++a]=token[0];
         strcpy(d,token);
         token=strtok(NULL," ");
        }
        for(int i=0;i<strlen(d);i++)
        if('A'<=d[i] &&d[i]<='Z')
        d[i]=d[i]+32;
        for(int i=1;i<a;i++)
        printf("%c",c[i]);
        printf("%s",d);
        printf("@ptit.edu.vn");
    }
