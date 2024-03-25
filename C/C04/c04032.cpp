#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define N 100005
struct TanSo
{
    int x,y;
}a[N];
int cmp(const void *m,const void *n){
	struct TanSo *m1=(struct TanSo *)m;
	struct TanSo *n1=(struct TanSo *)n;
	return n1->y-m1->y;
}
int n,tmp;
int check(int s){
    int ss=s;
    while(ss>=10){
        if((ss%10)<((ss/10)%10))
            return 0;
        ss/=10;
    }
    return 1;
}
int main(){
    while(scanf("%d",&n)!=-1){
        if(check(n))
            {
                int kt=0;
                for(int i=0;i<tmp;i++)
                    if(a[i].x==n){
                        kt=1;
                        a[i].y++;
                        break;
                    }
                if(kt==0){
                    a[tmp++].x=n;
                    a[tmp-1].y=1;
                }
            }
    }
    qsort(a,tmp,sizeof(struct TanSo),cmp);
    for(int i=0;i<tmp;i++)
    	printf("%d %d\n",a[i].x,a[i].y);
       
}
