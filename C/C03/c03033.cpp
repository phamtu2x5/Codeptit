#include<stdio.h>
#include<math.h>
int t,n;

int main(){
    scanf("%d",&t);
    for(int a=1;a<=t;a++)
    {   
        scanf("%d",&n);
        printf("%d = ",n);
        int i=2;
        while(n>1){
            int d=0;
            while(n%i==0){
                d++;
                n/=i;
            }
            if(d>0){
                if(n>1)
                printf("%d^%d * ",i,d);
                else printf("%d^%d",i,d);
            }
            i++;
        }
        printf("\n");
    }

}
