#include<stdio.h>
#include<math.h>
#define N 10000001
int t,m,n;
int prime(int a){
    if(a<2) return 0;
    if(a<=3) return 1;
    if(a%2==0|| a%3==0) return 0;
    for(int i=5;i*i<=a;i+=6)
        if(a%i==0 || a%(i+2)==0) return 0;
        return 1;
}
int ngdao(int a){
    int s=0,b=a;
    while(b>0){
        s=s*10+b%10;
        b/=10;
    }
    if(s==a) return 1;
    return 0;
}
int main(){
    scanf("%d",&t);
    while(t--){
    int d=0;
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n;i++)
    if(prime(i)&&ngdao(i)){
    d++;
    printf("%d ",i);
    if(d>0 &&d%10==0)
    printf("\n");
    }
    if(d%10!=0) printf("\n");
   printf("\n");
   
    }
}