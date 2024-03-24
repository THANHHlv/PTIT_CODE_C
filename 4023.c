#include <stdio.h>
#define ll long long
int main()
{
    int n;
    scanf("%d", &n);
    ll a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &a[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i] > a[j])
            {
                ll tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
}