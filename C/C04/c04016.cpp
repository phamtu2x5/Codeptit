#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 1000005
int t;
int n;
int a[N],b[N],c[N];
int check(int d){
    if(d<2) return 0;
    if(d<=3) return 1;
    if(d%2==0|| d%3==0) return 0;
    for(int i=5;i*i<=d;i+=6)
        if(d%i==0 || d%(i+2)==0) return 0;
        return 1;
}
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
    for(int i=2;i<=N;i++)
         if(check(i) && b[i]>0)
            printf("%d xuat hien %d lan\n",i,b[i]);
        }

}