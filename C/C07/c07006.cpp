#include<stdio.h>
#include<math.h>
#include<string.h>
int t;
double x1,x2,x3,y1,y2,y3;
int check(double a,double b,double c){
    if(a==0 || b==0 || c==0) return 0;
    if(a+b<=c || a+c<=b || b+c<=a)
        return 0;
    return 1;
}
double S(double x1,double y1,double x2,double y2,double x3,double y3){
    return fabs(0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)));
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
        double a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        double b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
        double c=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
        if(check(a,b,c))
            printf("%.2lf\n",S(x1,y1,x2,y2,x3,y3));
        else printf("INVALID\n");
    }
}