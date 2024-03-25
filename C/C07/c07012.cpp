#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define N 1005

struct mat_hang{
    int stt;
    char ten[N];
    char nhom[N];
    double gm;
    double gb;
};
struct mat_hang a[N];
int n;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        a[i].stt=i;
        scanf("\n");
        gets(a[i].ten);
        scanf("\n");
        gets(a[i].nhom);
        scanf("%lf",&a[i].gm);
        scanf("%lf",&a[i].gb);
        
    }
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(a[i].gb-a[i].gm<a[j].gb-a[j].gm)
            {
                struct mat_hang tg;
                tg=a[j];
                a[j]=a[i];
                a[i]=tg;
            }
    for (int i = 1; i <= n; i++) {
        printf("%d ", a[i].stt);
        printf("%s ", a[i].ten);
        printf("%s ", a[i].nhom);
        printf("%.2lf\n", a[i].gb-a[i].gm);
       
    }

    return 0;
}
