#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 1000005
int t;
int n,max;
int a[N];
int main(){
    scanf("%d",&t);
    while(t--){
        max=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
                if(a[i]>max) max=a[i];
            }
        printf("%d\n",max);
        for(int i=0;i<n;i++)
        if(a[i]==max) printf("%d ",i);
        printf("\n");
        
    }
}