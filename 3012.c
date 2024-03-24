#include <stdio.h>
#define ll long long
int solve(ll n)
{
    if (n == 0 || n == 1)
        return 1;
    ll fn2 = 0, fn1 = 1;
    for (int i = 3; i <= 93; i++)
    {
        ll fn = fn1 + fn2;
        if (fn == n)
            return 1;
        fn2 = fn1;
        fn1 = fn;
    }
    return 0;
}
int main()
{
    ll n;
    scanf("%lld", &n);
    if (solve(n))
        printf("1");
    else
        printf("0");
    return 0;
}