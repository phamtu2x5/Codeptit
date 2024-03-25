#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 1000005
int t;
int n,a[N];
int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
        for(int i=1;i<=n;i++)
        if(a[i]%2==0)
        printf("%d ",a[i]);
        printf("\n");
    }
}