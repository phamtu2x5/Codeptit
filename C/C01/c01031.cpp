#include <stdio.h>
#include <math.h>
#include<string.h>
#define N 1000005
int t,n;
int a[N];
int main()
{   
    scanf("%d",&n);
    int i=2;
    while(n>1){
        while(n%i==0)
        {
            if(n!=i) printf("%dx",i);
            else printf("%d",i);
            n/=i;
        }
        i++;
    }
}