#include <stdio.h>
#include<math.h>
#include<string.h>
char res[55][55];
void convert(char s[]){
	char tg=s[0];
	for(int i=0;i<strlen(s)-1;i++)
		s[i]=s[i+1];
		s[strlen(s)-1]=tg;
}
int solve(int l,int t,int n){
	int cnt=0;
	char a[55][55];
	for(int i=1;i<=t;i++)
		strcpy(a[i],res[i]);
	for(int i=0;i<l;i++)
		convert(a[1]);
	for(int i=2;i<=t;i++){
		int cntt=0;
		while(strcmp(a[1],a[i])!=0)
			{
				cnt++;
				cntt++;
				if(cntt==n)
					return -1;
				convert(a[i]);
			}
	}
	return cnt;
}
int main() {
	int t,n,ans=1e9;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		scanf("\n");
		scanf("%s",res[i]);
}	
	n=strlen(res[1]);
	for(int i=0;i<n;i++)
	{
		int tmp=i;
		if(solve(i,t,n)==-1)
			{
				printf("-1");
				return 0;
			}
	
		else tmp+=solve(i,t,n);
		if(tmp<ans)
			ans=tmp;
	}
	printf("%d",ans);
	return 0;
}
