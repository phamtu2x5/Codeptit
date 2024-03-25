#include<string.h>
#include<stdio.h>
#include<math.h>
#define N 1005
#define ll long long
char res[N][N],ans[N][N];
char s[N];
int tmp,len,cnt;
int sl[N];
int max(int a,int b){
	if(a>b) return a;
	return b;
}
int main(){
	while(scanf("%s",s)!=-1){
		strcpy(res[tmp++],s);
		len=max(len,strlen(s));
	}
	for(int i=0;i<tmp;i++)
		if(strlen(res[i])==len)
		{	
			int kt=0;
			for(int j=0;j<cnt;j++)
				if(strcmp(ans[j],res[i])==0){
					kt=1;
					sl[j]++;
					break;
				}
			if(kt==0) strcpy(ans[cnt++],res[i]);
		}
	for(int i=0;i<cnt;i++)
		printf("%s %d %d\n",ans[i],len,sl[i]+1);
		return 0;
}