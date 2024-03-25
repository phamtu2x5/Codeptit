#include<math.h>
#include<string.h>
#include<stdio.h>
char s1[1005],s2[1005],a[1005],b[1005],c[1005];
int t;
int main(){
  scanf("%d",&t);
  while(t--){
  scanf("\n");
  scanf("%s",s1);
  scanf("\n");
  scanf("%s",s2);
  for(int i=1;i<1005;i++){
    a[i]=0;b[i]=0;c[i]=0;
  }
  int x=strlen(s1);
  int y=strlen(s2);
  int d=0;
  for(int i=x-1;i>=0;i--)
  a[++d]=s1[i]-'0';
  d=0;
  for(int i=y-1;i>=0;i--)
  b[++d]=s2[i]-'0';
  d=0;
  int m=0,nh=0,xx;
  if(x>=y) xx=x;
  else xx=y;
  for(int i=1;i<=xx;i++)
  {
    int m=a[i]+b[i]+nh;
    nh=m/10;
    c[++d]=m%10;
  }
  if(nh>0) c[++d]=nh;
  for(int i=d;i>=1;i--)
  printf("%d",c[i]);
  printf("\n");
  }
}