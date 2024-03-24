#include <stdio.h>
#define ll long long
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    ll arr[m + 2][n + 2];
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%lld", &arr[i][j]);
        }
    }
    int a, b;
    scanf("%d%d", &a, &b);
    for (int i = 1; i <= m; i++)
    {

        ll tmp = arr[i][a];
        arr[i][a] = arr[i][b];
        arr[i][b] = tmp;
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%lld ", arr[i][j]);
        }
        printf("\n");
    }
}