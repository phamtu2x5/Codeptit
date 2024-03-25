#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 105
int t,res;
char a[N][N];
void swap(char a[][N],int m, int n){
    for(int i=0;i<=m;i++)
        for(int j=0;j<=n;j++)
        if(a[i][j]=='0')
            a[i][j]='1';
        else a[i][j]='0';
}
int main(){
    scanf("%d",&t);
    for(int i=0;i<t;i++)
      scanf("\n%s",a[i]);
    for(int i=t-1;i>=0;i--)
        for(int j=t-1;j>=0;j--)
            if(a[i][j]=='1')
        {
            swap(a,i,j);
            res++;
        }
    printf("%d",res);
}