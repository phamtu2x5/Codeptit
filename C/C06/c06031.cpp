#include<string.h>
#include<stdio.h>
#include<math.h>
#define N 1005
int a[N],f[N],len;
int max(int x,int y){
	if(x>y) return x;
	return y;
}
int main(){
	char s[N];
	scanf("%s",s);
	for(int i=0;i<strlen(s);i++)
		a[i]=s[i]-'a';
	f[0]=1;
	for(int i=0;i<strlen(s)-1;i++)
		for(int j=i+1;j<strlen(s);j++)
			if(a[j]>a[i])
			{
			f[j]=max(f[j],f[i]+1);
			len=max(len,f[j]);
			}
			else{
			f[j]=max(f[j],1);
			len=max(len,f[j]);
			}
	printf("%d",26-len);
}