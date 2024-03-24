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
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll a, b;
        scanf("%lld%lld", &a, &b);
        printf("%lld %lld", a * b / UCLN(a, b), UCLN(a, b));
        printf("\n");
    }
}