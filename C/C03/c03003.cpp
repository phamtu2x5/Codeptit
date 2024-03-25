#include<stdio.h>
#include<math.h>
#define N 10000001
int t,n;
int a[N];
int check(int a){
    if(a<2) return 0;
    if(a<=3) return 1;
    if(a%2==0|| a%3==0) return 0;
    for(int i=5;i*i<=a;i+=6)
        if(a%i==0 || a%(i+2)==0) return 0;
        return 1;
}

int main(){
    scanf("%d",&n);
    int i=2;
    while(t<n){
        if(check(i)==1){
            printf("%d\n",i);
            t++;}
    i++;
    }
   
   }

