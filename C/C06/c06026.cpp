#include<string.h>
#include<stdio.h>
#include<math.h>
#define N 10005
#define ll long long
char s[N];
char res[N][100];
char ans[N][100];
int a[N];
int l=0,tmp=0;
int check(char x[])
    {
    int len=strlen(x);
    for(int i=0;i<len/2;i++)
        if(x[i]!=x[len-i-1])
        return 0;
    return 1;
    }
int main(){
    while(scanf("%s",s)!=-1)
        {
        if(check(s)){
          strcpy(res[tmp++],s);
          int len=strlen(s);
          if(len>l)
        	l=len;
}
}
	int n=0;
	for(int i=0;i<tmp;i++)
		if(strlen(res[i])==l)
			{
				int kt=0;
				for(int j=0;j<n;j++)
					if(strcmp(ans[j],res[i])==0){
						a[j]++;
						kt=1;
					}
				if(kt==0) strcpy(ans[n++],res[i]);
			}
	for(int i=0;i<n;i++)
		printf("%s %d\n",ans[i],a[i]+1);
return 0;
}