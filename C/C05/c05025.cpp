#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define ll long long 
#define N 1005
int a[N][N];
int t,n,m;
void swap(int *a,int *b){
    int c=*b;
    *b=*a;
    *a=c;
}
int main(){
    scanf("%d",&t);
    for(int z=1;z<=t;z++){
        scanf("%d%d",&n,&m);
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                scanf("%d",&a[i][j]);
        printf("Test %d:\n",z);
        for(int i=0;i<n;i++)
           for(int j=0;j<m;j++)
                for(int i1=i;i1<n;i1++)
                    for(int j1=j;j1<m;j1++)
                        if(a[i][j]>a[i1][j1])
                            swap(&a[i][j],&a[i1][j1]);
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            printf("%d ",a[i][j]);
            printf("\n");
        }
    }
}