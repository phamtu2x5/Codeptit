#include<stdio.h>
#include<math.h>
double a,b,c,delta;
int main(){
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a==0)
    {
        if(b==0) printf("NO");
        else printf("%.2lf",-c/b);
    }
    else{
    delta=b*b-4*a*c;
    if(delta<0)
        printf("NO");
    else if(delta==0)
        printf("%.2lf",-b/(2*a));
    else printf("%.2lf %.2lf",(-b+sqrt(delta))/(2*a),(-b-sqrt(delta))/(2*a));
    
    }

}