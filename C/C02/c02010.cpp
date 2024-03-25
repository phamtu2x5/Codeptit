#include <stdio.h>
#include <math.h>
int m,n;
int main()
{
    scanf("%d%d",&m,&n);
    for(int i=1;i<=m;i++)
    {
        printf("%d",i);
        int j=i+1;
        while(j<=n){
            printf("%d",j);
            j++;
        }
        if(i<n)
        {
            int j=i-1;
            while(j>0){
                printf("%d",j);
                j--;
            }
        }
        else{
            int j=n-1;
            while(j>0){
            printf("%d",j);
            j--;}
    }
    printf("\n");
}
}