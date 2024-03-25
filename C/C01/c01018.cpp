#include<stdio.h>
#include<math.h>
int n,t;
int main(){
    scanf("%d",&t);
    while(t--){
   scanf("%d",&n);
   int k=sqrt(n);
   if(k*k==n)
   printf("YES\n");
   else printf("NO\n");
    }
}