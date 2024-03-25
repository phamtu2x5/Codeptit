#include<stdio.h>
#include<math.h>
int a,t;
int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d",&a);
        int i=2;
        while(a>1)
        {
            while(a%i==0){
            printf("%d ",i);
            a/=i;
            }
            i++;
        }
        printf("\n");
    }
}