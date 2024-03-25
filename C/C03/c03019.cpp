#include <stdio.h>
#include <math.h>
#include<string.h>
#define N 100005
int n;
int t;
int ngdao(int n){
    int m=n,s=0,sum=0;
    while(m>0)
    {
        s=s*10+m%10;
        sum+=m%10;
        m/=10;
    }
    if(s!=n || sum%10!=0)
    return 0;
    return 1;
}
int main(){
    scanf("%d",&t);
    while(t--){
    scanf("%d",&n);
    int res=0;
    int a=pow(10,n-1),b=pow(10,n)-1;
    for(int i=a;i<=b;i++)
        if(ngdao(i)) res++;
        printf("%d\n",res);
    }
    
    return 0;
}