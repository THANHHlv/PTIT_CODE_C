#include <stdio.h>
#include <math.h>
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
        int ok = 0;
        for (int i = 1; i <= n - 2; i++)
        {
            for (int j = i + 1; j <= n - 1; j++)
            {
                ll c = sqrt(a[i] * a[i] + a[j] * a[j]);
                if (c == sqrt(a[i] * a[i] + a[j] * a[j]))
                    for (int k = j + 1; k <= n; k++)
                    {
                        if (a[k] == c)
                        {
                            ok = 1;
                            printf("YES\n");
                            break;
                        }
                    }
                if (ok == 1)
                    break;
            }
            if (ok == 1)
                break;
        }
        if (ok == 0)
            printf("NO\n");
    }
}
