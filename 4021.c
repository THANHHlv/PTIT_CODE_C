#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    int k;
    scanf("%d", &k);
    for (int i = n - k + 1; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    for (int i = 1; i <= n - k; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}