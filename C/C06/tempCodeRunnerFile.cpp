#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 10005
#define ll long long
char s[N];
int tcs;
int main(){
    scanf("%d",&tcs);
    while(tcs--){
        scanf("\n");
        gets(s);
        char *ho=strtok(s," ");
        printf("%s",s);
        char *ten=strtok(NULL," ");
        while(ten!=NULL)
        {
            if('a'<=ten[0] && ten[0]<='z')
                ten[0]-=32;
            for(int i=1;i<strlen(ten);i++)
                if('A'<=ten[i]&&ten[i]<='Z')
                    ten[i]+=32;
            printf("%s",ten);
            ten=strtok(NULL," ");
            if(ten!=NULL)
                printf(" ");
        }
        for(int i=0;i<strlen(ho);i++)
            if('a'<=ho[i] && ho[i]<'z')
                ho[i]-=32;
        printf(", %s\n",ho);
    }
}