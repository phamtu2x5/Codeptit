#include<stdio.h>
#include<math.h>
int m,n,t,s;
int main(){
scanf("%d",&t);
while(t--){
    scanf("%d",&n);
    s=0;
    for(int i=1;i*i<=n;i++)
    if(n%i==0){
    if(i%2==0) s++;
    if(i*i!=n)
    if((n/i)%2==0) s++;
    }
    printf("%d\n",s);
}
}
