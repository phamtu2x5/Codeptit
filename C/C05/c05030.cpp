#include <stdio.h>
#include <string.h>
#include<math.h>
#define N 1005
char a[N][N];
int m,n,t;
void solve(char a[][N],int m,int n){
	int res=0;
	int h1[N]={0};
	int h2[N]={0};
	int c1[N]={0};
	int c2[N]={0};
	for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
				if(a[i][j]=='1')
				{
					h1[i]++;
					c1[j]++;
				}
				else if(a[i][j]=='2')
				{
					h2[i]++;
					c2[j]++;
				}
		}
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				if(a[i][j]=='1')
					res+=h2[i]*c2[j];
				else if(a[i][j]=='2')
					res+=h1[i]*c1[j];
		printf("%d\n",res);
}
int main(){
	scanf("%d",&t);
	while(t--){
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		scanf("\n%s",a[i]);
	solve(a,m,n);
}
}