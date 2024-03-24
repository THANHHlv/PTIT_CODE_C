#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int k = 1; k <= t; k++)
    {
        int n;
        int mark[10000] = {0};
        scanf("%d", &n);
        int a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 1; i <= n; i++)
        {
            mark[a[i]]++;
        }
        printf("Test %d:\n", k);
        for (int i = 1; i <= n; i++)
        {
            if (mark[a[i]] != 0)
            {
                printf("%d xuat hien %d lan\n", a[i], mark[a[i]]);
                mark[a[i]] = 0;
            }
        }
        printf("\n");
    }
}