#include <stdio.h>
int ngto(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return n > 1;
}
int check(int n)
{
    int cnt1 = 0, cnt2 = 0;
    while (n != 0)
    {
        if (ngto(n % 10))
        {
            cnt1++;
        }
        cnt2++;
        n = n / 10;
    }
    if (cnt1 == cnt2)
        return 1;
    return 0;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, cnt = 0;
        scanf("%d%d", &a, &b);
        for (int i = a; i <= b; i++)
        {
            if (ngto(i) && check(i))
                cnt++;
        }
        printf("%d\n", cnt);
    }
}