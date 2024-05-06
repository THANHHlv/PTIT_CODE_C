#include <stdio.h>
#include <math.h>
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int main()
{
    int a[10];
    int x, y, m, n, p, q;
    for (int i = 1; i <= 6; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i < 6; i += 2)
    {
        if (a[i] < a[i + 1])
            swap(&a[i], &a[i + 1]);
    }
    for (int i = 1; i <= 3; i += 2)
    {
        for (int j = i + 2; j <= 5; j += 2)
        {
            if (a[i] < a[j])
            {
                swap(&a[i], &a[j]);
                swap(&a[i + 1], &a[j + 1]);
            }
        }
    }
    if (a[1] == a[3] && a[3] == a[5] && a[1] == a[2] + a[4] + a[6])
    {
        printf("YES");
        return 0;
    }
    for (int i = 0; i <= 1; i++)
    {
        if (i)
        {
            x = a[1];
            y = a[2];
        }
        else
        {
            x = a[2];
            y = a[1];
        }
        for (int j = 0; j <= 1; j++)
        {
            if (j)
            {
                m = a[3];
                n = a[4];
            }
            else
            {
                m = a[4];
                n = a[3];
            }
            for (int k = 0; k <= 1; k++)
            {
                if (k)
                {
                    p = a[5];
                    q = a[6];
                }
                else
                {
                    p = a[6];
                    q = a[5];
                }
                if (x == m + q && n == p && y + n == x)
                {
                    printf("YES");
                    return 0;
                }
            }
        }
    }
    printf("NO");
    return 0;
}