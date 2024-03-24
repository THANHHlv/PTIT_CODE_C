#include <stdio.h>
int main()
{
    int m, n, s1 = 0, s2 = 0;
    scanf("%d%d", &m, &n);
    int a = m, b = n;
    while (a != 0)
    {
        s1 += a % 10;
        a /= 10;
    }
    while (b != 0)
    {
        s2 += b % 10;
        b /= 10;
    }
    if (s1 <= s2)
        printf("%d %d", m, n);
    else
        printf("%d %d", n, m);
}