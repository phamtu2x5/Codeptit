#include <stdio.h>
#include <string.h>
#include<math.h>
#define N 405
char s1[N],s2[N];
char s[N];
int n;
void mix(char p[],char q[],char c[]){
	int tmp=0;
	for(int i=0;i<n;i++)
		{
		c[tmp++]=q[i];
		c[tmp++]=p[i];
		}
}
void solve(char s[],char s1[],char s2[]){
	char c[N]={};
	mix(s1,s2,c);
	char xaubd[N];
	strcpy(xaubd,c);
	int res=1;
	while(strcmp(c,s)!=0)
	{
		strncpy(s1,c,n);
		strncpy(s2,c+n,n);
		mix(s1,s2,c);
		res++;
		if(strcmp(c,xaubd)==0){
			res=-1;
			break;
		}
	}
	printf("%d\n",res);
}
int main(){
	scanf("%d",&n);
	while(n){
		scanf("\n%s\n%s\n%s",s1,s2,s);
		solve(s,s1,s2);
		scanf("%d",&n);
	}
}