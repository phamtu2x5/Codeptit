#include<string.h>
#include<stdio.h>
#include<math.h>
#define N 1005
#define ll long long
int t;
void hieu(char xl[],char xb[])
{   
	int a[N]={0},b[N]={0};
	char c[N]={};
    int tmp=-1;
    for(int i=strlen(xb)-1;i>=0;i--)
        b[++tmp]=xb[i]-'0';
    tmp=-1;
    for(int i=strlen(xl)-1;i>=0;i--)
        a[++tmp]=xl[i]-'0';
    int len=tmp;
    tmp=-1;
    int nh=0;
    for(int i=0;i<=len;i++)
        {
            if(a[i]<b[i]+nh)
            {
                c[++tmp]=a[i]+10-nh-b[i]+'0';
                nh=1;
            }
            else
            {
                c[++tmp]=a[i]-nh-b[i]+'0';
                nh=0;
            }
        }
       while(c[len]=='0' && len>=1)
    	len--;
    	for(int i=len;i>=0;i--)
    		printf("%c",c[i]);
    	printf("\n");
}
int main(){
    scanf("%d",&t);
    scanf("\n");
    while(t--){
    	char s1[N]={},s2[N]={};
        gets(s1);
        gets(s2);
        int len1=strlen(s1),len2=strlen(s2);
        if(len1>len2|| (len1==len2 && strcmp(s1,s2)>0))
        	hieu(s1,s2);
        else hieu(s2,s1);
    }
}