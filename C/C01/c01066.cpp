#include<stdio.h>
int a,b,c;
int min(int m,int n){
    if(m>n) return n;
    return m;
}
int main(){
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",min(a,min(b,c)));
}