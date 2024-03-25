#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 1000005
int n,s,t;
int a[N];

int main(){
        scanf("%d",&t);
        while(t--){
        s=0;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
            scanf("%d",&a[i]);
        
        for(int i=1;i<n;i++)
            if(a[i]==a[i+1]) s++;
        printf("%d\n",s);

}
}