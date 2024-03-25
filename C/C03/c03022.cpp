#include <stdio.h>
#include <math.h>
#include<string.h>
#define N 100005
int check(int a){
    if(a<2) return 0;
    if(a<=3) return 1;
    if(a%2==0|| a%3==0) return 0;
    for(int i=5;i*i<=a;i+=6)
        if(a%i==0 || a%(i+2)==0) return 0;
        return 1;
}
int ngdao(int n){
    if(!check(n)) return 0;
    int m=n,s=0;
    while(m>0)
    {
        s+=m%10;
        m/=10;
    }
    if(s%5!=0) return 0;
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