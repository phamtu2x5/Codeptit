#include<stdio.h>
#include<math.h>
#include<string.h> 
#include<stdlib.h>
#define N 1005
#define ll long long
struct SinhVien
{
    int msv;
    char Name[N];
    double total,A,B,C;
}a[N];
int cmp(const void *x,const void *y){
    struct SinhVien *x1=(struct SinhVien *)x;
    struct SinhVien *y1=(struct SinhVien *)y;
    return x1->total-y1->total;
}
double x,y,z;
int n;
int main(){
    int tmp=0,m;
    while(scanf("%d",&n)!=-1){
        if(n==1){
            scanf("%d",&m);
            printf("%d\n",m);
            for(int i=1;i<=m;i++){
                ++tmp;
                scanf("\n");
                gets(a[tmp].Name);
                scanf("%lf%lf%lf",&a[tmp].A,&a[tmp].B,&a[tmp].C);
                a[tmp].total=a[tmp].A+a[tmp].B+a[tmp].C;
                a[tmp].msv=tmp;
            }
        }
        else if(n==2){
            scanf("%d",&m);
            printf("%d\n",m);
            scanf("\n");
            gets(a[m].Name);
            scanf("%lf%lf%lf",&a[m].A,&a[m].B,&a[m].C);
            a[m].total=a[m].A+a[m].B+a[m].C;
        }
        else{
            qsort(a+1,tmp,sizeof(struct SinhVien),cmp);
            for(int i=1;i<=tmp;i++)
                printf("%d %s %.1lf %.1lf %.1lf\n",a[i].msv,a[i].Name,a[i].A,a[i].B,a[i].C);
        }
    }
}