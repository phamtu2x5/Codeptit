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
        int max=0;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
             scanf("%d",&a[i]);
             printf("Test %d:\n",x);
        for(int i=1;i<=n+1;i++) b[i]=0;
            b[1]=1;
        for(int i=2;i<=n;i++)
             if(a[i]>a[i-1]) b[i]=b[i-1]+1;
        else b[i]=1;
            for(int i=1;i<=n;i++)
                if(b[i]>max) max=b[i];
            printf("%d\n",max);
            for(int i=1;i<=n;i++)
                if(b[i]==max){
                for(int j=i-max+1;j<=i;j++)
                printf("%d ",a[j]);
                printf("\n");
                }
    }
}