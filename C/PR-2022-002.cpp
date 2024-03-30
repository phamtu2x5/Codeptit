#include <stdio.h>
#include <string.h>
#include <math.h>
#define ll long long
#define N 10005
ll convert(char c[],int l,int n){
    int tmp=0;
    char b[100]={},a[100]={};
    strcpy(a,c);
    for(int i=0;i<l-1;i++)
        b[tmp++]=a[i];
    for(int i=0;i<=n-l;i++)
        a[i]=a[i+l-1];
    for(int i=0;i<tmp;i++)
        a[n-l+i+1]=b[i];
    ll res=0;
    for(int i=0;i<n;i++)
        res=res*10+a[i]-'0';
    return res;
}
int check(ll a){
    if(a<2) return 0;
    if(a<=3) return 1;
    if(a%2==0 || a%3==0) return 0;
    for(ll i=5;i*i<=a;i+=6)
        if(a%i==0 || a%(i+2)==0)
            return 0;
    return 1;
}
int t;
char x[100];
int main() {
    scanf("%d",&t);
    while(t--){
        int kt=1;
        scanf("\n%s",x);
        for(int i=1;i<=strlen(x);i++)
            if(check(convert(x,i,strlen(x)))==0)
            {
                kt=0;
                break;
            }
        if(kt==1)   printf("1 ");
        else printf("0 ");
    }
    return 0;
}
