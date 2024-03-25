#include<stdio.h>
#include<math.h>
int n;
int sum(int a){
    int s=0,b=a;
    while(b>0){
        s+=b%10;
        b/=10;
    }
    return s;
}

int main(){
   scanf("%d",&n);
   int s=sum(n),ss=0;
    int i=2;
    while(n>1){
        while(n%i==0){
            ss+=sum(i);
            n/=i;
        }
        i++;
    }
    if(s==ss) printf("YES");
    else printf("NO");
}