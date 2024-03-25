#include<stdio.h>
#include<math.h>
int a;
int main(){
scanf("%d",&a);
for(int i=1;i<=a;i++){
for(int j=1;j<=a;j++)
printf("*");
printf("\n");
}
}