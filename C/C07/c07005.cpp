#include<stdio.h>
#include<math.h>
#include<string.h>
int t;
double x1,x2,x3,y11,y2,y3;
int check(double a,double b,double c){
    if(a==0 || b==0 || c==0) return 0;
    if(a+b<=c || a+c<=b || b+c<=a)
        return 0;
    return 1;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%lf%lf%lf%lf%lf%lf",&x1,&y11,&x2,&y2,&x3,&y3);
        double a=sqrt((x1-x2)*(x1-x2)+(y11-y2)*(y11-y2));
        double b=sqrt((x1-x3)*(x1-x3)+(y11-y3)*(y11-y3));
        double c=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
        if(check(a,b,c))
            printf("%.3lf\n",a+b+c);
        else printf("INVALID\n");
    }
}