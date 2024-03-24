#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int h = 1; h <= t; h++)
    {
        int m, n;
        scanf("%d%d", &m, &n);
        int a[m + 2][n + 2];
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Test %d:\n", h);
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                int s = 0;
                for (int k = 1; k <= n; k++)
                {
                    s += a[i][k] * a[j][k];
                }
                printf("%d ", s);
            }
            printf("\n");
        }
    }
}