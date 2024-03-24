#include <stdio.h>

int main()
{
    int test;
    scanf("%d", &test);
    for (int t = 1; t <= test; t++)
    {
        printf("Test %d:\n", t);
        int m, n;
        scanf("%d%d", &m, &n);
        int a[m * n];
        for (int i = 0; i < m * n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < m * n; i++)
        {
            for (int j = i + 1; j < m * n; j++)
            {
                if (a[i] > a[j])
                {
                    int tmp = a[i];
                    a[i] = a[j];
                    a[j] = tmp;
                }
            }
        }
        for (int i = 0; i < m * n; i++)
        {
            printf("%d ", a[i]);
        }
    }
}