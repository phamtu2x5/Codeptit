#include<stdio.h>
#include<math.h>
#define N 10001
int m,n;
int sum(int a){
    int s=0;
    int b=a;
    while(b>0){
        s+=b%10;
        b/=10;
    }
    return s;
}
int main(){
    scanf("%d%d",&m,&n);
    if(sum(n)<sum(m))
    printf("%d %d",n,m);
    else printf("%d %d",m,n);
}