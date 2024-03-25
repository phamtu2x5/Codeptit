#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 10005
#define ll long long
int n;
ll a[N];
int main(){
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
             scanf("%lld",&a[i]);
        for(int i=1;i<n;i++)
            {
                ll min=a[i];
                int vt=i;
                for(int j=i+1;j<=n;j++)
                if(min>a[j]){
                    min=a[j];
                    vt=j;
                    }
                    ll tg=a[vt];
                    a[vt]=a[i];
                    a[i]=tg;
            for(int i=1;i<=n;i++)
                printf("%lld ",a[i]);
                printf("\n");
            }
}