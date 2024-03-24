#include <stdio.h>
#include <string.h>
#define ll long long
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int n;
        scanf("%d", &n);
        ll a[n + 2];
        for (int i = 1; i <= n; i++)
        {
            scanf("%lld", &a[i]);
        }
        ll sum1 = 0, sum2 = -1e18;
        for (int i = 1; i <= n; i++)
        {
            sum1 += a[i];
            if (sum1 < 0)
                sum1 = 0;
            if (sum1 > sum2)
                sum2 = sum1;
        }
        printf("%lld\n", sum2);
    }
}