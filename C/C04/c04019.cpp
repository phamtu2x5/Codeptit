#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 1000005
int t,tm;
int n,max=-1e9;
int a[N],b[N];
int main(){
        scanf("%d",&t);
        while(t--){
        for(int i=1;i<=N;i++)
        b[i]=0;
        max=-1e9;tm=0;
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
            if(a[i]>max)
            max=a[i];
            b[a[i]]++;
    }
    for(int i=1;i<=n;i++)
        if(b[a[i]]>tm) tm=b[a[i]];
    for(int i=1;i<=n;i++)
        if(b[a[i]]==tm){
          printf("%d ",a[i]);
          b[a[i]]=0;
         }
         printf("\n");
        }
        
}