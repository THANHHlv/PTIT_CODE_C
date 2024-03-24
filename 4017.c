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

    int n, cnt = 0;
    int mark[10000] = {0};
    scanf("%d", &n);
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        mark[a[i]]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (ngto(a[i]))
        {
            cnt++;
        }
    }
    printf("%d ", cnt);
    for (int i = 1; i <= n; i++)
    {
        if (ngto(a[i]))
        {
            printf("%d ", a[i]);
        }
    }
}
