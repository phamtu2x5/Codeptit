#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 10005
#define ll long long
char s1[N],s2[N];
int kt(char sx[]){
    char s[N];
    strcpy(s,sx);
    for(int i=0;i<strlen(s);i++)
        if('A'<=s[i] && s[i]<='Z')
            s[i]+=32;
    if(strcmp(s,s2)!=0) return 1;
    return 0;      
}
int main(){
        int tcs;
        scanf("%d",&tcs);
        for(int t=1;t<=tcs;t++){
        scanf("\n");
        gets(s1);
        scanf("\n");
        gets(s2);
        printf("Test %d: ",t);
        for(int i=0;i<strlen(s2);i++)
            if('A'<=s2[i] && s2[i]<='Z')
                s2[i]+=32;
        char *token=strtok(s1," ");
        while(token!=NULL){
            if(kt(token)) printf("%s ",token);
            token=strtok(NULL," ");
        }
        printf("\n");
        }
}