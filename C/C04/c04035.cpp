#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define N 25005
#define ll long long
int n,suml,sumx,lmin=50005,xmin=50005,x,y;
int min(int a,int b){
    if(a<b)return a;
    return b;
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
       {
        scanf("%d%d",&x,&y);
        suml+=x;
        sumx+=y;
        lmin=min(lmin,x);
        xmin=min(xmin,y);
       }
       if(suml>sumx)
        printf("%d",suml+xmin);
        else printf("%d",sumx+lmin);
    }