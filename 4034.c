#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, max = -1e9;
        scanf("%d", &n);
        int a[10000];
        int cnt[10000] = {0};
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = n; i > 0; i--)
        {
            if (a[i] > max)
            {
                max = a[i];
                cnt[i] = 1;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (cnt[i])
                printf("%d ", a[i]);
        }
        printf("\n");
    }
    return 0;
}