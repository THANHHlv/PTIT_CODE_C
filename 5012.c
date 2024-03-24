#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int h = 1; h <= test; h++)
    {
        int n, k = 1, m = 2;
        scanf("%d", &n);
        int a[n + 2][n + 2];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= k; j++)
            {
                a[i][j] = j;
            }
            for (int j = m; j <= n; j++)
            {
                a[i][j] = 0;
            }
            k++;
            m++;
        }
        printf("Test %d:\n", h);
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                int s = 0;
                for (int p = 1; p <= n; p++)
                {
                    s += a[i][p] * a[j][p];
                }
                printf("%d ", s);
            }
            printf("\n");
        }
    }
}