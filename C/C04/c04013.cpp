#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 1000005
int t;
int n;
int a[N],b[N];
int main(){
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
            b[a[i]]++;
    }
    for(int i=1;i<=n;i++)
        if(b[a[i]]==1)
        t++;
    printf("%d\n",t);
    for(int i=1;i<=n;i++)
    if(b[a[i]]==1) printf("%d ",a[i]);
        
}