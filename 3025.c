#include <stdio.h>
int ngto(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int check(int n)
{
    int s = 0;
    while (n)
    {
        int k = n % 10;
        if (k != 2 && k != 3 && k != 5 && k != 7)
            return 0;
        s += k;
        n /= 10;
    }
    if (ngto(s))
        return 1;
    return 0;
}
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int m, n, cnt = 0;
        scanf("%d%d", &m, &n);
        if (m > n)
        {
            int tmp = m;
            m = n;
            n = tmp;
        }
        for (int i = m; i <= n; i++)
        {
            if (check(i) && ngto(i))
                cnt++;
        }
        printf("%d\n", cnt);
    }
}