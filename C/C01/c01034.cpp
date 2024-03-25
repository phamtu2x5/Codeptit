#include<stdio.h>
#include<math.h>
int m,n;
int main(){
scanf("%d%d",&m,&n);
int b=sqrt(n);
int a=sqrt(m);
if(a*a<m) a++;
printf("%d\n",b-a+1);
for(int i=a;i<=b;i++)
printf("%d\n",i*i);
}