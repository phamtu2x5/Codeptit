#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 100005
#define ll long long
int t,n;
int a[N],f[N];
void swap(int *x, int *y){
    int z=*y;
    *y=*x;
    *x=z;
}
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n-1;i++){    
        int check =1;
        for(int j=0;j<n-i-1;j++)
            if(a[j]>a[j+1]){
                swap(&a[j],&a[j+1]); 
                check=0;
                }
        if(check==1) return 0;
        printf("Buoc %d: ",i+1);
        for(int j=0;j<n;j++)
            printf("%d ",a[j]);
        printf("\n");
    }
}