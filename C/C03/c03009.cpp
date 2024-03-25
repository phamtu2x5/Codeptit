#include<stdio.h>
#include<math.h>
#define N 10000001
int t,m,n;
int sum(int a){
 int s=0;
    for(int i=1;i*i<=a;i++)
    if(a%i==0){
        if(i*i==a) s+=i;
        else s+=i+a/i;
    }
    s-=a;
    if(s==a) return 1;
    return 0;
}
int main(){
    scanf("%d%d",&m,&n);
    if(m>n){
        int tg=n;
        n=m;m=tg;
    }
        for(int i=m;i<=n;i++)
        if(sum(i)==1)
        printf("%d ",i);
    
}