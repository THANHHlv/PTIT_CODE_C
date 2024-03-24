#include <stdio.h>
#define ll long long
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll n, cnt1 = 0, cnt2 = 0;
        scanf("%lld", &n);
        while (n != 0)
        {
            int a = n % 10;
            cnt1++;
            if (a % 2 == 0)
            {
                cnt2++;
            }
            n /= 10;
        }
        if (cnt1 == cnt2)
            printf("YES\n");
        else
            printf("NO\n");
    }
}