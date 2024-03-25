#include <stdio.h>
#include <math.h>
#include<string.h>
#define N 1005
#define ll long long
void swap(ll *m,ll *n){
    ll tg=*n;
    *n=*m;
    *m=tg;
}
ll a[N][N];
int m;
int main(){
scanf("%d",&m);
for(int i=1;i<=m;i++)
    for(int j=1;j<=m;j++)
        scanf("%lld",&a[i][j]);
int j=1;
for(int i=1;i<=m;i++){
swap(&a[i][j],&a[i][m-j+1]);
j++;}
for(int i=1;i<=m;i++){
    for(int j=1;j<=m;j++)
        printf("%lld ",a[i][j]);
    printf("\n");
}
}  

