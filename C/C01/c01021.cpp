#include<stdio.h>
#include<math.h>
int n,t;
int main(){
    scanf("%d",&n);
    while(n>0)
    {
        t+=n%10;
        n/=10;
    }
    printf("%d",t);
}