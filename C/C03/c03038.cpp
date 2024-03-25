#include <stdio.h>
#include <math.h>
#include<string.h>
#define N 100005
int n,p,s;
int t;
int main(){
   scanf("%d",&t);
   while(t--){
    s=0;
    scanf("%d%d",&n,&p);
    for(int i=1;i<=n;i++)
        {
            int j=i;
            while(j%p==0)
            {
                s++;
                j/=p;
            }
        }
    printf("%d\n",s);
   }
}