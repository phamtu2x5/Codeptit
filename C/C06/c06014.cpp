#include<math.h>
#include<stdio.h>
#include<string.h>
int a,b,t;
char s[10005];
int main(){
    scanf("%d",&t);
    while(t--){
        scanf("\n");
        gets(s);
        char *token=strtok(s," ");
        while(token!=NULL)
        {   
            if(token[0]>='a' && token[0]<='z')
            token[0]-=32;
            for(int i=1;i<strlen(token);i++)
            if('A'<=token[i] && token[i]<='Z')
            token[i]+=32;
            printf("%s ",token);
            token=strtok(NULL," ");
        }
        printf("\n");
    }
}