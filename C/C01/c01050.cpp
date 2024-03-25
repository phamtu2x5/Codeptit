#include<stdio.h>
#include<math.h>
int m,n;
int main(){
 scanf("%d%d",&m,&n);
 for(int i=1;i<=n;i++)
 {
    if(i==1||i==n)
    for(int j=1;j<=m;j++)
    printf("*");
    else{
        printf("*");
        for(int j=1;j<=m-2;j++)
        printf(" ");
        printf("*");
    }
    printf("\n");
 }
}
