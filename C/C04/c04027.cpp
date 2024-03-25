#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 1000005
int t;
int n;
int a[N],b[N];
int main(){
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
             scanf("%d",&a[i]);
        for(int i=1;i<n;i++)
            {   
                printf("Buoc %d: ",i);
                int min=a[i],vt=i;
                for(int j=i+1;j<=n;j++)
                if(min>a[j]){
                    min=a[j];
                    vt=j;
                    }
                    int tg=a[vt];
                    a[vt]=a[i];
                    a[i]=tg;
            for(int i=1;i<=n;i++)
                printf("%d ",a[i]);
                printf("\n");
            }
}