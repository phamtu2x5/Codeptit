#include<stdio.h>
#include<math.h>
int t,a,b,n;
int tn(int n){
   int m=n,s=0;
   while(m>0){
      s=s*10+m%10;
      m/=10;
   }
   if(s==n) return 1;
   return 0;
}
int check(int n){
   int m=n,sum=0;
   while(m>0){
      if(m%10==4)
      return 0;
      sum+=m%10;
      m/=10;
}
   if(sum%10!=0) return 0;
   if(tn(n)==0) return 0;
 return 1;
}
int main(){
   scanf("%d",&t);
   while(t--){
   scanf("%d",&n);
   a=pow(10,n-1),b=pow(10,n)-1;
    for(int i=a;i<=b;i++)
    if(check(i)==1)
     printf("%d ",i);
   printf("\n");
}
}