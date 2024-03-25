#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 1000005
int n,k,dem;
void phantich(int x){
    while(x%2==0){
        dem++;
        x/=2;
    }
}
int main(){
    scanf("%d%d",&n,&k);
    for(int i=2;i<=n;i++)
        phantich(i);
    if(dem>=k) printf("Yes");
    else printf("No");
}