#include <stdio.h>
#include <math.h>
#include<string.h>
#define N 100005
int ngdao(int n){
    int m=n,s=0;
    while(m>0)
    {
        s=s*10+m%10;
        if(m%10==9) return 0;
        m/=10;
    }
    if(s!=n) return 0; 
    return 1;
}
int a,b,n;
int main(){
    scanf("%d",&n);
    int res=0;
    for(int i=2;i<=n;i++)
        if(ngdao(i)){
         printf("%d ",i);
         res++;
        }
        printf("\n%d",res);
    
    return 0;
}