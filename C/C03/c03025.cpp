#include<stdio.h>
#include<math.h>
int check(int a){
    if(a<2) return 0;
    if(a<=3) return 1;
    if(a%2==0 || a%3==0) return 0;
    for(int i=5;i*i<=a;i+=6)
        if(a%i==0 || a%(i+2)==0)
            return 0;
    return 1;
}
int sum(int a){
    int res=0;
    int b=a;
    while(b>0){
        res+=b%10;
        b/=10;
    }
    return res;
}
int kt(int a){
    int b=a;
    while(b>0)
        {
        if(!check(b%10)) return 0;
        b/=10;
        }
    if(!check(sum(a))) return 0;
    if(!check(a)) return 0;
    return 1;
}
int main(){
    int n,l,r;
    scanf("%d",&n);
    while(n--){
    int res=0;
    scanf("%d%d",&l,&r);
    if(l>r) 
        {
            int tg=r;
            r=l;
            l=tg;
        }
    for(int i=l;i<=r;i++)
        if(kt(i)) res++;
    printf("%d\n",res);
    }
    return 0;   
}