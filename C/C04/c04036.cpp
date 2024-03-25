#include <stdio.h>
#include <math.h>
int t;
int n,s;
int a[20];
int main(){
    scanf("%d", &t);
    while(t--){
        scanf("%d",&n);
        s=0;
        a[1]=1,a[2]=2,a[3]=5,a[4]=10,a[5]=20,a[6]=50,a[7]=100,a[8]=200,a[9]=500,a[10]=1000;
        for(int i=10;i>=1;i--)
            if(n>=a[i]){
                int t=n/a[i];
                s+=t;
                n-=t*a[i];
            }
        printf("%d\n",s);
    }
    return 0;
}