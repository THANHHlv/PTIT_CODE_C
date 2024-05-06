#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define ll long long

int cmp(const void *a, const void *b)
{
    int *x = (int *)a;
    int *y = (int *)b;
    if (*x < *y)
        return -1;
    return 1;
}

int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int n;
        scanf("%d", &n);
        ll a[n + 2];
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
        }
        qsort(a, n, sizeof(ll), cmp);
        ll min = 1e9, cnt = 0;
        for (int i = 1; i < n; i++)
        {
            if (abs(a[i] - a[i - 1]) < min)
                min = abs(a[i] - a[i - 1]);
        }
        for (int i = 1; i < n; i++)
        {

            if (abs(a[i] - a[i - 1]) == min)
                cnt++;
        }
        printf("%lld %lld\n", min, cnt);
    }
}