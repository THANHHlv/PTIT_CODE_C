#include <stdio.h>
int cnt[1000] = {0};
int b[1000] = {0};
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        cnt[a[i]]++;
        b[a[i]]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (b[a[i]] > 1)
        {
            count++;
            b[a[i]] = 0;
        }
    }
    printf("%d\n", count);
    for (int i = 1; i <= n; i++)
    {
        if (cnt[a[i]] > 1)
        {
            printf("%d ", a[i]);
            cnt[a[i]] = 0;
        }
    }
}