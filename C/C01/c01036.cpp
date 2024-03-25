#include<stdio.h>
#include<math.h>
int m,n;
int main(){
scanf("%d",&m);
n=1;
while(m>0)
{
    n*=m%10;
    m/=10;
}
    printf("%d",n);

}