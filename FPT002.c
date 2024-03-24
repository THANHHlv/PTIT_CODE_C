#include <stdio.h>
#define ll long long
int main()
{
    int m, n, p, q;
    scanf("%d%d%d%d", &m, &n, &p, &q);
    ll a[m + 1][n + 1], b[n + 1][p + 1], c[p + 1][q + 1];
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%lld", &a[i][j]);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= p; j++)
        {
            scanf("%lld", &b[i][j]);
        }
    }
    for (int i = 1; i <= p; i++)
    {
        for (int j = 1; j <= q; j++)
        {
            scanf("%lld", &c[i][j]);
        }
    }
    ll res[100][100];
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= p; j++)
        {
            res[i][j] = 0;
            for (int k = 1; k <= n; k++)
            {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= q; j++)
        {
            ll s = 0;
            for (int k = 1; k <= p; k++)
            {
                s += res[i][k] * c[k][j];
            }
            printf("%lld ", s);
        }
        printf("\n");
    }
    return 0;
}