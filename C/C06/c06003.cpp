#include <stdio.h>
#include <math.h>
#include<string.h>
#define N 1000005
int t;
char s[N];
int main()
{   
    scanf("%d",&t);
    while(t--){
        int sum=0;
        scanf("\n");
        gets(s);
        char *k=strtok(s," ");
        while(k!=NULL){
            sum++;
            k=strtok(NULL," ");
        }
        printf("%d\n",sum);
    }
}
