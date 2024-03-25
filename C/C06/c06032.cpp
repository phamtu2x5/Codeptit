#include <stdio.h>
#include <string.h>
#include<math.h>
#define N 105
char a[N][N];
int n,t;
int cmp(char a[],char b[]){
	char ab[N],ba[N];
	strcpy(ab,a);
	strcpy(ba,b);
	strcat(ab,b);
	strcat(ba,a);
	return strcmp(ab,ba);
}
int main(){
	scanf("%d",&t);
	while(t--){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("\n%s",a[i]);
	for(int i=1;i<n;i++)
		for(int j=i+1;j<=n;j++)
		if(cmp(a[i],a[j])>0)
		{
			char s[N];
			strcpy(s,a[j]);
			strcpy(a[j],a[i]);
			strcpy(a[i],s);
		}
	for(int i=1;i<=n;i++)
		printf("%s",a[i]);
	printf("\n");
}
}