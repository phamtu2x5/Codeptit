#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define ll long long 
#define N 100005
int t,n,m;
int b[1005][1005];
int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&m,&n);
        int a[N]={0};
        for(int i=1;i<=m;i++)
            for(int j=1;j<=n;j++)
                scanf("%d",b[i][j]);
        int tmp=0;
        int cbd=1,ckt=n,hbd=1,hkt=m;
        while(tmp<m*n){
            int kt=1;
            for(int i=cbd;i<=ckt&&kt;i++){
                a[++tmp]=b[hbd][i];
                if(tmp==m*n) kt=0;
            }
            if(kt==0) break;
            for(int i=hbd+1;i<=hkt&&kt;i++){
                a[++tmp]=b[i][ckt];
                if(tmp==m*n) kt=0;
            }
            if(kt==0) break;
            for(int i=ckt-1;i>=cbd&&kt;i--){
                a[++tmp]=b[hkt][i];
                if(tmp==m*n) kt=0;
            }
            if(kt==0) break;
            for(int i=hkt-1;i>hbd&&kt;i--){
                a[++tmp]=b[i][cbd];
                if(tmp==m*n) kt=0;
            }
            if(kt==0) break;
            hbd++;hkt--;cbd++;ckt--;
        }
        for(int i=1;i<=tmp;i++)
            printf("%d ",a[i]);
        printf("\n");
    }
}