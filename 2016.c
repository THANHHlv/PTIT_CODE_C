#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k1 = 1, k2 = 4;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 2; j <= k2; j += 2)
            {
                printf("%d", j);
            }
            k2 += 4;
            printf("\n");
        }
        else
        {
            for (int j = 1; j <= k1; j += 2)
            {
                printf("%d", j);
            }
            k1 += 4;
            printf("\n");
        }
    }
}