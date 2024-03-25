#include <stdio.h>
#include <string.h>
#include<math.h>
#define N 105
int t,kt,cnt[10];
char s[N];
int xuli(char s[],int i,int l, int cnt[]){
	int xl[10];
	for(int i=0;i<=9;i++)
		xl[i]=0;
	int tmp=0;
	for(int j=l-1;j>=0;j--)
		{
			int m=i*(s[j]-'0')+tmp;
			tmp=m/10;
			xl[m%10]++;
		}
	if(tmp>=10){
		xl[tmp%10]++;
		xl[tmp/10]++;
	}
	else if(tmp>0)
		xl[tmp]++;
	for(int j=0;j<=9;j++)
		if(xl[j]!=cnt[j])
		return 0;
	return 1;
}
int main(){
	scanf("%d",&t);
	while(t--){
		for(int i=0;i<=9;i++)
			cnt[i]=0;
		int kt=1;
		scanf("\n%s",s);
		int n=strlen(s);
		for(int i=0;i<n;i++)
			cnt[s[i]-'0']++;
		for(int i=2;i<=n;i++)
			if(xuli(s,i,n,cnt)==0)
			kt=0;
		if(kt==1) printf("YES\n");
		else printf("NO\n");
	}

}