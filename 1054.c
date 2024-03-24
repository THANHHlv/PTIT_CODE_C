#include <stdio.h>
#define ll long long
int main()
{

    int t;
    scanf("%d", &t);
    ll sum = 0;
    while (t--)
    {
        int n;
        scanf("%d", &n);
        for (int i = 2; i * i <= n; i++)
        {
            while (n % i == 0)
            {
                sum += i;
                n /= i;
            }
        }
        if (n > 1)
            sum += n;
    }
    printf("%lld", sum);
    return 0;
}