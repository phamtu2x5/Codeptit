#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define N 100005
int n;
struct mang{
    int gt,tt,kt;
}a[N];
int cmp1(const void *x,const void *y){
    struct mang *x1=(struct mang *)x;
    struct mang *y1=(struct mang *)y;
    return x1->gt-y1->gt;
}
int cmp2(const void *x,const void *y){
    struct mang *x1=(struct mang *)x;
    struct mang *y1=(struct mang *)y;
    return x1->tt-y1->tt;
}
int tknp(int l,int r,int x){
    int res=-1;
    int d=l,c=r;
    while(d<=c){
        int mid=(d+c)/2;
        if(a[mid].gt>x)
            c=mid-1;
        else if(a[mid].gt<x)
            d=mid+1;
        else return mid;
    }
    return res;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int kt=0;
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			scanf("%d",&a[i].gt);
            a[i].tt=i;
            a[i].kt=0;
        }
        qsort(a+1,n,sizeof(struct mang),cmp1);
        for(int i=1;i<n;i++)
            {
                int tmp=tknp(i+1,n,a[i].gt);
                if(tmp!=-1)
                    a[i].kt=1;
            }
        qsort(a+1,n,sizeof(struct mang),cmp2);
        int bol=0;
        for(int i=1;i<=n;i++)
        {
            if(a[i].kt==1)
            {
                bol=1;
                printf("%d\n",a[i].gt);
                break;
            }
        }
        if(bol==0)
            printf("NO\n");
	}
}