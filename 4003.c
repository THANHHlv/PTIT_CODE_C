#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n + 2];
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }
        int ok = 0;
        for (int i = 1; i <= n / 2; i++)
        {
            if (a[i] != a[n - i + 1])
            {
                ok = 1;
                break;
            }
        }
        if (ok == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}