#include <stdio.h>
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
    int k = 1;
    for (int i = 1; i <= n; i++)
    {

        int tmp = a[i][k];
        a[i][k] = a[i][n - k + 1];
        a[i][n - k + 1] = tmp;
        k++;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}