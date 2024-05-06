#include <stdio.h>
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int main()
{
    int test;
    scanf("%d", &test);
    for (int t = 1; t <= test; t++)
    {
        printf("Test %d:\n", t);
        int m, n;
        scanf("%d%d", &m, &n);
        int a[m][n];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        for (int i1 = 0; i1 < n; i1++)
        {
            for (int j1 = 0; j1 < m; j1++)
            {
                for (int i2 = i1; i2 < n; i2++)
                    for (int j2 = j1; j2 < m; j2++)
                        if (a[i1][j1] > a[i2][j2])
                            swap(&a[i1][j1], &a[i2][j2]);
                printf("%d ", a[i1][j1]);
            }
            printf("\n");
        }
    }
    return 0;
}