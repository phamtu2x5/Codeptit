#include<stdio.h>
#include<math.h>
int n;
int t,a,b,c,d;
int main(){
   scanf("%d",&t);
   while(t--){
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if((c-a)==(d-b))
    printf("YES\n");
    else printf("NO\n");
   }
}