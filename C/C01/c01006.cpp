#include<stdio.h>
int a,b;
int main(){
    scanf("%d%d",&a,&b);
    if(b!=0){
        printf("%d %d %d ",a+b,a-b,a*b);
        printf("%.2lf %d",a*1.0/b,a%b);
    }
    else printf("0");
}