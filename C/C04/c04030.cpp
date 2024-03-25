#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 1000005
int t;
int n;
int a[N],b[N];
int main(){
        scanf("%d",&t);
        for(int x=1;x<=t;x++)
        {
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
             scanf("%d",&a[i]);
        for(int i=1;i<=n;i++)
             scanf("%d",&b[i]);
        printf("Test %d:\n",x);
        for(int i=1;i<n;i++)
            for(int j=i+1;j<=n;j++)
            if(a[i]>a[j]){
                int tg=a[j];
                a[j]=a[i];
                a[i]=tg;
            }
            for(int i=1;i<n;i++)
            for(int j=i+1;j<=n;j++)
            if(b[i]<b[j]){
                int tg=b[j];
                b[j]=b[i];
                b[i]=tg;
            }
        for(int i=0;i<=2*n-1;i++)
            if(i%2==0)
            printf("%d ",a[i/2+1]);
            else printf("%d ",b[(i+1)/2]);
        printf("\n");
    }
}