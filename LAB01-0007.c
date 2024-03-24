#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    float a[n + 1], s = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%f", &a[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        s += a[i];
    }
    printf("%.3f", s / n);
}