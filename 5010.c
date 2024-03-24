#include <stdio.h>
int ngto(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 2][n + 2];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int k = 1, sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = k; j <= n; j++)
        {
            if (ngto(a[i][j]))
                sum += a[i][j];
        }
        k++;
    }
    printf("%d", sum);
}