#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 1000005
int t;
int n;
int a[N],b[N],c[N];
int main(){
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
            b[a[i]]++;
    }
    for(int i=1;i<=n;i++)
         if(c[a[i]]==0)
         {
            printf("%d %d\n",a[i],b[a[i]]);
            c[a[i]]=1;
         }
        }

