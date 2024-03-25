#include<stdio.h>
int t;
double n;
int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%lf",&n);
        printf("%.15lf",1/n);
        printf("\n");
    }
}