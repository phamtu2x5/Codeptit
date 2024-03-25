#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 1000005
int t;
int n,a[N];
int check(int x){
    if(x<2) return 0;
    if(x<=3) return 1;
    if(x%2==0|| x%3==0) return 0;
    for(int i=5;i*i<=x;i+=6)
        if(x%i==0 || x%(i+2)==0) return 0;
        return 1;
}
int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
        for(int i=1;i<=n;i++)
        if(check(a[i]))
        printf("%d ",a[i]);
        printf("\n");
    }
}