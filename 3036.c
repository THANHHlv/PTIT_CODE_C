#include <stdio.h>
#define ll long long
int Thuan_nghich(ll a)
{
    ll s = 0;
    ll temp = a;
    while (a)
    {
        s = s * 10 + a % 10;
        a = a / 10;
    }
    if (s == temp)
        return 1;
    return 0;
}
int check(ll n)
{
    ll cnt1 = 0, cnt2 = 0, s = 0;
    while (n != 0)
    {
        ll a = n % 10;
        s += a;
        if (a % 2 != 0)
            cnt1++;
        n = n / 10;
        cnt2++;
    }
    if (s % 2 != 0 && cnt1 == cnt2)
        return 1;
    return 0;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll n;
        scanf("%lld", &n);
        if (Thuan_nghich(n) && check(n))
            printf("YES\n");
        else
            printf("NO\n");
    }
}