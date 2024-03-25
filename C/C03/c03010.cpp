#include <stdio.h>
#include <math.h>
int giaithua(int n)
{
    int s=1;
    for (int i=1;i<=n;i++)
        s*=i;
    return s;
}
int  check(int n)
{
    int sum=0, a=n;
    while (a>0)
    {
        sum+=giaithua(a%10);
        a /= 10;
    }
    if (sum == n)
        return 1;
        return 0;
}
int n;
int main()
{
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
        if (check(i))
            printf("%d ", i);
    return 0;
}