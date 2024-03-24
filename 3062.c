#include <stdio.h>
#define ll long long
ll gcd(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return a * b / gcd(a, b);
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll m, n;
        scanf("%lld%lld", &m, &n);
        ll res = 1;
        for (ll i = m; i <= n; i++)
        {
            res = lcm(res, i);
        }
        printf("%lld\n", res);
    }
}