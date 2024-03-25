#include <stdio.h>
#include <math.h>
#include<string.h>
#define N 1005
#define ll long long
int  res,c,l,a[N];
int t;
int main(){
   scanf("%d",&t);
   while(t--){
    res=0;
    c=0;
    l=0;
      while(scanf("%d",&a[++res])!=-1){
        char c=getchar();
        if(c=='\n'){
        break;
        }
      }
    for(int i=1;i<=res;i++)
        if(a[i]%2==0) c++;
        else l++;
     if(res%2==0){
         if(c>l) printf("YES");
         else printf("NO");
     }
     else{
        if(l>c) printf("YES");
         else printf("NO");
      
    }
       printf("\n");
   }
}