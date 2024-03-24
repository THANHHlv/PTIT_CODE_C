#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, max = -1;
        int cnt[10000] = {0};
        scanf("%d", &n);
        int a[n + 2];
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 1; i <= n; i++)
        {
            cnt[a[i]]++;
        }
        for (int i = 1; i <= n; i++)
        {
            if (cnt[a[i]] > max)
                max = cnt[a[i]];
        }
        for (int i = 1; i <= n; i++)
        {
            if (cnt[a[i]] == max)
            {
                printf("%d ", a[i]);
                cnt[a[i]] = 0;
            }
        }
        printf("\n");
    }
}