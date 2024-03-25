#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define N 1005
struct TS{
    int stt;
    char name[N];
    char dbirth[N];
    double total;
}a[N];
int n;
double x,y,z,t;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        {
            a[i].stt=i;
            scanf("\n");
            gets(a[i].name);
            scanf("\n");
            gets(a[i].dbirth);
            scanf("%lf %lf %lf",&x,&y,&z);
            a[i].total=x+y+z;
            if(a[i].total>t)
                t=a[i].total;
        }
    // for(int i=1;i<n;i++)
    //     for(int j=i+1;j<=n;j++)
    //         if(a[i].total<a[j].total)
    //         {
    //             struct TS tg;
    //             tg=a[j];
    //             a[j]=a[i];
    //             a[i]=tg;
    //         }
    for(int i=1;i<=n;i++)
        if(a[i].total==t)
        printf("%d %s %s %.1lf\n",a[i].stt,a[i].name,a[i].dbirth,a[i].total);
}