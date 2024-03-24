#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int m, n;
        scanf("%d%d", &m, &n);
        int cnt = 0;
        for (int i = 2; i <= m; i++)
        {
            int d = i;
            while (d % n == 0)
            {
                cnt++;
                d /= n;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}