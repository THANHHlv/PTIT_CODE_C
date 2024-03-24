#include <stdio.h>
#include <math.h>
#define ll long long
int ngto(ll n)
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
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll a, b, cnt = 0;
        scanf("%lld%lld", &a, &b);
        ll m = sqrt(a);
        if (m * m != a)
            m++;
        ll n = sqrt(b);
        for (int i = m; i <= n; i++)
        {
            if (ngto(i))
                cnt++;
        }
        printf("%lld\n", cnt);
    }
}