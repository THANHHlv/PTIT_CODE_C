#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int n;
        scanf("%d", &n);
        int a[n + 2];
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }
        int ok = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                if (a[i] == a[j])
                {
                    ok = 1;
                }
            }
            if (ok == 1)
            {
                printf("%d\n", a[i]);
                break;
            }
        }

        if (ok == 0)
            printf("NO\n");
    }
}