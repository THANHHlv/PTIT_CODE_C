#include <stdio.h>
#define ll long long

int main()
{
    ll u0, d, n;
    scanf("%lld%lld%lld", &u0, &d, &n);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += u0 + d * i;
    }
    printf("%lld", sum);
    return 0;
}