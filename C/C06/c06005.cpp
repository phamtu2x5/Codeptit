#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1005
#define ll long long 
char s[N*N],res[N][N];
int a[N];
int sum;
void cd(char s[]){
    for(int i=0;i<strlen(s);i++)
        if('A'<=s[i] && s[i]<='Z')
            s[i]+=32;
}
int main(){
    gets(s);
    char *token=strtok(s," ");
    while(token!=NULL){
        int kt=0;
        for(int i=1;i<=sum;i++){
            cd(token);
            if(strcmp(res[i],token)==0){
                a[i]++;
                kt=1;
            }
        }
        if(kt==0)
            strcpy(res[++sum],token);
        token=strtok(NULL," ");
    }
    for(int i=1;i<=sum;i++)
        printf("%s %d\n",res[i],a[i]+1);
}