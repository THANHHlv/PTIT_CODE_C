#include <stdio.h>
int ngto(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int test;
    scanf("%d", &test);
    for (int k = 1; k <= test; k++)
    {
        int n;
        scanf("%d", &n);
        int a[n + 2][n + 2], arr[10000];
        int h1 = 1, h2 = n, c1 = 1, c2 = n;
        int cnt = 1, p = 1;
        for (int i = 1; i <= 10000; i++)
        {
            if (ngto(i))
            {
                arr[p++] = i;
            }
        }
        while (h1 <= h2 && c1 <= c2)
        {
            for (int i = c1; i <= c2; i++)
            {
                a[h1][i] = arr[cnt];
                cnt++;
            }
            h1++;
            for (int i = h1; i <= h2; i++)
            {
                a[i][c2] = arr[cnt];
                cnt++;
            }
            c2--;
            for (int i = c2; i >= c1; i--)
            {
                a[h2][i] = arr[cnt];
                cnt++;
            }
            h2--;
            for (int i = h2; i >= h1; i--)
            {
                a[i][c1] = arr[cnt];
                cnt++;
            }
            c1++;
        }
        printf("Test %d:\n", k);
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }
}