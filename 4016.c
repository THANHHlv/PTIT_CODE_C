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
    int t;
    scanf("%d", &t);
    for (int k = 1; k <= t; k++)
    {
        int n;
        int mark[10000] = {0};
        scanf("%d", &n);
        int a[n + 1];
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
            mark[a[i]]++;
        }
        printf("Test %d:\n", k);
        for (int i = 1; i <= n; i++)
        {
            if (mark[a[i]] != 0 && ngto(a[i]))
            {
                printf("%d xuat hien %d lan\n", a[i], mark[a[i]]);
                mark[a[i]] = 0;
            }
        }
        printf("\n");
    }
}