#include<stdio.h>
#include<math.h>
int a1,b1,c1,d1,a2,b2,c2,d2;
int res=-1e9;
int max(int x,int y){
    if(x>y) return x;
    return y;
}
int main(){
    scanf("%d %d %d %d %d %d %d %d",&a1,&b1,&c1,&d1,&a2,&b2,&c2,&d2);
    int l=max(max(abs(c1-a2),abs(a1-c2)),max(c1-a1,c2-a2));
    int r=max(max(abs(b1-d2),abs(b2-d1)),max(d1-b1,d2-b2));
    res=max(l,r);
    printf("%d",res*res);
}