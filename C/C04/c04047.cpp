#include <stdio.h>
#include <math.h>
#include<string.h>
#define N 1005
#define ll long long
int  a[N],n,b[N];
void swap(int *m,int *n){
    int tg=*n;
    *n=*m;
    *m=tg;
}
int main(){
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
        scanf("%d%d",&a[i],&b[i]);
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(a[i]>a[j])
            {
                swap(&a[i],&a[j]);
                swap(&b[i],&b[j]);
            }
    int t=a[1]+b[1];
    for(int i=2;i<=n;i++)
        if(t<=a[i]){
            t=a[i]+b[i];
        }
        else t+=b[i];
        printf("%d",t);
   }
