#include<stdio.h>
double a,b;
int main(){
    scanf("%lf %lf",&a,&b);
   if(a!=0)
   printf("%.2lf",-b/a);
   else {
    if(b!=0)
    printf("Vo nghiem");
    else printf("Vo so nghiem");
   }
}