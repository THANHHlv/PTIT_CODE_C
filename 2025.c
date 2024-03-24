#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int k = 0;
    if (m <= n)
    {
        for (int i = 1; i <= m; i++)
        {
            for (int j = k; j < n; j++)
            {
                printf("%c", 'A' + j - 1);
            }

            for (int j = 0; j < k; j++)
            {
                printf("%c", 'A' + n - 2);
            }
            k++;
            printf("\n");
        }
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = k; j < n; j++)
            {
                printf("%c", 'A' + j - 1);
            }

            for (int j = 0; j < k; j++)
            {
                printf("%c", 'A' + n - 2);
            }
            k++;
            printf("\n");
        }
        for (int i = n; i < m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                printf("%c", 'A' + n - 2);
            }
            printf("\n");
        }
    }

    return 0;
}
