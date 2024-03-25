#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 10005
int n,s,t;
int a[1005][1005];
int b[N];
int res;
int check(int x){
    if(x<2) return 0;
    if(x<=3) return 1;
    if(x%2==0|| x%3==0) return 0;
    for(int i=5;i*i<=x;i+=6)
        if(x%i==0 || x%(i+2)==0) return 0;
        return 1;
}
int main(){
    for(int i=2;i<=N;i++)
        if(check(i)) b[++res]=i;
    scanf("%d",&t);
    for(int z=1;z<=t;z++){
    scanf("%d",&n);
    int cbd=1,hbd=1,ckt=n,hkt=n;
    s=0;
    printf("Test %d:\n",z);
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
            printf("%d ", a[i][j]);
        printf("\n");
    }
    }
    return 0;
}
