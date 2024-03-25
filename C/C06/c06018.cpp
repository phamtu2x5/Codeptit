#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 1005
#define ll long long
char s1[N],s2[N];
char res[N][N],ans[N][N];
int main(){
        int t;
        scanf("%d",&t);
        while(t--){
        scanf("\n");
        gets(s1);
        scanf("\n");
        gets(s2);
        int tmp=-1;
        char *token=strtok(s2," ");
        while(token!=NULL){
            strcpy(res[++tmp],token);
            token=strtok(NULL," ");
        }
        token=strtok(s1," ");
        int r=0;
        while(token!=NULL){
        int kt=1;
        for(int i=0;i<=tmp;i++)
            if(strcmp(token,res[i])==0)
                kt=0;
        for(int i=0;i<r;i++)
            if(strcmp(token,ans[i])==0)
                kt=0;
        if(kt==1)  strcpy(ans[r++],token);
        token=strtok(NULL," ");
        }
        for(int i=0;i<r-1;i++)
            for(int j=i+1;j<r;j++)
                if(strcmp(ans[i],ans[j])>0)
                {
                    char s3[N];
                    strcpy(s3,ans[j]);
                    strcpy(ans[j],ans[i]);
                    strcpy(ans[i],s3);
                }
        for(int i=0;i<r;i++)
            printf("%s ",ans[i]);
        printf("\n");
        }
}