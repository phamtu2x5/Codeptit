#include <stdio.h>
#include <math.h>
int m,n;
int main()
{
    scanf("%d%d",&m,&n);
    for(int i=1;i<=m;i++)
    {
        printf("%d",i);
        int j=i;
        if(i>n)
        for(int a=1;a<=n-1;a++)
            printf("%d",--j);
        else{
        int j=i-1;
        while(j>0)
        printf("%d",j--);
        j++;
        for(int a=1;a<=n-i;a++)
            printf("%d",++j);
        }
        
    printf("\n");
}
}