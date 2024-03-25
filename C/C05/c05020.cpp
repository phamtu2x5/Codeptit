#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 10005
#define ll long long
int n,s,t;
ll a[1005][1005];
ll b[N];
int main(){
    b[1]=0;
    b[2]=1;
    for(int i=3;i<=100;i++)
        b[i]=b[i-1]+b[i-2];
    scanf("%d",&n);
    int cbd=1,hbd=1,ckt=n,hkt=n;
    s=0;
    while(s<n*n){
        for(int i=cbd;i<=ckt;i++)
            a[hbd][i]=b[++s];
        for(int i=hbd+1;i<=hkt;i++)
            a[i][ckt]=b[++s];
        for(int i=ckt-1;i>=cbd;i--)
            a[hkt][i]=b[++s];
        for(int i=hkt-1;i>=hbd+1;i--)
            a[i][cbd]=b[++s];
        cbd++;hbd++;ckt--;hkt--;
    }
    for (int i = 1; i<=n; i++) {
        for (int j = 1; j<=n; j++) 
            printf("%lld ", a[i][j]);
        printf("\n");
    }
    
    return 0;
}
