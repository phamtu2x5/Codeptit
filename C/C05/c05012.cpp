#include <stdio.h>
#include <math.h>
#include<string.h>
#define N 1005
#define ll long long
int m,n,t;
ll c[N][N],a[N][N];
int main(){
scanf("%d",&t);
for(int z=1;z<=t;z++){
    scanf("%d",&m);
for(int i=1;i<=m;i++)
    for(int j=1;j<=i;j++)
       a[i][j]=j;
printf("Test %d:\n",z);
 for(int i=1;i<=m;i++)
         for(int j=1;j<=m;j++)
            {   c[i][j]=0;
                for(int t=1;t<=m;t++)
                    c[i][j]+=a[i][t]*a[j][t];
            }
    for(int i=1;i<=m;i++){
         for(int j=1;j<=m;j++)
         printf("%lld ",c[i][j]);
         printf("\n");
}
}  

}
