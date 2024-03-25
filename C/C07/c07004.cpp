#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 10005
#define ll long long
int t,a,b,c,d;
int tu1,ma1,tu2,ma2;
int gcd(int a,int b)
    {
        if(b==0) return a;
        return gcd(b,a%b);
    }
int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}
void rg(){
    int uc1=gcd(tu1,ma1),uc2=gcd(tu2,ma2);
    tu1/=uc1;
    ma1/=uc1;
    tu2/=uc2;
    ma2/=uc2;
}
void qd(){
    b=lcm(ma1,ma2);
    tu1*=b/ma1;
    tu2*=b/ma2;
    ma1=b;
    ma2=b;
}
void rg2(int x,int y){
    int uc=gcd(x,y);
    x/=uc;
    y/=uc;
}
int main(){
    scanf("%d",&t);
    for(int z=1;z<=t;z++){
        scanf("%d%d%d%d",&tu1,&ma1,&tu2,&ma2);
        rg();
        printf("Case #%d:\n",z);
        qd();
        printf("%d/%d %d/%d\n",tu1,ma1,tu2,ma2);
        a=tu1+tu2;
        rg2(a,b);
        printf("%d/%d\n",a,b);
        tu1*=ma2;
        ma1*=tu2;
        int uc1=gcd(tu1,ma1);
        printf("%d/%d\n",tu1/uc1,ma1/uc1);
    }
}