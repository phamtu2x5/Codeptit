#include<stdio.h>
#include<math.h>
int n,t;
int main(){
    scanf("%d",&t);
    while(t--){
    scanf("%d",&n);
    if(n<2) printf("NO\n");
    else
    {
    int d=1;

    for(int i=2;i*i<=n;i++)
    if(n%i==0)
    d=0;
    if(d==1) printf("YES\n");
    else printf("NO\n");
    }
    }
}