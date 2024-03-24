#include <stdio.h>
#define ll long long
ll UCLN(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }
    return UCLN(b, a % b);
}

int main()
{
    ll a, b;
    scanf("%lld%lld", &a, &b);
    printf("%lld\n%lld", UCLN(a, b), a * b / UCLN(a, b));
}