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
        ll n;
        scanf("%lld", &n);
        ll res = 1;
        for (ll i = 1; i <= n; i++)
        {
            res = lcm(res, i);
        }
        printf("%lld\n", res);
    }
}