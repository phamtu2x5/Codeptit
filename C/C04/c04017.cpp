#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 1000005
int n,s;
int a[N];
int check(int d){
    if(d<2) return 0;
    if(d<=3) return 1;
    if(d%2==0|| d%3==0) return 0;
    for(int i=5;i*i<=d;i+=6)
        if(d%i==0 || d%(i+2)==0) return 0;
        return 1;
}
int main(){
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
            if(check(a[i])) s++;
        }
        printf("%d ",s);
        for(int i=1;i<=n;i++)
            if(check(a[i])) printf("%d ",a[i]);
        

}