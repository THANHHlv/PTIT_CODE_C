#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n + 1], cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = i - 1; j >= 1; j--)
            {
                if (a[i] < a[j])
                {
                    cnt++;
                    break;
                }
            }
        }

        printf("%d\n", n - cnt);
    }
}