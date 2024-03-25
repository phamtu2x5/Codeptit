#include<stdio.h>
#include<math.h>
int a,b,t;
int gcd(int a,int b){
    if(b==0)
    return a;
    return gcd(b,a%b);
}
int main(){
    scanf("%d",&t);
    while(t--){
    scanf("%d%d",&a,&b);
    printf("%d\n",gcd(a,b));
    }
}