#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int h = 1; h <= test; h++)
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
        int max_row = 0, max_col = 0, col = 0, row = 0;
        for (int i = 1; i <= m; i++)
        {
            int s = 0;
            for (int j = 1; j <= n; j++)
            {
                s += a[i][j];
            }
            if (s > max_row)
            {
                max_row = s;
                row = i;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            int s = 0;
            for (int j = 1; j <= m; j++)
            {
                if (j != row)
                    s += a[j][i];
            }
            if (s > max_col)
            {
                max_col = s;
                col = i;
            }
        }
        printf("Test %d:\n", h);
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i != row && j != col)
                    printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }
}