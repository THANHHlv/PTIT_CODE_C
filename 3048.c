#include <stdio.h>
#include <math.h>
int check(long long n)
{
    int chan = 0, le = 0;
    while (n != 0)
    {
        int a = n % 10;
        if (a % 2 == 0)
            chan++;
        else
            le++;
        n /= 10;
    }
    if (chan > le)
        return 1;
    return 0;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n;
        scanf("%lld", &n);
        if (n % 2 == 0 && check(n))
            printf("YES\n");
        else
            printf("NO\n");
    }
}