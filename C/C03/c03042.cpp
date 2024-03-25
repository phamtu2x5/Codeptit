#include<stdio.h>
#include<math.h>
int t,a,b;
int check(int n){
   int m=n;
   while(m>10){
      if(m%10>=((m/10)%10))
      return 0;
      m/=10;
   }
   return 1;
}
int main(){
   scanf("%d",&t);
   while(t--){
      int s=0;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    if(check(i))
      s++; 
    printf("%d\n",s);
}
}