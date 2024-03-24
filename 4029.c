#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 2];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    int min = a[1];
    for (int i = 1; i <= n; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
    for (int i = 1; i < n; i++)
    {
        int ok = 0;
        for (int j = 1; j <= n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }

        printf("Buoc %d: ", i);
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", a[j]);
        }
        if (a[1] == min)
            break;
        printf("\n");
    }
}