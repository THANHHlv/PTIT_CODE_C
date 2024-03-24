#include <stdio.h>
#define ll long long

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll n;
        ll max = -1;
        scanf("%lld", &n);
        for (ll i = 2; i * i <= n; i++)
        {
            while (n % i == 0)
            {
                max = i;
                n /= i;
            }
        }
        if (n > 1)
            max = n;
        printf("%lld\n", max);
    }
}