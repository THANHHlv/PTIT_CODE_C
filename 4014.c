#include <stdio.h>
int mark[10000] = {0};
int main()
{
    int n, cnt = 0;
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
    for (int i = 1; i <= n; i++)
    {
        if (mark[a[i]] != 0)
        {
            printf("%d %d\n", a[i], mark[a[i]]);
            mark[a[i]] = 0;
        }
    }
}