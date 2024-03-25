#include <stdio.h>
#include <math.h>
int t;
int main(){
    scanf("%d", &t);
    long long sum = 0;
    while(t--){
         int n;
        scanf("%d", &n);
        for (int i = 2; i * i <= n; i++)
        {
            while (n % i == 0)
            {
                sum += i;
                n /= i;
            }
        }
        if (n > 1)
            sum += n;
    }
    printf("%lld",sum);
    return 0;
}