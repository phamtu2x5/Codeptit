#include <stdio.h>
#include <math.h>
#include<string.h>
#define N 100005
#define ll long long
ll n,res;
int t;
int main(){
   scanf("%d",&t);
   while(t--){
      scanf("%lld",&n);
      res=2;
      for(ll i=2;i*i<=n;i++)
         if(n%i==0)
         while(n%i==0){
            res=i;
            n/=i;
         }
      if(n>res) res=n;
      printf("%lld\n",res);
   
   }
}