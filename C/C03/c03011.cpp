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
int a,b;
int main()
{
    scanf("%d%d",&a,&b);
    if(a>b){
        int tg=b;
        b=a;a=tg;
    }
    for (int i=a;i<=b;i++)
        if (check(i))
            printf("%d ", i);
    return 0;
}