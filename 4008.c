#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int j = 1; j <= t; j++)
    {
        int m, n, k;
        scanf("%d%d%d", &m, &n, &k);
        int a1[m + 1], a2[m + 1];
        for (int i = 1; i <= m; i++)
        {
            scanf("%d", &a1[i]);
        }
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a2[i]);
        }
        printf("Test %d:\n", j);
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
        printf("\n");
    }
}