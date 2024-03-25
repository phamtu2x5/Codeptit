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
int m,n,x,y;
ll a[N][N];
int main(){
scanf("%d%d",&m,&n);
for(int i=1;i<=m;i++)
    for(int j=1;j<=n;j++)
        scanf("%lld",&a[i][j]);
scanf("%d%d",&x,&y);
for(int i=1;i<=n;i++)
    swap(&a[x][i],&a[y][i]);
for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++)
        printf("%lld ",a[i][j]); 
    printf("\n");
}  
}
