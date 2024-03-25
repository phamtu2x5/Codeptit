#include<stdio.h>
#include<math.h>
int n,s,t;
int a[1005][1005];
int main() {
    scanf("%d",&t);
    for(int z=1;z<=t;z++){
    scanf("%d",&n);
    int cbd=1,hbd=1,ckt=n,hkt=n;
    s=n*n;
    printf("Test %d:\n",z);
    while(s>0){
        for(int i=cbd;i<=ckt;i++)
            a[hbd][i]=s--;
        for(int i=hbd+1;i<=hkt;i++)
            a[i][ckt]=s--;
        for(int i=ckt-1;i>=cbd;i--)
            a[hkt][i]=s--;
        for(int i=hkt-1;i>=hbd+1;i--)
            a[i][cbd]=s--;
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
