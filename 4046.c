#include <stdio.h>
#include <math.h>
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int n;
        scanf("%d", &n);
        int a[n + 2];
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }
        int min = 1000000, cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                if (min > abs(a[i] - a[j]))
                    min = abs(a[i] - a[j]);
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                if (abs(a[i] - a[j]) == min)
                    cnt++;
            }
        }
        printf("%d %d\n", min, cnt);
    }
}