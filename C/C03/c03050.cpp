#include <stdio.h>
#include <math.h>

int n,a,b;
int f[1000005];
int main()
{   scanf("%d",&n);
    for(int i=1;i<n;i++)
        {
            scanf("%d%d",&a,&b);
            f[a]++;
            f[b]++;
        }
    for(int i=1;i<=n;i++)
        if(f[i]!=1 && f[i]!=n-1)
        {
            printf("No");
            return 0;
        }
        printf("Yes");
    
    return 0;
}