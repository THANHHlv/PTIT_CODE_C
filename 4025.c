#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 2];
    int chan[1000], le[1000], p = 1, q = 1;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] % 2 == 0)
        {
            chan[p++] = a[i];
        }
        else
        {
            le[q++] = a[i];
        }
    }
    for (int i = 1; i < p; i++)
    {
        printf("%d ", chan[i]);
    }
    for (int i = 1; i < q; i++)
    {
        printf("%d ", le[i]);
    }
}