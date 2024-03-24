#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 2][4];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i][1] > a[j][1])
            {
                int tmp1 = a[i][1];
                a[i][1] = a[j][1];
                a[j][1] = tmp1;
                int tmp2 = a[i][2];
                a[i][2] = a[j][2];
                a[j][2] = tmp2;
            }
        }
    }
    int max = 0, res = 0;
    for (int i = 1; i <= n; i++)
    {
        if (max <= a[i][1])
        {
            res = a[i][1] + a[i][2];
                }
        else
        {
            res += a[i][2];
        }
        max = res;
    }
    printf("%d", res);
}