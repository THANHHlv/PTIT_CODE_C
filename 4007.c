#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int a1[m + 1], a2[m + 1];
    for (int i = 1; i <= m; i++)
    {
        scanf("%d", &a1[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a2[i]);
    }
    int k;
    scanf("%d", &k);
    for (int i = 1; i <= k; i++)
    {
        printf("%d ", a1[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a2[i]);
    }
    for (int i = k + 1; i <= m; i++)
    {
        printf("%d ", a1[i]);
    }
}