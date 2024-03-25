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
            j--;
        if(i<n){
            for(int a=1;a<=i-1;a++)
            printf("%d",--j);
        }
        else {
            int j=i;
            for(int a=1;a<=n-1;a++)
            printf("%d",--j);
        }
    printf("\n");
}
}