#include<stdio.h>
#include<math.h>
int n,t,tt;
int main(){
    scanf("%d",&tt);
    while(tt--){
    t=0;
    scanf("%d",&n);
    while(n>0)
    {
        t+=n%10;
        n/=10;
    }
    printf("%d\n",t);
    }
}