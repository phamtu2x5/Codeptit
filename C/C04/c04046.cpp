#include <stdio.h>
#include <math.h>
#include<string.h>
#define N 100005
int n;
int t;
int cmp(const void *x,const void *y){
    return *(int *)y-*(int *)x;
}
int min(int x,int y){
    if(x<y) return x;
    return y;
}
int tknp1(int l,int r,int a[],int x){
    int tmp=-1;
    int d=l,c=r;
    while(d<=c){
        int mid=(d+c)/2;
        if(a[mid]>x) d=mid+1;
        else if(a[mid]<x) c=mid-1;
        else{
            tmp=mid;
            c=mid-1;
        }
    }
    return tmp;
}
int tknp2(int l,int r,int a[],int x){
    int tmp=-1;
    int d=l,c=r;
    while(d<=c){
        int mid=(d+c)/2;
        if(a[mid]>x) d=mid+1;
        else if(a[mid]<x) c=mid-1;
        else{
            tmp=mid;
            d=mid+1;
        }
    }
    return tmp;
}
int main(){
    scanf("%d",&t);
    while(t--)
    {   
        int ans=0,res=2e9;
        scanf("%d",&n);
        int a[n+2];
        for(int i=1;i<=n;i++)
            scanf("%d",&a[i]);
        qsort(a+1,n,sizeof(int),cmp);
        for(int i=1;i<n;i++)
            res=min(res,a[i]-a[i+1]);
        for(int i=1;i<n;i++)
            {
                int l1=tknp1(i+1,n,a,a[i]-res);
                int l2=tknp2(i+1,n,a,a[i]-res);
                if(l1!=-1 && l2!=-1)
                    ans+=l2-l1+1;
            }
        printf("%d %d\n",res,ans);
    }
}