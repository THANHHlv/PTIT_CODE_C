#include <stdio.h>
#define ll long long
ll fibo(ll n)
{
    ll f[n];
    f[0] = 0;
    f[1] = 1;
    for (ll i = 2; i <= n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll n;
        scanf("%lld", &n);
        printf("%lld\n", fibo(n));
    }
}