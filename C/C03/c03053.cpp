#include<stdio.h>
#include<math.h>
#define N 1000005
int t;
int m;
int n[N],f[N];
void sangnt(){
    for(int i=2;i<=N;i++)
        n[i]=1;
    for(int i=2;i*i<=N;i++)
        if(n[i]==1)
            for(int j=i*i;j<=N;j+=i)
                n[j]=0;
}
int main(){
    sangnt();
    scanf("%d",&t);
    while(t--){
        scanf("%d",&m);
    for(int i=2;i<=m/2;i++)
    if(n[i]==1)
        if(n[m-i]==1)
            printf("%d %d ",i,m-i);
    printf("\n");
    }
    }
