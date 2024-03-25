#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 205
char s[N];
int a[N],b[N],c[N],d[N];
int res;
int main(){
    scanf("%s",s);
    res=strlen(s);
    for(int i=0;i<res;i++)
        c[i+1]=s[i]-'0';
    while(res>1){
    	int len1=res/2,len2=res-len1,tmp=0;
    for(int i=1;i<=N;i++)
        a[i]=0,b[i]=0,d[i]=0;
    for(int i=len1;i>=1;i--)
        a[++tmp]=c[i];
    tmp=0;
    for(int i=res;i>=len2;i--)
        b[++tmp]=c[i];
    tmp=0;
    int nho=0,m;
    for(int i=1;i<=len2;i++){
        m=a[i]+b[i]+nho;
        d[++tmp]=m%10;
        nho=m/10;
    }
    if(nho>0) d[++tmp]=nho;
    for(int i=tmp;i>=1;i--)
        c[tmp-i+1]=d[i];
    for(int i=1;i<=tmp;i++)
        printf("%d",c[i]);
    printf("\n");
    res=tmp;
    }
    return 0;
}