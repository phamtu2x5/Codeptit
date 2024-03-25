#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define N 1005
struct pokemon
{
    char p[N];
    int sl;
}a[N];
int n,x,y;
int res,ans;
int sum(int x,int y){
    int s=0;
    while(y>=x){
        int tmp=y/x;
        s+=tmp;
        y-=tmp*x;
        y+=tmp*2;
    }
    return s;
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("\n");
        gets(a[i].p);
        scanf("%d %d",&x,&y);
        a[i].sl+=sum(x,y);
        res+=a[i].sl;
        if(a[i].sl>ans)
            ans=a[i].sl;
    }
    printf("%d\n",res);
    for(int i=1;i<=n;i++)
        if(a[i].sl==ans)
            {
                printf("%s\n",a[i].p);
                break;
            }
}