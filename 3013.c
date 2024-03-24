#include <stdio.h>
#define ll long long
void solve(int n)
{
    ll fibo[n];
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    for (int i = 0; i <= n; i++)
    {
        printf("%lld ", fibo[i]);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    solve(n);
    return 0;
}