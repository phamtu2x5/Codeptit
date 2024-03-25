#include<stdio.h>
#include<math.h>
int n,t;
int main(){
    scanf("%d",&t);
    while(t--){
    scanf("%d",&n);
    int c=n%10;
    while(n>10)
    n/=10;
    if(n==c) printf("YES\n");
    else printf("NO\n");
    }
}