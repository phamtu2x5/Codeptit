#include <stdio.h>
#include <math.h>
#include<string.h>
#define N 100005
int ngdao(int n){
    int m=n,s=0,sum=0,dem=0;
    while(m>0)
    {
        s=s*10+m%10;
        sum+=m%10;
        if(m%10==6) dem++;
        m/=10;
    }
    if(s!=n || sum%10!=8 || dem<1)
    return 0;
    return 1;
}
int a,b;
int main(){
    scanf("%d%d",&a,&b);
    if(a>b){
        int tg=b;
        b=a;
        a=tg;
    }
    int res=0;
    for(int i=a;i<=b;i++)
        if(ngdao(i)) printf("%d ",i);
    
    return 0;
}