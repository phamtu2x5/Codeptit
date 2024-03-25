#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 1000005
int t;
int n;
int a[N],b[N],c[N];
int main(){
    scanf("%d",&t);
    for(int x=1;x<=t;x++)
    {   for(int y=1;y<=N;y++)
            {
                b[y]=0;
                c[y]=0;
            }
       
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
            b[a[i]]++;
    }
         printf("Test %d:\n",x);
    for(int i=1;i<=n;i++)
         if(c[a[i]]==0)
         {
            printf("%d xuat hien %d lan\n",a[i],b[a[i]]);
            c[a[i]]=1;
         }
        }

}