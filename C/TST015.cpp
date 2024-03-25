#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define N 10005
struct triangle
{
    int a,b,c;
    double S;
}tg[N];
int n;
void input(int i){
    scanf("%d %d %d",&tg[i].a,&tg[i].b,&tg[i].c);
}
double area(int a,int b,int c){
    double x=a*1.0,y=b*1.0,z=c*1.0;
    double p=(x+y+z)/2;
    double s=sqrt(p*(p-x)*(p-y)*(p-z));
    return s;
}
void output(int i){
    printf("%d %d %d\n",tg[i].a,tg[i].b,tg[i].c);
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        {
            input(i);
            tg[i].S=area(tg[i].a,tg[i].b,tg[i].c);
        }
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(tg[i].S>tg[j].S){
                struct triangle tmp;
                tmp=tg[i];
                tg[i]=tg[j];
                tg[j]=tmp;
            }
    for(int i=1;i<=n;i++)
        output(i);
}