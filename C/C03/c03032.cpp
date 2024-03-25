#include<stdio.h>
#include<math.h>
int t,m,n,s;
int check(int a){
    if(a<2) return 0;
    if(a<=3) return 1;
    if(a%2==0|| a%3==0) return 0;
    for(int i=5;i*i<=a;i+=6)
        if(a%i==0 || a%(i+2)==0) return 0;
        return 1;
}
int kt(int a){
    while(a>0)
    {
        if(check(a%10)==0)
        return 0;
        a/=10;
    }
    return 1;
}
int main(){
scanf("%d",&t);
while(t--){
    s=0;
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n;i++)
    if(check(i)&&kt(i))
    s++;
    printf("%d\n",s);
    
}
}