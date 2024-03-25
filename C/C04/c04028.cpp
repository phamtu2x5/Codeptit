#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 100005
#define ll long long
int t,n;
ll a[N],f[N];
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%lld",&a[i]);
    for(int i=1;i<=n;i++)
            f[i]=1e9;
    f[0]=-1e9;
    for(int i=1;i<=n;i++)
        {
            printf("Buoc %d: ",i-1);
            for(int j=0;j<=n;j++)
                if(f[j]<=a[i] && a[i]<=f[j+1])
                    {
                        for(int x=n;x>=j+2;x--)
                            f[x]=f[x-1];
                            f[j+1]=a[i];
                        break;
                    }
            for(int j=1;j<=i;j++)
                    printf("%lld ",f[j]);
                    printf("\n");

        }
        
}