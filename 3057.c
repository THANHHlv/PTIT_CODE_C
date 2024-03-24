#include <stdio.h>
#include <math.h>
#define ll long long
ll min(ll n)
{
    ll s = n;
    ll cnt = 1;
    while (n != 0)
    {
        if (n % 10 == 6)
        {
            s -= cnt;
        }
        cnt *= 10;
        n /= 10;
    }
    return s;
}
ll max(ll n)
{
    ll s = n;
    ll cnt = 1;
    while (n != 0)
    {
        if (n % 10 == 5)
        {
            s += cnt;
        }
        cnt *= 10;
        n /= 10;
    }
    return s;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll a, b;
        scanf("%lld%lld", &a, &b);
        printf("%lld %lld\n", min(a) + min(b), max(a) + max(b));
    }
}