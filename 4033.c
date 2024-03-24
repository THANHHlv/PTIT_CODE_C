#include <stdio.h>
int cnt[1000] = {0};
int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 1];
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
        if (cnt[a[i]] != 0)
        {
            printf("%d ", a[i]);
            cnt[a[i]] = 0;
        }
    }
}