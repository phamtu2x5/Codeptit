#include <stdio.h>
#include <math.h>
#include<string.h>
#define N 1005
#define ll long long
int check(int x){
    if(x<2) return 0;
    if(x<=3) return 1;
    if(x%2==0|| x%3==0) return 0;
    for(int i=5;i*i<=x;i+=6)
        if(x%i==0 || x%(i+2)==0) return 0;
        return 1;
}
int a[N][N];
int m,res;
int main(){
scanf("%d",&m);
for(int i=1;i<=m;i++)
    for(int j=1;j<=m;j++)
        scanf("%d",&a[i][j]);
for(int i=1;i<=m;i++)
    for(int j=1;j<=m;j++)
    if(j>=i)
        if(check(a[i][j]))
        res+=a[i][j];
        printf("%d",res);

}  

