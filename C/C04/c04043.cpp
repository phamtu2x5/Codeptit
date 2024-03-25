#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define N 5005
int t,n;
int kt;
int tknp(int l,int r,ll x,ll a[]){
    int d=l,c=r;
    while(d<=c)
    {
        int mid=(d+c)/2;
        if(a[mid]==x) return 1;
        else if(a[mid]>x) c=mid-1;
        else d=mid+1;
    }
    return 0;
}
void sort(ll a[N],int l, int r){
    for(int i=l;i<r;i++)
        for(int j=i+1;j<=r;j++)
            if(a[i]>a[j])
                {
                    ll tmp=a[i];
                    a[i]=a[j];
                    a[j]=tmp;
                }
}
int cmp(const void *x,const void *y){
    return *(ll *)x-*(ll *)y;
}
int main(){
    scanf("%d",&t);
    while(t--){
        kt=1;
        scanf("%d",&n);
        ll a[n+2];
        for(int i=1;i<=n;i++){
            scanf("%lld",&a[i]);
            a[i]*=a[i];
        }
        sort(a,1,n);
        for(int i=1;i<=n-2 && kt;i++)
            for(int j=i+1;j<=n-1 && kt;j++)
                if(tknp(j+1,n,a[i]+a[j],a))
                    kt=0;
            if(kt==0)   printf("YES\n");
            else printf("NO\n");
    }
}
