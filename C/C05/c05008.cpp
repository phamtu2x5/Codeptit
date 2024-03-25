#include <stdio.h>
#include <math.h>
#include<string.h>
#define N 1005
#define ll long long
int a[N][N];
int test,m,n;
int col[1005];
int row[1005];
int main(){
{
    scanf("%d", &test);
    for (int t = 1; t<= test; t++)
    {   
        for(int i=1;i<=N;i++)
        {
            col[i]=0;
            row[i]=0;
        }
        scanf("%d %d", &m, &n);
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                scanf("%d", &a[i][j]);
                row[i] += a[i][j];
            }
        }
        int max = 0;
        int r = 0;
        for (int i = 1; i <= m; i++)
        {
            if (row[i] > max)
            {
                max = row[i];
                r = i;
            }
        }
        for (int i = 1; i <= m; i++)
        {
            if(i == r)
                continue;
            for (int j = 1; j <= n; j++)
            {
                col[j] += a[i][j];
            }
        }
        max = 0;
        int c = 0;
        for (int i = 1; i <= n; i++)
        {
            if (col[i] > max)
            {
                max = col[i];
                c = i;
            }
        }
        printf("Test %d:\n", t);
        for (int i = 1; i <= m; i++)
        {
            if (i == r)
                continue;
            for (int j = 1; j <= n; j++)
            {
                if (j == c)
                    continue;
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}  
}