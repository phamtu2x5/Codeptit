#include<stdio.h>
#include<math.h>
#define N 1005
int a1,b1,a2,b2,a3,b3;
int a[N],b[N],h,check;
int kt(int a1,int b1,int a2,int b2,int a3,int b3,int h){
    if(h<a1||h<a2||h<a3||h<b1||h<b2||h<b3)
        return 0;
    if(a[h-a1]==0 || a[h-a2]==0 || a[h-a3]==0)
        return 0;
    if(b[h-b1]==0 || b[h-b2]==0 || b[h-b3]==0)
        return 0;
    return 1;
}
struct hcnhat
{
   int r,c;
   int dau;
}hcn[N];
int main(){
    scanf("%d%d%d%d%d%d",&a1,&b1,&a2,&b2,&a3,&b3);
    int res=a1*b1+a2*b2+a3*b3;
    h=sqrt(res);
    if(h*h!=res){
        printf("NO");
        return 0;
    }
    hcn[1].r=a1,hcn[1].c=b1,hcn[1].dau=1;
    hcn[2].r=b1,hcn[2].c=a1,hcn[2].dau=1;
    hcn[3].r=a2,hcn[3].c=b2,hcn[3].dau=2;
    hcn[4].r=b2,hcn[4].c=a2,hcn[4].dau=2;
    hcn[5].r=a3,hcn[5].c=b3,hcn[5].dau=3;
    hcn[6].r=b3,hcn[6].c=a3,hcn[6].dau=3;
    for(int i=1;i<=4;i++)
        for(int j=i+1;j<=5;j++)
            for(int z=j+1;z<=6;z++){
            for(int t=0;t<=300;t++)
                a[i]=0,b[i]=0;
            if(hcn[i].dau!=hcn[j].dau && hcn[i].dau!=hcn[z].dau && hcn[j].dau!=hcn[z].dau)
            {   
                a1=hcn[i].r,a2=hcn[j].r,a3=hcn[z].r,b1=hcn[i].c,b2=hcn[j].c,b3=hcn[z].c;
                a[0]=1;
                b[0]=1;
                a[a1]=1,a[a2]=1,a[a3]=1,a[a1+a2]=1,a[a1+a3]=1,a[a2+a3]=1;
                b[b1]=1,b[b2]=1,b[b3]=1,b[b1+b2]=1,b[b2+b3]=1,b[b1+b3]=1;
                if(kt(hcn[i].r,hcn[i].c,hcn[j].r,hcn[j].c,hcn[z].r,hcn[z].c,h))
                    check=1;
            }
            }
    if(check==1)
        printf("YES");
    else printf("NO");
}