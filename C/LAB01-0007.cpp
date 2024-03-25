#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 1000005
double s,a[N];
int n;
int main(){
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            scanf("%lf",&a[i]);
            s+=a[i];
        }
        printf("%.3lf",s/n);
        }
        
