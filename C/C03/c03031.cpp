#include<stdio.h>
#include<math.h>
int t,a,b,c,d;
int gcd(int x,int y){
    if(y==0) return x;
    return gcd(y,x%y);
}
int main(){
scanf("%d",&t);
while(t--){
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(gcd(a,b)==gcd(c,d))
    printf("YES");
    else printf("NO");
    printf("\n");
}
}