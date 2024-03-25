#include<stdio.h>
long long n,t;
int main(){
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        printf("%lld ",n*n);
        printf("\n");
    }
}