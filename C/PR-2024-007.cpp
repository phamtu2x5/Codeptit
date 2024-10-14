#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define N 10005
int t,m;
struct Cap{
    char s[55];
    double x;
}a[N];
int cmp(const void *b, const void *c) {
    struct Cap *p = (struct Cap *)b;
    struct Cap *q = (struct Cap *)c;
    if (p->x < q->x) return -1;
    if (p->x > q->x) return 1;
    return 0;
}

int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d",&m);
        for(int i=1;i<=m;i++)
           scanf("\n%s",a[i].s);
        for(int i=1;i<=m;i++)
            scanf("%lf",&a[i].x);
        qsort(a+1,m,sizeof(struct Cap),cmp);
        for(int i=1;i<=m;i++)
            printf("%s ",a[i].s);
        printf("\n");
        for(int i=1;i<=m;i++)
            printf("%.3lf ",a[i].x);
        printf("\n");
        for(int z=1;z<m;z++)
        {
            a[1].x+=a[2].x;
            strcat(a[1].s,a[2].s);
            a[2].x=1e9;
            if(a[1].x>a[3].x)
            {
            for(int i=1;i<=m-z+1;i++)
                if(i!=2)
                printf("%s ",a[i].s);
            printf("\n");
            for(int i=1;i<=m-z+1;i++)
                if(i!=2)
                printf("%.3lf ",a[i].x);
            printf("\n");
            }
            qsort(a+1,m,sizeof(struct Cap),cmp);
            for(int i=1;i<=m-z;i++)
                printf("%s ",a[i].s);
            printf("\n");
            for(int i=1;i<=m-z;i++)
                printf("%.3lf ",a[i].x);
            printf("\n");
        }
    }
}