#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int m, n;
        scanf("%d%d", &m, &n);
        int a[m + 2][n + 2];
        int h1 = 1, h2 = m, c1 = 1, c2 = n, cnt = 1;

        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        int arr[m * n];
        while (h1 <= h2 || c1 <= c2)
        {
            for (int i = c1; i <= c2; i++)
            {
                arr[cnt] = a[h1][i];
                cnt++;
            }
            h1++;
            for (int i = h1; i <= h2; i++)
            {
                arr[cnt] = a[i][c2];
                cnt++;
            }
            c2--;
            for (int i = c2; i >= c1; i--)
            {
                arr[cnt] = a[h2][i];
                cnt++;
            }
            h2--;
            for (int i = h2; i >= h1; i--)
            {
                arr[cnt] = a[i][c1];
                cnt++;
            }
            c1++;
        }
        for (int i = 1; i <= m * n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}