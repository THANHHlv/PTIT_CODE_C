#include <stdio.h>
int main()
{
    int m;
    scanf("%d", &m);
    double a[m], b[10000];
    int c[10000];
    for (int i = 0; i < m; i++)
    {
        scanf("%lf", &a[i]);
    }
    int n, k;
    scanf("%d%d", &n, &k);
    int p = 0, q = 0, h = m - n + 1;
    for (int t = 0; t < h; t += k)
    {
        double max = -1e9;
        int pos = 0;
        for (int i = t; i < n; i++)
        {
            if (max < a[i])
            {
                max = a[i];
                pos = i;
            }
        }
        n += k;
        b[p++] = max;
        c[q++] = pos;
    }
    for (int i = 0; i < p; i++)
    {
        printf("%.1lf ", b[i]);
    }
    printf("\n");
    for (int i = 0; i < q; i++)
    {
        printf("%d ", c[i]);
    }
}