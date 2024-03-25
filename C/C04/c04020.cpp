#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 1000005
int n,s;
int a[N];

int main(){
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
            scanf("%d",&a[i]);
        scanf("%d",&s);
        s%=n;
        for(int i=s+1;i<=n;i++)
            printf("%d ",a[i]);
        for(int i=1;i<=s;i++)
            printf("%d ",a[i]);
        

}
