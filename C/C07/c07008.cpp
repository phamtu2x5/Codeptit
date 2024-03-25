#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 10005
int t;
int ma,mi;
int max(int a,int b){
    if(a>b) return a;
    return b;
}
int min(int a,int b){
    if(a<b) return a;
    return b;
}
char s1[100],s2[100];
int main(){
    scanf("%d",&t);
    while(t--){
        int a[N]={0};
        ma=0;
        mi=N;
        scanf("\n");
        gets(s1);
        scanf("\n");
        gets(s2);
        strcat(s1," + ");
        strcat(s1,s2);
        char *s=strtok(s1," ");
        while(s!=NULL){
        if(strcmp(s," + ")!=0)
        {
            int heso=0,mu=0;
            int i=0;
            while('0'<=s[i] && s[i]<='9'){
                heso=heso*10+(s[i]-'0');
                i++;
            }
            while(s[i]<'0' || s[i]>'9')
                i++;
            while(s[i]>='0' && s[i]<='9' && i<strlen(s)){
                mu=mu*10+(s[i]-'0');
                i++;
            }
            a[mu]+=heso;
            ma=max(ma,mu);
            mi=min(mi,mu);
        }
        s=strtok(NULL," ");
        }
        for(int i=ma;i>=mi;i--)
            if(a[i]>0)
            {
            if(i!=mi)
                printf("%d*x^%d + ",a[i],i);
            else printf("%d*x^%d",a[i],i);
        }
        printf("\n");
    }
    return 0;
}
