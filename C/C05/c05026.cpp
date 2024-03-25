#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 10005
#define ll long long
int n,res,vt;
ll a[1005][1005];
int check(int x){
    if(x<2) return 0;
    if(x<=3) return 1;
    if(x%2==0|| x%3==0) return 0;
    for(int i=5;i*i<=x;i+=6)
        if(x%i==0 || x%(i+2)==0) return 0;
        return 1;
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        {
        int s=0;
        for(int j=1;j<=n;j++)
            {
                scanf("%lld",&a[i][j]);
                if(check(a[i][j]))
                s++;
            }
        if(s>res){
            res=s;
            vt=i;
        }
        }
    printf("%d\n",vt);
    for (int i = 1; i<=n; i++)
        if(check(a[vt][i]))
        printf("%lld ", a[vt][i]);
    
    
    return 0;
}
