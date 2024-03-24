#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int k = 1; k <= test; k++)
    {
        int n;
        scanf("%d", &n);
        int a[n + 2];
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }
        int cnt[1000] = {0};
        cnt[1] = 1;
        int len = -1e6;
        for (int i = 2; i <= n; i++)
        {
            if (a[i] > a[i - 1])
                cnt[i] = cnt[i - 1] + 1;
            else
                cnt[i] = 1;
            len = cnt[i] > len ? cnt[i] : len;
        }
        printf("Test %d:\n", k);
        printf("%d\n", len);
        for (int i = 1; i <= n; i++)
        {
            if (cnt[i] == len)
            {
                for (int j = len - 1; j >= 0; j--)
                {
                    printf("%d ", a[i - j]);
                }
                printf("\n");
            }
        }
    }
}